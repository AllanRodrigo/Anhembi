package exercicios;

public class exercicio02 {
    public static void main(String[] args) {
        exibirDados("Allan Reis", '@');
    }

    static void exibirDados(String strMensagem_, char chrCaracter){
        System.out.println(strMensagem_);

        for(int i=0; i < strMensagem_.length(); i++)
            System.out.print(chrCaracter);
    }
}
