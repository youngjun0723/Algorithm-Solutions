class Solution {
    public int solution(int slice, int n) {
        int ans = n / slice;
        if(n % slice != 0) {
            ans++;
        }

        return ans;
    }
}