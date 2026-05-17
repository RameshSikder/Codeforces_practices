#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[105];
        scanf("%s", s);

        int n = strlen(s);
        int can = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                can = 1;
                break;
            }
        }

        if (can)
            printf("1\n");
        else
            printf("%d\n", n);
    }

    return 0;
}
