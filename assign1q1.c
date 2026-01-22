#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of N ");
    scanf("%d", &n);

    int arr[n - 1]; 

    printf("Enter %d numbers:\n", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    
    int expected_sum = n * (n + 1) / 2;

    
    int sum = 0;
    for(i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    
    int missing_number = expected_sum - sum;

    printf("The missing number is: %d", missing_number);

    return 0;
}