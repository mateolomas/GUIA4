

#include<stdio.h>








int main(){

int A[2][2];
int B[2][2];


for(int i = 0; i<2; i++){
    for(int j=0; j<2; j++){
        puts("Ingrese los elementos de la matriz A");
        scanf("%d" , &A[i][j]);
    }
}

for(int i = 0; i<2; i++){
    for(int j=0; j<2; j++){
        puts("Ingrese los elementos de la matriz B");
        scanf("%d" , &B[i][j]);
    }
}

//suma

  int C[2][2];
    puts("Suma");
    for(int i = 0; i<2; i++){
    for(int j=0; j<2;j++){
        C[i][j] = A[i][j] + B[i][j];
       
        printf("%d  ", C[i][j]);
        
    }
    puts("\n");

    }
    


//resta
puts("Resta\n");
int D[2][2];
    for(int i = 0; i<2; i++){
    for(int j=0; j<2;j++){
        D[i][j] = A[i][j] - B[i][j];
        
        printf("%d  ", D[i][j]);
    }
         puts("\n");
    }
    



//multi()
puts("Multiplicacion\n");
  int E[2][2];
  
for(int i = 0; i<2; i++){
    for(int j=0; j<2;j++){
        int element =0;
        for(int k=0; k<2; ++k){
        element += A[i][k] * B[k][j];
       
        
        
        }
        E[i][j] = element;
        
        
        printf("%d  ", E[i][j]);
        
    }
    puts("\n");
    
}

}

