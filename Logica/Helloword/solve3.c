// Includes
#include<stdio.h> 
#include<locale.h> 
#include<stdbool.h>

//////
/// Função para validar ano bissexto
//////
bool validarAnoBissexto(int ano){
    if(ano % 4 == 0){
        if(ano % 100 == 0)
            return false;
        else
            return true;
    }
    else{
        if(ano % 400 == 0)
            return true;
        else
            return false;
    }
}

//////
/// Função inicial main
//////
int main() 
{ 
    // Setando Regional
    setlocale(LC_ALL, "Portuguese");

    // declaração de variaveis
    int ano;

    // Msg informação tela
    printf("Digite um ano com 4 digitos:");
    // Recuperar ano digitado

    scanf("%d", &ano);
    // Chama metodo para validar ano bissexto
    printf("O Ano %s bissexto", (validarAnoBissexto(ano) ? "e" : "nao e"));
}