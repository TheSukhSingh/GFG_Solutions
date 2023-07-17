class Solution
{
    //Function to find lexicographic rank of a string.
    static int findRank(String S) 
    {
        final long q = 1000000007;
        int [] arr = new int[26];
        for(int i=0;i<S.length();i++){
            arr[S.charAt(i)-'a']++;
        }
        for(int i=0;i<arr.length;i++){
           if(arr[i]>1)return 0;
        }
        long [] arr2 = new long[26];
        arr2[0]=1;
        arr2[1] = 1;
        for(int i=2;i<arr2.length;i++){
            arr2[i] = (i*arr2[i-1])%q;
        }
        int countsmall =0;
        long ans = 0;
        for(int j=0;j<S.length();j++){
            countsmall =0;
            for(int k=0;k<26;k++){
                if(k==S.charAt(j)-'a'){
                    break;
                }
                if(arr[k]==1) countsmall++;
            }
            arr[S.charAt(j)-'a']=0;
            ans += (countsmall*arr2[S.length()-1-j])%q;
            }
            return (int)(ans%q)+1;
    }
}