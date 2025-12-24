#include <stdio.h>
// Structs em C se assemelham a Classes em outras linguagens, mas nao prove suporte para heranca, polimofismo ou intefaces
// Basicamente, ha a possibilidade de criar uma estrutura de dados


struct mystruct1{ //Definindo a estrutura
    int a;
    char b;
};
struct mystruct2{ //Aqui temos uma etrutura aninhada
    float c;
    struct mystruct1 s1;
};



int main(){
    struct mystruct1 s2 = {3,'b'}; // Uma estrutura pode ser inicializada desta maneira, tambem podemos iniciliza-la vazia
    // e atribuir valores depois
    struct mystruct2 s3 ={3.5, s2}; // Podemos inicializar uma estrutura aninhada com uma ja inicializada

    struct mystruct2 s4 ={6.2,{4,'d'}}; //Tambem podemos inicializala assim
    
    
    printf("%d\n",s2.a); // Imprime o Int a da mystruct1 s2
    printf("%c\n",s3.s1.b); // Assim acessamos o valor dentro de uma estrutura aninhada
    printf("%d\n",s4.s1.a);
    return 0;
}