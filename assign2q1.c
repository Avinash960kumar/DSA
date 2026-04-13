#include<stdio.h>
int main(){
    int n=5;
    int arr[7]={10,31,330,320,140,570,90};
int low=0;
int high=n-1;
int key=30;
int mid=(low+high)/2;
while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==key){
        return mid;
    }
    else(arr[mid-1]==key);

}
}