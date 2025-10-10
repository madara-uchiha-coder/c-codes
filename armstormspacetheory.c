#include<stdio.h>
#include<math.h>
int main(){
    int x,y=0,count=0;
    printf("enter a nubmer : ");
    scanf("%d",&x);
    int z=x;
    int copy=x;
    while(z!=0){
        count++;
        z=z/10;
    }
    while(x!=0){
        y=(y+pow(x%10,count));
        x=x/10;
    }
    y==copy?printf("this is an armstrom"):printf("this is an not armstrom");
    return 0;
}