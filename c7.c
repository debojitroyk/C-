#include<stdio.h>
int arrprint(int arr[],int n);
void reversearr( int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5,6};
    reversearr(arr,6);
    arrprint(arr,6);
    return 0;
}
void reversearr(int arr[],int n){
for(int i=0;i<n/2;i++)
{
     int firstvalue=arr[i];
     int secondvalue=arr[n-i-1];
     arr[i]=secondvalue;
     arr[n-i-1]=firstvalue;
}
}
int arrprint(int arr[],int n){
    for( int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
