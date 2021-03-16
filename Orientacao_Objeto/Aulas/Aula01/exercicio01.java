import java.util.Scanner;

/**
 * Atalhos utilizados:
 * 
 * class
 * main
 * syso
 */
public class exercicio01 {

    public static void main(String[] args) {
        Scanner teclado = new  Scanner(System.in);
        double dCustoFabrica, dCustoCarro, dPercDistribuidor, dImposto;

        System.out.println("Digite o custo de fábrica:");
        dCustoFabrica = teclado.nextDouble();

        dPercDistribuidor = dCustoFabrica * 0.28;
        dImposto = dCustoFabrica * 0.45;
        dCustoCarro = dCustoFabrica + dPercDistribuidor + dImposto;

        System.out.println("Valor do carro final: " + dCustoCarro);
        System.out.println("Impostos: " + dImposto);

        teclado.close();
    }

}