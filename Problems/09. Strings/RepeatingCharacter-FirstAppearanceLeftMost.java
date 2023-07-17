class Solution
{
    //Function to find repeated character whose first appearance is leftmost.
    static int repeatedCharacter(String s)
    {
       char c1 = '\0';
        Map<Character, Integer> map = new LinkedHashMap<>();
        for (char c : s.toCharArray()) {
            if (!map.containsKey(c)) {
                map.put(c, 1);
            } else {
                map.put(c, map.get(c) + 1);
            }
        }
        for (Map.Entry<Character, Integer> entry : map.entrySet()) {
            if (entry.getValue() >= 2) {
                c1 = entry.getKey();
                break;
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (c1 == s.charAt(i)) {
                return i;
            }
        }
        return -1;
    }
}