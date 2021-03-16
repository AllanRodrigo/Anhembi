package exemplos;

public class exemplo02 {
    public static void main(String[] args) {
        int valorFinal;
        valorFinal = soma(5, 10);
        System.out.println("Soma = " + valorFinal);
    }

    static int soma(int a, int b) {
        int resultado;

        resultado = a + b;

        return resultado;
    }
}
