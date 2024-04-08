#include <stdio.h>
#include <string.h>
#define MAX_NOME 100

void adicionarNome(char *personagem){
    printf("Digite um nome de personagem: ");
    fgets(personagem, MAX_NOME, stdin);
    personagem[strcspn(personagem, "\n")] = '\0';
}

int contarCarater(char *personagem){
    int count = 0;
    int i;

    for (i = 0; personagem[i] != 0; i++)
    {
        count++;
    }
    
    return count;
}

int main(){
    char personagem[MAX_NOME];
    int contador = 0;

    adicionarNome(personagem);
    contador = contarCarater(personagem);
    printf("O numero de caracteres digitados foi: %d", contador);

    return 0;
}