#include <stdio.h>

int main() {
    char str[11];
    char *p, *q;

    char maxChar;
    int maxCount = 0;

    for (p = str; p < str + 10; p++) {
        scanf("%10s", str);
        int count = 0;

        for (q = str; q < str + 10; q++) {
            if (*p == *q)
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        }
    }

    printf("%c %d", maxChar, maxCount);

    return 0;
}
