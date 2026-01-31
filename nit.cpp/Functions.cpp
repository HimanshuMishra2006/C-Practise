#include<iostream>
using namespace std;
//SUM TO N
/*int SumToN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}*/

//N FACTORIAL
/*int Fact(int n){
    int facto=1;
    if(n==0){
        cout<<"Factorial of 0 is 1"<<endl;
    }else{
    for(int i=1;i<=n;i++){
        facto*=i;
    }
   }
      return facto;
}
    int main(){   
  cout<<Fact(6)<<endl;
    return 0;
}*/

//DIGIT SUM
/*int digitsum(int n){
    int digit=0,sum=0;
    while(n!=0){
       digit=n%10;
       n/=10;
       sum+=digit;
    }
    return sum;
}
int main(){
  
  cout<<digitsum(67)<<endl;
  return 0;
}*/

//nCr
/*double  fact(int n)
{
    int fact=1;
    if(n==0){
        cout<<"Factorial  of 0 is: 1\n";
    }
    while(n!=0){
        fact*=n;
        n--;
    }
    return fact;
}
int main(){
  double n,r;
   cout<<"Enter the value of n: ";
   cin>>n;
   cout<<"Enter the value of r: ";
   cin>>r;
   cout<<"nCr= "<<fact(n)/(fact(r)*fact(n-r));
  
  return 0;
}*/

/*int PrintPrime(int n)
{int i,j;
    for(int i=2;i<=n;i++)
    {  
    for( j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)
        {
            cout<<i<<",";
        }
    }
}
// FIBONACCI SERIES;

int FibonacciSeries(int n)
{
    int i,nexterm,t1=0,t2=1;
    for(i=1;i<=n;i++){
        cout<<t1<<" ";
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
       }
return 0;
}

int main()
{int n;
    
     FibonacciSeries(11
    );
}*/

