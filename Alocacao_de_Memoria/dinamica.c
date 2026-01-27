#include <stdio.h>
#include <stdlib.h>
// A funcao malloc permite que reservemos um determinado valor na memoria para dados

int main(){
    struct pessoa{
        double p1;
        int p2;
        char p3;
    };

    struct pessoa *pessoas = malloc(sizeof(struct pessoa)); // Aqui alocamos a quantidade de memoria necessaria para uma estrutura pessoa
    
    if(pessoas == NULL){ // Boa pratica para o caso de malloc retorne nulo
        perror("malloc");
        return -1; // Codigo de erro
    }
    (*pessoas).p2 = 0;

    printf("%d", pessoas[0].p2);

    free(pessoas); //Libera a memoria depois de ser utilizada
    pessoas = NULL; // Boa pratica para evitar erros

    return 0;
}