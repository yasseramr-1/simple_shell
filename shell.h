#ifndef shell_H
#define shell_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>
extern char **environ;


char *_strcpy(char *dest, char *src);
char *_getenv(char *env);
char *_strcat(char *dest, char *src);
int empty_line(char *l);
char **_split(char *str, char *separator);
void *_realloc(unsigned int xim, unsigned int size);
char *search_path(char *cmd);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
void printe(void);
int exec(char **ag);


#endif
