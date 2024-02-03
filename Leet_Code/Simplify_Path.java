class Solution {
    public String simplifyPath(String path) {
        StringBuilder sb = new StringBuilder(); 
        Stack<String> pathStack = new Stack<>();

        for(String pathElement: path.split("/")) {
            if (pathElement.equals("..")) {
                if (!pathStack.isEmpty()) {
                    pathStack.pop();
                }
            } else if (pathElement.equals(".")) {
                // Do nothing
            } else if (!pathElement.isEmpty()) {
                pathStack.push(pathElement);
            }
        }
        while (!pathStack.isEmpty()) {
            sb.insert(0, "/" + pathStack.pop());
        }

        if (sb.toString().isEmpty()) {
            return "/";
        }
        return sb.toString();

    }
}