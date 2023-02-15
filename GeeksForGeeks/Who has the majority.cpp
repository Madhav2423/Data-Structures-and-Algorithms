    int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int cntX=0;
        int cntY=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x)cntX++;
            else if(arr[i]==y)cntY++;
        }
        if(cntX>cntY)
        return x;
    

    
        else if(cntX==cntY){
            if(x<y)return x;
            else if(x>y) return y;
        }
        else{
            return y;
        }

    }