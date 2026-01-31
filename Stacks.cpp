//Brute Force Approach;
#include<iostream>
using namespace std;
#define size 15
int s[size];
int top=-1;

void push(int item)
{
   
    if(top>=size-1){
        cout<<"Stack is full!"<<endl;
    }
    else{
        top++;
        s[top]=item;
    }
}

void pop()
{
  if(top==-1){
    cout<<"Stack is Empty!";
  }
  else{
    cout<<"Deleted item is:"<<s[top];
    top--;
  }cout<<endl;
}

void display()
{
    if(top==-1){
        cout<<"stack is empty!";
    }
    else{
        for(int i=0;i<=top;i++){
            cout<<s[i]<<" ";
        }cout<<endl;
    }
}

int main()
{
    // push(10);
    // push(20);
    // push(30);
    // display();
    // pop();
    // display();
    // push(40);
    // display();
    for(int i=1;i<=10;i++){
        push(i);
    }
     display();
    return 0;

}