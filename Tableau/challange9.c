#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){


int t[5]={1,3,5,7,6} ;

int x=0;
 for(int j=0;j<4;j++){
for(int i=j+1;i<5;i++){
 x=t[i];
            t[i]=t[j];
            t[j]=x;
       
    
}
}

   
for (int i=0;i<5;i++){
  
   
printf("%d ",t[i]);

}
}


}
