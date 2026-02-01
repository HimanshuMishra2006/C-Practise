 #include<iostream>
using namespace std;
int main()
{
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
        cout<<result[i][j]<<" ";
    }cout<<endl;
}
// }for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//         cout<<result[i][j]<<" ";
//     }cout<<endl;
// }
return 0;
}