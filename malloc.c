#include<stdio.h>
#include<stdlib.h>
int main(){
    int *mark;
    int n;
    scanf("%d",&n);
    mark=(int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&mark[i]);
    }
     for (int i = 0; i < n; i++)
    {
        printf("\n%d",mark[i]);
    }
    
    
    return 0;
}