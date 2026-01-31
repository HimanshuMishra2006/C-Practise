/*#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"Enter a number:";
    cin>>n ;
    cout<<endl;
    cout<<"Enter its power:";
    cin>>p;
    cout<<endl;
    int power=1;
    for(int i=1;i<=p;i++){
        power=power*n;
    }
    cout<<" (number)^power is ="<<power;
    cout<<endl;
    return 0;

}
#include<iostream>
using namespace std;
int main(){
   long long int n,pow;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"enter power : ";
    cin>>pow;
    const int p=n;
    for(int i=1;i<pow;i++){
        n*=p;
    }
    cout<<"n^pow is = "<<n;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
  int x,n,ans=1,binform;
  cin>>x;
  cin>>n;
  binform=n;
  if(n<0){
    x=1/x;
    binform=-binform;
  }
  while(binform>0){
    if(binform%2==1){
    ans*=x;
  }

  x*=x;
  binform/=2;
}
cout<<ans;
return 0;
} */