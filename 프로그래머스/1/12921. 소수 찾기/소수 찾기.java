class Solution {
    public int solution(int n) {
        boolean[] primeCheck = new boolean[n + 1];
        int answer = 0;
        
        for (int i = 2; i <= n; i++) {
            primeCheck[i] = true;
        }
        
        for (int i = 2; i * i <= n; i++) {
            if (primeCheck[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primeCheck[j] = false;
                }
            }
        }
        
        for (int i = 2; i <= n; i++) {
            if (primeCheck[i]) {
                answer++;
            }
        }
        
        return answer;
    }
}