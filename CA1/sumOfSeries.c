#include<stdio.h>
int power(int, int);
void main(){
    int n,i;
    printf("Enter n to print the sum of the series (1+2^2+3^3+4^4) : ");
    scanf("%d",&n);
    printf("\nThe series is ");
    for(i=1;i<=n;i++) printf(" %d ",power(i,i));
}
int power(int base, int pow){
    int i,result=1;
    for(i=0;i<pow;i++) result *= base;
    return result;
}
