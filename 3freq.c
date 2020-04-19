

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int freq(){
    srand(time(NULL));
    
    
    
    int tablaN[1000];
    
    for(int i = 0; i< 1000; i++){
        tablaN[i] = 5 + (float)rand()/RAND_MAX * 10; //enteros 5 al 15
    }

    
    int numeros[11] = {5,6,7,8,9,10,11,12,13,14,15};

    int count[11]   = {0,0 ,0,0,0,0,0,0,0,0,0};
    //Comparando Tabla aleatoria con numeros y almacenando
    //y almacenando contadores en count
    for(int i=0; i<1000; i++ ){
        for(int j = 0; j<=10; j++){
        if(tablaN[i]== numeros[j]){
            count[j]+=1;
        }
            
        
        }
        
    }
    //Impresion de Frecuencia absoluta
    for(int i=0; i<=10; i++){
        printf("Del %d     hay     %d   veces \n", numeros[i], count[i]);
    }
    
        
    
      

    // Frecuencia relativa 
    float relativas[11];
    for(int i = 0; i<11; i++){
        relativas[i] = (float)count[i]/1000;
        printf("Relativa de %d ->  %f           %.2f%%\n", numeros[i],relativas[i],relativas[i]*100);
        

    }

    


     return 0;

}
    


    


int main(){
    
    freq();
}
