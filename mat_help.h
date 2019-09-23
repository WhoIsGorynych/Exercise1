#ifndef MAT_HELP_H
#define MAT_HELP_H



#include <stdio.h>

double** matrix_read(FILE* file, int &N);
void matrix_print(double** matrix, int N);

double** identity_matrix(int N);

#endif
