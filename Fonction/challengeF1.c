#include <stdio.h>
#include <stdlib.h>

int somme(int num1,int num2){

int s;

s=num1+num2;

return s;

}


int main(int argc ,char *argv[]){

int n1 ,n2;
printf("entrez deux numero ");

scanf("%d",&n1);
scanf("%d",&n2);

printf("la somme est : %d",somme(n1,n2));
}
