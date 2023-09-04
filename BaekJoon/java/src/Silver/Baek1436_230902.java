package Silver;

import java.util.Scanner;

public class Baek1436_230902 {
    // ! contains() 메소드를 사용하면
    // ! 해당 문자열 안에 검사하려는 문자열이 있는지 검사하고 있으면 true, 없으면 false를 반환
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int inputNumber = sc.nextInt();

        int num = 666;
        int count = 1;

        while (count != inputNumber) {
            num++;
            if (String.valueOf(num).contains("666")) {
                count++;
            }
        }
        System.out.println(num);
        }
    }
