#include <stdio.h>
// Com pointers, podemos passar funcoes como argumentos em outras funcoes

void ola(){
    printf("Ola\n");
}

void recebe(void (*callback)()){
    callback();
}

int soma(int a, int b){
    return a +b;
}
void imprimeres(int (*callback)(int,int),int a, int b){ //Podemos passar funcoes que recebem parametros como parametro dessa maneira
    printf("%d",callback(a,b));
}

int main(){
    recebe(ola);
    imprimeres(soma,2,3);
    return 0;
}