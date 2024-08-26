#include"Rectangle.hpp"
#include<iostream>

Rectangle::Rectangle();
{std::cout<<"Construction d'un Rectangle";}
Rectangle::diagonale(int x, int y)
{
    int diagonale;
    diagonale = sqrt(x*x + y*y);
    return diagonale;
}
Rectangle::surface(int x, int y)
{
    int surface;
    surface = x*y;
    return surface;
}
Rectangle::perimetre(int x, int y)
{
    int perimetre;
    perimetre = (x+y)*2;
    return perimetre;
}
