#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int n;
bool flag = false;
int main() {
    scanf("%d", &n);
    if (n <= 1) {
        flag = false;
    } else {
        for (int i = 2; i < n; i += 2) {
            if (n % i == 0) {
                flag = true;
            }
        }
    }
    if (flag) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}