#include<stdio.h>
int fact(int n){
    if(n<=2) return n;
    int x = n*fact(n-1);
    return x;
}
int main(){
    printf("%d",fact(5));
    return 0;
}