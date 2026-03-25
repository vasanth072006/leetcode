int maxProduct(int* nums, int n) {
    int pro=-1,max=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            pro=(nums[i]-1)*(nums[j]-1);
        if(pro>max)
            max=pro;
        }  
    }
    return max;
}