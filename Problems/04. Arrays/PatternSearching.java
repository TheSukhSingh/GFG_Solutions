class Solution {
    public static boolean searchPattern(String str, String pat) {
        int patAscii = 0;
        int strAscii = 0; //till pat.length
        for(int i = 0; i < pat.length(); i++){
            char p = pat.charAt(i);
            patAscii += p;
            
            char s = str.charAt(i);
            strAscii += s;
        }
        if(patAscii == strAscii){
			return true;
		}
        
        for(int i = pat.length(); i < str.length(); i++){
            strAscii = strAscii + str.charAt(i) - str.charAt(i - pat.length());
			if(strAscii == patAscii){
				return true;
			}
        }
        
        return false;
    }
}