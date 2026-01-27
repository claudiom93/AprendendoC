#include <stdio.h>
// Funcoes podem ser chamadas atraves de pointers

int printint(int a){
    return a;
}

int add(int a, int b){
    return a + b;
}

int mult (int a, int b){
    return a*b;
}

int sub(int a, int b){
    return a - b;
}

int main(){
    int (*p1)(int) = printint; //Declaramos o pointer da funcao dessa maneira
    int (*ops[3])(int,int) = {add, mult,sub}; // Podemos criar um array de funcoes dessa maneira
    printf("%d\n",p1(2));
    printf("%d",ops[1](2,3));
    return 0;
}