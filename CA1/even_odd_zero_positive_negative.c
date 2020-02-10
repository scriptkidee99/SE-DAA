#include<stdio.h>
void main(){
    int array[30],no,i,limit,even,odd,positive,negative,zero;
    even=odd=positive=negative=zero=0;
    printf("Enter length of array : ");
    scanf("%d",&limit);
    for(i=0;i<limit;i++){
        printf("\nEnter element no %d : ",i+1);
        scanf("%d",&array[i]);
        if(array[i]%2==0) even++; else odd++;
        if(array[i]>0) positive++; else if(array[i]<0) negative++; else zero++;
    }
    printf("\nThe count of elements in the array is as follows\n");
    printf("Even - %d\nOdd - %d\nPositive - %d\nNegative - %d\nZeros - %d",even,odd,positive,negative,zero);

}
