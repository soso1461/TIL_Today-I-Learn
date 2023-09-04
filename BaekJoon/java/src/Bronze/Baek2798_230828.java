package Bronze;

import java.util.Scanner;

public class Baek2798_230828 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int count = sc.nextInt();   // # 몇개의 카드
    int goal = sc.nextInt();    // # 합의 목표

    int[] card = new int[count];  // # 카드 개수만큼 배열에 넣기 위해 생성

    for (int i = 0; i < count; i++) {
      card[i] = sc.nextInt();     // # 배열에 카드 집어넣어줌
    }

    int result = search(card, count, goal);   // # static search에서 값 가져옴

    System.out.println(result);
  }

  static int search(int[] card, int count, int goal) {
    int result = 0;
    
    // # 카드 3개를 골라야해서 count-2 까지만 순회
    for (int i = 0; i < count - 2; i++) {
      // # 두번째 카드는 첫번째 카드 다음부터 count-1 까지만 순회
      for (int j = i + 1; j < count - 1; j++) {
        // # 세번째 카드는 두번째 카드 다음부터 count 까지 순회
        for (int k = j + 1; k < count; k++) {
          // # 3개 카드의 합
          int temp = card[i] + card[j] + card[k];

          // # goal과 세 카드의 합이 같다면 temp 반환
          if (goal == temp) {
            return temp;
          }

          // # 세 카드의 합이 이전 합보다 크면서 goal 보다 작을 경우 result 갱신
          if (result < temp && temp < goal) {
            result = temp;
          } } } }
    return result;
  }
}
