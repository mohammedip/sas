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

void modifier(struct Contact *c1){
char t1[100], t2[100];
printf("entrer le nouveau numero de telephone : ");
scanf("%s",t1);

strcpy(c1->numTel,t1);

printf("entrer le nouveau email : ");
scanf("%s",t2);

strcpy(c1->email,t2);


}


void afficher(struct Contact c1){


printf("le nom : %s\n",c1.nom);
printf("le numero de telephone : %s\n",c1.numTel);
printf("l'email : %s\n",c1.email);


}
int main(int argc ,char *argv[]){

struct Contact contacs[100];


int index_des_contacts=0;

char n[100];

while(1){
      struct Contact c1;
int index_affichage=0;
    int menu=0;
    printf("1-Ajouter 2-Modifier 3-Supprimer 4-Afficher 5-Rechercher 6-Quitter : ");
    scanf("%d",&menu);

    switch(menu){
        case 1:
            c1=ajouter();
            contacs[index_des_contacts]=c1;
            index_des_contacts++;
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

            printf("entrer le nom : ");
            scanf("%s",n);

            for(int i=0;i<100;i++){
                if(strcmp(n,contacs[i].nom)==0){
                        for(int j=i;j<100;j++){
                    contacs[j]=contacs[j+1];
                    }
                    printf("bien supprimer\n");
                    index_des_contacts--;
                    break;
                }else if (strcmp(n,contacs[i].nom)!=0 && i==99){
                printf("ce nom n'existe pas !\n");
                }else{
                continue;
                }
            }



        break;
        case 4:


            if(index_affichage==index_des_contacts && index_des_contacts==0){
                printf("aucun contact\n");
            }else{
           while(index_affichage!=index_des_contacts){

                printf("contact %d : \n",index_affichage+1);
            afficher(contacs[index_affichage]);

            index_affichage++;
            }}


        break;
        case 5:
         printf("entrer le nom : ");
         scanf("%s",n);

                        for(int i=0;i<100;i++){
                            if(strcmp(n,contacs[i].nom)==0){
                                printf("contact %d : \n",i+1);
                                afficher(contacs[i]);
                                break;
                            }else if (strcmp(n,contacs[i].nom)!=0 && i==99){
                            printf("ce nom n'existe pas !\n");
                            }
                        }


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



