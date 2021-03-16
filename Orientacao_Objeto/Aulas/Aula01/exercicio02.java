import java.util.Scanner;

/**
 * exercicio02
 */
public class exercicio02 {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        double dMassaIni, dMassaFim;
        int intTempo=0;

        System.out.println("Informe a massa inicial:");
        dMassaIni = teclado.nextDouble();

        dMassaFim = dMassaIni;

        while(dMassaFim >= 0.5){
            dMassaFim /= 2;
            intTempo += 50;
        }

        System.out.println("A Massa inicial é: " + dMassaIni);
        System.out.println("A Massa final é: " + dMassaFim);
        System.out.println(String.format("O tempo que levou foi de %d segundos ", intTempo));

        teclado.close();
    }

    
}