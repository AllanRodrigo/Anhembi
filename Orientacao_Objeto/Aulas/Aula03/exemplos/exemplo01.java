package exemplos;

/**
 * exemplo01
 */
public class exemplo01 {

    public static void main(String[] args) {
        linha();
        System.out.println("Meu programa v 0.1");
        linha();
        System.out.println("10/03/21");
        linha2(8);
        linha2(28);
        linha3(10, '#');
        linha3(20, '@');
    }

    static void linha(){
        System.out.println("------------------");
    }

    static void linha2(int tamanho){
        for(int i=0; i < tamanho; i++)
            System.out.print("-");

        System.out.println();
    }

    static void linha3(int tamanho, char tipo){
        for(int i=0; i < tamanho; i++)
            System.out.print(tipo);

        System.out.println();
    }
}