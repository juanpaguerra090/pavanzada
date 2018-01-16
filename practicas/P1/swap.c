#include <stdio.h>

int main ()
{
    int j=27, k=34;
    // Won't work
    swap_no(j,k);
    printf("SWAP_NO\n");
    printf("j = %d, k = %d\n", j,k);
    // Will work
    swap(&j,&k);
    printf("SWAP\n");
    printf("j = %d, k = %d\n", j,k);
    return 0;
}

int swap_no(int a, int b){
    int t;
    t = a;
    a = b; 
    b = t;
    return 0;
}

int swap(int *a, int *b){
    int t; 
    t = *a;
    *a = *b;
    *b = t;
    return 0;
}