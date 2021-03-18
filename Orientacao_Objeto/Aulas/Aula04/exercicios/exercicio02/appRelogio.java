package exercicios.exercicio02;

/**
 * appRelogio
 */
public class appRelogio {

    public static void main(String[] args) {
        relogio objRelogio = new relogio();

        objRelogio.hora = 21;
        objRelogio.minuto = 20;
        objRelogio.segundo = 33;
        System.out.println(objRelogio.obterHora());
    }
}