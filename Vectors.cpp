/*#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>vec={1,2,3};
    int size=vec.size();
    cout<<size;
   return 0;
}
   //PAIR SUM;
#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int> arr ={1,2,3,4,5,6};
  int size=arr.size();
  int target =11,i,j;
  vector<int>ans;
  int pairsum=0;

  BRUT FORCE;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]+arr[j]==target){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            
        }
    }
 }   
 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
 }
 return 0;

 //Maximum Element;
 
 #include<iostream>
#include<vector>
using namespace std;
int Melem(vector<int>arr,int size){
    
  int freq;
 
  for(int val:arr){
    freq=0;
    for(int elem:arr){
        if(elem==val){
            freq++;        
        }
    }
  if(freq>(size)/2){
        return val;
        
    }
}
return {0};
}
int main(){
    vector<int>vec={1,1,2,2,2,2,2,3,4,5};
  int size=vec.size();
 cout<< Melem(vec,size);


  

  return 0;
}

#include<iostream>
#include<vector>
using namespace std;

  int maxelem(vector<int> vec,int size)
{
  int max=vec[0];
  for(int val:vec){
    if(val>max){
      max=val;
    }
  }
  return max;
}

int main(){
  vector<int> vect{1,2,2,33,3,4,1};
  int size=vect.size();
  cout<<maxelem(vect,size);
  return 0;
  }
  

  #include<iostream>
#include<vector>
using namespace std;

  int MaxSubsum(vector<int> vec,int size)
{ int csum=0,maxsum=INT16_MIN ;
   for(int val:vec){
    csum+=val;
    maxsum=max(csum,maxsum);
    if(csum<0){
      csum=0;
    }
   }
   return maxsum;
}

int main(){
  vector<int> vect{1,2,-2,33,-3,-4,-1};
  int size=vect.size();
  cout<<MaxSubsum(vect,size);
  return 0;
  
}

#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>vec={-1,-2,-3};
    int size=vec.size();
    int csum=0,msum=INT8_MIN;
    for(int i : vec){
        csum+=i;
        msum=max(msum,csum);
        if(csum<0){
          csum=0;
        }
    }
    cout<<msum;
   return 0;
}*/

#include<iostream>
#include<vector>
using namespace std;

class vectors{
  public:

vector<int> RotBS(vector<int>nums,int size,int target)
{
  size=nums.size();
  int str=0;
  int end=size-1;
  int mid=0;
  while(str<=end)
  {
     mid=(str+(end-str))/2;
     if(target==nums[mid]){
      return mid;
     }
    if(nums[str]<=nums[mid])
     {
      if(nums[str]<=target<=nums[mid]){
        end=mid-1;
      }
      else{
        str=mid+1;
      }
    } 
      else
      {
        if(nums[mid]<=target<=nums[end]){
          str=mid+1;
        }

        else{
          end=mid-1;
        }
      }
      

  }

}
};

int main(){
  int arr[]={6,7,8,9,1,2,3,4,5};
  int size;
  int target=7;
   
  cout<<RotBS(arr,size,target)
}



