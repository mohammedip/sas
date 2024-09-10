#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

char phrase[100];

printf("entrer un mot : ");
scanf("%s",phrase);

for(int i=0;i<100;i++){
if (phrase[i]=='\0'){

printf("la longueur de votre chaine de caractere est : %d",i);
break;
}else{
continue;
}

}


}
