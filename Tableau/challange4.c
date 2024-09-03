#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int x=0 , max=0;
int tabEntier[100];
printf("Entrez le nombre des elements : ");
scanf("%d",&x);

for(int i=0;i<x;i++){

printf("Entrez l'element :");
scanf("%d",&tabEntier[i]);

if(max<tabEntier[i]){

max=tabEntier[i];

}else{

continue;
}

}





printf("%d",max);




}
