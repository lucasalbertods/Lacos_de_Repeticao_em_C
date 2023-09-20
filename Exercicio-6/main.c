#include <stdio.h>
#include <stdlib.h>

/* 6) Calcular e imprimir a área de um triangulo reto.
Área = base X altura */

int main()
{
    float base, altura, area;
    char continua;
    do{
       system("cls");
    do{
        printf("\n Informe a Base: ");
        scanf("%f", &base);
        if(base<=0){
            printf("\n Base invalida! Redigite");
        }
    }while(base<=0);

      do{
        printf("\n Informe a Altura: ");
        scanf("%f", &altura);
        if(altura<=0){
            printf("\n Altura invalida! Redigite");
        }
    }while(altura<=0);

      do{
        printf("\n Informe a Area: ");
        scanf("%f", &area);
        if(area<=0){
            printf("\n Area invalida! Redigite");
        }
    }while(area<=0);

    area=(base*altura)/2;
    printf("\n A area eh: %2.f", area);
    printf("\n Deseja continuar? s/n");
    continua=getche();
}while(continua=='s');
 system("cls");
printf("\n Fim do programa! \n");

}
