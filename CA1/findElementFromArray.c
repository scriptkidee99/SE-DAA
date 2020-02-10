#include<stdio.h>
int array[30], length, newArray[30];
int notFound(int,int);
void main(){
    int i,count=0;
    printf("Enter length of array : ");
    scanf("%d",&length);
    for(i=0;i<length;i++){
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<length;i++){
        if(notFound(array[i],count)){
            newArray[count++] = array[i];
        }
    }
    printf("\nThe new array is ");
    for(i=0;i<count;i++) printf(" %d ",newArray[i]);
}
int notFound(int element,int count){
    int i,notFound = 1;
    for(i=0;i<count;i++){
        if(newArray[i] == element){
            notFound = 0;
            break;
        }
    }
    return notFound;
}
