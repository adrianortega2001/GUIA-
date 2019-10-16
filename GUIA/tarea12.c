#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
printf("Ejercicio 12\n");
int i;
int a;
int j;
scanf("%d",&a);
for(i=1;i<=a;i++){
for(j=1;j<=i-1;j++){
    printf("%d",j);
}
printf("%d\n",j);
}
}
