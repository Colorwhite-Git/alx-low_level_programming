C - Programming
Bit Manipulation

# Bit Manipulation README

## Introduction

This README provides a brief overview of bit manipulation, an important technique in computer programming. Bit manipulation involves working with individual bits of data within a byte, helping optimize memory usage, improve performance, and enable various low-level operations.

## Learning Objectives

- [Bitwise Operators](#bitwise-operators)
- [Bitwise AND](#bitwise-and)
- [Bitwise OR](#bitwise-or)
- [Bitwise XOR](#bitwise-xor)
- [Bitwise NOT](#bitwise-not)
- [Left Shift](#left-shift)
- [Right Shift](#right-shift)
- [Example Code](#example-code)
- [Resources](#resources)

## Bitwise Operators

Bitwise operators manipulate individual bits of data. The common bitwise operators are:
- AND (`&`)
- OR (`|`)
- XOR (`^`)
- NOT (`~`)
- Left Shift (`<<`)
- Right Shift (`>>`)

## Bitwise AND

The bitwise AND operator (`&`) performs a logical AND operation between corresponding bits of two numbers. It results in 1 only if both bits are 1.

Example: `1010 & 1100 = 1000`

## Bitwise OR

The bitwise OR operator (`|`) performs a logical OR operation between corresponding bits of two numbers. It results in 1 if at least one of the bits is 1.

Example: `1010 | 1100 = 1110`

## Bitwise XOR

The bitwise XOR operator (`^`) performs a logical XOR (exclusive OR) operation between corresponding bits of two numbers. It results in 1 if the bits are different.

Example: `1010 ^ 1100 = 0110`

## Bitwise NOT

The bitwise NOT operator (`~`) inverts each bit of a number. It changes 1s to 0s and 0s to 1s.

Example: `~1010 = 0101`

## Left Shift

The left shift operator (`<<`) shifts the bits of a number to the left by a specified number of positions. It effectively multiplies the number by 2 raised to the power of the shift amount.

Example: `0011 << 2 = 1100`

## Right Shift

The right shift operator (`>>`) shifts the bits of a number to the right by a specified number of positions. It effectively divides the number by 2 raised to the power of the shift amount.

Example: `1100 >> 2 = 0011`

## Example Code

Here's a simple C example demonstrating bitwise operations:

```c
#include <stdio.h>

int main() {
    int a = 5; // 0101 in binary
    int b = 3; // 0011 in binary

    int bitwise_and = a & b;
    int bitwise_or = a | b;
    int bitwise_xor = a ^ b;
    int bitwise_not = ~a;

    printf("AND: %d\n", bitwise_and);
    printf("OR: %d\n", bitwise_or);
    printf("XOR: %d\n", bitwise_xor);
    printf("NOT: %d\n", bitwise_not);

    return 0;
}
R
