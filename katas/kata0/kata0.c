#include <stdio.h>

int main (int t)
{
    int A [3] = {2,7,4};
    int target = t;
    int i;
    int n = sizeof(A) / sizeof(A[0]);
    int dif = target - A[0];

    for (i=1; i < n; i++){
        if(A[i] = dif){
            printf(i);
        }
        else{
            dif = target - A[i];
        }
        //TODO: Búsqueda
    }
    return 0;
}