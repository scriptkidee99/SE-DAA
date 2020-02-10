#include<stdio.h>
int array[30];
void minandmax(int);
void main(){
    int length,i;
    printf("Enter length of array : ");
    scanf("%d",&length);
    for(i=0;i<length;i++){
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&array[i]);
    }
    minandmax(length);
}
void minandmax(int length){
    int min,max,i;
    min = max = array[0];
    for(i=1;i<length;i++){
        if(array[i]>max) max=array[i];
        else if(array[i]<min) min=array[i];
    }
    printf("\nThe minimum element is %d and the maximum element is %d",min,max);
}
