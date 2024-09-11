#include<stdio.h>
#include<stdlib.h>


struct Date{

char day[50];
char mois[50];
char year[50];


};

struct Etudiant{


int numUniq;
char nom[50];
char prenom[50];
struct Date dateDeNaissance;
char Departement[50];
float noteGenerale;

};

struct Etudiant ajouter(){

    struct Etudiant etudiant1;


    printf("entrez le nom : ");
    scanf("%s",etudiant1.nom);

    printf("entrez le prenom : ");
    scanf("%s",etudiant1.prenom);

    printf("entrez la date de naissance : \n");
    printf("jour : ");
    scanf("%s",etudiant1.dateDeNaissance.day);
    printf("mois : ");
    scanf("%s",etudiant1.dateDeNaissance.mois);
    printf("annee : ");
    scanf("%s",etudiant1.dateDeNaissance.year);

    printf("entrez le departement : ");
    scanf("%s",etudiant1.Departement);

    printf("entrez la note generale : ");
    scanf("%f",&etudiant1.noteGenerale);

return etudiant1;
}
struct Etudiant modifier(int num,int index,struct Etudiant etudiants[100]){



    for(int i=0;i<index;i++){
            if(etudiants[i].numUniq==num){

        printf("entrez le nom : ");
        scanf("%s",etudiants[i].nom);

        printf("entrez le prenom : ");
        scanf("%s",etudiants[i].prenom);

        printf("entrez la date de naissance : \n");
        printf("jour : ");
        scanf("%s",etudiants[i].dateDeNaissance.day);
        printf("mois : ");
        scanf("%s",etudiants[i].dateDeNaissance.mois);
        printf("annee : ");
        scanf("%s",etudiants[i].dateDeNaissance.year);

        printf("entrez le departement : ");
        scanf("%s",etudiants[i].Departement);

        printf("entrez la note generale : ");
        scanf("%f",&etudiants[i].noteGenerale);

        return etudiants[i];
    }

}


}
struct Etudiant supprimer(int num,int index,struct Etudiant etudiants[100]){

    for(int i=0;i<index;i++){
                    if(etudiants[i].numUniq==num){
                            for(int j=i;j<index;j++){
                        etudiants[j]=etudiants[j+1];
                        }
                        printf("bien supprimer\n");

                        break;
                    }else if (strcmp(num,etudiants[i].numUniq)!=0 && i==99){
                    printf("ce nom n'existe pas !\n");
                    }else{
                    continue;
                    }
                }

}
void afficher(struct Etudiant etudiant1){

    printf("le id : %d\n",etudiant1.numUniq);
    printf("le nom : %s\n",etudiant1.nom);
    printf("le prenom : %s\n",etudiant1.prenom);
    printf("la date de naissance : %s/ %s /%s \n",etudiant1.dateDeNaissance.day,etudiant1.dateDeNaissance.mois,etudiant1.dateDeNaissance.year);
    printf("le departement : %s\n",etudiant1.Departement);
    printf("la note generale : %.2f\n",etudiant1.noteGenerale);

}

struct Etudiant rechercheNom(struct Etudiant etudiants[]){
    char n[100];

    printf("entrer le nom : ");
             scanf("%s",n);

                            for(int i=0;i<100;i++){
                                if(strcmp(n,etudiants[i].nom)==0){
                                    printf("etudiants %d : \n",i+1);
                                    return etudiants[i];
                                }else if (strcmp(n,etudiants[i].nom)!=0 && i==99){
                                printf("ce nom n'existe pas !\n");
                                }
                            }
}
struct Etudiant rechercheDep(struct Etudiant etudiants[], int index,char dep[100]){

    struct Etudiant departmEtd[100];

                            for(int i=0;i<100;i++){
                                if(strcmp(dep,etudiants[i].Departement)!=0){

                                   continue;

                                }else if (strcmp(dep,etudiants[i].Departement)==0 ){
                                departmEtd[i]= etudiants[i];
                                }
                            }
    return departmEtd[index];
}

void calcMoynGener(struct Etudiant etudiants[],int index){
    float depMoynGener=0,unvrsMoynGener=0;
    int conteur=0;
    char dep[100];

    printf("entrer le departement : ");
             scanf("%s",dep);
             for(int i=0;i<index;i++){

                  if (strcmp(dep,etudiants[i].Departement)==0 ){

                depMoynGener+=etudiants[i].noteGenerale;
                conteur++;
            }
        unvrsMoynGener+=etudiants[i].noteGenerale;

    }
    unvrsMoynGener/=index;
    depMoynGener/=conteur;
    printf("moyenne generale de l'unuversite : %.2f\n moyenne generale de departement %s : %.2f\n",unvrsMoynGener,dep,depMoynGener);

}

void statistique(int nbEtd,struct Etudiant etudiants[],int index){

int conteur=0,seuil=0,max=0;
char dep[100];

    printf("entrer le departement : ");
    scanf("%d",&seuil);

     printf("Nombre total d'etudiants inscrits : %d",nbEtd);
   // printf("%d",conteur);

    //printf("entrer le departement : ");
    //scanf("%s",dep);
             for(int i=0;i<index;i++){

                  if (strcmp(dep,etudiants[i].Departement)==0 ){

                conteur++;
            }
            if (etudiants[i].noteGenerale>seuil ){

                printf("%s departement %s : %.2f",etudiants[i].nom,etudiants[i].Departement,etudiants[i].noteGenerale);
            }


    }









}

int main(){

    struct Etudiant etudiants[100];
    int choix=0 , index_etudiants=0,numAuto=0;

do{

    int index_affichage=0;

    printf("1-Ajouter un etudiant \n2-Modifier ou supprimer un etudiant \n3-Afficher les details d'un etudiant \n4-Calculer le moyen generale \n5-Statistiques \n6-Recherche par le nom ou le departement \n7-Tri par alphabe, moyenne generale ou le statut de reussite \n8-Quitter \n");
    printf("Que vous souhaitez faire ? ") ;
    scanf("%d",&choix);

    switch(choix){
case 1:
    printf("\n");

    struct Etudiant etudiant1;

    etudiant1=ajouter();
numAuto++;
etudiant1.numUniq=numAuto;
   etudiants[index_etudiants]=etudiant1;

   index_etudiants++;
   printf("%d\n",etudiant1.numUniq);
    printf("bien Ajouter\n");

    printf("\n");
    break;
case 2:
        printf("\n");
        int choixMdSp=0 ,num;
    printf("1-Modifier 2-Supprimer");
    scanf("%d",&choixMdSp);

    if(choixMdSp==1){

            printf("entre le numero d'etudiants :");
    scanf("%d",&num);
    modifier(num,index_etudiants,etudiants);

    }else if(choixMdSp==2){

        printf("entre le numero d'etudiants :");
    scanf("%d",&num);
        supprimer(num,index_etudiants,etudiants);
        index_etudiants--;
    }
        printf("\n");
        break;
case 3:
        printf("\n");
        if(index_affichage==index_etudiants && index_etudiants==0){
                    printf("aucun etudiant trouver\n");
                }else{

               while(index_affichage!=index_etudiants){

    printf("etudient %d : \n",index_affichage+1);
                afficher(etudiants[index_affichage]);

                index_affichage++;
                }}


        printf("\n");
        break;
case 4:
        printf("\n");

        calcMoynGener(etudiants,index_etudiants);

        printf("\n");
        break;
case 5:
        printf("\n");
        printf("Statistiques\n");
        printf("\n");
        break;
case 6:
        printf("\n");
        int choixRech=0;
    printf("rechercher par :1-nom 2-departement");
    scanf("%d",&choixRech);
    if(choixRech==1){
        afficher(rechercheNom(etudiants));
    }else if(choixRech==2){

        if(index_affichage==index_etudiants && index_etudiants==0){
                    printf("aucun etudiant trouver\n");
                }else{

    char dep[100];
    printf("entrer le departement : ");
             scanf("%s",dep);
               while(index_affichage!=index_etudiants){

                   afficher(rechercheDep(etudiants,index_affichage,dep));

                index_affichage++;
                }
                }
        }else {
    printf("Il faut choisire un element de menu !\n");
    }
        printf("\n");
        break;
case 7:
        printf("\n");
        printf("Tri\n");
        printf("\n");
        break;
case 8:
        printf("\n");
        printf("Au revoir\n");
        return 0 ;
        break;
default:
        printf("\n");
        printf("Il faut choisire un element de menu !\n");
        printf("\n");
        break;


    }


}while(1);



}
