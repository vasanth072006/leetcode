bool containsDuplicate(int* a, int n) {
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
    }
    int len=max-min+1;
    int* f=calloc(len,sizeof(int));
    for(int i=0;i<n;i++){
        int ind=a[i]-min;
        f[ind]++;
        if(f[ind]>1){
            return true;
        }
    }
    return false;
}