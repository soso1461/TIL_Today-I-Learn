package Silver;

import java.util.Scanner;

public class Baek2839_230903 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int inputNumber = sc.nextInt();

        sc.close();
        if (inputNumber == 4 || inputNumber == 7) {
            System.out.println(-1);
        } else if (inputNumber % 5 == 0) {
            System.out.println(inputNumber / 5);
        } else if (inputNumber % 5 == 1 || inputNumber % 5 == 3) {
            System.out.println((inputNumber / 5) + 1);
        } else if (inputNumber % 5 == 2 || inputNumber % 5 == 4) {
            System.out.println((inputNumber / 5) + 2);
        }

    }
}
