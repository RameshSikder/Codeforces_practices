#include <stdio.h>

int main() {
    int t, a, x, y;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d", &a, &x, &y);
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        if (a < x || a > y)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
