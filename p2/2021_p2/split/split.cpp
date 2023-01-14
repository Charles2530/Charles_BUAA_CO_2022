#include <stdio.h>
int a[100], n;
void print(int t) {
    for (int i = 1; i < t; i++) {
        printf("%d+", a[i]);
    }
    printf("%d\n", a[t]);
}
void js(int s, int t) {
    if (s == 0) {
        print(t - 1);
    }
    for (int i = 1; i <= s; i++) {
        if (a[t - 1] <= i && i < n) {
            a[t] = i;
            js(s - i, t + 1);
        }
    }
}
int main() {
    scanf("%d", &n);
    js(n, 1);
}
// 5
// 1+1+1+1+1
// 1+1+1+2
// 1+1+3
// 1+2+2
// 1+4
// 2+3