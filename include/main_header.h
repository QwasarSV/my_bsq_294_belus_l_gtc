#ifndef __MAIN_HEADERFILE_
#define __MAIN_HEADERFILE_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

#include <my_parser.h>
#include <my_string.h>
#include <my_error_handler.h>
#include <non_standard_header.h>

#define MAX_SIZE 1000

int min(int val_01, int val_02);
int top(int** dp, int index, int jndex);
int left(int** dp, int index, int jndex);
int topleft(int** dp, int index, int jndex);
// void get_map(char map[][MAX_SIZE], int* rows, int* cols);
void print_row(char** map, int size);
int my_bsq(char** tokens, int size);

#endif