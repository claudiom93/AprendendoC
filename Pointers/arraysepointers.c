#include <stdio.h>
//Cada item do array ocupa um espaco na memoria

int main(){
    int meuarr[4] = {1,2,3,4}; // No caso de arrays o nome do array sem o indice, meuarr, serve como endereco do array
    printf("O endereco de meuarr = %p\n",meuarr);
    printf("O endereco de meuarr[0] = %p\n",&meuarr[0]); // O endereco do primeiro elemento do array igual ao do array
    printf("o valor do primeiro elemento de meuarr = %d e o do segundo = %d\n",*meuarr,*(meuarr +1)); /* Podemos acessar os valores
    do array dessa maneira*/

    return 0;
}