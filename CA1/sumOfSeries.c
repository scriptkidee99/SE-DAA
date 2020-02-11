#include<stdio.h>
int power(int, int);
void main(){
    int n,i,sum=0;
    printf("Enter n to print the sum of the series (1+2^2+3^3+4^4) : ");
    scanf("%d",&n);
    printf("\nThe series is ");
    for(i=1;i<=n;i++) sum += power(i,i);
    printf("\nThe sum of the series is %d",sum);
}
int power(int base, int pow){
    int i,result=1;
    for(i=0;i<pow;i++) result *= base;
    return result;
}
