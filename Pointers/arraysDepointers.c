#include <stdio.h>
//Com arrays de pointers podemos criar arrays de diversos tipos de variaveis

int main(){
    int a = 10;
    char b = 'b';
    void *arr[] = {&a, &b};
    printf("Valor de a = %d",*(int*)arr[0]); // Assim acessamos o valor de a no array
    return 0;
}