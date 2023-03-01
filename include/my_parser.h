#ifndef __PARSER_HEADERFILE_
#define __PARSER_HEADERFILE_

#include <main_header.h>

extern int READLINE_READ_SIZE;
extern char* rl_buff;
#define MAX_INPUT_TOKENS 50
//readline.h

char**  dirty_split(char* str, char ch);
int     find_ch(char* str, char ch);

#endif