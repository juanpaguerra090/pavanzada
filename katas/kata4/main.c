#include <stdio.h>
#include <string.h>

int state = 1;

int getState();
void setState();
int isNumber(char *s){
   for(int i = 0; i < strlen(s); i++ ) {
       if(s[i] >= '0' && s[i] <= '9'){
           if(getState() <= 2){
               setState(2);
           }
           else if (getState() < 5){
               setstate(4);
           }
           else {
               setState(6);
           }
       }else if (strcmp(s[i], ".")){
           if(getState() == 2){
               setState(3);
           }
           else {
               return -1; //It is not a number
           }
       }
       else if (strcmp(s[i], "e")){
           if(getState() == 2){
               setState(5);
           }
           else {
               return -1; //It isn't a number
           }
       }
       else{
           return -1; //Given string doesn't even start with a number
       }
   }
   if (getState() == 2 || getState() == 4 || getState() == 6){
       return 1; //It's a number : OK
   } 
   else{
       return -1; //Somehow, not a number
   }
}

int getState(){ return state; }
void setState(int x){ state = x; }


int main (){    
    char str[100];
    scanf("%s", &str);
    int result = isNumber(str);
    printf("RESULT: %d", result);
}