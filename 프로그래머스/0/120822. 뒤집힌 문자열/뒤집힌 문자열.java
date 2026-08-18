class Solution {
    public String solution(String my_string) {
        // 문자열 뒤집을 때 StringBuilder사용
        String ans = new StringBuilder(my_string).reverse().toString();
        return ans;
    }
}