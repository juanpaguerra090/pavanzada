#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/** QUICK SORT
 * This is the compare function for the quick sort algorithm.
 **/
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

/** SOLUTION
 * This is the solution for the problem itself.
 * int parties: # of parties in current test case
 * senators[]: amount of senators per political party and in current test case
 **/
void solution(int parties, int *senators){
    int sum = 0;
    //Sum of the total of senators in the room
    for(int i = 0; i< parties ;i++){
        sum = sum + senators[i];
    }

    while(sum > 0){
        if(parties<=2){
            int flag = 0;
            /** As there can't be an absolute majority, 
             * then it is safe to assume that both parties
             * have the same amount of senators in the current test. 
             **/
            int max = senators[0];
            for (int i = 0; i < max ; i++){
                if(flag == 0){
                    //strcat(soln, "AB ");
                    putchar('A' + i);
                    senators[i]--;
                    sum--;
                } else{
                    //strcat(soln, "BA ");
                    putchar('A' + i);
                    flag = 0;
                }
            }
        } else {
            qsort(senators, 4, sizeof(int), cmpfunc);
            for(int i = 0; i < parties ; i++){
                if(senators[i] == 0){
                    parties--;
                    break;
                }
                else{
                    senators[i]--;
                    sum--;
                    // n = sprintf(soln, "%d ", i);
                    putchar('A' + i);
                }
            }
        }
    }
}

int main(){

    /** INPUT HANDLING
     * test_cases: number of test cases to be run
     * parties: number of parties in current test
     * senators[]: number of senators in every party in the current test
     * 
     * Used scanf to handle the input of the test files
     */

    int test_cases = 0; // Number of test cases
    int senators[255];
    int parties = 0; // Number of parties
    scanf("%d",&test_cases); //First line of input --> # of Test Cases

	for(int tc = 0; tc < test_cases; tc++){	
        scanf("%d",&parties); //Number of parties in current test case
        for(int j = 0; j < parties; j++){
            scanf("%d", &senators[j]);
        }
        solution(parties, senators);
        printf("\nNext test case, please.\n");
	}
    //printf("Test Cases: %d\n", test_cases);
    //printf("# of Parties: %d\n", parties);
    //for(int j = 0; j < parties; j++){
    //  printf("Senators in index %d: %d\n", j, senators[j]);
    //}
    return 0;
}