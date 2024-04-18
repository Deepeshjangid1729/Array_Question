#include<iostream>
using namespace std;

int binarysearching(array , n ,searching_key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid = int(s+e)/2;
        if(array[mid]==searching_key)
        {
            return mid;
        }
        else if(array[mid]>searching_key)
        { 
            e=mid-1;


        }
        else{
            e=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"enter the n value"<<endl;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int searching_key;
    cin>>searching_key;

    cout<<binarysearching(array , n ,searching_key);


}