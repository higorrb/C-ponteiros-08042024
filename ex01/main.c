#include <stdio.h>

void adicionarNum(int *a, int *b, int *c){
    printf("Digite um numero inteiro: ");
    scanf("%d", &*a);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &*b);
    printf("Digite mais um numero inteiro: ");
    scanf("%d", &*c);
}

int maiorNum(int *a, int *b, int *c){
    int maior = 0;
    if (*a>maior)
    {
        maior = *a;
    }
    if (*b>maior)
    {
        maior = *b;
    }
    if (*c>maior)
    {
        maior = *c;
    }
    return maior;
    
}

int main(){
    int a, b, c, numeroMaior;

    adicionarNum(&a, &b, &c);
    numeroMaior = maiorNum(&a, &b, &c);
    printf("O maior numero digitado foi: %d", numeroMaior);

    return 0;
}