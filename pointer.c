#include<stdio.h>
int sum(int *arr,int n){
int s=0 ; 
for(int i = 0 ;i<n;i++){
    s+=arr[i];
}
return s;
}
int main(){
int x =10; 
int y = 15;
int *xx=&x;
int *yy=&y;
printf("%d\n",*xx);
printf("%p\n",yy);
int arr[] ={1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
int m = sum(arr,n);
printf("%d\n",m);
return 0;
}
