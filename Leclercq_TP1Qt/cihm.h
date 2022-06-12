#ifndef CIHM_H
#define CIHM_H

#include<iostream> /*bibliothèque d'entrees-sorties standard en C++, la ligne
    montre l'utilisation d'une commande du préprocesseur (#include) qui permet d'inclure
    un fichier dont le nom est passé en argument. Les symboles < et > indiquent qu'il faut
    rechercher ce fichier dans les répertoires connus du compilateur. Le préprocesseur
    remplacera cette commande #include par le contenu du fichier iostream utile pour
    notre application pour la fonction cout.*/
using namespace std;
#include <conio.h>

class CIhm
{
public:
    CIhm();
    void fonctionPrincipale();
    void fonctionExercice2();
    void fonctionExercice3();
    void fonctionExercice4();
    void calculPerimetreSurface();
};

#endif // CIHM_H
