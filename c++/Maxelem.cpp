#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,9,4,0,5,6,7,3,8};
    int g=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        
         if(arr[i]>g){
            g=arr[i];
        }
    }
    cout<<"Maximum ELement:"<<g<<endl;
    
return 0;
}