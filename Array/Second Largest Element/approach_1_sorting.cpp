/* 
Time Complexity: O(n), as we are traversing the array only once.
Auxiliary space: O(1) 
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        for (int i = n - 2; i >= 0; i--)
        {

            if (arr[i] != arr[n - 1])
            {
                return arr[i];
            }
        }
        return -1;
    }
};

int main()
{

    vector<int> arr = {12, 35, 1, 10, 34, 1};
    Solution s1;

    int result = s1.getSecondLargest(arr);
    cout << result << endl;
    
    return 0;
}