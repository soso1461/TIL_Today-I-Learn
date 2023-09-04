package Bronze;

import java.util.Scanner;

public class Baek2587_230904 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[5];
        int sum = 0;
        int result = 0;

        for (int i = 0; i < 5; i++) {
            int inputNumber = sc.nextInt();
            arr[i] = inputNumber;
        }

        for (int i = 0; i < 5 - 1; i++) {
            for (int j = 0; j < 5 - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
        for (int i = 0; i < 5; i++) {
            sum = sum + arr[i];
            result = sum / 5;
        }
        System.out.println(result);
        System.out.println(arr[2]);
    }
}
