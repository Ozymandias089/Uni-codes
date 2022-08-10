import java.util.*;

class FlowEx32 {
	public static void main(String[]args) {
		int menu = 0;
		int num = 0;
		
		Scanner scanner = new Scanner(System.in);
		while(true) {
			System.out.println("(1) square");
			System.out.println("(2) square root");
			System.out.println("(3) log");
			System.out.print("Select a menu to access (0 : quit)> ");

			String tmp = scanner.nextLine();
			menu = Integer.parseInt(tmp);

			if(menu == 0) {
				System.out.println("Exiting program.");
				break;
			} else if (!(1 <= menu && menu <= 3)) {
				System.out.println("Invalid input. (0 : quit)");
				continue;
			}

			System.out.println("Menu you selected is " + menu + ".");
		}
	}
}
