

#include "client.h"
using namespace std;

        client::client(string n, long idd, int j,int m, int a)
        {
            nom=n;
            id=idd;
            date date_loc(j,m,a);
            dernier_date_loc=date_loc;
        }


        //Retourne le nom du client
        string client::getnom()
        {
            return nom;
        }


        //Retourne l'id du client
        long client::getid()
        {
            return id;
        }

        //Retourne la dernière date de location du client
        date client::getdate()
        {
            return dernier_date_loc;
        }


        void client::setdate(date d)
        {
            dernier_date_loc=d;
        }