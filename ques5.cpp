// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,9,3,2,3,4,10,7,9,9};
    for(int i = 0 ; i<10 ; i++)
    {
        if(i%2==0)
        {
            arr[i]+=10;
        }
        else
        {
            arr[i]*=2;
        }
    }
    
}