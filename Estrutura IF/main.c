#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Digite um caracter em letra minuscula: \n");
    scanf("%c", &c );

//Verifica se o caractere � maior com o que voc� digitou
    if(c >= 'a')
{

printf("Segue a letra que voce digitou em maiuscula: > %c < \n",
       toupper(c));
}
    return 0;

}

