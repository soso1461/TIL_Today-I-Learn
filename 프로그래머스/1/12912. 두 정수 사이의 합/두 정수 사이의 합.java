class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        int tmpA = a;
        int tmpB = b;
        
        if (a > b) {
            b = tmpA;
            a = tmpB;
        }
        
        for (int i = a; i <= b; i++) {
            answer += i;
        }
        
        return answer;
    }
}