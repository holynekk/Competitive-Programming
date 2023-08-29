class Solution {
    public String removeStars(String s) {
        Stack<Character> stringStack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '*') {
                stringStack.pop();
            } else {
                stringStack.push(s.charAt(i));
            }
        }

        StringBuilder result = new StringBuilder();
        while (!stringStack.isEmpty()) {
            result.append(stringStack.pop());
        }
        return result.reverse().toString();
    }
}