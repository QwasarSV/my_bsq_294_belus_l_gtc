#include <main_header.h>

#define MAX_SIZE 1000
#define MAX_INPUT_TOKENS 50

int my_strlen(char* str)
{
  int len = 0;
  while (str[len] != '\0')
  {
    len += 1;
  }
  return len;
}

int find_ch(char* str, char ch)
{
    int index = 0;
    while (str[index] != ch && str[index] != '\0')
    {
      index += 1;
    }
    return index;
}

char* my_strchr(char* str, char ch)
{
    int len = my_strlen(str);
    int index = 0;
    while (str[index] != ch && str[index] != '\0')
    {
        index += 1;
        if (index == len)
        {
            return NULL;
        }
    }
    return &str[index];
}

char** dirty_split(char* str, char ch)
{
    char** tokens = malloc(sizeof(char*) * MAX_INPUT_TOKENS);
    char* start = str;
    char* end;
    int index = 0;
    int pos = 0;
    while ((end = my_strchr(start, ch)) != NULL)
    {
      pos = find_ch(start, ch);
      start[pos] = '\0';
      tokens[index] = start;
      index += 1;
      start = end + 1;
    }
    tokens[index] = start;
    index += 1;
    tokens[index] = NULL;
    return tokens;
}