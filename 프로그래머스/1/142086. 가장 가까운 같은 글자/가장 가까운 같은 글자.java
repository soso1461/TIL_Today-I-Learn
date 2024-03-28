class Solution {
    public int[] solution(String s) {
        int[] answer = new int[s.length()];
        
        int[] lastSeen = new int[26];
        for (int i = 0; i < 26; i++) {
            lastSeen[i] = -1;
        }
        
        for (int i = 0; i < s.length(); i++) {
            int charIndex = s.charAt(i) - 'a';
            
            if (lastSeen[charIndex] != -1) {
                answer[i] = i - lastSeen[charIndex];
            } else {
                answer[i] = -1;
            }
            lastSeen[charIndex] = i;
        }
        
        return answer;
    }
}