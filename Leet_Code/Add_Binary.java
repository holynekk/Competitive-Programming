class Solution {
    public String addBinary(String a, String b) {

        StringBuilder sb = new StringBuilder();
        int c = 0, i = a.length() - 1, j = b.length() - 1;

        while (i >= 0 || j >= 0 || c == 1) {
            if (i >= 0) {
                c += a.charAt(i) == '1' ? 1 : 0;
            }
            if (j >= 0) {
                c += b.charAt(j) == '1' ? 1 : 0;
            }
            i--;j--;
            sb.append(c % 2);
            c /= 2;
        }
        return sb.reverse().toString();
        
    }
}
