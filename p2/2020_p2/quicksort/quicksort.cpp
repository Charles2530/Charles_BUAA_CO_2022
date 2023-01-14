#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int a[M], n;
void quicksort(int a[], int l, int r) {
    int p;
    if (l < r) {
        p = l;
        for (int i = l + 1; i <= r; i++) {
            if (a[i] < a[l]) {
                int tmp = a[++p];
                a[p] = a[i];
                a[i] = tmp;
            }
        }
        int tmp = a[l];
        a[l] = a[p];
        a[p] = tmp;
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, r);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}