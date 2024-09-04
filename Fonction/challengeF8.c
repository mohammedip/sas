#include<stdio.h>
#include<stdlib.h>


int pere_impere(int num){
int r=0;
if(num%2==0){
r=1;
}else if(num%2!=0){
r=0;
}

return r;
}

int main(int argc ,char *argv[]){

int num=0;


printf("entrez un nembre : ");
scanf("%d",&num);


printf("on retourne 1 si l'entier est pair et 0 s'il est impair .\nle retour est %d  ",pere_impere(num));


}
