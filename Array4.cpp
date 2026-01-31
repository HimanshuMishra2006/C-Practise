#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter elements of the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum:"<<sum<<endl;
    cout<<"Average:"<<sum/n<<endl;
    return 0;
}