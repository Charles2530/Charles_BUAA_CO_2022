#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int m;
int main() {
    scanf("%d", &m);
    if (m < 100) {
        printf("m is too small");
    } else if (m > 999) {
        printf("m is too large");
    } else {
        printf("%d", m % 10);
        printf("%d", m % 100 / 10);
        printf("%d", m / 100);
    }
    return 0;
}