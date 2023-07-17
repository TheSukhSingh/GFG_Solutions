class Solution {
public:
    // Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n) {
        // Sort the array in ascending order to make it easier to find triangle combinations.
        sort(arr, arr + n);

        int totalTriangles = 0; // Variable to store the count of possible triangles.

        for (int largestSideIndex = n - 1; largestSideIndex >= 2; largestSideIndex--) {
            int leftSideIndex = 0; // Pointer to the leftmost smallest side.
            int rightSideIndex = largestSideIndex - 1; // Pointer to the element just before the current largest element.

            while (leftSideIndex < rightSideIndex) {
                int sumOfTwoSmallestSides = arr[leftSideIndex] + arr[rightSideIndex];

                // If the sum of two smallest sides is greater than the largest side,
                // then a triangle can be formed with these three elements.
                if (sumOfTwoSmallestSides > arr[largestSideIndex]) {
                    // Increment the count of triangles by (rightSideIndex - leftSideIndex).
                    // Each element from rightSideIndex to leftSideIndex+1 can form a triangle
                    // with the current largest element.
                    totalTriangles += (rightSideIndex - leftSideIndex);
                    rightSideIndex--;
                } else {
                    // If the sum of two smallest sides is not greater than the largest side,
                    // increment the left pointer to explore other combinations.
                    leftSideIndex++;
                }
            }
        }
        return totalTriangles;
    }
};