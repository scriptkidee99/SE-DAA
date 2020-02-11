#include<stdio.h>
void main(){
    int array[30],length,i,j,min,pos,temp;
    printf("Enter size of array : ");
    scanf("%d",&length);
    for(i=0;i<length;i++){
        printf("\nEnter element no %d :",i+1);
        scanf("%d",&array[i]);
    }
    min = array[0];
    for(i=0;i<length-1;i++){
        min = array[i];
        pos = i;
        for(j=i;j<length;j++){
            if(array[j]<min){
                min = array[j];
                pos = j;
            }
        }
        temp = array[i];
        array[i] = min;
        array[pos] = temp;
    }

    printf("\nThe sorted array is ");
    for(i=0;i<length;i++){
        printf(" %d ",array[i]);
    }
}
