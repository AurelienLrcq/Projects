#include "cihm.h"
#include "stdlib.h"

CIhm::CIhm()
{

}


void CIhm::fonctionPrincipale()
{
    int a, b, calcul; /*déclaration de 3 variables de type entière*/
    int u ;
    char v ;
    cout << "BONJOUR\n\n"; /* utilisation d'une fonction-bibliothèque */
    a = 10 ; /* affectation*/
    b = 50 ; /* affectation */
    u = 65 ;
    v = 'A' ;
    calcul = (a + b)*2 ; /*affectation et opérateurs*/
    cout << "Voici le resultat : "<< calcul << "\n\n" ;
    cout << "1er affichage de u : " << u << endl ;
    cout << "2ieme affichage de u : " << (char)u << "\n\n" ;
    cout << "1er affichage de v: "<< v << endl ;
    cout << "2eme affichage de v: "<< (int)v << "\n\n";
    system ("pause");

}

void CIhm::fonctionExercice2()
{
    system ("cls");
    int c;
    c = 322;  /*c est le caractère alphanumérique B*/
    cout << (char)c << endl; /* affiche la valeur de c en caractère*/
    cout << (int)c << endl; /* affiche la valeur de c en entier*/
    cout << oct << (int)c << endl; /* donne la valeur de c en bit*/
    cout << hex << (int)c << endl; /* affiche la valeur de c en hexadécimal*/
    cout << dec << (int)c << endl; /* affiche la valeur de c en décimal*/
    system ("pause");

}

void CIhm::fonctionExercice3()
{
    system ("cls");
    char c = 'A'; /* c est le caractère alphanumérique A */
    cout << "decimal=" << (int)c << "ASCII=" << c << endl;
    system ("pause");
}

void CIhm::fonctionExercice4()
{
    system ("cls");
    int a, b, calc1, calc2, calc3, calc4, calc5; /*Déclaration de 2 variables de type entières*/
    cout << "start\n\n";
    a = -21430 ; /* affectation */
    b = 4782 ;
    calc1 = a + b ; /* affectation et opérateur */
    calc2 = a - b ;
    calc3 = a * b ;
    calc4 = a / b ;
    calc5 = a % b ;
    cout<< "Voici le resultat de a+b = " << dec << (int)calc1 << endl;
    cout<< "Voici le resultat de a-b = " << dec << (int)calc2 << endl;
    cout<< "Voici le resultat de a*b = " << dec << (int)calc3 << endl;
    cout<< "Voici le resultat de a/b = " << dec << (int)calc4 << endl;
    cout<< "Voici le resultat de a%b = " << dec << (int)calc5 << endl;
    system ("pause");
}

void CIhm::calculPerimetreSurface()
{
    float pi, r, calculx, calculy ;
    cout << "start\n\n";

}


