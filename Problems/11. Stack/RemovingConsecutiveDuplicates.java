class Solution
{
    public static String removeConsecutiveDuplicates(String str)
    {
        Stack<Character> unique = new Stack<>();
        
        for(int i = 0;i<str.length();i++)
        {
            char x = str.charAt(i);
            if(unique.isEmpty() || unique.peek() != x)
                unique.push(x);
        }
        Iterator<Character> itr = unique.iterator();
        String result = "";
        
        while(itr.hasNext())
            result += itr.next();
        
        return result;
    }
}