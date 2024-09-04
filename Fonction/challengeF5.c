#include<stdio.h>
#include<stdlib.h>


int fact(int num){

int f=1;

for(int i=2;i<=num;i++){

f*=i;
}


return f;
}

int main(int argc ,char *argv[]){

int num=0;


printf("entrez un numero");
scanf("%d",&num);


printf("le factorielle est %d : ",fact(num));


}
