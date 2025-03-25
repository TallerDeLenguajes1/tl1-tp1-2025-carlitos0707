#include <stdio.h>

int main(){
    printf("Hola Mundo");
    int num = 20;
    int* pnum;
    pnum = &num;
    printf("\nContenido del puntero %d", *pnum);
    printf("\nDireccion de memoria almacenada en el puntero %p",pnum);
    printf("\n Direccion de memoria de la variable %p",&num);
    printf("\ndireccion de memoria del puntero %p",&pnum);
    printf("\nTamano de la variable %zu bytes",sizeof(num));
    getchar();
    return 0;
}