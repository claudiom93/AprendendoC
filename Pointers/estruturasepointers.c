#include <stdio.h>
//Como vimos em funcoesepointers.c, podemos utiliza pointers como parametros para funcoes

struct pessoa{
    char *nome;
    int idade;
};
void inicializarPessoa(struct pessoa *p){ /*Aqui criamos uma funcao para adicionar valores a estrutura pessoa, recebendo um
 endereco de memoria de uma estrutura pessoa como parametro*/
    p -> nome = "claudio"; // Declaramos o valor de pessoa.nome
    (*p).idade = 32; //Outra maneira valida de acessar o valor de pessoa.idade

    return;
}

int main(){
    struct pessoa Claudio; //Inicializa Claudio vazio
    inicializarPessoa(&Claudio); //Passamos os parametros definidos na funcao para Claudio
    printf("Se chama %s e tem %d anos de idade",Claudio.nome,Claudio.idade);
    
    return 0;
}