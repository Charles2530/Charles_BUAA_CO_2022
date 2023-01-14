#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int n;
int a[1000];
int main() {
    scanf("%d", &n);
    a[0] = 1;
    int len = 1;
    for (int i = 1; i <= n; i++) {
        int res = 0;
        for (int j = 0; j < len; j++) {
            a[j] = a[j] * i + res;
            res = a[j] / 10;
            a[j] %= 10;
        }
        if (res != 0) {
            a[len] = res;
            len++;
            // printf("%d\n", len);
            while (a[len - 1] >= 10) {
                a[len] = a[len - 1] / 10;
                printf("%d\n", a[len - 1]);
                a[len - 1] %= 10;
                len++;
            }
        }
        while (a[len - 1] == 0 && len > 1) {
            len--;
        }
    }
    for (int i = len - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    return 0;
}