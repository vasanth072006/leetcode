int diagonalSum(int** a, int n, int* matColSize) {
    int j1=0,j2=n-1,sum=0;
    for(int i=0;i<n;i++){
        if(j1==j2) sum=sum+a[i][j1];
        else{
            sum=sum+a[i][j1]+a[i][j2];
        }
        j1++;j2--;
    }
    return sum;
    
}