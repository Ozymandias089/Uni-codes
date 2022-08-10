import java.util.*;

class MultiArrEx4 {
	public static void main(String[]args) {
		String[][] words = {
			{"Chair", "Uija"}, 
			{"Computer", "Komputa"}, 
			{"integer", "Jeongsu"}
		};

		Scanner scanner = new Scanner(System.in);

		for(int i = 0; i < words.length; i++) {
			System.out.printf("Q%d. the meaning of %d is?", i+1, words[i][0]);

			String tmp = scanner.nextLine();

			if(tmp.equals(words[i][1])) {
				System.out.printf("Correct!%n%n");
			} else {
				System.out.printf("Incorrect. The answer is %s!%n%n", words[i][1]);
			}
		}
	}
}
