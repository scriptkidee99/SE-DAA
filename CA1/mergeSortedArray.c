#include<stdio.h>
int array1[30], array2[30], array3[30];

void main(){
    int l1,l2,i,j,k;
    printf("Enter length of first and second array : ");
    scanf("%d%d",&l1,&l2);
    printf("\nEnter elements for array1");
    for(i=0;i<l1;i++){
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&array1[i]);
    }
    printf("\nEnter elements for array2");
    for(i=0;i<l2;i++){
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&array2[i]);
    }
    i=j=k=0;
    while(i<l1 && j<l2) if(array1[i]<array2[j]) array3[k++] = array1[i++]; else array3[k++] = array2[j++];
    if(i==l1) while(j<l2) array3[k++] = array2[j++];
    else while(i<l1) array3[k++] = array1[i++];
    printf("\nThe merged array is ");
    for(i=0;i<k;i++) printf(" %d ",array3[i]);
}
