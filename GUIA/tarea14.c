#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){
 printf("Ejercicio 14\n");
char vocales;
vocales=getch();
if(vocales=='a'|| vocales=='e' || vocales=='i'|| vocales=='o' || vocales=='u'|| vocales=='A' || vocales=='E' || vocales=='I' || vocales=='O'|| vocales=='U'){
    printf("La letra es vocal \n");
}
else{
printf("La letra es consonante \n");
}
}


