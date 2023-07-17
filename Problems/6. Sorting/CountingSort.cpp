class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // Create a vector to store the count of each lowercase English letter.
        vector<int> count(26, 0);

        // Get the length of the input string.
        int length = arr.size();

        // Count the occurrences of each letter in the input string.
        for (int i = 0; i < length; i++)
            count[arr[i] - 'a']++;

        // Modify the count array to hold the position of each letter in the sorted output.
        for (int i = 1; i < 26; i++)
            count[i] = count[i - 1] + count[i];

        // Create a new string `output` to store the sorted letters.
        string output(length, 'a');

        // Fill the `output` string by placing each letter in its correct sorted position.
        for (int i = length - 1; i >= 0; i--){
            output[count[arr[i] - 'a'] - 1] = arr[i];
            count[arr[i] - 'a']--;
        }

        // Update the input string `arr` with the sorted `output`.
        for (int i = 0; i < length; i++)
            arr[i] = output[i];

        // Return the sorted string.
        return arr;
    }
};