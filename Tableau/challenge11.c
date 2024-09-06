#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;


    printf("entrez le nombre des element : ");
    scanf("%d",&size);

   int t[size] , valrempl=0 , noval=0;

   printf("entrez l'element de recherche : ");
    scanf("%d",&valrempl);

  for(int i=0;i<size;i++){

       printf("nombre %d : ",i+1);
      scanf("%d",&t[i]);



  }
  for(int i=0;i<size;i++){
  if(t[i]==valrempl){

  printf("entrez le nouveau nombre  : ");
    scanf("%d",&noval);
t[i]=noval;

  }else if (t[i]!=valrempl && i==size-1){
      printf("element non present\n");
      }
  }
for(int i=0;i<size;i++){


      printf(" %d",t[i]);



  }
return 0;
}
