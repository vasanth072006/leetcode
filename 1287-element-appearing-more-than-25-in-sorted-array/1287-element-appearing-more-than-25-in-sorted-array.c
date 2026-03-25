int findSpecialInteger(int* arr, int n) {
    int lim=n/4;
    int max=-1;
    
    for(int i=0;i<n;i++){
        int val=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>lim){
            max=val;
            break;
        }
    }
    return max;
    
    
}