#include<stdio.h>
int matrix[5][5],zerosX[5],zerosY[5],m,n,count=0;
void input();
void traverseZeroArray();
void makeZeros(int, int);
void displayMatrix();
void main(){
    input();
    traverseZeroArray();
    displayMatrix();
}
void input(){
    int i,j;
    printf("Enter size of matrix (mxn) : ");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("\nEnter element for %dx%d : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j] == 0){
                zerosX[count] = i;
                zerosY[count] = j;
                count++;
            }
        }
    }
}
void displayMatrix(){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}
void traverseZeroArray(){
    int k;
    for(k=0;k<count;k++){
        makeZeros(zerosX[k],zerosY[k]);
    }
}
void makeZeros(int i,int j){
    int row,col;
    for(col=0;col<n;col++){
        matrix[i][col] = 0;
    }
    for(row=0;row<m;row++){
        matrix[row][j] = 0;
    }
}
