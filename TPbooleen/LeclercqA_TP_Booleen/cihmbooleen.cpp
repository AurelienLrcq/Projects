#include "cihmbooleen.h"

CIhmBooleen::CIhmBooleen()
{
  menu();
}
//-------------------------------------------------------------------------------------------------------
void CIhmBooleen::menu()
{
    char code;
    do
    {
        system("cls");
        cout<< "        5 exercices sur les operateurs booleens et logiques\n";
        cout<< "       ====================================================\n"<<endl;
        cout<< "                        Leclercq - Aurelien \n\n"<<endl;
        cout<< " a - Exercice 1 : testCondition \n\n\n";
        cout<< " b - Exercice 2 : combinaisonLogique \n\n\n";
        cout<< " c - Exercice 3 : conversionBinaire \n\n\n";
        cout<< " d - Exercice 4 : incrementeVariable \n\n\n";
        cout<< " e - Exercice 5 : setBitVal \n\n\n";
        cout<< " q - Quitter le programme\n\n\n";
        cout<< "    Selectionner a,b,c,d,e ou q ? : ";
        code=getch();
        if(code == 'a') testCondition(); //si la condition est vraie, on exectue la méthode testCondition()//
        if(code == 'b') combinaisonLogique(); //si la condition est vraie, on execute la méthode combinaisonLogique()//
        if(code == 'c') conversionBinaire(); //si la condition est vraie, on execute la méthode conversionBinaire()//
        if(code == 'd') incrementeVariable(); //si la condition est vraie, on execute la méthode incrementeVariable()//
        if(code == 'e') SetBitVal(); //si la condition est vraie, on execute la méthode setBitVal()//
    } while (code !='q'); //Si l'on entre q, le programme en cours se ferme//
}

//-----------------------------------------------------------------------------------------------
void CIhmBooleen::testCondition()// code source de la méthode calculSPM()
{
    system("cls");
    int val;
    cin>>val;
    if(val)
        {
            cout<<"val est vrai"<<endl;
        }
        else
            {
                cout<<"val est faux"<<endl;
            }
    system("pause");
}

//-----------------------------------------------------------------------------------------------
/*
Algorithme : Calcul somme, produit, et moyenne de n nombres entiers
Auteur: Leclercq
Date:07/10/21

Variables:
val1, val2 = entiers

début
afficher"Calcul de la somme, du produit et de la moyenne de n nombres entiers"
afficher "Donner le nombre de notes a saisir"
saisir nb
cpt = 0
somme = 0
produit = 1
tant que cpt différent de nb, faire
cpt = cpt+1
afficher : "note" cpt ":"
saisir notes
somme = somme + notes
produit = produit*notes
fin tant que
reste=dividende
fin
*/
void CIhmBooleen::combinaisonLogique()// code source de la méthode calculSPM()
{
    system("cls");
    int val1, val2;
    cout<<"valeur 1 : "<<endl;
    cin>> val1;
    cout<<"valeur 2 : "<<endl;
    cin>> val2;
    cout<<"~val1 = "<<~val1<<endl;
    cout<<"val1&val2 = "<<(val1 & val2)<<endl;
    cout<<"val1|val2 = "<<(val1 | val2)<<endl;
    cout<<"!val1 = "<<!val1<<endl;
    cout<<"val1 && val2 = "<<(val1 && val2)<<endl;
    cout<<"val1 || val2 = "<<(val1 || val2)<<endl;
    system("pause");
}

//-----------------------------------------------------------------------------------------------
void CIhmBooleen::conversionBinaire()// code source de la méthode calculSPM()
{
    system("cls");
    int nb, masque, resultat, compteur;
    cout<<"ConversionBinaire"<<endl;
    cout<<"Donner l'entier compris entre -128 et 127 : "<<endl;
    cin>>nb;
    cout<<"La valeur binaire correspond à : "<<endl;
    masque = 128;
    compteur = 1;
    do
        resultat = nb & masque;
        compteur=compteur+1;
        if (resultat=masque)
            cout<<"1";
        else
            cout<<"0";
       do
            masque>>1;
        while (compteur<=8);
    system("pause");
}

//-----------------------------------------------------------------------------------------------
void CIhmBooleen::incrementeVariable()
{
    system("cls");
    char code, car;
    while(1)
    {
        code=code+1;
        cout<<dec<<code<<endl;
        if(code=1)
        {
            car=getch();
            cin>>car;
            if(car='q')
            {
                break;
            }
        }
    }
    system("pause");
}
//-----------------------------------------------------------------------------------------------
void CIhmBooleen::SetBitVal()
{
    system("cls");
    int val, nb;
    cout<<"Donner une valeur comprise entre 0 et 256 : "<<endl;
    cin>>val;
    cout<<"Donner un chiffre entre 0 et 8 : "<<endl;
    cin>>nb;
    bitset<8>(val)>>1>>nb;
    cout<<bitset<8>(val)<<endl;
    system("pause");
}
