class Solution{
public:
    // Function to sort the array according to the absolute difference with given number.
    void sortABS(int A[], int N, int k) {
        // Using stable_sort to maintain the relative order of elements with equal absolute differences.
        stable_sort(A, A + N, [k](int a, int b) {
            // Lambda function to compare elements based on their absolute difference with 'k'.
            // If the absolute difference of 'a' with 'k' is less than the absolute difference of 'b' with 'k',
            // then 'a' should come before 'b' in the sorted order.
            return (abs(a - k) < abs(b - k));
        });
    }
};