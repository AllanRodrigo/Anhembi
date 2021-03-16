// Includes
#include<stdio.h> 
#include<locale.h> 
//////
/// Função inicial main
//////
int main() 
{ 
    // Setando Regional
    setlocale(LC_ALL, "Portuguese");

    // declaração de variaveis
    int val1, val2, val3;

    // Msg informação tela
    printf("Digite três inteiros diferentes:");
    // Recuperar numeros digitados
    scanf("%d %d %d", &val1, &val2, &val3);
    // Chama metodo para soma e exibe resultado na tela
    printf("A soma é %i\n", soma(val1, val2, val3));
    // Chama metodo para media e exibe resultado na tela
    printf("A média é %i\n", media(val1, val2, val3));
    // Chama metodo para multiplicacao e exibe resultado na tela
    printf("O produto é %i\n", produto(val1, val2, val3));
    // Chama metodo para verificar o menor e exibe resultado na tela
    printf("O menor é %i\n", menor(val1, val2, val3));
    // Chama metodo para verificar o maior e exibe resultado na tela
    printf("O maior é %i\n", maior(val1, val2, val3));
}

//////
/// Função para retornar a soma dos valores
//////
int soma(valor1, valor2, valor3){
    return valor1 + valor2 + valor3;
}

//////
/// Função para retornar a media dos valores
//////
int media(valor1, valor2, valor3){
    return (valor1 + valor2 + valor3)/3;
}

//////
/// Função para retornar a multiplicacao dos valores
//////
int produto(valor1, valor2, valor3){
    return (valor1 * valor2 * valor3);
}

//////
/// Função para retornar o menor valor informado
//////
int menor(valor1, valor2, valor3){
    if(valor1 < valor2 && valor1 < valor3)
        return valor1;
    else if(valor2 < valor1 && valor2 < valor3)
        return valor2;
    else
        return valor3;
}

//////
/// Função para retornar o maior valor informado
//////
int maior(valor1, valor2, valor3){
    if(valor1 > valor2 && valor1 > valor3)
        return valor1;
    else if(valor2 > valor1 && valor2 > valor3)
        return valor2;
    else
        return valor3;
}