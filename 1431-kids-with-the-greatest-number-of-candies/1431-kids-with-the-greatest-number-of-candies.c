bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max=candies[0];
    for(int i=1;i<candiesSize;i++){
        if(candies[i]>max){
            max=candies[i];
        }    
    }
     bool *ans=malloc(candiesSize*sizeof(bool));
     int n=candiesSize;
     for(int i=0;i<n;i++){
        if(candies[i]+extraCandies>=max){
             ans[i]=true;
        }
        else{
            ans[i]=false;
        }
    }
    *returnSize=candiesSize;
    return ans;
     
}