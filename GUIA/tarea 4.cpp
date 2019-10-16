#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){
 printf("Ejercicio 4\n");
 float a;
 float b;
 float c;
 printf("Introduce tu altura en metros:\n");
 scanf("%f",&a);
 printf("Introduce tu edad:\n");
 scanf("%f",&b);
 c=(a*100-100+b*.1*.9);
 printf("Peso recomendado: %f",c);
}
