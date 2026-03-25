int firstMissingPositive(int* a, int n) {
    for(int i=0;i<n;i++){
        if(a[i]<1){
            a[i]=n+2;
        }
    }
    for(int i=0;i<n;i++){
        int ind=abs(a[i])-1;
        if(ind>=0 && ind<n){
            if(a[ind]>0){
                a[ind]=-a[ind];
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0)  return i+1;
    }
    return n+1;
}