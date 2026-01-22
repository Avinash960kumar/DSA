#include<stdio.h>

int main() {
    int arr[9] = {2, 5, 9, 14, 20, 18, 12, 6, 1};
    int max = arr[0];

    for (int i = 1; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
        } else {
            printf("the max number's index is %d", i - 1);
            break;
        }
    }

    return 0;
}