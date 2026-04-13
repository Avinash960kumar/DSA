#include<stdio.h>
int main(){
    int a[6]={11,4,6,8,9,1};
    int min,i,j;
    for(i=0;i<6;i++){
        min=i;
    for(j=i+1;j<6;j++) {
        if(a[j]<a[min]){
            min=j;
        }
    }  
    int temp;
    temp=a[i];
a[i]=a[min];
a[min]=temp;
} printf("Sorted:\n");
for(i=0;i<6;i++){
    printf("%d",a[i]);
}
    return 0;
    }