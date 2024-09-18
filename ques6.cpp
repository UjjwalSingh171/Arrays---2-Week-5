// Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,1,2,2,3,3,4,5,5,6};
    for(int i = 0 ; i<10 ; i++)
    {
        bool flag = true;
        for(int j = 0 ; j<10 ; j++)
        {
            if(i==j)
            {
                continue;
            }
            if(arr[i]==arr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<i<<endl;
        }
    }
}