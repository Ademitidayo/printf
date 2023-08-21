#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int S_L(char *S);
void _print_SP(char form, va_list mySP, int *zero_printed);
int percent_print(const char *format, ...);
int s_print(const char *format, ...);
int c_print(const char *format, ...);
#endif
