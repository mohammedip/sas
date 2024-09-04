#include <stdio.h>
#include <stdlib.h>

int multipl(int n1, int n2){

int produit=0;

produit=n1*n2;

return produit;
}


int main(int argc, char *argv[]){

int num1=0,num2=0;


printf("entrez deux numero");
scanf("%d",&num1);
scanf("%d",&num2);

printf("le produit de ces deux numero est %d : ",multipl(num1,num2));

}
