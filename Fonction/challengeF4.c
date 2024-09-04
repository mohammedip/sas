#include<stdio.h>
#include<stdlib.h>


int min(int n1, int n2){

int min=0;

if(n1>=n2){
min=n2;
}else if(n2>n1){
min=n1;
}


return min;
}

int main(int argc ,char *argv[]){

int num1=0,num2=0;


printf("entrez deux numero");
scanf("%d",&num1);
scanf("%d",&num2);

printf("le min entre ces deux numeros est %d : ",min(num1,num2));


}
