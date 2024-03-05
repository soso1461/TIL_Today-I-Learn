import java.util.*;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        int tmp = 0;
        
        while (n > 0) {
            tmp = n;
            tmp %= 10;
            answer += tmp;
            n = n / 10;
        }

        return answer;
    }
}