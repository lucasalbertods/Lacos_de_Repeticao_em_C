#include <stdio.h>
#include <stdlib.h>

/*5) Fazer um programa que leia um n�mero que ser� o limite superior de um intervalo e
o incremento. Imprimir todos os n�meros no intervalo de 0 at� esse n�mero.
Suponha que os dois n�meros lidos s�o maiores que zero. Repita o desenvolvimento
utilizando as estruturas for, while e do while.*/

int main()
{
    int cont,limite,incre;

    printf("\n Informe o Limite Supoerior: ");
    scanf("%d", &limite);

    printf("\n Informe o Incremento: ");
    scanf("%d", &incre);

    for(cont=0;cont<=limite;cont=cont+incre){
        printf("\n %d \n", cont);
    }

}
