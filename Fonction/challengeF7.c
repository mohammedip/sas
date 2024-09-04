#include<stdio.h>
#include<stdlib.h>

char inverse(char t1[10]){

char t2[10]={0};
int j=9;
for(int i=0;i<10;i++){


t2[j]=t1[i];
j--;
}
printf("%s : ",&t1);
for(int i=0;i<10;i++){

t1[i]=t2[i];
}
}

int main(){

char t[10];
printf("entrez une chaine de caractere : ");

scanf("%s",&t);

printf("la chaine inverser est %s : ",inverse(t));

}
