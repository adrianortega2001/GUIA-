#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
printf("Ejercicio 10\n");
int a;
printf("Introduce los litros:\n");
scanf("%d",&a);
int c;

if(a<=50){
    printf("Gratis");
}
else{
    if(a>50){
            c=(a-50)*10;
                if(c<=200){
                printf("El costo es $ 200");
            }
else{
        if(c>200){
printf("El costo es $ %d  \n",c);
        }
        else{
            if(a>200){
               c=(a-50)*20;
               printf("El costo es $ %d  ",c);

}
}
}
}
}
}





