#include <stdio.h>
int main() {
    int mat1[10][10],mat2[10][10],ans[10][10];
    int row1, col1;
    scanf("%d%d",&row1, &col1);
    for(int i = 0; i<row1; i++) {
        for(int j = 0; j<col1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
   int row2,col2;
   scanf("%d%d",&row2, &col2);
   for(int i = 0; i<row2; i++) {
       for(int j = 0; j<col2; j++) {
           scanf("%d",&mat2[i][j]);
       }
   }
   if((row1==row2)&&(col1==col2)) {
       int row, col;
       row = row1;
       col = col1;
       for(int i = 0; i<row; i++) {
           for(int j = 0; j<col; j++) {
               ans[i][j] = mat1[i][j] - mat2[i][j];
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
       printf("Matrix Subtraction is't possible\n");
   }




    return 0;
}
