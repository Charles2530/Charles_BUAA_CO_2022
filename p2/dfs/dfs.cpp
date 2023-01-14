#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int a[M], book[M];
int n;
void dfs(int step) {
    if (step == n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (!book[i]) {
            book[i] = 1;
            a[step] = i;
            dfs(step + 1);
            book[i] = 0;
        }
    }
}
int main() {
    scanf("%d", &n);
    dfs(0);
    return 0;
}