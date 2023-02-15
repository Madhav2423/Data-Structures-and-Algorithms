void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        //Your code here
        if(index==sizeOfArray-1){
            arr[index]=element;
        }
        else{
        for(int i=sizeOfArray;i>=index;i--){
            
            arr[i+1]=arr[i];
            
        }
        arr[index]=element;
        
        }
    }