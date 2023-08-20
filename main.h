#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int percent_printf(const char *format, ...);
int c_print(const char *format, ...);
int s_print(const char *format, ...);

#endif

