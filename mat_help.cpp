#include <stdio.h>
#include "mat_help.h"

double** matrix_read(FILE* file, int &N){

    fscanf(file, "%d", &N);

    double** matrix = new double*[N];
    int i;
    for (i = 0; i < N; i++){
        matrix[i] = new double[N];
    }
    int j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            fscanf(file, "%lf", &matrix[i][j]);
        }
    }


    return matrix;
}


void matrix_print(double** matrix, int N){

    int i, j;
    for(i = 0; i < N; i++){
        printf("\n");
        for(j = 0; j < N; j++){
            printf("%lf", matrix[i][j]);
            printf(" ");
        }
    }
    printf("\n");

}


double** identity_matrix(int N){

  double** matrix = new double*[N];
  int i, j;
  for (i = 0; i < N; i++){
      matrix[i] = new double[N];
  }

  for(i = 0; i  < N; i++){
    for(j = 0; j < N; j++){
      matrix[i][j] = 0;
    }
  }
  for(i = 0; i < N; i++){
    matrix[i][i] = 1.;
  }

  return matrix;
}
