#include <stdio.h>

int main(){
    int x = 4;
    int *p = &x;

    printf("Valor de x = %d\n",x);
    printf("Endereco de x = %p\n",&x);
    printf("Valor de p = %p\n",p);
    printf("Pinter *p = %d\n",*p);

}
