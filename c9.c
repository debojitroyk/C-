#include<stdio.h>
int main(){
    int num[]={1,3,5,7,18};
    int value;
    printf("enter a number");
    scanf("%d",&value);
    int position=-1;
    for(int i=0;i<6;i++)
    {
      if(value==num[i])
      {
        position=i+1;
        break;
      }
    }
    if(position==-1)
     {
        printf("not found");

     }
     else
     {
        printf("the value is found at %d position",position);
     }
}