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
            swap((arr + l), (arr + i)); // ��Ʈ��ŷ�� ���� ����
        }
    }
}

int main() {
    int arr[] = {1, 2, 3}; // ���ϴ� �迭�� �Է��ϼ���
    int n = sizeof(arr) / sizeof(arr[0]);

    permute(arr, 0, n - 1);

    return 0;
}
