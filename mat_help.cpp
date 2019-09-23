#include <stdio.h>
#include "mat_help.h"

double** matrix_read(FILE* file){
    
    int N;    
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
