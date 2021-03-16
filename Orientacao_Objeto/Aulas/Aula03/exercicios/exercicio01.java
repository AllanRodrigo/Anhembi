package exercicios;

import java.util.Scanner;

public class exercicio01 {
    public static void main(String[] args) {
        String strNome, strTimeCoracao;
        int intIdade;
        Scanner teclado = new Scanner(System.in);

        System.out.print("Informe Seu Nome: ");
        strNome = teclado.next();
        System.out.print("Informe Sua Idade: ");
        intIdade = teclado.nextInt();
        System.out.print("Informe Seu Time do Coração: ");
        strTimeCoracao = teclado.next();

        meusDados(strNome, strTimeCoracao, intIdade);

        teclado.close();
    }

    static void meusDados(String strNome_, String strTimeCoracao_, int intIdade_){
        System.out.println("---------------------");
        System.out.println(String.format("%s / %s", strNome_, intIdade_));
        System.out.println(strTimeCoracao_);
        System.out.println("---------------------");
    }
}
