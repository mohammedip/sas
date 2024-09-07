#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Contact{

char nom[50];
char numTel[50];
char email[60];

};
struct Contact ajouter(){

struct Contact c1;

printf("entrer le nom : ");
scanf("%s",c1.nom);

printf("entrer le numero de telephone : ");
scanf("%s",c1.numTel);

printf("entrer l'email : ");
scanf("%s",c1.email);

return c1;
}

struct Contact modifier(struct Contact *c1){
char n1[100], n2[100];
printf("entrer le nouveau numero de telephone : ");
scanf("%s",n1);

strcpy(c1->numTel,n1);

printf("entrer le nouveau email : ");
scanf("%s",n2);

strcpy(c1->email,n2);


}

void afficher(struct Contact c1){


printf("le nom : %s\n",c1.nom);
printf("le numero de telephone : %s\n",c1.numTel);
printf("l'email : %s\n",c1.email);


}
int main(int argc ,char *argv[]){

struct Contact contacs[100];


int i=0;

char n[100];

while(1){
      struct Contact c1;
int j=0;
    int menu=0;
    printf("1-Ajouter 2-Modifier 3-Supprimer 4-Afficher 5-Rechercher 6-Quitter : ");
    scanf("%d",&menu);

    switch(menu){
        case 1:
            c1=ajouter();
            contacs[i]=c1;
            i++;
            printf("bien ajouter\n");
            break;
        case 2:

            printf("entrer le nom : ");
            scanf("%s",n);
            for(int i=0;i<100;i++){
                if(strcmp(n,contacs[i].nom)==0){
                    modifier(&contacs[i]);
                    printf("bien modifier\n");
                    break;
                }else if (strcmp(n,contacs[i].nom)!=0 && i==99){
                printf("ce nom n'existe pas !\n");
                }else{
                continue;
                }
            }



        break;
        case 3:

            printf("bien supprimer\n");
        break;
        case 4:
            if(j==i && i==0){
                printf("aucun contact\n");
            }else{
           while(j!=i){
                printf("contact %d : \n",j+1);
            afficher(contacs[j]);
            j++;
            }}
        break;
        case 5:

            printf("bien rechercher\n");
        break;
        case 6:

           return 0;
        break;
        default:
            printf("il faut choisir un element dans le menu !\n");
         break;


    }


}





}
