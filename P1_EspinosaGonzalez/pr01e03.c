#include<stdio.h>
int main(){
    int mat[2][3]={
        {1,2,3},
        {4,5,6}
    };
printf("Direccion de memoria de cada dato de la matriz: \n");
for(int i=0; i <2; i++){
    for(int j = 0; j < 3; j++){
        printf("mat[%d][%d]= %d -> Direccion: %p\n ", i, j,mat[i][j],&mat[i][j]); 
    }
}
return 0;
}