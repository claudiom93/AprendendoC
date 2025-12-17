#include <stdio.h>

/*Arrays em C sao de um unico tipo*/


int main(){
    int meuarr1[] = {1,2,3,4}; //Declaracao de um array definido.
    int meuarr2[4]; //Declaracao de um array vazio com 4 posicoes reservadas, de 0 a 3.
    int nbytes = sizeof(meuarr2); // Funcao sizeof aqui define tamanho (Bytes que o array ocupa na memoria).
    int comp = nbytes / sizeof(meuarr2[0]); /*Dividimos o numero de Bytesd do array pelo numero de 
    bytes de um elemento para obtermos o numero de elementos do array*/
    meuarr2[2] = 5; // Atribuindo um valor a terceira posicao

    printf("%d\n",meuarr1[1]); // Imprime a posicao 2 do array
    printf("%d\n",nbytes); /* Imprime o tamanho do array, nesse caso 16 bytes, pois e um array
    de inteiros (4 bytes por posicao, representacao maxima 32bits) com 4 posicoes*/
    for(int i = 0;i < comp;i++){ //Imprime todas as posicoes do array
        printf("%d\n",meuarr2[i]);// Espacos vazios imprimem garbage values deixados na memoria
    }

    return 0;
    
}
