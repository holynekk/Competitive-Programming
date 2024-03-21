class Solution {
    public boolean wordPattern(String pattern, String s) {
        Map<Character, String> patternToWord = new HashMap<>();
        Map<String, Character> wordToPattern = new HashMap<>();
        List<String> words = Arrays.asList(s.split(" "));
        if (words.size() != pattern.length()) {
            return false;
        }
        for (int i = 0; i < pattern.length(); i++) {
            Character c = pattern.charAt(i);
            String word = words.get(i);
            if (patternToWord.containsKey(c) && !patternToWord.get(c).equals(word)) {
                return false;
            } else if (wordToPattern.containsKey(word) && wordToPattern.get(word) != c) {
                return false;
            }
            patternToWord.put(c, word);
            wordToPattern.put(word, c);
        }

        return true;
    }
}