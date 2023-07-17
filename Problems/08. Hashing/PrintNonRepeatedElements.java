class Solution
{
    //Function to return non-repeated elements in the array.
    static ArrayList<Integer> printNonRepeated(int arr[], int n)
    {
        // add your code here
        LinkedHashSet<Integer> hs = new LinkedHashSet<>();
        LinkedHashSet<Integer> ss = new LinkedHashSet<>();
        ArrayList<Integer> al = new ArrayList<>();
        for(int i : arr){
            if(hs.contains(i)==true){
                ss.add(i);
            }
            else{
                hs.add(i);
            }
        }
        hs.removeAll(ss);
        for(int i : hs){
            al.add(i);
        }
        return al;
    }
}