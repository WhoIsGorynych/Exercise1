#include <stdio.h>
#include "mat_help.h"

int main(){
    
    double **matrix;
    int N;
    //double **matrix_old;
    //double **matrix_new;
    
    printf("Hello!\n");
    
    
    /*
    printf("1 - matrix from file ('in.txt')\n");
    printf("2 - matrix from function\n");
    
    int input_mode;
    scanf("%d", &input_mode);
    */
    
    N = 2;
    FILE* file = fopen("in.txt", "r");
    matrix = matrix_read(file, N);
    
    
    /*
    if(input_mode == 1){
        N = matrix_read(file, matrix);
        return -1;        
    }
    else if(input_mode == 2){
        
        printf("not ready yet");
        return -1; 
    }
    */
    
    printf("%d\n", N);
    printf("%lf\n", matrix[0][0]);
    
    
    
}
