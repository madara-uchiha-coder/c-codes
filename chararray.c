#include<stdio.h>
int main(){
char marks[5]; 
for(int i=0;i<5;i++) {
    scanf("%c",&marks[i]);
}
for(int i=0;i<5;i++) {
    printf("%c",marks[i]);
}
return 0;
}