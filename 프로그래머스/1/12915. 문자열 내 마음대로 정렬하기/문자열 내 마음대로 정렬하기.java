import java.util.*;

class Solution {
    public String[] solution(String[] strings, int n) {
        String[] answer = new String[strings.length];
        
        for (int i = 0; i < strings.length; i++) {
            String cal = strings[i].substring(n, n + 1);
            strings[i] = cal + strings[i];
        }
        
        Arrays.sort(strings);
        
        for (int i = 0; i < strings.length; i++) {
            answer[i] = strings[i].substring(1);
        }
        
        return answer;
    }
}