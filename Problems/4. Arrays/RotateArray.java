
class Solution
{
    //Function to rotate an array by d elements in counter-clockwise direction. 
    static void rotateArr(int arr[], int d, int n)
    {
        // add your code here
         if (d > n)
        {
            d = d % n;
        }
        if (d > 0)
        {
            int[] arrCopy = new int[d];

            int j = 0;

        
            for (int i = 0; i < arrCopy.length; i++)
            {
                arrCopy[i] = arr[j];
                j++;
            }

            j = 0;
   
            for (int i = d ; i < n; i++)
            {
                arr[j] = arr[i];
                j++;
            }

 

            int k = 0;

            for (int i = j ; i < n; i++)
            {
                arr[i] = arrCopy[k];
                k++;
            }
        }
    }
}