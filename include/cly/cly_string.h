/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_string.h
*/

#ifndef CLY_CLY_STRING_H
    #define CLY_CLY_STRING_H
    #include <string.h>
    #include <stdarg.h>

void my_printchar(va_list list);
void my_printstr(va_list list);
void my_print_nbr(va_list list);

typedef struct indicator_s {
    char indicator;
    void (*ptr_on_func)(va_list list);
} indicator_t;

static indicator_t tab[] __attribute__((unused)) =
{
    {'c', my_printchar},
    {'s', my_printstr},
    {'d', my_print_nbr},
    {'i', my_print_nbr},
};

int cly_printf(char *s, ...);
int cly_strlen(char const *str);
char *cly_revstr(char *str);
char *cly_revnstr(char *str, int n);
int cly_strcpy(char *dest, char const *src);
int cly_strncpy(char *dest, char const *src, int n);
char *cly_strapnd_chr(char *str, char c);
int cly_dyn_strapnd_chr(char **str, char c);
int cly_strcmp(char const *s1, char const *s2);
int cly_strncmp(char const *s1, char const *s2, int n);
char *cly_strtok(char *str, char *separators);
char **cly_str_split(const char *str, char separator);
int cly_strcat(char *dest, char const *src);
char *cly_dyn_strcat(char const *str1, char const *str2);
int cly_strupr(char *str);
int cly_strlwr(char *str);
char *cly_strstr(char *full_string, const char *sub_string);
int cly_strset(char *str, char c);
int cly_strnset(char *str, char c, int n);
char *cly_strrplc_chr(char *str, char old, char new);
char *cly_strdup(char const *src);
char *cly_strapnd_str(char *str, char const *part);
int cly_dyn_strapnd_str(char **str, char const *part);
char *cly_strrplc_str(char *str, char const *old, char const *new);
char *cly_strnapnd_str(char *str, char const *part, int n);
int cly_dyn_strnapnd_str(char **str, char const *part, int n);
char *cly_strrmv(char *str, int index, int count);
char *cly_strndup(char const *src, int n);
char **cly_to_wordarray(char *str, char c);

#endif
