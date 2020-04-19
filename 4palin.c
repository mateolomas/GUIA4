

#include<stdio.h>
#include<string.h>




int palindromo(){
    
    char word[20];
    puts("Ingresa tu palindromo:       "); // pide al user la palabra
    fgets(word, 20, stdin);
    int count = 0;
    //printf("%s", word);
    //printf("%ld\n", strlen(word));
    word[strlen(word)-1] = '\0';
    if( word[0] == word[strlen(word)-1]){  
    for(int i=0; i<strlen(word); i++){
        if(word[i]==word[strlen(word)-i-1]){
            count+=1;
            }

        }
    }

    if(count==strlen(word)){
        puts("Palindromo");

    }
    else{

        puts("No es palindromo");

    }

    //printf("%d", count);
    
   


    
}



int main(){
palindromo();
} 