

#include<stdio.h>
#include <string.h>


int ventas[4][5] = {12,15,7,20,18,
                    8,5,13,17,19,
                    7,6,9,0,13,
                    11,0,20,8,20};

int lenFila = sizeof(ventas)/sizeof(ventas[0]);
int lenCol = sizeof(ventas[0])/sizeof(ventas[0][0]);
int CopyVentas[4][5] = {};

int vTotales(){
    
    //1 .- Sucursal B
    int totalB = 0; 
    for(int i = 0; i< lenCol; i++){
        totalB += ventas[1][i]; 
        
    }
    printf("Sucursal B ->   %d \n", totalB); 
    //2 .- Dia jueves 
    int totalJueves= 0; 
    for(int i = 0; i< lenFila; i++){
        totalJueves+= ventas[i][3]; 
        
    }
    printf("Dia jueves ->   %d\n", totalJueves); 
    return 0;
}

int MaximaVentaSemanal(){
    //3.- Maxima venta de la semana. 
    
    int mayor =0;
    for(int i=0; i<lenFila; i++)
        {
        for(int j=0; j<lenCol; j++)
        {
            for(int x=0; x<lenFila;x++)
            {
                for(int y=0; y<lenCol; y++)
                {
                    if(CopyVentas[i][j]>CopyVentas[x][y])       //Ordeno la matriz de mayor a menor
                    {
                        mayor=ventas[i][j];
                        CopyVentas[i][j]=CopyVentas[x][y];
                        CopyVentas[x][y]=mayor;
                    }

                }
            }
         }
    }
    printf("Mayor venta de la semana -> %d \n", CopyVentas[0][0]);
    return 0;
    

}
int MaximaVentaSucursal(){
    //4.- Identificar el día(s) y sucursal(es) 
    //donde se realizó la máxima venta semanal
 
    //Suma de cada Sucursal
    
    int S_totales[4]  = {0 , 0, 0, 0};
    
    for(int i = 0; i< lenCol; i++){
        S_totales[0] += ventas[0][i]; 
        S_totales[1] += ventas[1][i];
        S_totales[2] += ventas[2][i]; 
        S_totales[3] += ventas[3][i]; 
    
    }
    
    

    int i= 0;
    int mayor = 0;
    int Sucursal = 0;
    for(i = 0; i < lenFila;i++){
        if(S_totales[i] > mayor){
            mayor = S_totales[i];
            Sucursal = i;

        } 
        
        
    }
    printf("La maxima venta semanal de las sucursales es: %d  y corresponde a la sucursal numero %d        \n", mayor, Sucursal + 1);  //Sucursal A = 1, etc  
    
    



    
    
    //Suma de cada dia  
    int D_totales[5] = {0,0,0,0,0};
    for(int i = 0; i< lenFila;i++){
         
        D_totales[0]+= ventas[i][0];
        D_totales[1]+= ventas[i][1]; 
        D_totales[2]+= ventas[i][2]; 
        D_totales[3]+= ventas[i][3]; 
        D_totales[4]+= ventas[i][4]; 
        
     
    }

  
    int dia = 0;
    int mayorD = 0;
    for(int j = 0; j < lenCol;j++){
        if(D_totales[j] > mayorD){
            mayorD = D_totales[j];
            dia = j;
            
        
        } 
        
        
        
    }
    
    printf("La maxima venta diaria es: %d  y corresponde al dia %d        \n", mayorD, dia + 1);   //Lunes = Dia 1, etc 
}



int ImpresionDes(){
    //5.- Imprimir un reporte de ventas por sucursal en orden descendente de ventas
  
    
    

    for(int h=0; h < lenFila; h++ ){
    
    for ( int i = 0; i < lenFila; i++) {    
        for (int j = 0; j < lenCol-i-1; j++) { 
            if (ventas[h][j] < ventas[h][j+1])  {
            
                int temp = ventas[h][j];
                ventas[h][j] = ventas[h][j+1];
                ventas[h][j+1] = temp;
                    
    }
        }
    }
    
    }

    for(int t = 0; t<lenFila; t++){
        for(int i = 0; i<lenCol; i++){
            printf("Sucursal %d  ->   %d       \n", t+1, ventas[t][i]);
        }

    }

}
    

    


int main(){
    
    vTotales();
    memcpy(&CopyVentas, &ventas, sizeof(ventas)); //Copio otra vez el array para poder modificar una copia
    MaximaVentaSemanal();
    MaximaVentaSucursal();
    ImpresionDes();
    return 0;
}
