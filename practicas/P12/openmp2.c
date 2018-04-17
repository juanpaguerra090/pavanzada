#include <stdio.h>
#include <omp.h>
#define SIZE 20000

// export OMP_NUM_THREADS = NUMBER OF DESIRED THREADS
// gcc-7 -o openmp.exe openmp.c -fopenmp

int main(){
    int a[SIZE];
    int b[SIZE];
    int c[SIZE];
    int j;  
    int chunk = 100;

    for(int i = 0; i < SIZE; i++){
        a[i] = i;
        b[i] = 2 * i;
    }

    #pragma omp parallel shared(a, b, c, chunk) private(j){
        #pragma omp for schedule(dynamic, chunk) nowait
        for(j = 0; i < SIZE; j++){
            c[j] = a[j] + b[j];
        }
    }
    return 0;
}