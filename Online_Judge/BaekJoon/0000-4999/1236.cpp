#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char castle[N][M];
    int rowGuard = 0, colGuard = 0;

    for (int i = 0; i < N; i++) {
        int hasGuard = 0;
        for (int j = 0; j < M; j++) {
            scanf(" %c", &castle[i][j]);
            if (castle[i][j] == 'X') {
                hasGuard = 1;
            }
        }
        if (!hasGuard) {
            rowGuard++;
        }
    }

    for (int j = 0; j < M; j++) {
        int hasGuard = 0;
        for (int i = 0; i < N; i++) {
            if (castle[i][j] == 'X') {
                hasGuard = 1;
            }
        }
        if (!hasGuard) {
            colGuard++;
        }
    }

    int result = rowGuard > colGuard ? rowGuard : colGuard;
    printf("%d\n", result);

    return 0;
}
