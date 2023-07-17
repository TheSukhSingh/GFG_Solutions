//Function to update a value in input array and segment tree.
void update(int arr[], int arrSize, int index, int value)
{
    arr[index - 1] = value;
    return;
}


//Funciton to return the Maximum-Sum in the range.
int query(int arr[], int n, int l, int r) 
{
    int ans = arr[l - 1];
    int sum = arr[l - 1];
    for(int i = l; i < r; i++){
        sum = max(sum + arr[i] , arr[i]);
        ans = max(sum, ans);
    }
    return ans;
}