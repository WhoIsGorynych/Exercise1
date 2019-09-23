#include <stdio.h>
#include "mat_help.h"
#include "func.h"

int main(){

    //double **matrix;
    int N = -1;
    double **matrix_old;
    double **matrix_new;




    printf("Hello!\n");
    printf("1 - matrix from file ('in.txt')\n");
    printf("2 - matrix from function\n");
    printf("Input mode: ");

    int input_mode;
    scanf("%d", &input_mode);




    if(input_mode == 1){
      FILE* file = fopen("in.txt", "r");
      matrix_old = matrix_read(file, N);
    }
    else if(input_mode == 2){
        printf("not ready yet");
        return -1;
    }

    matrix_new = identity_matrix(N);



    printf("%d\n", N);

    matrix_print(matrix_old, N);
    matrix_print(matrix_new, N);




}
