#include <stdio.h>
#include <string.h> 
#include <stdlib.h>


// stdlib.h --> malloc() library
// string.h --> strpcy() library
// stdio.h --> printf() library
int doFullName( char *firstName, 
                char *lastName,
                char **fullName)
{
    int sizeFirstName = strlen(firstName);
    int sizeLastName = strlen(lastName);
    *fullName = (char *) malloc((sizeFirstName + sizeLastName + 1) * sizeof(char));
    strcpy(*fullName, firstName);
    strcpy(*fullName + sizeFirstName, " ");
    strcpy(*fullName + sizeFirstName + 1, lastName);
    return 0;
}

int main(){
    char firstName[] = "Juan Pablo"; //Crea un arreglo modificable
    char *lastName = "Ramírez"; //Constante
    char *fullName;

    doFullName(firstName, lastName, &fullName);
    printf("My name is: %s\n", fullName);
    return 0;
}