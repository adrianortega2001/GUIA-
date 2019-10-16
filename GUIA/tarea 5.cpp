#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){
 printf("Ejercicio 5\n");
 float a;
 float p=3.1416;
 float x;
 printf("Escriba la cantidad del radio: \n ");
 scanf("%f",&a);
 x=p*a*a;
 printf("El valor del area es:%f\n",x);
 x=p*(2*a);
 printf("El valor de la circunferencia  es:%f\n",x);
}
