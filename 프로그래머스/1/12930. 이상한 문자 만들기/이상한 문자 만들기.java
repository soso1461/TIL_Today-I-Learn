class Solution {
    public String solution(String s) {
        StringBuilder answer = new StringBuilder();
        int index = 0;
        
        for (int i = 0; i < s.length(); i++) {
            char word = s.charAt(i);
            
            if (word == ' ') {
                answer.append(word);
                index = 0;
            } else {
                if (index % 2 == 0) {
                    answer.append(Character.toUpperCase(word));
                } else {
                    answer.append(Character.toLowerCase(word));
                }
                index++;
            }
        }
        
        return answer.toString();
    }
}