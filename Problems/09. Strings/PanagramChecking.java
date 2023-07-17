class Solution
{
    //Function to check if a string is Pangram or not.
     public static boolean checkPangram  (String str) {
      Set<Character> set = new HashSet<>();
        for(char c : str.toLowerCase().toCharArray()){
            if(Character.isLetter(c)){
                set.add(c);
            }
        }
       return set.size()==26;
    }
}