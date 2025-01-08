#include<stdio.h>
double power(double a,double b);
int main(){
double  x,y;
printf("enter two numbers:");
scanf("%lf %lf",&x,&y);
double answer =power(x,y);
printf("the power of  is =%lf",answer);
return 0;


}
double power(double a,double b){
double  result=1;
    
for(int i=1;i<=b;i++)
{
    
result=result*a;
}
return result;
}

   
