class Solution {
    public String solution(String my_string) {
            String ans = "";
            for(int i = 0; i < my_string.length(); i++) {
                // if(my_string[i] == 'a') C/C++ 방식
                // if(my_string.charAt(i) == 'a') java 방식 (String 객체)
                if(my_string.charAt(i) == 'a' || my_string.charAt(i) == 'e' || my_string.charAt(i) == 'i' || my_string.charAt(i) == 'o' || my_string.charAt(i) == 'u') {
                    continue;
                } else {
                    ans += my_string.charAt(i);
                }
            }
            return ans;
        }
}