#include<stdio.h>
int main(){
int marks[10];  
int sum =0;
for(int i=0;i<10;i++)
{
printf("enter the no %d : ",i+1);
scanf("%d",&marks[i]);
sum+=marks[i];
}
float avg=(float)sum/10.0;
printf("\n%0.2f\n",avg);
return 0;
}