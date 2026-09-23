/* --------------------------- 
Laboratoire : 02
Auteur(s) : Sam Nait Abbou
Date : 23.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    cout << "Bienvenue dans sur votre calculateur de distance" << endl;
    cout << "------------------------------------------------" << endl;

    // Enregistrement des distances robot-objet
    double dx,dy;
    cout << "Inscrire la distance dx (m): ";
    cin >> dx;
    cout << endl;
    cout << "Inscrire la distances dy (m): ";
    cin >> dy;
    cout << endl;

    // Enregistrement de la distance sur la route avant chemin rocheux
    double l_1;
    cout << "Inscrire la distance l_1 (m) : ";
    cin >> l_1;
    cout << endl;

    double l_2 = sqrt(pow(dy- l_1,2)+pow(dx,2)); // Calcul de L2 en metre

    // Enregistrement des vitesses
    double v_rt, v_rx;
    cout << "Inscrire la vitesse sur route (m/s) : ";
    cin >> v_rt;
    cout << endl;
    cout << "Inscrire la vitesse sur terrain rocheux (m/s) : ";
    cin >> v_rx;
    cout << endl;

    double t = (l_1/v_rt) + (l_2/v_rx); // Calcul du temps

    cout << "Temps de parcours total: " << t << " secondes" << endl;

    return 0;
}