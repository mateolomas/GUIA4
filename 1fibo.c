
/*Crear un arreglo arr de 30 elementos tal que arr[n] = fib(n), siendo fib(n) 
el enésimo término de la serie de Fibonacci: 1, 1, 2, 3, 5, 8, . . . */


#include<stdio.h>

int fibo(int n){
    int arr[30] = {0, 1};
    
    
    
    for(int i = 0; i <n; ++i){
        if(i < 2){

        arr[0] = 0;
        arr[1] = 1;

        }
        else{
            arr[i] = arr[i-1] + arr[i-2]; 
        }
        
        
        printf("%d\n", arr[i]);
        
        
    }
    
    return 0;
}





int main(){
    //n 
    fibo(30);


    return 0;    
}
