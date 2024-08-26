#ifndef _RECTANGLE_
#define _RECTANGLE_

class Rectangle
{
public:
    Rectangle();
    int diagonale (int x, int y);
    int perimetre(int x, int y);
    int surface (int x, int y);
private:
    int longueur;
    int largeur;
};
#endif
