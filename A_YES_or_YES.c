#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d", &t);

    char s[10];

    while (t--) {
        scanf("%s", s);

        for (int i = 0; s[i]; i++) {
            s[i] = toupper(s[i]);
        }

        if (strcmp(s, "YES") == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}
