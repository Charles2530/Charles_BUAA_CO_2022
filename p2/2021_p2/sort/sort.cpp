#include <stdio.h>
int a[2000], n;
int main() {
    int i, j;
    int tempA, tempB;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[2 * i]);
        scanf("%d", &a[2 * i + 1]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[2 * j] < a[2 * (j + 1)]) {
                tempA = a[2 * j];
                tempB = a[2 * j + 1];
                a[2 * j] = a[2 * (j + 1)];
                a[2 * j + 1] = a[2 * (j + 1) + 1];
                a[2 * (j + 1)] = tempA;
                a[2 * (j + 1) + 1] = tempB;
            } else if (a[2 * j] == a[2 * (j + 1)]) {
                if (a[2 * j + 1] < a[2 * (j + 1) + 1]) {
                    tempA = a[2 * j];
                    tempB = a[2 * j + 1];
                    a[2 * j] = a[2 * (j + 1)];
                    a[2 * j + 1] = a[2 * (j + 1) + 1];
                    a[2 * (j + 1)] = tempA;
                    a[2 * (j + 1) + 1] = tempB;
                }
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d %d\n", a[2 * i], a[2 * i + 1]);
    }
}
// input
//  5
//  1
//  3
//  1
//  4
//  3
//  5
//  2
//  3
//  6
//  4
// output
// 6 4
// 3 5
// 2 3
// 1 4
// 1 3