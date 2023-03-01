#ifndef __PARSER_HEADERFILE_
#define __PARSER_HEADERFILE_

#include <main_header.h>

extern int READLINE_READ_SIZE;
extern char* rl_buff;
#define MAX_INPUT_TOKENS 100
//readline.h

int     get_size_fd(char* filename);
char*   read_map(char* filename);
char**  dirty_split(char* str, char ch);
int     find_ch(char* str, char ch);

#endif