#include<stdio.h>
int array[30],resultantArray[30],length,noOfZeros;
void input();
void appendZerosToTheEnd();
void display(int);
void main(){
    input();
    display(1);
    appendZerosToTheEnd();
    display(0);
}
void input(){
    int i;
    printf("Enter size of array : ");
    scanf("%d",&length);
    for(i=0;i<length;i++){
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&array[i]);
        if(array[i] == 0) noOfZeros++;
    }
}
void appendZerosToTheEnd(){
    int i,count=0;
    for(i=0;i<length;i++){
        if(array[i] != 0) resultantArray[count++] = array[i];
    }
    for(i=0;i<length-noOfZeros;i++) resultantArray[count++] = 0;
}
void display(int early){
    int i;
    if(early){
        printf("\nThe array entered is ");
        for(i=0;i<length;i++){
            printf(" %d ",array[i]);
        }
    }
    else{
        printf("\nThe resultant array is ");
        for(i=0;i<length;i++){
            printf(" %d ",resultantArray[i]);
        }
    }

}
