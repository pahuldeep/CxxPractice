/** Practice Question: Zero-Cost Abstractions in C++
 * 
 * @Task
 * 1. Create a base class `GameObject` with a pure virtual function `render()`.
 * 2. Implement at least two derived classes (e.g., `Player` and `Enemy`) that inherit from `GameObject` and implement the `render()` function.
 * 3. Create a `GameEngine` class that stores a collection of `GameObject` pointers and has a method to render all objects.
 * 4. Demonstrate how you would use these classes to create and render multiple game objects.
 * 5. Explain how this implementation leverages zero-cost abstractions in C++.
 * 
 * @Bonus
 * modify this design to include different rendering strategies (e.g., 2D sprites, 3D models) 
 * without losing the benefits of zero-cost abstractions?
 * 
 * @Remember to consider:
 * - How virtual functions are implemented in C++
 * - The role of the compiler in optimizing abstract code
 * - How this design allows for flexibility without sacrificing performance
 */ 

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// Base class for all game objects
class GameObject {
public:
    virtual void render() = 0;
    virtual ~GameObject() = default;
};

// Player class
class Player : public GameObject {
public:
    void render() {
        std::cout << "Rendering Player\n";
    }
};

// Enemy class
class Enemy : public GameObject {
public:
    void render() {
        cout << "Rendering Enemy\n";
    }
};

// Game Engine class
class GameEngine {
    vector<unique_ptr<GameObject>> objects; //using smart pointer for better memory management

public:
    void addObject(unique_ptr<GameObject> obj) {
        objects.push_back(std::move(obj));
    }

    void renderAll() {
        for (auto& obj : objects) {
            obj->render();
        }
    }
};

int main() {
    GameEngine engine;

    // Create and add game objects
    engine.addObject(make_unique<Enemy>());
    engine.addObject(make_unique<Player>());
    engine.addObject(make_unique<Enemy>());

    // Render all objects
    engine.renderAll();

    return 0;
}
