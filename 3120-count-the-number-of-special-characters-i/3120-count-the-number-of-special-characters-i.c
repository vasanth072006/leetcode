int numberOfSpecialChars(char* word) {
    int n = strlen(word);

    int* f = calloc(26, sizeof(int));
    int* x = calloc(26, sizeof(int));

    for (int i = 0; i < n; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            f[word[i] - 'a']++;
        } else {
            x[word[i] - 'A']++;
        }
    }

    int count = 0;

    for (int i = 0; i < 26; i++) {
        if (f[i] != 0 && x[i] != 0) {
            count++;
        }
    }

    return count;
}