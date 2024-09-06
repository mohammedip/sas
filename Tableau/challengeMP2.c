#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;


    printf("entrez le nombre des element : ");
    scanf("%d",&size);

   int t[size] , recherch=0;

   printf("entrez l'element de recherche : ");
    scanf("%d",&recherch);

  for(int i=0;i<size;i++){

       printf("nombre %d : ",i+1);
      scanf("%d",&t[i]);



  }
  for(int i=0;i<size;i++){
  if(t[i]==recherch){

  printf("element present : %d",t[i]);
  break;
  }else if (t[i]!=recherch && i==size-1){
      printf("element non present");
      }else{
  continue;
  }
  }

return 0;
}
