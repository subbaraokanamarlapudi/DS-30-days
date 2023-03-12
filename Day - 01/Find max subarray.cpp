//  We know that many subarrays in a array. Sum of elementss of these elements are called subarray.
//  i/p: [-2,-3,4,-1,-2,5,-3]
//  o/p: 7

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,-1,3};    // {-2,-3,4,-1,-2,5,-3}
    int max = arr[0];
    int contri = 0;

    for(int i=0; i<3; i++)
    {
        contri = contri + arr[i];
        if(max<contri)
        {
            max = contri;
        }

        if(contri < 0)
        {
            contri = 0;
        }
    }

    cout<<max;
}