#include<stdio.h>
void largestnumber(int *x,int *y);
int main(){
     int a,b;
     printf("enter two numbers:");
     scanf("%d %d",&a,&b);
     largestnumber(&a,&b);

return 0;
}
void largestnumber(int *x,int *y){
    if(*x > *y)
    printf("X IS THE LARGEST NUMBER");
    else
    printf("Y IS THE LARGEST NUMBER");
}