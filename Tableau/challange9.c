#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){


int t[5]={1,3,5,7,6},t1[5] ;

int j=4;
for(int i=0;i<5;i++){
 
            t1[j]=t[i];
        
    j--;
    
}

   
for (int i=0;i<5;i++){
   t[i]=t1[i];
   
printf("%d ",t[i]);


}


}
