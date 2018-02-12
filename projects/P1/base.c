#include <stdio.h>
#include <string.h>
#include <math.h>

long int base(char *s, long int edadReal){
    long long lo = 10;
    long long hi = 1.1e18;
    long long val = 0;
    while (lo < hi){
        val = 0;
        long long b = (lo + hi)/2;
        if ( (pow(b, strlen(s)-1) * s[0]) > edadReal + 1e9 ){
            hi = b - 1;
            continue;
        }
        for(int i = 0; i < strlen(s); i++){
            val = (val*b) + s[i]-'0';
        }
        if(val > edadReal){
            hi = b - 1;
        }
        else{
            lo = b;
        }
    }
    return lo;
}

int main(){
    char y[150];
    long long l;
    scanf("%s %lld", &y, l);
    base(y, l);
}