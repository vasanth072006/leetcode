int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int avg=sum/k;
    int count=(avg>=threshold?1:0);
    int start=1,end=k;
    while(end<arrSize){
        sum=sum-arr[start-1]+arr[end];
        avg=sum/k;
        if(avg>=threshold){
            count++;
        }
        start++;
        end++;
    }
    return count;
}