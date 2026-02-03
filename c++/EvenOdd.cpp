#include<iostream>
using namespace std;

int main()
{

int arr[]={1,2,3,4,5,6,7,8,9,10};
int size=sizeof(arr)/sizeof(arr[0]);

int num;
cout<<"Enter number to chech if even or odd:";
cin>>num;

if(num%2==0){
        cout<<"The given number is Even"<<endl<<endl;
}else{
    cout<<"The given number is Odd"<<endl<<endl;
}
cout<<"All even numbers:"<<endl;
for(int i=0;i<size;i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<"\t";
    }
}
cout<<endl;
cout<<"ALl the Odd numbers:"<<endl;
 for(int i=0;i<size;i++){
    if(arr[i]%2!=0){
        cout<<arr[i]<<"\t";
    }
}
}
