class Solution {
    public long solution(int price, int money, int count) {
        long answer = -1;
        long accMoney = 0;
        
        for (int i = 1; i <= count; i++) {
            accMoney += price * i;
        }
        
        if (accMoney > money) {
            answer = accMoney - money;
        } else answer = 0;

        return answer;
    }
}