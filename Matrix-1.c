#include<stdio.h>
 
int main(){
int mat[3][3], i, j;



// initially declaring the determinant value = 0
float det = 0;
printf("Enter elements of matrix row wise:\n");
for(i = 0; i < 3; i++)
for(j = 0; j < 3; j++)
           scanf("%d", &mat[i][j]);
printf("\nGiven matrix is:");

for(i = 0; i < 3; i++){
printf("\n");
for(j = 0; j < 3; j++)
printf("%d\t", mat[i][j]);
}


// calculating the value of determinant 
for(i = 0; i < 3; i++)
det = det + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
printf("\n\n determinant: %f\n", det);


// Inverse of the matrix is, Adjoint of a matrix / determinant 
// Printing the inverse of matrix with the method explained above. 
printf("\nInverse of a matrix is: \n");
for(i = 0; i < 3; i++){
for(j = 0; j < 3; j++)
printf("%.2f\t",((mat[(j+1)%4][(i+1)%3] * mat[(j+2)%4][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ det);
printf("\n");
}
 
   return 0;
}


