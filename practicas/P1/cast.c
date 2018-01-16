#include <stdio.h>
#include <float.h>

int main (){
    int a = 4;
    int j;
    int *p;
    float f = 7.5;
    int max = 2147483647;
    long d;
    int b = a + (int) f; // ANS = 11, si no se hace el cast las operaciones se hacen con ALU flotante, no con la ALU de enteros. 2x más rápido
    float c = a * f;

    int array[5] = {0,2}; // 20 bytes seguidos de memoria, el resto se inicializa en 0
    d = (long) max * max;
    p = array;
    for (int k = 0; k < sizeof(array) / sizeof(array[0]); k++){ // El tamaño del arreglo entre el tamaño del tipo de dato
        // *p++ = 67; Primero se asigna el valor, después se desplaza
        // *++pp = 67; Primero se desplaza, después asigna el valor
        *p = 67;
        p++;
        // Es lo mismo que array[k] = 67;
        // p[k] = 67;    
    }
    /*
        A pesar de que d es un long int, primero se hizo la operacion max * max, 
        pero int * int = int aquí se ocasiona el oveflow. Se usa un cast
    */
    /*
        p = &a; // p tiene asignado la dirección de a
        *p = 7; // * significa el valor de ese apuntador, no la dirección.
        p++;
        *p = 8;
    */
    printf ("p = %p, a = %d  b = %d, d = %ld, j = %d, array[1] = %d\n", p, a, b, d, j, array[1]);
    printf ("f = %f, c = %f \n", f, c);
    return 0;
}