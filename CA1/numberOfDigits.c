#include<stdio.h>
void main(){
    char no[20];
    int count = 0;
    printf("\nEnter no to count digits : ");
    scanf("%s",no);
    while(no[count++]!='\0');
    printf("No of digits in %s is %d",no,count-1);
}
