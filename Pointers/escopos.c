#include <stdio.h>

//Aqui vemos como usar pointers para acessar variaveis fora do escopo
void trocar(int *a, int *b){ //Recebe 2 enderecos de memoria de numeros inteiros
    int temp; //Inicializa variavel temporaria
    temp = *b; //Armazeno o valor que esta localizado no endereco de memoria b
    *b = *a; //Troca o valor que esta no endereco de memoria b pelo que esta no endereco de memoria a
    *a = temp; //Troca o valor que esta no enderco de memoria a pelo valor que esta armazenado em temp
}
int main(){
    int x =3;
    int y = 4;
    trocar(&x,&y);
    printf("Novo valor de x = %d.\n Novo valor de y = %d.",x,y);
    return 0;
}