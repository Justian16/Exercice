#include "Rectangle.cpp"
#include <iostream>

int main ()
{
    int longueur, largeur;
    std::cout<<"Entrer la valeur du longueur:"<<std::endl;
    std::cin>>longueur;
    std::cout<<"Entrer la valeur du largeur"<<std::endl;
    std::cin>>largeur;
    Rectangle test(longueur,largeur)
    diagonale(longueur,largeur);
    perimetre(longueur,largeur);
    surface(longueur,largeur);
    return 0;
}
