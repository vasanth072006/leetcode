char repeatedCharacter(char* s) {
    int n = strlen(s);
    int* x = calloc(101, sizeof(int));

    for (int i = 0; i < n; i++) {
        x[s[i] - 'a']++;
        if (x[s[i] - 'a'] == 2) {
            return s[i];
        }
    }

    return 0;
}