#include<stdio.h> 
#include<stdbool.h>
#include<math.h>

int main() 
{ 
    /*
    Allan Reis
    Inicialmente faço um laço para recuperar as 10 matrículas, dentro deste laço eu tenho um do
    while para garantir que a matricula esteja com 8 dígitos, e na sequencia incluo no meu array,
    Na sequencia do código eu recupero as 2 matriculas que iremos pesquisar e então crio um novo
    laço para percorrer meu array de matriculas cadastradas, dentro deste laço eu teno if para
    verificar se a matricula encontra-se no array e caso afirmativo, eu atualizo minha variavel
    booleana para true. Por fim eu escrevo se a matricula que pesquisaram está ou não no array
    através da utilização do operador ternario na minha variavel booleana
    */
    int intCont, intMat1, intMat2, intMatricula, intDigitos;
    int arrMatriculas[10];
    bool bolExiste1=false, bolExiste2=false;
    
    for(intCont=0; intCont < 10; intCont++){
        do{
            printf("\nInforme o numero de matricula %i (Com 8 digitos):", (intCont + 1));
        
            scanf("%d", &intMatricula);

            intDigitos = (int)(intMatricula ? log10(intMatricula) + 1 : 1);
        } while(intDigitos != 8);

        arrMatriculas[intCont] = intMatricula;
    }

    printf("\nAgora informe 2 numeros de matricula:");
    
    scanf("%d %d", &intMat1, &intMat2);

    for(intCont=0; intCont < 10; intCont++){
        if(arrMatriculas[intCont] == intMat1)
            bolExiste1 = true;

        if(arrMatriculas[intCont] == intMat2)
            bolExiste2 = true;
    }

    printf("\nA matricula %i %s esta cadastrada", intMat1, (bolExiste1 ? "" : "nao"));
    printf("\nA matricula %i %s esta cadastrada", intMat2, (bolExiste2 ? "" : "nao"));
    
    return 0;
}