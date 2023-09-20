#include <stdio.h>
#include <stdlib.h>

/*3) Fazer um programa que imprima todos os números pares no intervalo 1 – 10. Repita
o desenvolvimento utilizando as estruturas for, while e do while. */

int main()
{
 int cont, resto;
 char continua;
 do{
 system("cls");
 for(cont=1;cont<=10;cont++){
 resto= cont%2;
 if(resto == 0){
 printf("\n %d \n", cont);
 }
 }
 printf("\n deseja continuar? s/n");
 continua=getche();
 }while(continua == 's');
 system("cls");
 printf("\n Fim do programa!! \n");
}
