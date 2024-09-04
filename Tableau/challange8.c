#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){


int t[5]={1,3,5,7,3} , t1[5];


for(int i=0;i<5;i++){

t1[i]=t[i];

}

   
for (int i=0;i<5;i++){
   
printf("%d , %d\n",t[i],t1[i]);


}

}