import java.util.*;

class Solution {
    public int[] solution(int[] answers) {
        int[] number1 = {1, 2, 3, 4, 5};
        int[] number2 = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] number3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        int oneCount = 0, twoCount = 0, threeCount = 0;
        
        for (int i = 0; i < answers.length; i++) {
            if (number1[i % number1.length] == answers[i]) {
                oneCount++;
            }
            if (number2[i % number2.length] == answers[i]) {
                twoCount++;
            }
            if (number3[i % number3.length] == answers[i]) {
                threeCount++;
            }
        }
        
        int maxCount = Math.max(oneCount, Math.max(twoCount, threeCount));
        
        ArrayList<Integer> list = new ArrayList<>();
        if (oneCount == maxCount) list.add(1);
        if (twoCount == maxCount) list.add(2);
        if (threeCount == maxCount) list.add(3);
        
        int[] answer = new int[list.size()];
        for (int i = 0; i < list.size(); i++) {
            answer[i] = list.get(i);
        }
        
        return answer;
    }
}