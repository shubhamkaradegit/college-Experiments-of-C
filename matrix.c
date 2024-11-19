#include<stdio.h>

int main(){
int m,n;
printf("Enter the number of rows : ");
scanf("%d",&m);

printf("Enter the number of columns : ");
scanf("%d",&n);


int matrix[m][n];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("Enter the element at position(%d,%d) : ",i+1,j+1);
        scanf("%d",&matrix[i][j]);

    }
    
}
    printf("The resulting matrix is : \n");

   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
   }
return 0;
}