// 2 Sum BruteForce
#include<iostream>
using namespace std;
 
int main()

{
    int nums[]={1,2,3,4,0,6};
    int size=sizeof(nums)/sizeof(nums[0]);
    int target=6;
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            if(nums[i]==nums[j]){
                break;
            }
            if(nums[i]+nums[j]==target){
                cout<<"["<<j<<","<<i<<"]";
            }
        }
    }
}