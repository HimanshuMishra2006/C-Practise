/*#include<iostream>
using namespace std;
int main(){
   int arr[10]={11,8,9,0,6,5,7,5,4,7};
    cout<<arr[7];
    return 0;
int a[100]={0};
for(int i=0;i<100;i++){
    a[i]=1;
    cout<<a[i]<<endl;
}
return 0;
}
int a[15]={0};
a[0]=10,a[14]=150;
for(int i=0;i<=14;i++){
    cout<<a[i]<<endl;
}
return 0;
}
int a[5]={1,2,3,4,5};
int b[5]={5,4,3,2,1};
int c[5];
for(int i=0;i<=4;i++){
   c[i]=a[i]+b[i];
   cout<<c[i]<<endl;
   cout<<&c[i]<<endl;
}
int nums[4]={7,2,3,4};
int target[1]={9};
cout<<&nums[0];

int a[5]={1,1,4,4,5};
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++){
        if(a[i]!=a[j]){
            cout<<a[j];
        }
    }
 int arr[2][2][2]={7,9,0,7,1,9,4,2};
 
 for(int i=0;i<=1;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
       
cout<<arr[i][j][k];
        }cout<<endl;
       }cout<<endl;
 }
 cout<<arr[1][1][1];
    return 0;
}

    int ar1[2][2],ar2[2][2];
cout<<"Enter elmemts of first array: "<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    cin>>ar1[i][j];
}
}
cout<<"Enter elements of second  array: "<<endl;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
cin>>ar2[i][j];
    }
}
cout<<"The sum of the two arrays is:"<<endl;
int result[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        result[i][j]=ar1[i][j]+ar2[i][j];   
    }
}for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<result[i][j]<<" ";
    }cout<<endl;
}
return 0;
}


10;i++){
    if(a[i]%2==0)int nums[7]={12,45,6,89,23,7};
int target=27;
bool found;
for(int i=0;i<7;i++){

    if(nums[i]==target){
     found=true;
    break;
    }
}
if(found){
    cout<<"TARGET FOUND!";
}else{
    cout<<"TARGET NOT FOUND!";
}
int a[10]={1,2,3,4,5,6,7,8,9,10};
int counteven;
int countodd;
for(int i=0;i<{
        cout<<a[i]<<" is even";
    }cout<<endl;
}
for(int i=0;i<10;i++){
    if(a[i]%2!=0){
        cout<<a[i]<<" is odd";
    }cout<<endl;
}*
#include<iostream>
#include<string>
using namespace std;
int main(){
char w[5];
for(int i=0;i<=4;i++){
   cin>>w[i];
}cout<<endl;
return 0;
}*/

/*#include<iostream>
using namespace std;
int main (){
    int arrr[12]={1,2,3,4,5,6,7,8,9,0,8,7};
    cout<<sizeof(arrr)%(sizeof(arrr[10])+sizeof(arrr[1])+2);
    return 0;
}*/

/*#include<iostream>
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
    cout<<g<<endl;
    cout<<size;
return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int g=arr[1];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]<g){
            g=arr[i];
        }
    }
    cout<<"Smallest element is: "<<g;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    
    int arr[]={1,2,3,0,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=size-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

//PROGRAM TO CACL AND SWAP MAX AND MIN VALUES;
/*#include<iostream>
using namespace std;
 
int main()

{
    int arr[]={3,2,9,4,5,1,7,8,6};
    int a,b;
    int size=sizeof(arr)/sizeof(arr[0]);
    int g=arr[1],s=arr[1];
    for(int i=0;i<size;i++){
        if(arr[i]>g){
            g=arr[i];
            a=i;
            
        }
    }
    cout<<"Maximum value is : "<<g<<endl;
for(int j=0;j<size;j++){
    if(arr[j]<s){
        s=arr[j];
        b=j;
    }
}
cout<<"Minimum value is : "<<s<<endl;
swap(arr[a],arr[b]);

for(int i=0;i<size;i++){
  cout<<arr[i]<<" ";
}
return 0;
}

2 SUM;

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
                cout<<"["<<i<<","<<j<<"]";
            }
        }
    }
}*/

/*#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
   vector<int>vec={-1,0,1,2,-1,4};
   int size=vec.size();
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int k=j+1;k<size;k++){
        if(vec[i]+vec[j]+vec[k]==0){
            cout<<vec[i]<<" "<<vec[j]<<" "<<vec[k];
            break;
        }
    } 

   }
}
return 0;
}*/

/*#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int arr[]={1,2,3,-2,-67,242,-6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int strt ,end,csum;
    int msum=INT16_MIN;
    
    for(int strt=0;strt<size;strt++){
        csum=0;
        for(int end=strt;end<size;end++){
            csum+=arr[end];
                msum=max(msum,csum);
            if(msum<0){
                msum=0;
            }
       }
    }
    cout<<msum;
   
    return 0;
}

MAX SUBARRAY SUM;


#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int csum,msum=INT8_MIN;
    for(int i=0;i<size;i++){
        csum=0;
        for(int j=i;j<size;j++){
            
            csum+=arr[j];
            msum=max(msum,csum);
            if(csum<0){
                csum=0;
            }
            
        }
    }

cout<<"max subarray sum ="<<msum;
    return 0;
}

    UNIQUE ELEMENTS;

#include<iostream>
using namespace std;
void unique(int array[], int size){
    
    for(int i=0; i<size; i++){
        bool isUnique = true;
        
        for(int j=0; j<size; j++){
            if(i!=j && array[i]==array[j]){
                isUnique = false;
                break;
            }
        }
        if(isUnique){       // will only execute when inside loop doesn't break, means no duplicate found
        cout << array[i] << " ";
        }
    }
    
}

int main() {
    int array[] = {1, 4, 8,53,24,53,2,42, 5, 8, 4, 1};
    int size = sizeof(array)/sizeof(int);
   
   unique(array, size);
   
    return 0; 
}*/

/*#include<iostream>
using namespace std;
int Intrarrays(int arr[],int vec,int size1,int size2){
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr[i]==vec[j]){


            }
        }

    }
    
}
//PRODUCT OF ARRAY EXCEPT ITSELF;
//Method 1;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={6,5,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector <int>vec;
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr[i];
    }

       for(int i=0;i<size;i++){
            vec.push_back(product/arr[i]);
    }
    for(int val:vec){
        cout<<val<<" ";
    }
        return 0;
}

//Method 2;
#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>arr={6,5,4,3};
    int size=arr.size();
    vector <int>vec;
    int product;
    for(int i=0;i<size;i++){
        product=1;
        for(int j=0;j<size;j++){
            if(i!=j){        
        product*=arr[j];
            }
        }vec.push_back(product);
       
    }
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
          
    }
}
    //BINARY SEARCH;

#include<iostream>
using namespace std;
 int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int target=1;
    int size=sizeof(arr)/sizeof(arr[0]);
    int mid=0,str=0,end=size-1,i;
    for(i=str;i<=end;i++){
        mid=(str+end)/2;
        if(target==arr[mid]){
            cout<<mid<<endl;
            break;
        }
        if(target>arr[mid]){
            str=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
       

    }
    cout<<"Target Found at i="<<mid;
 }


 //PRINT ALL SUBARRAY
 #include<iostream>
using namespace std;
 int main(){
    int arr[]={1,2,3,4,5};
    int target=1;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
            }cout<<endl;
        }
    

    return 0;
}

//BINARY SUBARRAY SEARCH;

#include<iostream>
using namespace std;
 int main(){
    int arr[]={1,0,1,0,1,0,1};
    int goal=2,count=0,sum;
    int size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        sum=0;
        for(int j=i;j<size;j++){
            sum+=arr[j];
            if(sum==goal){
                count++;
            }
        }}
        cout<<count;
        return 0;
    }

    //CEILING PROBLEM;


#include<iostream>
using namespace std;

string ceilingchar(string target,int size,string arr[]){
int i=0;

    while(i<size)
    {   
        if((target==arr[i])|| (arr[i]>target))
        {
           return arr[i];
           break;
        }
        else{
        i++;
        }
    }
    return "not found";
}
int main()
{
    string target="k";
    string nums[]={"b","c","d","e","f","g","h","i"};
    int size=sizeof(nums)/sizeof(nums[0]);
    
   cout<<ceilingchar(target,size, nums);
    
    return 0;
}*/

#include<iostream>
using namespace std;
 int main(){
    cout<<1%10;
    return 0;

 }
