class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        // Sorting the arrays in ascending order of arrival and departure times.
        sort(arr, arr + n);
        sort(dep, dep + n);
        
        // Initializing variables to keep track of platforms required and the minimum platforms required.
        int currPlatformRequired = 1;
        int minimunPlatformRequired = 1;
        int indexOfArrival = 1; // Start from the second arrival time.
        int indexOfDeparture = 0; // Start from the first departure time.
        
        // Loop until we have considered all trains.
        while(indexOfArrival < n && indexOfDeparture < n) {
            
            // If the current train's arrival time is before or equal to the next departure time,
            // we need an additional platform and move to the next arrival time.
            if (arr[indexOfArrival] <= dep[indexOfDeparture]) {
                currPlatformRequired++;
                indexOfArrival++;
            }
            // If the current train's arrival time is after the next departure time,
            // we can release a platform and move to the next departure time.
            else if (arr[indexOfArrival] > dep[indexOfDeparture]) {
                currPlatformRequired--;
                indexOfDeparture++;
            }
            
            // Update the minimum platforms required so far.
            minimunPlatformRequired = max(minimunPlatformRequired, currPlatformRequired);
        }
        
        // Return the minimum platforms required to safely manage the arrival and departure of all trains.
        return minimunPlatformRequired;
    }
};