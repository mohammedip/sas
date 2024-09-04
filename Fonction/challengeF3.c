#include<stdio.h>
#include<stdlib.h>


int max(int n1, int n2){

int max=0;

if(n1>=n2){
max=n1;
}else if(n2>n1){
max=n2;
}


return max;
}

int main(int argc ,char *argv[]){

int num1=0,num2=0;


printf("entrez deux numero");
scanf("%d",&num1);
scanf("%d",&num2);

printf("le max entre ces deux numeros est %d : ",max(num1,num2));


}
