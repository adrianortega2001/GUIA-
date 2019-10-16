#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(void){
 printf("Ejercicio 25\n");
 char color;
color=getch();
if(color=='r' || color== 'R'){
    printf("ROJO");
}
else{
  if(color=='v'||color== 'V'){
    printf("VERDE");
}
else{
    if(color=='a'||color== 'A'){
        printf("AZUL");
    }
  else{
printf("NEGRO");
  }
}
}
}


