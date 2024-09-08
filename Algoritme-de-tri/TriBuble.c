#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int t[8]={9,6,3,2,4,7,8,5},x=0;


for(int i=0;i<8;i++){

    printf("%d ",t[i]);
}

printf("\n");

for(int i=0;i<7;i++){
for(int j=0;j<7-i;j++){

    if(t[j]>t[j+1]){

        x=t[j+1];
        t[j+1]=t[j];
        t[j]=x;

    }

}
}
printf("\n");

for(int i=0;i<8;i++){

    printf("%d ",t[i]);
}

}

