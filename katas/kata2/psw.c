#include <stdio.h>
#include <string.h>


int strongPswCheck( char *p);
int main ()
{
    int x = strongPswCheck("Hello");
    return 0;
}

int strongPswCheck (char *psw)
{
    char *check = psw;
    int len = strlen(psw);
    printf("%s is of length: %d", psw, len);
    return 0;
}
