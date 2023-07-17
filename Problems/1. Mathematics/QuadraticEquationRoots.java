// User function Template for Java

class Solution {
    public ArrayList<Integer> quadraticRoots(int a, int b, int c) {
        // code here
        ArrayList<Integer> roots = new ArrayList<>();

    	double D = Math.pow(b, 2) - (4 * a * c);
    
    	if (D < 0) {
    		roots.add(-1);
    	} else {
    		double x1 = (-b + Math.sqrt(D)) / (2 * a);
    		double x2 = (-b - Math.sqrt(D)) / (2 * a);
    		
    		int r1 = (int) Math.floor(x1);
    		int r2 = (int) Math.floor(x2);
    		
    		roots.add(Math.max(r1, r2));
    		roots.add(Math.min(r1, r2));
    	}
    
    	return roots;
    }
}