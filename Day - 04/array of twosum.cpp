// Find the sum of 2 numbers in an array and give the index of the 2 numbers
// Time Complexity: O(n^2) I/P is: {2,7,11,19} and sum is 9 
// output is : [0,1] ----> index of 2 numbers

#include <iostream>
#include <vector>
#include<unordered_map>
#include<algorithm>

using namespace std;   

int main()
{
    int arr[] = {2,7,11,19};
    int sum = 9;
    
    unordered_map<int,int> m;
    for(int i = 0; i<4; i++)
    {
        if(m.find(sum - arr[i])!=m.end())
        {
            cout<<m[sum-arr[i]];
            cout<<" "<<i;
        }
        m[arr[i]] = i;
    }
}