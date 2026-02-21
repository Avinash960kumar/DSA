#include<stdio.h>

int bs(int a[], int x, int l, int r){
    while(l <= r){
        int m = l + (r - l) / 2;

        if(a[m] == x)
            return m + 1;
        else if(a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return l;
}

void ins(int a[], int n){
    for(int i = 0; i < n; i++){
        int k = a[i];
        int p = bs(a, k, 0, i - 1);

        int j = i - 1;
        while(j >= p){
            a[j + 1] = a[j];
            j--;
        }
        a[p] = k;
    }
}

int main(){
    int a[] = {12, 4, 19, 3, 7, 1, 10};
    int n = sizeof(a) / sizeof(a[0]);

    ins(a, n);

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}