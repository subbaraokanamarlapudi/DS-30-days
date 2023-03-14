// Find the next permutation in an array
// Input: 1 3 2 
// Output: 2 1 3


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int arr[] = {1,3,2};
    next_permutation(arr , arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
}