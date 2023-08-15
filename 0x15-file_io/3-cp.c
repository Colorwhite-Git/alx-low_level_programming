#define ERR_INVALID_ELF  98
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error - Entry point of function
 * Description: It is display error message and exit
 * @msg: Variable used to store string messages
 *
 * Return: Always 0.
 */

void display_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(ERR_INVALID_ELF);
}

/**
 * display_elf_header_info - Entry point of function
 * Description: used for executables, object code, shared libraries
 * @header: The header for data structure
 *
 * Return: Always 0.
 */

void display_elf_header_info(Elf64_Ehdr *header)
{
	printf("Magic: %02x %02x %02x %02x\n",
			header->e_ident[EI_MAG0],
			header->e_ident[EI_MAG1],
			header->e_ident[EI_MAG2],
			header->e_ident[EI_MAG3]);

	printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ?
		       "ELF32" : "ELF64");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
		       "2's complement, little-endian" : "2's complement, big-endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: %d\n", header->e_type);

	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main -  The Entry point
 * @argc: Integer variable that holds the number of command-line arguments
 * @argv: Aarray of character pointers that hold the individual CL arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	display_error("Usage: elf_header elf_filename");
	}
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
	display_error("Error opening the file");
	}
	Elf64_Ehdr header;
	ssize_t num_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (num_read != sizeof(Elf64_Ehdr))
	{
	display_error("Error reading ELF header");
	}
	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
	display_error("Not an ELF file");
	}

	display_elf_header_info(&header);

	close(fd);

	return (0);
}
