#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int min(int a, int b, int c);
int main(void){
 printf("Ejercicio 7\n");
 int a, b, c;
 printf("Introduce las variables:\n");
 scanf("%d %d %d",&a,&b,&c);
 int d;
 d=min(a,b,c);
printf("%d es el mayor",d);
}
int min(int a, int b, int c){;
int temp;
if(a>b){
    temp=a;
}
    else{
    temp=b;
    if(temp>c){
return temp;
    }
else{
    return c;
}
}
}

