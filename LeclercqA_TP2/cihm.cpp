#include "cihm.h"

/*Algorithme de la methode Obtention Numero INSEE
 * Auteur : Leclercq A
 * 20/9/2021
 *
 * Variables : Sexe : 1 ou 2 = numérique
 * Annee = entier
 * Mois = entier entre 1 et 31
 * Departement = entier
 * INSEE
 * Ordre
 * cle = entier
 *
 * Contenu :
 * Afficher " Code INSEE entier, avec calcul de la cle de securite"
 * Afficher " Indiquer votre sexe : Homme(1)/Femme(2)"
 * Saisir sexe
 * Afficher " Entrer l'annee de naissance"
 * Saisir Annee
 * Afficher " Entrer le mois de naissance"
 * Saisir Mois
 * Afficher " Entrer le numero de departement"
 * Saisir Departement
 * Afficher " Entrer le code INSEE de la ville de naissance"
 * Saisir INSEE
 * Afficher " Entrer le numero d'ordre"
 * Entrer Ordre
 *
 * cle <- 97 - (sexe Annee Mois Departement Code INSEE Ordre modulo 97)
 *
 */

CIhm::CIhm()
{    

}

void CIhm::CodeINSEE()
{
    int sexe, annee, mois, departement, INSEE, ordre, cle; /*variables*/
    long long NIR, modulo; /*variables en 64 bits*/
    cout << "\t\t\tEcriture de votre code INSEE complet\n\n" << endl;
    do
    {
        cout << "Entrez le numero de votre sexe (1=masculin;2=feminin) : ";
        cin >> sexe;
    }
    while (1!=sexe && sexe!=2);
    cout << "\n\nEntrez votre annee de naissance : ";
    cin >> annee;
    cout << "\n\nEntrez votre mois de naissance : ";
    cin >> mois;
    cout << "\n\nEntrez le departement : ";
    cin >> departement;
    cout << "\n\nEntrez le numero INSEE de la ville : ";
    cin >> INSEE;
    cout << "\n\nEntrez le numero d'ordre : ";
    cin >> ordre;
    NIR = (sexe*1E12)+(annee*1E10)+(mois*1E8)+(departement*1E6)+(INSEE*1E3)+ordre;
    modulo = NIR%97; /*calcul pour afficher tous les nombres à la suite*/
    cle = 97-modulo;
    cout << "Voici la cle de securite : " << cle << endl;
    cout << "\n\nvoici le numero INSEE entier : " <<NIR*100+cle<< endl;
}
