#include <stdio.h>
#include <stdlib.h>


 int main()
{
    char op;
    do{
     system("cls");
     printf("\n1. Calculo area triangulo reto");
     printf("\n2. Calculo da area de um circulo");
     printf("\n3. Calculo do perimetro de um circulo");
     printf("\n4. Calculo do volume de um cone");
     printf("\n5. Sair");
     op=getche();
     if(op=='1'){
        printf("\nEm desenvolvimento.");
        getche();
     }
     else if(op=='2'){
        printf("\nEm desenvolvimento.");
        getche();
     }
     else if(op=='3'){
        printf("\nEm desenvolvimento.");
        getche();
     }
     else if(op=='4'){
        printf("\nEm desenvolvimento.");
        getche();
     }
     else if(op=='5'){
        system("cls");
        printf("\nFim de programa");
     }
     else{
        printf("\nOpcao invalida.");
        getche();
     }
    }while(op!='5');
}

