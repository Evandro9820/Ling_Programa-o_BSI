import java.util.Scanner;

public class Corno_principal {

	public static void main(String[] args) {
		Scanner entradadados = new Scanner(System.in);
		int idadesAnos, idadeMeses, idadesDias, idadesTotaldias;

		System.out.println("Calculadora de idade em dias");

		System.out.println("Digite os anos.:");
		idadesAnos = entradadados.nextInt();
		
		System.out.println("Digite os meses.:");
		idadeMeses = entradadados.nextInt();
		
		System.out.println("Digite os dias.:");
		idadesDias=entradadados.nextInt();
		
		idadesTotaldias = idadesAnos*365+idadeMeses + idadesDias;
		
		System.out.println("Idade total em dias .: "+idadesTotaldias);
	}
}