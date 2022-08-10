import java.util.*;

class FlowEx6 {
        public static void main(String[] args) {
                System.out.print("Enter the current month.>");

                Scanner scanner = new Scanner(System.in);
                int month = scanner.nextInt();

                switch(month) {         // 조건식과 case문의 값은 반드시 정수여야 함
                        case 3 : 
                        case 4 : 
                        case 5 : 
                                System.out.println("It's Spring now.");
                                break;
                        case 6 : case 7 : case 8 : 
                                System.out.println("It's summer now");
                                break;
                        case 9 : case 10 : case 11 : 
                                System.out.println("It's Fall now.");
                                break;
                        default : 
                                System.out.println("Winter has come.");
                }
        }
}
