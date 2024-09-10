#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

char phrase[]={"bonjour"};
char phrase1[]={" mohammed"};

int j=0;
for(int i=0;i<100;i++){

    if (phrase1[j]!='\0'){

        if (phrase[i]!='\0'){

                continue;

        }else{
            phrase[i]=phrase1[j];
             phrase[i+1]='\0';



        }


}else if (phrase1[j]=='\0'){

            break;
        }
        j++;

}
printf("votre chaine est : %s",phrase);

}






