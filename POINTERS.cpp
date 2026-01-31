#include<iostream>
using namespace std;

string hello(string *ptr){
   * ptr="Himanshu Mishra";
    return *ptr;
    
}

int main(){
   /* int a=12; //Variable
    int *ptr=&a; //Pointer storing address of a
    int **twoptr=&ptr; //pointer to pointer(add of ptr)
    cout<<ptr<<endl; 
    cout<<twoptr<<endl;//derefrence pointer
    cout<<*(&a)<<endl;  "
    cout<<*(&ptr)<<endl; "
    cout<<***(&twoptr)<<endl; "

string a="Himanshu ";
hello(&a);
cout<<a;
return 0;
*/
int arr[]={1,2,3,4,5};
int *ptr=&arr[3];
//cout<<*arr+3<<endl;
cout<<arr<<endl<<ptr<<endl;
cout<<(arr<=ptr);
}