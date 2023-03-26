#include <stdio.h>
int main() {
    int r1,c1,r2,c2,i,j,k,a[10][10],b[10][10],m[10][10] ;
    printf("enter no. of rows of  matrix A :");
    scanf("%d",&r1);
    printf("\nenter no. of column of  matrix A :");
    scanf("%d",&c1);

    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);

        }
    }
    printf("enter no. of rows of  matrix B :");
    scanf("%d",&r2);
    printf("\nenter no. of column of  matrix B :");
    scanf("%d",&c2);
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);

        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
          m[i][j]=0;
          for(k=0;k<c2;k++)  
           m[i][j]+=a[i][k]*b[k][j];
        }
        printf("\n");
    }
    printf("\nmultiplication of mautrix is :\n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("%d ",m[i][j]);

        }
        printf("\n");
    }


	return 0;
}