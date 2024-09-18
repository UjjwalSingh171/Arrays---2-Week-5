// Count the number of elements strictly greater than x.
#include<iostream>
using namespace std;
int main()
{
    int x; 
    cout<<"Enter x: ";
    cin>>x;

    int arr[10]= {1,2,3,2,3,4,5,7,8,9};
    int count = 0;

    for(int i = 0 ; i<10 ; i++)
    {
        if(arr[i]>x)
        {
            count++;
        }
    }
    cout<<count;
}
