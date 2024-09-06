#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;


    printf("entrez le nombre des element : ");
    scanf("%d",&size);

   int t[size] ;



  for(int i=0;i<size;i++){

       printf("nombre %d : ",i+1);
      scanf("%d",&t[i]);



  }
  for(int i=0;i<size;i++){
if(t[i]%2==0){
 printf("%d ",
        t[i]);
}else{
continue;}





  }

return 0;
}
