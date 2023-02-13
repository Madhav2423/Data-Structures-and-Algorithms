long long factorial(int N) {
    
        // Your code here
    long int res=1;
    if (N==0){
        return 1;
    };
    for (int i=1;i<=N;i++){
        res=res*i;
        
            
    }
    return res;
}