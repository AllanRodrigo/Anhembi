package exercicios.exercicio02;

/**
 * relogio
 */
public class relogio {

    public int hora;
    public int minuto;
    public int segundo;

    public String obterHora(){
        return String.format("%s:%s:%s", hora, minuto, segundo);
    }
}