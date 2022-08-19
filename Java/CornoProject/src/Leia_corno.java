import java.util.Scanner;

public class Leia_corno {

	public static void main(String[] args) {
		Scanner leia = new Scanner(System.in);
		
		int n;
		System.out.println("Insira um valor .:");
		leia.nextInt();
		
		if (n%2 <= 0) {
			System.out.println("Par");
		
		}
		else {
			System.out.println("Impar");
		}
		
		leia.close();

	}

}
