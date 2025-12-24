#include <stdio.h>
//Strings sao arrays de caracteres com algumas peculiaridades
int main(){
    char minhastr1[] = {'o','l','a',0}; //A string deve terminar em 0 para nao criar uma vulnerabilidade
    char *minhastr2 = "ola"; //Uma string tambem pode ser declarada dessa maneira
    char minhastr3[] = "ola"; //Tambem uma declaracao valida
    printf("%s\n",minhastr1);
    printf("%s\n",minhastr2);
    printf("%s\n",minhastr3);
    return 0;
}