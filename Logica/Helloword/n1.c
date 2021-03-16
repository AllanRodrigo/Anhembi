#include<stdio.h> 
#include <ctype.h>

int main() 
{ 
    /*
    Allan Reis
    Inicialmente inicializa o array dos caracteres com zeros, em seguida Informa para o usuário
    digitar o texto e ao finalizar digitar #, Em seguida começa a lógica para recuperar o
    caracter digitado e valida se já foi informado 200 caracter para ignorar a digitação e 
    contagem, entra no switch case para verificar se está dentro do padrão de contagem
    [0,9] e [a,z], utilizo o 'tolower()' para ignorar maisculo e minusculo. Se atender 
    ao padrão irá chamar o putchar para escrever na tela e somar o contador corresponde 
    ao caracter. Ao final do while(digitar #) irá escrever na tela a quantidade de cada 
    caracter informado no texto.
    */
    int intCaracter;
    int arrContador[36];
    int intContTotal=0;
    
    for(int x =0; x <= 35; x++){
        arrContador[x] = 0;
    }
    
    printf("Informe o texto desejado(Ate 200 caracteres). Ao final digite # para finalizar\n");

    do {
        intCaracter = getch();

        if(intContTotal >= 200 && intCaracter != '#')
            intCaracter = '@';
        
        switch(tolower(intCaracter)){
            case '0':
                putchar(intCaracter);
                arrContador[0]++;
                intContTotal++;
                break;
            case '1':
                putchar(intCaracter);
                arrContador[1]++;
                intContTotal++;
                break;
            case '2':
                putchar(intCaracter);
                arrContador[2]++;
                intContTotal++;
                break;
            case '3':
                putchar(intCaracter);
                arrContador[3]++;
                intContTotal++;
                break;
            case '4':
                putchar(intCaracter);
                arrContador[4]++;
                intContTotal++;
                break;
            case '5':
                putchar(intCaracter);
                arrContador[5]++;
                intContTotal++;
                break;
            case '6':
                putchar(intCaracter);
                arrContador[6]++;
                intContTotal++;
                break;
            case '7':
                putchar(intCaracter);
                arrContador[7]++;
                intContTotal++;
                break;
            case '8':
                putchar(intCaracter);
                arrContador[8]++;
                intContTotal++;
                break;
            case '9':
                putchar(intCaracter);
                arrContador[9]++;
                intContTotal++;
                break;
            case 'a':
                putchar(intCaracter);
                arrContador[10]++;
                intContTotal++;
                break;
            case 'b':
                putchar(intCaracter);
                arrContador[11]++;
                intContTotal++;
                break;
            case 'c':
                putchar(intCaracter);
                arrContador[12]++;
                intContTotal++;
                break;
            case 'd':
                putchar(intCaracter);
                arrContador[13]++;
                intContTotal++;
                break;
            case 'e':
                putchar(intCaracter);
                arrContador[14]++;
                intContTotal++;
                break;
            case 'f':
                putchar(intCaracter);
                arrContador[15]++;
                intContTotal++;
                break;
            case 'g':
                putchar(intCaracter);
                arrContador[16]++;
                intContTotal++;
                break;
            case 'h':
                putchar(intCaracter);
                arrContador[17]++;
                intContTotal++;
                break;
            case 'i':
                putchar(intCaracter);
                arrContador[18]++;
                intContTotal++;
                break;
            case 'j':
                putchar(intCaracter);
                arrContador[19]++;
                intContTotal++;
                break;
            case 'k':
                putchar(intCaracter);
                arrContador[20]++;
                intContTotal++;
                break;
            case 'l':
                putchar(intCaracter);
                arrContador[21]++;
                intContTotal++;
                break;
            case 'm':
                putchar(intCaracter);
                arrContador[22]++;
                intContTotal++;
                break;
            case 'n':
                putchar(intCaracter);
                arrContador[23]++;
                intContTotal++;
                break;
            case 'o':
                putchar(intCaracter);
                arrContador[24]++;
                intContTotal++;
                break;
            case 'p':
                putchar(intCaracter);
                arrContador[25]++;
                intContTotal++;
                break;
            case 'q':
                putchar(intCaracter);
                arrContador[26]++;
                intContTotal++;
                break;
            case 'r':
                putchar(intCaracter);
                arrContador[27]++;
                intContTotal++;
                break;
            case 's':
                putchar(intCaracter);
                arrContador[28]++;
                intContTotal++;
                break;
            case 't':
                putchar(intCaracter);
                arrContador[29]++;
                intContTotal++;
                break;
            case 'u':
                putchar(intCaracter);
                arrContador[30]++;
                intContTotal++;
                break;
            case 'v':
                putchar(intCaracter);
                arrContador[31]++;
                intContTotal++;
                break;
            case 'w':
                putchar(intCaracter);
                arrContador[32]++;
                intContTotal++;
                break;
            case 'x':
                putchar(intCaracter);
                arrContador[33]++;
                intContTotal++;
                break;
            case 'y':
                putchar(intCaracter);
                arrContador[34]++;
                intContTotal++;
                break;
            case 'z':
                putchar(intCaracter);
                arrContador[35]++;
                intContTotal++;
                break;
            case ' ':
                putchar(intCaracter);
                intContTotal++;
                break;
        }

    } while(intCaracter != '#');

    printf("\nquantidade de 0: %i", arrContador[0]);
    printf("\nquantidade de 1: %i", arrContador[1]);
    printf("\nquantidade de 2: %i", arrContador[2]);
    printf("\nquantidade de 3: %i", arrContador[3]);
    printf("\nquantidade de 4: %i", arrContador[4]);
    printf("\nquantidade de 5: %i", arrContador[5]);
    printf("\nquantidade de 6: %i", arrContador[6]);
    printf("\nquantidade de 7: %i", arrContador[7]);
    printf("\nquantidade de 8: %i", arrContador[8]);
    printf("\nquantidade de 9: %i", arrContador[9]);
    printf("\nquantidade de a: %i", arrContador[10]);
    printf("\nquantidade de b: %i", arrContador[11]);
    printf("\nquantidade de c: %i", arrContador[12]);
    printf("\nquantidade de d: %i", arrContador[13]);
    printf("\nquantidade de e: %i", arrContador[14]);
    printf("\nquantidade de f: %i", arrContador[15]);
    printf("\nquantidade de g: %i", arrContador[16]);
    printf("\nquantidade de h: %i", arrContador[17]);
    printf("\nquantidade de i: %i", arrContador[18]);
    printf("\nquantidade de j: %i", arrContador[19]);
    printf("\nquantidade de k: %i", arrContador[20]);
    printf("\nquantidade de l: %i", arrContador[21]);
    printf("\nquantidade de m: %i", arrContador[22]);
    printf("\nquantidade de n: %i", arrContador[23]);
    printf("\nquantidade de o: %i", arrContador[24]);
    printf("\nquantidade de p: %i", arrContador[25]);
    printf("\nquantidade de q: %i", arrContador[26]);
    printf("\nquantidade de r: %i", arrContador[27]);
    printf("\nquantidade de s: %i", arrContador[28]);
    printf("\nquantidade de t: %i", arrContador[29]);
    printf("\nquantidade de u: %i", arrContador[30]);
    printf("\nquantidade de v: %i", arrContador[31]);
    printf("\nquantidade de w: %i", arrContador[32]);
    printf("\nquantidade de x: %i", arrContador[33]);
    printf("\nquantidade de y: %i", arrContador[34]);
    printf("\nquantidade de z: %i", arrContador[35]);

    return 0;
}