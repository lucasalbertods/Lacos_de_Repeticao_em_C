#include <stdio.h>
#include <stdlib.h>

/*1) Faça um programa que peça dois valores e apresente a soma. Inserir rotina de
controle, isto é, que determina o fim do programa, perguntando se continua. Se a
resposta for “Sim”, então continua, caso contrário, encerrar a execução do
programa, e imprimindo a mensagem “Fim de Processamento”. Repetir o programa
utilizando as estrutura  While e do while. */

int main()
{
    int valor1, valor2, soma;
    char continua;
 do{
    system("cls");

    //Leitura do valor 1
    do{
    printf("\n Digite o valor 1: ");
    scanf("%d", &valor1);
    if(valor1<=0){
        printf("\n Valor invalido! Redigite!! \n");
        getch();
    }
    }while(valor1<=0);

    //Leitura do valor 2
    do{
    printf("\n Digite o valor 2: ");
    scanf("%d", &valor2);
    if(valor2<=0){
        printf("\n Valor invalido! Redigite!! \n");
        getch();
    }
    }while(valor2<=0);

    //Processamento
    soma = valor1 + valor2;

    printf("\n A soma dos valores eh: %d \n", soma);
    printf("\n Deseja continuar? s/n");
    continua=getche();
}while(continua=='s');
 system("cls");
printf("\n Fim do programa! \n");

}
