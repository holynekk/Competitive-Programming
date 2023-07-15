class Solution {
    public boolean is_vowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        } return false;
    }
    public String reverseVowels(String s) {
        int i = 0, j = s.length() - 1;
        char[] sArray = s.toCharArray();
        while (i < j) {
            if (!is_vowel(sArray[i])) {
                i++;
                continue;
            } if (!is_vowel(sArray[j])) {
                j--;
                continue;
            }
            char c = sArray[i];
            sArray[i] = sArray[j];
            sArray[j] = c;
            i++;j--;
        }
        return new String(sArray);
    }
}