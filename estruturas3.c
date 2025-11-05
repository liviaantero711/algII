include<stdio.h>
/*Faça uma função que receba um texto por parâmetro e escreva-o na tela
(print), em seguida retorne “Ok”*/
#include <stdio.h>

void Texto(char te[], int t)
{
    printf("insira um texto:\n");
    fgets(te, tamanho, stdin);
    printf("Você digitou: %s\n", te);
    printf("Ok! \n");
}

int main(void) {
    char tx[3000];
    Texto(tx, sizeof(tx));
    return 0;
}
