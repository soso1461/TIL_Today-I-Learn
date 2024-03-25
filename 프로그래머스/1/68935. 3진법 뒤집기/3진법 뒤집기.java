import java.util.*;

class Solution {
    public int solution(int n) {
        int answer = 0;
        
        ArrayList<Integer> list = new ArrayList<>();
        
        while (n > 0) {
            list.add(n % 3);
            n /= 3;
        }
        
        Collections.reverse(list);
        
        int[] arr = list.stream().mapToInt(i -> i).toArray();
        
        for (int i = 1; i <= arr.length; i++) {
            answer += arr[i-1] * Math.pow(3, i-1);
        } 
        
        return answer;
    }
}