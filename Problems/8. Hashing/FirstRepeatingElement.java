
class Solution {
    // Function to return the position of the first repeating element.
    public static int firstRepeated(int[] arr, int n) {
        int res = -1; // Variable to store the position of the first repeating element
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>(); // Create a HashMap to store elements and their positions

        // Iterate through the array in reverse order
        for (int i = n - 1; i >= 0; i--) {
            if (map.containsKey(arr[i])) { // If the element already exists in the HashMap
                // Update the result with the minimum of the current position and the previously stored position + 1
                res = Math.min(map.get(arr[i]) + 1, i + 1);
            } else {
                map.put(arr[i], i); // Add the element to the HashMap with its position
            }
        }

        return res; // Return the position of the first repeating element (or -1 if not found)
    }
}