class Solution
{
    //Function to find the minimum indexed character.
     public static int minIndexChar(String s, String t)
    {
      Map<Character,Integer> map = new LinkedHashMap<>();
      for(int i =0;i<s.length();i++){
          if(!map.containsKey(s.charAt(i))){
              map.put(s.charAt(i),i);
          }
      }
      
      int min = Integer.MAX_VALUE;
      for(int i=0;i<t.length();i++){
          if(map.containsKey(t.charAt(i))){
              int index = map.get(t.charAt(i));
              if(min > index){
                  min = index;
              }
          }
      }
      if(min == Integer.MAX_VALUE){
          return -1;
      }
      return min;
    }
}