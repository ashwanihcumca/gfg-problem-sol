//Problem: rotate array (copied from gfg)
// Link: https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        int tempArr[d];
        for(int i=0; i<d;i++)
        {
            tempArr[i] = arr[i];
        }
        for(int j=0, k= d; j<n-d ; j++,k++)
        {
            arr[j] = arr[k];
        }
        for(int l= n-d, m=0; l < n; l++,m++)
        {
            arr[l] = tempArr[m];
        }
        
        // code here
    }
};
