class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character, Character> letterMap1 = new HashMap<>();
        Map<Character, Character> letterMap2 = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {
            Character c1 = s.charAt(i);
            Character c2 = t.charAt(i);
            if (letterMap1.containsKey(c1) && letterMap1.get(c1) != c2) {
                return false;
            } else if (letterMap2.containsKey(c2) && letterMap2.get(c2) != c1) {
                return false;
            } else {
                letterMap1.put(c1, c2);
                letterMap2.put(c2, c1);
            }
        }
        return true;
    }
}