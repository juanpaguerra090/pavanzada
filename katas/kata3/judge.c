#include <stdio.h>
#include <string.h>

int judge(char *input){
    int x = 0;
    int y = 0;
    //printf("%lu\n", strlen(input));
    for (int i = 0; i < strlen(input); i++){
        if(input[i] == 'U'){
            y++;
        }
        else if(input[i] == 'D'){
            y--;
        }
        else if(input[i] == 'R'){
            x++;
        }
        else if(input[i] == 'L'){
            x--;
        }
    }
    if (x == 0 && y == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main (){    
    char str[100];
    scanf("%s", &str);
    int result = judge(str);
    printf("RESULT: %d", result);
}