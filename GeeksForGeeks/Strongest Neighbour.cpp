#include <iostream>
using namespace std;

void maximumAdjacent(int sizeOfArray, int arr[]){
    
    for(int i=0;i<sizeOfArray-1;i++){
        if(arr[i]>arr[i+1])cout<<arr[i]<<" ";
        else if (arr[i] == arr[i+1])cout<<arr[i]<<" ";
        else cout<<arr[i+1]<<" ";
    }
     
     
}