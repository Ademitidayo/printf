#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024



#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int _printf(const char *format, ...);
int percent_print(va_list myzero);
int s_print(va_list myzero);
int c_print(va_list myzero);
int all_print(va_list myzero, const char format);
int S_L(va_list myzero);
int d_print (va_list myzero);
int b_print(va_list myzero);
int _putchar2(char ch);
int _integer(va_list myzero);
int _uinteger(va_list myzero);

#endif
