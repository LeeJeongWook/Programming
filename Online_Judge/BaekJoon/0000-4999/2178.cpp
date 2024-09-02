#include <stdio.h>
#include <queue>

using namespace std;

int main() {
    int N, M;
    int maze[100][100];
    int visited[100][100] = {0};
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &maze[i][j]);
        }
    }

    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] == 1 && visited[nx][ny] == 0) {
                visited[nx][ny] = visited[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    printf("%d\n", visited[N-1][M-1]);

    return 0;
}