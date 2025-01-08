#include<stdio.h>
int main(){
    printf("welcome to my guessing game!!\n");
    printf("predict a number from (1-100)\nif it is write you will get a compact from me\n");
    int x;
    printf("now enter a number: \n");
    scanf("%d",&x);

    if (x==71)
    {
        printf("offff you win a compact");
    }
    else
    printf("sorry try again :(");
    return 0;
    

}