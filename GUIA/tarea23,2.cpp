#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){
 printf("Ejercicio 23\n");
 int i=2;
 int suma=0;
 do{
suma=suma+i;
 i=i+3;
 }while(i<=100);
 printf("%d",suma);
}
