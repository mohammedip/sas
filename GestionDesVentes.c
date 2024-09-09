#include<stdio.h>
#include<stdlib.h>


int main(){
int mtvente[100],nmbprod=0,tmtvente=0,max=0,min=0,moyen=0,seuil=0;


printf("combien de produit ont ete vendus aujourd'hui ? ");
scanf("%d",&nmbprod);

for(int i=0;i<nmbprod;i++){

    printf("entrez le mantant de la vente du produit %d :",i+1);
    scanf("%d",&mtvente[i]);

}

int menu=0;
while(1){

printf("Que souhaitez-vous faire ?\n");
printf("1-Calculer le total de vente \n2-la vente la plus elevee et la plus basse \n3-les vente superieures a une moyenne donnee \n4-nombre des ventes superieures a 100 \n5-nombre des ventes inferieures a 100 \n6- quittee : \n");

printf("entrez votre choix : ");
scanf("%d",&menu);

switch(menu){
case 1:
for(int i=0;i<nmbprod;i++){
 tmtvente+=mtvente[i];


}
printf("\n\n");
printf("le total de vente : %d\n",tmtvente);
printf("\n\n");
    break;
    case 2:
for(int i=0;i<nmbprod;i++){
        if (max<mtvente[i]){

            max=mtvente[i];

        }else{
        continue;
        }
        min=mtvente[0];
        if (min>mtvente[i]){

            min=mtvente[i];

        }else{
        continue;
        }

}
printf("\n\n");
printf("la vente la plus elevee : %d et la plus basse : %d \n",max,min);
printf("\n\n");
    break;
    case 3:
        moyen=tmtvente/nmbprod;
for(int i=0;i<nmbprod;i++){
        if (moyen<mtvente[i]){

        printf("\n\n");
            printf("la vente de produit %d : %d\n",i+1,mtvente[i]);
        printf("\n\n");

        }else if(moyen>mtvente[i] && i==nmbprod-1){
            printf("aucune vente trouver !\n");

        }else{
        continue;
        }
}

    break;
    case 4:
        printf("entrez le seuil : ");
        scanf("%d",&seuil);
for(int i=0;i<nmbprod;i++){
        if (seuil<mtvente[i]){

        printf("\n\n");
            printf("la vente de produit %d : %d\n",i+1,mtvente[i]);
            printf("\n\n");

        }else if(seuil>mtvente[i] && i==nmbprod-1){
            printf("aucune vente trouver !\n");

        }else{
        continue;
        }
}

    break;
    case 5:
        printf("entrez le seuil : ");
        scanf("%d",&seuil);
for(int i=0;i<nmbprod;i++){
        if (seuil>mtvente[i]){

        printf("\n\n");
            printf("la vente de produit %d : %d\n",i+1,mtvente[i]);
            printf("\n\n");

        }else if(seuil<mtvente[i] && i==nmbprod-1){
            printf("aucune vente trouver !\n");

        }else{
        continue;
        }
}

    break;
    case 6:
        printf("\n\n");
printf("au revoir");
       return 0;

    break;
    default:
        printf("\n\n");
        printf("il faut choisir un numero dans le menu !\n");
        printf("\n\n");

break;





}


}


}
