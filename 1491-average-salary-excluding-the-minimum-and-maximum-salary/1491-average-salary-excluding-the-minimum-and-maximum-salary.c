double average(int* salary, int n) {
    double min=salary[0],max=salary[0],tot=0;
    for(int i=0;i<n;i++){
        if(salary[i]<min){
            min=salary[i];
        }
        if(salary[i]>max){
            max=salary[i];
        }
        tot+=salary[i];
    }
    tot=tot-max-min;
    
    return tot/(n-2);

    
}