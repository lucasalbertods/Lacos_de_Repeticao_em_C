#include <stdio.h>
#include <stdlib.h>

/*2) Fazer um programa que peça um valor e imprima a sua tabuada. Repita o
desenvolvimento utilizando as estruturas for, while e do while.*/

int main()
{
    int numero, cont;
    do{
    printf("\n Informe um numero para tabuada: ");
    scanf("%d", &numero);
    if(numero<=0){
        printf("\n Numero invalido! Redigite! \n");
        getch();
    }
    }while(numero<=0);

    for(cont=1;cont<=10;cont++){
        printf("\n %d X %d = %d \n", numero,cont, numero*cont);
    }

}
