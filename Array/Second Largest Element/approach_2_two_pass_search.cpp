/*
[Approach: We will check largest and then second larget element in seperate iteration.]

Time Complexity: O(n*log(n)): as sorting the array takes O(n*log(n)) time and traversing the array can take O(n) time in the worst case.
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
        int largest = -1, second_largest = -1;

        // searching largest value
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }

        // searching second_largest value
        for (int i = 0; i < arr.size(); i++)
        {
            if (second_largest < arr[i] && arr[i] < largest)
            {
                second_largest = arr[i];
            }
        }

        return second_largest;
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