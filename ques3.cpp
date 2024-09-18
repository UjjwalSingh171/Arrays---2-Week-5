// Check if the given array is sorted or not.
#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,9,3,2,3,4,10,7,9,9};
    
    for(int i = 0 ; i<9 ; i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<"Not sorted"<<endl;
            break;
        }
    }
    std::sort(arr,arr+10);
     for(int i = 0 ; i<9 ; i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<"Not sorted"<<endl;
            break;
        }
        else 
        {
            cout<<"sorted";
            break;
        }
    }
}