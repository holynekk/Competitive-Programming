class Solution {
    public int largestAltitude(int[] gain) {
        int result = 0, curr = 0;
        for(int i = 0; i < gain.length; i++) {
            curr += gain[i];
            result = result > curr ? result : curr;
        }
        return result;
    }
}
