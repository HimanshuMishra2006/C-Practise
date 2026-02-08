#include<iostream>
using namespace std;

//This prints all the once occuring elements in the array;

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
}
