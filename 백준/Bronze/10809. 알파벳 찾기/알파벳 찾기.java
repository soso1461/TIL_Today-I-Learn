import java.util.*;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String S = sc.next();
        int[] num = new int[26];

        for(int i = 0; i < num.length; i++) {
            num[i] = -1;
        }

        for (int i = 0; i < S.length(); i++) {
            char ch = S.charAt(i);
            int index = ch - 'a';
            if (num[index] == -1) {
                num[index] = i;
            }
        }

        for (int i = 0; i < 26; i++) {
            System.out.print(num[i] + " ");
        }
        
    }
}