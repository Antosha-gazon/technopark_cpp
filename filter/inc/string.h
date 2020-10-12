
#ifndef TASK1_V70_STRING_H
#define TASK1_V70_STRING_H

#endif
#include "stdlib.h"

char* strcpy(char* dest, const char* src);
size_t strlen(char* str);

//Алгоритм Байера-Мура
char* find(const char *pattern, char* str, size_t pattern_size, size_t str_size);