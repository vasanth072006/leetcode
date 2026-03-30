int maxFrequencyElements(int* a, int n) {
    int* x = calloc(101, sizeof(int));
    for(int i = 0; i < n; i++){
        x[a[i]]++;
    }
    int max = 0;
    for (int i = 0; i < 101; i++){
        if(x[i] > max) max = x[i];
    }
    int sum = 0;
    for (int i = 0; i < 101; i++){
        if(x[i] == max){
            sum = sum + max;
        }
    }
    return sum;
}