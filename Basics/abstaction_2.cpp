/* zero-cost abstractions example second dynamic characters */

#include <iostream>
#include<memory>
#include<vector>

using namespace std;

class Character
{
private:
    int health;
    int strength;
    int speed;

public:
    Character(int h, int str, int spd) : health(h), strength(str), speed(spd) {}
    virtual void attack() = 0;
};

class Warrior : public Character
{
public:
    Warrior() : Character(150, 15, 3) {}
    void attack() override { /* Warrior attack logic */ }
};

class Archer : public Character
{
public:
    Archer() : Character(100, 8, 7) {}
    void attack() override { /* Archer attack logic */ }
};

int main()
{
    vector<unique_ptr<Character>> heros;
    for (int i = 0; i < 500; i++)
    {
        heros.push_back(make_unique<Warrior>());
        heros.push_back(make_unique<Archer>());
    }
}