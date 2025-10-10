#include<stdio.h>
int main(){
    int x,y=0,count=0;
    printf("enter a nubmer : ");
    scanf("%d",&x);
    while(x!=0){
        y=(y+(x%10))*10;
        x=x/10;
        count++;
    }
    y=y/10;
    printf("%d\ncount %d",y,count);

    return 0;
}