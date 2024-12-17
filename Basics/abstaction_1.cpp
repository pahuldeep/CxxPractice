/* zero-cost abstractions example first simple characters*/

#include <iostream>
using namespace std;

struct Character
{
    int health;
    int strength;
    int speed;
};

int main()
{
    Character pawns[1000];
    for (int i = 0; i < 1000; i++)
    {
        pawns[i].health = 100;
        pawns[i].strength = 10;
        pawns[i].speed = 5;
    }
}