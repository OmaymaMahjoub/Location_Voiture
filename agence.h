
#include <iostream>
#include "voiture.h"
#include "parking.h"
#include "client.h"
#include "date.h"
using namespace std;

class agence
{
    private:

        list<parking> liste_parking;
        list<client> liste_client;

    public:

        //Constructeur
        agence();
    
//********************** Méthodes des clients **************************//
        //Lire les données concernant les clients
        void lire_fichier_cl();


        //Sauvegarder les données des clients dans le fichier
        void sauvegarder_client(string nom_fichier, list<client> l);


        bool client_existe(long id);

        void ajouter_client(string nom, long id, date date_auj);

        void creer_client();

        list<client> client_6_mois();



        void update_age_voiture(voiture v);

//********************** Méthodes des parkings **************************//
        //Lire les données concernant les parking
        list<parking> lire_fichier_park();
        void sauvegarder_parking(string nomf, list<parking> l);


        Voiture get_voiture(string immatricule);

        void ajout_voiture(Voiture v,int id);
        void delete_voiture(Voiture V),int id;;


        bool voiture_est_dans_ce_parking(Voiture V, int id,);
        bool le_parking_est_disponible(int id;)


        float moy_prix();

        void vider_le_parking();
        void grouper_dans_un_parking();
        void vider_selon_categories();
 //********************** Création du contrat **************************//
    voiture wanted_car();    
    void creer_contrat();
        



};

