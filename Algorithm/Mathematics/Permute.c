#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void permute(int *arr, int l, int r) {
    if (l == r) {
        for (int i = 0; i <= r; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        for (int i = l; i <= r; i++) {
            swap((arr + l), (arr + i));
            permute(arr, l + 1, r);
            swap((arr + l), (arr + i)); // 백트래킹을 위한 복구
        }
    }
}

int main() {
    int arr[] = {1, 2, 3}; // 원하는 배열을 입력하세요
    int n = sizeof(arr) / sizeof(arr[0]);

    permute(arr, 0, n - 1);

    return 0;
}
