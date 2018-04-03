#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/** PROBLEM EXPLANATION
* You are given an integer N, followed by N lines of input (1 <= N <= 100). Each line of input contains one or several words separated with single spaces. Each word is a sequence of letters of English alphabet containing between 1 and 10 characters, inclusive. 
* The total number of words in the input is between 1 and 100, inclusive.
* Your task is to reverse the order of words in each line of input, while preserving the words themselves. 
* The lines of your output should not have any trailing or leading spaces.
* Example

* input
* 3
* Hello World
* Bye World
* Useless World 

* output
* World Hello
* World Bye
* World Useless
**/

/** PROBLEM SOLUTION
 * Given the string with n tokens, the goal of the problem is to reverse the tokens.
 * After all, a string is a whole bunch of characters, and if it has spaces, that means
 * that the string "Hello World" in a character array representation is the following:
 * {'H', 'E', 'L', 'L', 'O', ' ', ...} and so on.
 * For every empty character or a "space", then we can tell that the blank space is nothing more
 * than a null space in the array. The escape sequence, or format delimiter, 
 * in a character is seen like this: '\0' as the ASCII representation for 0 is null.
**/
int reverse(char *str){
    int stringLength = strlen(str);
    for (int i = stringLength ; i > 0; i--) {
        if (str[i] == ' ') {
            str[i] = '\0';
            printf("%s ", &(str[i]) + 1);
        }
    }
    printf("%s", str);
}

int main ()
{
    /** INPUT HANDLING
     * test_cases: number of test cases to be run
     * Used scanf() to handle the input of the number of the test cases
     * and used gets() to get the string for the input. Somehow, printf caused me 
     * more problems. When running, there's the following warning
     * 
     * warning: this program uses gets(), which is unsafe.
     */

    int test_cases = 0; // Number of test cases
    char words[255];
    scanf("%d",&test_cases); //First line of input --> # of Test Cases

	for(int tc = 0; tc < test_cases+1; tc++){	
        gets(words);
        reverse(words);
	}
    return 0;
}