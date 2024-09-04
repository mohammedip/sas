#include<stdio.h>
#include<stdlib.h>


int Fibonacci(int num){

int n=0;


for(int i=1;i<=num;i++){

n+=i;
}


return n;
}

int main(int argc ,char *argv[]){

int num=0;


printf("entrez un nembre");
scanf("%d",&num);


printf("le n-ième terme est %d : ",Fibonacci(num));


}
