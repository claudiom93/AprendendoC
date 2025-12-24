#include <stdio.h>
//Funcoes em C sao declaradas pelo valor que retornam seguido dos parametros entre parenteses e a funcao em chaves

void printsoma(int a, int b){ // A funcao void nao retorna nenhum valor, apenas executa codigo
    printf("%d\n",a+b);
}
int main(){
    printsoma(5,3);
}