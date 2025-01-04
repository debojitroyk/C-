#include<stdio.h>
void value(int *a, int *b);
int main(){
int x,y;
x=5;
y=6;
value(&x,&y);
printf("x=%d & y=%d",x,y);
return 0;

}
void value(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
   
}