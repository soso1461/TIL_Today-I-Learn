import java.util.*;

class Solution {
    public int[] solution(int[] numbers) {
        Set<Integer> sum = new HashSet<>();
        
        for (int i = 0; i < numbers.length; i++) {
            for (int j = i + 1; j < numbers.length; j++) {
                sum.add(numbers[i] + numbers[j]);
            }
        }
        
        ArrayList<Integer> answer = new ArrayList<>(sum);
        Collections.sort(answer);
        
        return answer.stream().mapToInt(i -> i).toArray();
    }
}