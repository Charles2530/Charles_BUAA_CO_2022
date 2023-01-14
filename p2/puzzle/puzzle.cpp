#include <bits/stdc++.h>
using namespace std;
#define M 100007
#define N 1007
#define INF 0x3f3f3f3f
#define ll long long
#define db double
int n, m, cnt = 0;
int start_x, start_y, end_x, end_y;
int space[8][8], book[8][8];
int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
void dfs(int x, int y) {
    // printf("%d\n", cnt);
    if (x == end_x && y == end_y) {
        cnt++;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        if (tx <= 0 || tx > n || ty <= 0 || ty > m || book[tx][ty] ||
            space[tx][ty]) {
            continue;
        }
        book[tx][ty] = 1;
        dfs(tx, ty);
        book[tx][ty] = 0;
    }
}
int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &space[i][j]);
        }
    }
    scanf("%d%d", &start_x, &start_y);
    scanf("%d%d", &end_x, &end_y);
    book[start_x][start_y] = 1;
    dfs(start_x, start_y);
    printf("%d", cnt);
    return 0;
}
// 4
// 5
// 0 0 1 0 0
// 1 0 0 0 1
// 1 0 1 0 1
// 1 0 0 0 0
// 1 1 4 5

// 2 2
// 0 0
// 1 0
// 1 1 2 2