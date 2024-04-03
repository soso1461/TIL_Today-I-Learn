class Solution {
    public int solution(int a, int b, int n) {
        int answer = 0;
        int coke = 0;
        
        while (n >= a) {
            coke = n / a;
            coke = b * coke;
            n = coke + (n % a);
            answer += coke;
        }
        
        return answer;
    }
}