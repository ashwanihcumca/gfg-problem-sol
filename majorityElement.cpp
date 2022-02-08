
// Problem: majority element (copied from gfg )
// link : https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1


class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        std::map<int,int> M;
        for(int i=0; i < size; i++)
        {
            M[a[i]]++; 
            
            if(M[a[i]] > size/2)
                return a[i];
        }
        return -1;
    }
};
