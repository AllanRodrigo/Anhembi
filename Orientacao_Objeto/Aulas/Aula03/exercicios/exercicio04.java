package exercicios;

import java.util.Scanner;

public class exercicio04 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int intValor1, intValor2, retorno;

        System.out.print("Informe o 1º Valor: ");
        intValor1 = teclado.nextInt();
        System.out.print("Informe o 2º Valor: ");
        intValor2 = teclado.nextInt();

        retorno = encontrarMax(intValor1, intValor2);

        System.out.println("O maior valor entre os dois é: " + retorno);

        teclado.close();
    }

    static int encontrarMax(int intValor1, int intValor2){
        return intValor1 > intValor2 ? intValor1 : intValor2;
    }
}
