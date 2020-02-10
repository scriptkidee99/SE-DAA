#include<stdio.h>
char binary[20],binaryReverse[20];
int getClosestMultiple(int);
int power(int, int);
void reverseBinaryNumber(int);
void main(){
    int no,perm,count=0,i=0,howManyZeros;
    printf("Enter no to convert into binary : ");
    scanf("%d",&no);
    perm = no;
    while(no!=0){
        //printf("\nNo is %d",no);
        binary[count++] = no%2==1?'1':'0';
        no/=2;
    }
    howManyZeros = getClosestMultiple(count);
    for(i=0;i<howManyZeros;i++){
        //printf("\nThe value of count is %d",count);
        binary[count++] = '0';
    }
    //printf("\nOutside for, value of count is %d",count);
    reverseBinaryNumber(count);
    printf("\nThe binary of %d is %s",perm,binaryReverse);
}
int getClosestMultiple(int count){
    int i=0;
    while(power(2,i)<=count){
        i++;
    }
    //printf("\nClosest multiple returns %d",power(2,i)-count);
    return power(2,i)-count;
}
int power(int base, int pow){
    int i,result=1;
    for(i=0;i<pow;i++){
        result*=base;
    }
    return result;
}
void reverseBinaryNumber(int length){
    int i;
    binaryReverse[length] = '\0';
    for(i=0;i<length;i++){
        binaryReverse[length-i-1] = binary[i];
    }
}
