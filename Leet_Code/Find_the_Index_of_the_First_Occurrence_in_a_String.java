class Solution {
    public int strStr(String haystack, String needle) {
        int hl = haystack.length(), nl = needle.length();
        if (hl < nl) {
            return -1;
        }
        for (int i = 0; i <= hl - nl; i++) {
            int j = 0;
            for (; j < nl && needle.charAt(j) == haystack.charAt(i+j); j++) {
                    
            }
            if (j == nl) {
                return i;
            }
        }
        return -1;
    }
}