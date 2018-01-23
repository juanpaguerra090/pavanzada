#include <stdio.h>
#include "operations.h"

void printTestMessage (int, char *, char *);
int additionTest(int a, int b){
    int result = add(a,b);
    int expected = a + b;
    printTestMessage(result == expected,
                    "ADDITION TEST - OK",
                    "ADDITION TEST - FAIL");
    return result;
}
int substractionTest(int a, int b){
    int result = substraction(a,b);
    int expected = a - b;
    printTestMessage(result == expected,
                    "SUBSTRACTION TEST - OK",
                    "SUBSTRACTION TESST - FAIL");
    return result;
}
int main(){
    //TEST - ADD()
    additionTest(5,7);
    //TEST - SUBSTRACT()
    substractionTest(3,2);
}

void printTestMessage(int condition, char* messagePassed, char* messageFailed){
    if (condition){
        printf("%s\n", messagePassed);
    }
    else{
        printf("%s\n", messageFailed);
    }
}