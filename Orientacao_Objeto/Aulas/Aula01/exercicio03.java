import java.util.Scanner;

public class exercicio03 {
    
    public static void main(String[] args) {
        
        Scanner teclado = new Scanner(System.in);
        double dPeso1, dPeso2, dPeso3;
        int intAlunos=0;

        System.out.println("Informe o Peso 1:");
        dPeso1 = teclado.nextDouble();

        System.out.println("Informe o Peso 2:");
        dPeso2 = teclado.nextDouble();

        System.out.println("Informe o Peso 3:");
        dPeso3 = teclado.nextDouble();

        System.out.println("Informe a quantidade de alunos:");
        intAlunos = teclado.nextInt();

        // while(dMassaFim >= 0.5){
        //     dMassaFim /= 2;
        //     intTempo += 50;
        // }

        // System.out.println("A Massa inicial é: " + dMassaIni);
        // System.out.println("A Massa final é: " + dMassaFim);
        // System.out.println(String.format("O tempo que levou foi de %d segundos ", intTempo));

        teclado.close();

    }

}
