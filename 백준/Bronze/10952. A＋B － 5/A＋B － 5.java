import java.util.*;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
            int A = sc.nextInt();
            if (A == 0) {
                break;
            }
            int B = sc.nextInt();
            System.out.println(A + B);
        }
        
    }
}