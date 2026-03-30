int numberOfSpecialChars(char* s) {
    int n = strlen(s);
    int* x = calloc(26, sizeof(int));
    int* f = calloc(26, sizeof(int));

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            x[s[i] - 'a'] = i + 1;
        } else {
            if (f[s[i] - 'A'] == 0) {
                f[s[i] - 'A'] = i + 1;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < 26; i++) {
        if (x[i] < f[i] && x[i] != 0 && f[i] != 0) {
            count++;
        }
    }

    return count;
}