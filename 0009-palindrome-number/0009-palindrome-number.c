bool isPalindrome(int n) {
    long long div = 1, rev = 0;
    while (div <= n) {
        long long ld = (n % (div * 10)) / div;
        rev = rev * 10 + ld;
        div = div * 10;
    }
    return rev == n;
}