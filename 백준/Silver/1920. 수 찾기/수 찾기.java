import java.util.*;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        Set<Integer> set = new HashSet<>();
        for (int i = 0; i < N; i++) {
            set.add(sc.nextInt());
        }
        
        int M = sc.nextInt();
        int[] num = new int[M];
        for (int i = 0; i < M; i++) {
            num[i] = sc.nextInt();
        }

        for (int i = 0; i < M; i++) {
            if (set.contains(num[i])) {
                System.out.println(1);
            } else System.out.println(0);
        }

    }
}