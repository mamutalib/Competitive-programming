#include <stdio.h>
int main() {
    int mat1[10][10],mat2[10][10],ans[10][10];
    int row1, col1;
    scanf("%d%d",&row1,&col1);

    for(int i = 0; i<row1; i++) {
        for(int j = 0; j<col1; j++) {
            scanf("%d",&mat1[i][j]);
        }
    }

    int row2, col2;
    scanf("%d%d",&row2, &col2);
    for(int i = 0; i<row2; i++) {
        for(int j = 0; j<col2; j++) {
            scanf("%d",&mat2[i][j]);
        }
    }
    if(col1==row2){
        int row,col;
        row = row1;
        col = col1;
        for(int i = 0; i<row; i++) {
            for(int j = 0; j<col; j++) {
                ans[i][j] = 0;
                for(int k = 0; k<col; k++) {
                    ans[i][j] = ans[i][j] + mat1[i][k] * mat2[k][j];
                }
            }
        }

        for(int i = 0; i<row; i++) {
            for(int j = 0; j<col; j++) {
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("Matrix Multiplication isn't possible\n");
    }

}
