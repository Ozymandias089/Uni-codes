import java.util.*;

class FlowEx7 {
	public static void main(String[]args){
		System.out.print("Enter Rock(2) or Scissor(1) or Paper(3).>");

		Scanner scanner = new Scanner(System.in);
		int user = scanner.nextInt();
		int com = (int)(Math.random() * 3) + 1;
		switch(user-com){
			case 2: case -1:
				System.out.println("You lost.");
				break;
			case 1: case -2:
				System.out.println("you won.");
				break;
			case 0: 
				System.out.println("It's a draw.");
				break;
		}
	}
}
