#include <stddef.h>

void *_memset(void *s, int c, size_t n)
{
	unsigned char *p = s;
	unsigned char uc = c;

	for (size_t i = 0; i < n; i++)
	{
		p[i] = uc;
	}

	return s;
}
