#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char s[n + 1];
        scanf("%s", s);

        int freq[26] = {0};

        // Count frequency of each problem
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'A']++;
        }

        int solved = 0;

        // Check if each problem is solved
        for (int i = 0; i < 26; i++) {
            if (freq[i] >= i + 1) {
                solved++;
            }
        }

        printf("%d\n", solved);
    }

    return 0;
}
