int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum=0,div=1;
    while(div<=x){
        int ln=(x%(div*10))/div;
        sum=sum+ln;
        div=div*10;
    }
    if(x%sum==0){  
        return sum;
    }
    else{
        return -1;
    }
}