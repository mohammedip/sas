#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int t[8]={9,6,3,2,4,7,8,5},x=0;


for(int i=0;i<8;i++){

    printf("%d ",t[i]);
}

printf("\n");

for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){

    if(t[i]>t[j]){

        x=t[j];
        t[j]=t[i];
        t[i]=x;

    }
    }
}

printf("\n");

for(int i=0;i<8;i++){

    printf("%d ",t[i]);
}

}
