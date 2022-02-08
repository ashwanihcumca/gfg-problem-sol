Problem title: Plus One (copied from geeksforgeeks)
Link: https://practice.geeksforgeeks.org/problems/plus-one/1/

Solution:
// time_complexity: O(N)
// space_complexity : O(1)

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        int index = N-1;
        while(index>=0)
        {
            if(arr[index] == 9)
            {
                arr[index] =0;
            }
            else
            {
                arr[index] += 1;
                return arr;
            }

            index--;
        }
        arr.insert(arr.begin()+0,1);
        return arr;

    }
};
