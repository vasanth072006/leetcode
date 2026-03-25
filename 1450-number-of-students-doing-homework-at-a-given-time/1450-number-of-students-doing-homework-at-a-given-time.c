int busyStudent(int* start, int startTimeSize, int* end, int n, int query) {
    int count=0;
    for(int i=0;i<n;i++){
        if(start[i]<=query && end[i]>=query) count++;
    }
    return count;
    
}