#include <stdio.h>
long long p, q, A, B, C;
long long F(int n) {
    if (n == 1)
        return p;
    if (n == 2)
        return q;
    return A * F(n - 1) + B * F(n - 2) + C;
}
int main() {
    int n;
    scanf("%d%lld%lld%lld%lld%lld", &n, &p, &q, &A, &B, &C);
    printf("%lld\n", F(n));
    return 0;
}