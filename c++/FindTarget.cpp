#include<iostream>
using namespace std;

bool FindTarget(int arr[],int size,int target)
{
    bool found=false;
    for(int i=0;i<size;i++){

    if(arr[i]==target){
     found=true;
    return found;
    }
}
return found;
}

int main(){
int nums[]={12,45,6,89,23,7};
int size=sizeof(nums)/sizeof(nums[0]);
int target;
cout<<"Enter Target value to be found:";
cin>>target;

cout<<FindTarget(nums,size,target);
}