#include<stdio.h>
void main(){
    int array[30],length,i,element,pos;
    printf("Enter size of array : ");
    scanf("%d",&length);
    for(i=0;i<length;i++){
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nEnter element to search : ");
    scanf("%d",&element);
    for(i=0;i<length;i++) if(array[i]==element){
        pos = i+1;
        break;
    }
    if(i!=length)
    printf("\nThe element %d is found at position %d",element,pos);
    else printf("\nElement not found");
}
