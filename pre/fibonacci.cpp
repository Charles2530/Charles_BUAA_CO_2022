#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int fun(int p) {
    if (p == 1 || p == 0) {
        return 1;
    }
    return fun(p - 1) + fun(p - 2);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", fun(n));
    return 0;
}