#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/** QUICK SORT
 * This is the compare function for the quick sort algorithm.
 **/
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b ); //ASCENDING ORDER
}

void solution(int N, int F,  int *heights){
    int result = 0;
    int cur_f = 0;
    qsort(heights, N, sizeof(int), cmpfunc);
    for (int i = 0; i < N; i++){
        cur_f = pow(F, i);
        if(heights[i] % cur_f == 0){
            int x = heights[i] / cur_f;
            for (int j = 0; j < N; j++){
                if(heights[j] == x){
                    result++;
                }
            }
        }
    }
    printf("Result: %d ", result);
}

int main(){

    /** INPUT HANDLING
     * int T: number of test cases to be run
     * int N: number of students in the classroom
     * int F
     * int H[]: students' heights
     * 
     * Used scanf to handle the input of the test files
     */

    int T = 0;
    int N = 0;
    int F = 0;
    int H[255];

    scanf("%d",&T); //First line of input --> # of Test Cases
	for(int test = 0; test < T; test++){	
        scanf("%d %d",&N, &F ); //Number of students in current room, F value
        for(int i = 0; i < N; i++){
            scanf("%d", &H[i]);
        }
        solution(N, F, H);
	}
    return 0;
}