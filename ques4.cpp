// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,9,3,2,3,4,10,7,9,9};
    int lsum = 0;
    int rsum = 0;
    for(int i = 0 ; i<10 ; i++)
    {
        if(i%2==0)
        {
            lsum+=arr[i];
        }
    }
     
     for(int i = 0 ; i<10 ; i++)
    {
        if(i%2!=0)
        {
            rsum+=arr[i];
        }
    }
    int r = lsum - rsum;
    cout<<r;
}