#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int calc(int n, int m) {
    return n == 1 ? n : (calc(n - 1, m) + m - 1) % n + 1;
}
int main() {
    int n, m, q;
    scanf("%d%d%d", &n, &m, &q);
    int num = (calc(n, m) + q - 1) % n;
    if (num == 0) {
        num = n;
    }
    printf("%d", num);
    return 0;
}