package Bronze;

import java.util.Scanner;

public class Baek25305_230904 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int totalNumber = sc.nextInt();
        int cut = sc.nextInt();

        int[] arr = new int[totalNumber];
        for (int i = 0; i < arr.length; i++) {
            int num = sc.nextInt();
            arr[i] = num;
        }

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j + 1] > arr[j]) {
                    int tmp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        System.out.println(arr[cut - 1]);
        sc.close();
    }
}
