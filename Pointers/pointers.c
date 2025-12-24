#include <stdio.h>
// Pointers sao variaveis que armazenam o enderco de memoria de outra variavel
int main(){
    int x = 4;
    int *p = &x; // Declaracao de um pointer, onde &x representa o endereco de x na memoria

    printf("Valor de x = %d\n",x);
    printf("Endereco de x = %p\n",&x);
    printf("Valor de p = %p\n",p);
    printf("Pointer *p = %d\n",*p);

}
