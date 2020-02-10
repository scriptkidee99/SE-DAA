#include<stdio.h>
int isPrime(int);
void main(){
    int start,end,i;
    printf("Enter start and end of prime series : ");
    scanf("%d%d",&start,&end);
    printf("\nThe prime numbers from %d to %d are ",start,end);
    for(i=start;i<=end;i++){
        if(isPrime(i)) printf(" %d ",i);
    }
}
int isPrime(int no){
    int i,prime=1;
    if(no == 0 || no == 1){
        return 0;
    }
    else if(no == 2 || no == 3){
        return 1;
    }
    else{
        for(i=2;i<(no/2)+1;i++){
            if(no%i==0){
                prime = 0;
                break;
            }
        }
        return prime;
    }

}
