import java.util.*;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int[] num = new int[8];
        
        for (int i = 0; i < num.length; i++) {
            num[i] = sc.nextInt();
        }

        String answer = "";
        for (int i = 0; i < num.length - 1; i++) {
            if (num[i] == num[i + 1] - 1) answer = "ascending";
            else if (num[i] == num[i + 1] + 1) answer = "descending";
            else {
                answer = "mixed";
                break;
            }
        }
        System.out.println(answer);

    }
}