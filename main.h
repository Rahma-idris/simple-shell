#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/*String functions*/
int _strcmp(const char *s1, const char *s2);
char *_strtok(char *str, const char *delim);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
size_t strlen(const char* str);
char *_strchr(const char *str, int c);


#endif
