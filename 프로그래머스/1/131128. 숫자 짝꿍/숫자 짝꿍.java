class Solution {
    public String solution(String X, String Y) {
        int[] countX = new int[10];
        int[] countY = new int[10];
        
        for (char x : X.toCharArray()) {
            countX[x - '0']++;
        }
        for (char y : Y.toCharArray()) {
            countY[y - '0']++;
        }
 
        StringBuilder sb = new StringBuilder();
        for (int i = 9; i >= 0; i--) {
            int common = Math.min(countX[i], countY[i]);
            sb.append(String.valueOf(i).repeat(common));
        }
 
        String answer = sb.toString();
        if (answer.isEmpty()) {
            return "-1";
        }
        if (answer.charAt(0) == '0') {
            return "0";
        }
        return answer;
    }
}