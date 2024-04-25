class Solution {
    public int solution(String s) {
        int answer = 0;
        while (!s.isEmpty()) {
            int same = 0, diff = 0;
            char c = s.charAt(0);
            int i = 0;
            
            while (i < s.length() && (same == 0 || same != diff)) {
                if (s.charAt(i) == c) {
                    same++;
                } else {
                    diff++;
                }
                i++;
            }
            
            s = s.substring(i);
            answer++;
        }
        return answer;
    }
}