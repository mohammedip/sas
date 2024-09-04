#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int x=0 , d=0;
int t[100];
printf("Entrez le nombre des elements : ");
scanf("%d",&x);

for(int i=0;i<x;i++){

printf("Entrez l'element :");
scanf("%d",&t[i]);


}

    for (int i=0;i<x;i++){
    
    
        for(int j=i+1;j<x;j++){
        
        if(t[i]>t[j]){    
            
            d=t[j];
            t[j]=t[i];
            t[i]=d;
            
        }
    }
}



for (int i=0;i<x;i++){
    
    
    
printf("%d",t[i]);

    
    
    
}