class Solution {
    public String solution(int a, int b) {
        String answer = "";
        int[] monthDay = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day = 0;
        
        for (int i = 0; i < a - 1; i++) {
            day += monthDay[i];
        }
        
        day += b;
        
        String[] dayName = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
        answer = dayName[(day - 1) % 7];
         
        return answer;
    }
}