import java.util.*;

class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        String[][] members = new String[N][2];
        
        for (int i = 0; i < N; i++) {
            members[i][0] = sc.next();
            members[i][1] = sc.next();
        }

        Arrays.sort(members, new Comparator<String[]>() {
            @Override
            public int compare(String[] s1, String[] s2) {
                return Integer.parseInt(s1[0]) - Integer.parseInt(s2[0]);
            }
        });

        for (int i = 0; i < N; i++) {
            System.out.println(members[i][0] + " " + members[i][1]);
        }
            
    }
}