#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int f[N][N], h[N][N];
int m1, n1, m2, n2;
int main() {
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    scanf("%d%d%d%d", &m1, &n1, &m2, &n2);
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &h[i][j]);
        }
    }
    for (int i = 0; i < m1 - m2 + 1; i++) {
        for (int j = 0; j < n1 - n2 + 1; j++) {
            int temp = 0;
            for (int k = 0; k < m2; k++) {
                for (int l = 0; l < n2; l++) {
                    temp += f[i + k][j + l] * h[k][l];
                }
            }
            printf("%d ", temp);
        }
        puts("");
    }
    return 0;
}
// demo
//  4
//  3
//  2
//  2
//  1
//  2
//  3
//  4
//  5
//  6
//  7
//  8
//  9
//  10
//  11
//  12
//  0
//  1
//  2
//  3