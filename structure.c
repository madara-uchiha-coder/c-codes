#include<stdio.h>
#include<stdlib.h>
#define pi 3.14;
typedef struct 
{
  int x;
  char grade; 
} clg;
typedef struct 
{
  int x;
  char grade; 
} clg2;
int main(){
clg s1;
clg2 s3;
s3.x= 0 ; 
s3.grade='k';
s1.x=10;
s1.grade='j';
printf("%d\n",s1.x);
printf("%c",s1.grade);
return 0 ; 
}