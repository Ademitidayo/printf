#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int S_L(char *S);
void _print_SP(char form, va_list mySP, int *zero_printed);
int percent_print(va_list myzero);
int s_print(va_list myzero);
int c_print(va_list myzero);
int all_print(const char format, va_list myzero);
#endif
