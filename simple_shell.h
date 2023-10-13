#ifndef SHELL_H
#define SHELL_H

/*** libraries *****/

#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/fcntl.h>

/***** functions prototype ****/

void prompt_dis(void);
char **tokens(char *str, char *av[], size_t n);
int execute(char *path, char *av[]);
char *capture(char *str);
char *_which(char *av);
int execution(char *inputs[], char **av, int ac);
void end(char **inputs, char *str, char **av, int ac);
void _free(char **inputs, char *str);
size_t _strlen(char *str);
int str_to_int(char *str);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *str1, char *str2);
char *int_to_str(int num);

/****** Global variables ****/

extern char **environ;

#endif /* SHELL_H */
