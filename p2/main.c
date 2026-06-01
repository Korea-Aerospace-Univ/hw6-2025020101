#include <stdio.h>

int main() {
    int N;
    int a[20], b[20];

    scanf("%d", &N);

    int *p, *q;

    for (p = a; p < a + N; p++)
        scanf("%d", p);

    for (p = b; p < b + N; p++)
        scanf("%d", p);

    p = a;
    q = b + N - 1;

    while (p < a + N) {
        printf(" %d", *p + *q);
        p++;
        q--;
    }

    return 0;
}
