import java.util.*;

class FlowEx28 {
	public static void main(String[]args){
		int input = 0,answer = 0;

		answer = (int)(Math.random() * 100) + 1;
		Scanner scanner = new Scanner(System.in);

		do {
			System.out.print("Enter integer between 1 and 100.>");
			input = scanner.nextInt();

			if(input > answer) {
				System.out.println("Try with smaller number.");
			} else if (input < answer) {
				System.out.println("Try with bigger number.");
			}
		} while (input != answer);

		System.out.println("You are correct!");
	}
}
