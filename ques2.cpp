// WAP to find the largest three elements in the array.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10]= {1,9,3,2,3,4,10,7,9,9};
    std::sort(arr, arr + 10);
    int l1,l2,l3;
    l1=INT_MIN;
    l2=INT_MIN;
    l3=INT_MIN;
    for(int i = 0 ; i<10 ; i++)
    {
        if(arr[i]>l1)
        {
            l3=l2;
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>l2 && arr[i]!=l1)
        {
            l3=l2;
            l2=arr[i];
        }
        else if(arr[i]>l3 && arr[i]!=l2 && arr[i]!=l1)
        {
            l3=arr[i];
        }
    }
    cout<<l1<<' '<<l2<<" "<<l3;
}