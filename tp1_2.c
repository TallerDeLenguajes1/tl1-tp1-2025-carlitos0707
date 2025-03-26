#include <stdio.h>


int cuadrado(int num);
void cuadrado2(int* num);
void mostrar(int* num);
void invertir(int* a, int* b);
void orden(int* a, int* b);




int main(){
    int a=4,b=9,c;
    c = cuadrado(a);
    printf("El cuadrado de %d es: %d",a,c);
    cuadrado2(&a);
    printf("\nEl cuadrado de a es %d",a);
    mostrar(&b);
    invertir(&a,&b);
    printf("\n a: %d",a);
    printf("\n b: %d",b);
    orden(&a,&b);
    printf("\n a: %d",a);
    printf("\n b: %d",b);
    getchar();
    return 0;
}



int cuadrado(int num){
    return num*num;
}



void cuadrado2(int* num){
    *num = *num * *num;
}



void mostrar(int* num){

}




void invertir(int* a, int* b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}



void orden(int* a, int* b){
    int aux;
    if (*a > *b)
    {
        aux = *a;
        *a = *b;
        *b = aux;
    }
    

}