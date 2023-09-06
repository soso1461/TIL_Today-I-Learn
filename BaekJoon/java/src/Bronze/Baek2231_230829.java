package Bronze;

import java.util.Scanner;

public class Baek2231_230829 {
  public static void main(String[] args) {
    // Scanner sc = new Scanner(System.in);

    // int N = sc.nextInt();
    // int sum = 0;
    // int tmp = N - 54;
    // int tmp2 = tmp;
    // String tmpLength = String.valueOf(tmp2);

    // while (true) {
    //   String tmpNumber = Integer.toString(tmp2);
    //   for (int i = 0; i < tmpLength.length(); i++) {
    //     int M = tmpNumber.charAt(i)-48;
    //     sum += M;
    //   }
    //   sum += tmp2;
    //   if (sum == N) {
    //     System.out.println(tmp2);
    //     break;
    //   } else {
    //     sum = 0;
    //     ++tmp2;
    //   }
    // }
    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int result = findConstructor(N);

    System.out.println(result);
    sc.close();
  }

  public static int findConstructor(int N) {
    for (int i = 1; i < N; i++) {
      int number = i;
      int sum = number;

      while (number > 0) {
        sum += number % 10; // 현재 자릿수의 값을 더함
        number /= 10; // 다음 자릿수로 이동
      }
      if (sum == N) {
        return i;
      }
    }
    return 0; // 생성자를 찾지 못한 경우
  }
}
