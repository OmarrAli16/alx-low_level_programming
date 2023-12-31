#ifndef  MAIN_h
#define MAIN_h

#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int _abs(int);
int add(int, int);
int print_last_digit(int);
void print_to_98(int n);
int print_sign(int n);
#endif
