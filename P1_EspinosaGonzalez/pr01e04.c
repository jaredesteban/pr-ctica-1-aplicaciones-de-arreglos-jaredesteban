#include<stdio.h>
int main(){
    int mat[2][3]={
        {1,2,3},
        {4,5,6}
    };
    printf("Direccion de mat:       %p (Apuntador a la matriz en general)\n", mat);
    printf("Direccion de mat[0]:    %p (Apuntador a la primera fila)\n", mat[0]);
    printf("Direccion de &mat[0][0]: %p (Apuntador al primer elemento)\n", &mat[0][0]);
    return 0;
}