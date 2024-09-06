#include <stdio.h>
#include <stdlib.h>

struct Adress{

char ville[100];
char contry[100] ;
char adress[100];
};

struct Date{

int day;
char mois[100] ;
int year;

};

struct Personne{
char firstName[100];
char lastName[100];
char password[100];

   struct Date datenais;
  struct  Adress adress;
};

int main(){

struct Personne p1;

printf("entrez le nom");
scanf("%s",p1.firstName);

printf("entrez le prenom");
scanf("%s",p1.lastName);

printf("entrez le mot de pass");
scanf("%s",p1.password);

printf("entrez la date de naissance");
scanf("%d %s %d",&p1.datenais.day,&p1.datenais.mois,&p1.datenais.year);

printf("%s",p1.datenais.mois);




}
