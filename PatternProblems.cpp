#include<iostream>
using namespace std;
#include<cmath>
int main(){
   /* int n;
    cin>>n;
    int num=1;
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            cout<<num<<" ";
            num++;
        } cout<<endl;
    }cout<<"after pattern, num="<<num;
   */
 /*int n;
  cin>>n;
  cout<<endl<<endl;
  char ch=64;
  for(int i=0;i<n;i++){
     ch=ch+1;    
    for(int j=0;j<=i;j++){
        cout<<ch;
   
    }  cout<<endl;
}*/
/*int n=4;
for(int i=0;i<n;i++){
    int num=1;
    for(int j=0;j<=i;j++){
        cout<<num;
        num++;
    }cout<<endl;
}*/

/*int n=4;
char ch=64;

for(int i=0;i<n;i++){
   
    for(int j=0;j<=i;j++){
        ch='A'+i-j;
        cout<<ch<<" ";
       
        
    }cout<<endl;
}*/
/*int n=4;
int num=0;
for(int i=0;i<n;i++){
    for(int k=0;k<i;k++){
        cout<<" ";
    }
    num+=1;
    for(int j=n;j>i;j--){
        cout<<num;
    }cout<<endl;
}*/

/*int n=4;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    for(int k=n;k>i;k--){
        cout<<"*";
    }cout<<endl;
}*/

//PYRAMID
/*int n=5;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    int num=1;
    for(int k=0;k<i+1;k++){
        cout<<num;
        num++;
    }
    for(int l=1;l<=i;l++){
        cout<<l;
    }cout<<endl;
}*/

//DIAMOND
/*int n=5;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
        
    }
    cout<<"*";
    if(i!=0){
    for(int j=0;j<2*i-1;j++){
        cout<<" ";
    }
    cout<<"*";
    }
cout<<endl;
}

for(int i=0;i<n-1;i++){
    for(int j=0;j<i+1;j++){
        cout<<" ";
    }
   cout<<"*";
    if(i!=n-2){
   for(int j=0;j<2*(n-i)-5;j++){
    cout<<" ";
   }
   cout<<"*";

}cout<<endl;
}

BUTTERFLY
int n=4;
for(int i=0;i<n;i++){
    for(int j=0;j<1+i;j++){
        cout<<"*";
    }
    for(int j=0;j<n+2-2*i;j++){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<"*";
    }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }if(i!=0){
        for(int j=0;j<n+2*i-4;j++){
            cout<<" ";
        }
    }
    
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }cout<<endl;
}
return 0;
}*/