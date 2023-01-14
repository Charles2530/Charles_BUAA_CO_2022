#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
char s[100];
int flag = 1;
int main() {
    gets(s);
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag) {
        printf("match");
    } else {
        printf("error");
    }
    return 0;
}