// /*
//     Rotate the matrix 90 deg
//     Input: 1 2 3
//            4 5 6
//            7 8 9
//     Output: 7 4 1
//             8 5 2
//             9 6 3
// */

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

     // transpose matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // reverse each row

    for(int i=0; i<3; i++)
    {
        reverse(arr[i],arr[i]+3);
    }

    // print the output of the matrix
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}