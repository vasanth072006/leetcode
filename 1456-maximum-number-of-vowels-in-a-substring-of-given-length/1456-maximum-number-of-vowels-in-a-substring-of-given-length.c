int maxVowels(char* s, int k) {
    int c = 0;
    int n = strlen(s);
    for (int i = 0; i < k; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            c++;
        }
    }
    int max = c;
    if (max == k) return max;
    for (int i = k; i < n; i++){
        if (s[i - k] == 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k] == 'o' || s[i - k] == 'u') {
            c--;
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            c++;
        }
        if (c > max) max = c;
        if (max == k) return max;
    }
    return max;
}