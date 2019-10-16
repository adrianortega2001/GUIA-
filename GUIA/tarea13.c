#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){
 printf("Ejercicio 13\n");
 int a;
char numero;
printf("Escriba el numero: \n");
scanf("%d",&a);
for(int i=1;i<=a; i++){
    if((a%i)==0){
numero++;
}
}
if(numero<=2){
printf("El numero es primo");
}
else{
printf("El numero no es primo");
}
}








