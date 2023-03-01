#ifndef __MAIN_HEADERFILE_
#define __MAIN_HEADERFILE_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

#include <my_readline.h>

//my_split.h

char**  dirty_split(char* str, int start_pos, char ch);

//stdlib.h

int     my_ctoi(char *string, size_t n);
char*   itoa(int value, char* result, int base);
void    my_revswap(char *ptr, char*ptr1, char tmp_char);
void*   my_realloc(void* buff, size_t size);


#endif