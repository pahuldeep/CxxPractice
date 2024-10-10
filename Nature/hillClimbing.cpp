// Pseudocode for Stochastic Hill Climbing.

/*
Input: Itermax, ProblemSize
Output: Current
Current ← RandomSolution(ProblemSize);
 foreach iteri ∈ Itermax do
    Candidate ← RandomNeighbor(Current);
    if Cost(Candidate) ≥ Cost(Current) then
        Current ← Candidate;
    end
end
return Current;
*/

#include <iostream>
#include <vector>
#include <cstdlib> // For rand and srand
#include <ctime>   // For time to seed the random generator

using namespace std;

// Function to generate a random solution (initial state)
vector<int> RandomSolution(int problemSize)
{
    vector<int> solution(problemSize);
    for (int i = 0; i < problemSize; ++i)
    {
        solution[i] = rand() % 100; // Random values in range [0, 99]
    }
    return solution;
}

// Function to generate a random neighbor of the current solution
vector<int> RandomNeighbor(const vector<int> &current)
{
    vector<int> neighbor = current;
    int index = rand() % current.size(); // Select a random index
    neighbor[index] = rand() % 100;      // Modify a random element
    return neighbor;
}

// Cost function that evaluates a solution
int Cost(const vector<int> &solution)
{
    // Example cost: sum of the elements (you can define your own cost function)
    int cost = 0;
    for (int val : solution)
    {
        cost += val;
    }
    return cost;
}

// Stochastic Hill Climbing algorithm
vector<int> StochasticHillClimbing(int iterMax, int problemSize)
{
    // Generate a random initial solution
    vector<int> current = RandomSolution(problemSize);

    for (int iter = 0; iter < iterMax; ++iter)
    {
        // Generate a random neighbor
        vector<int> candidate = RandomNeighbor(current);

        // If the candidate solution has a better or equal cost, update current solution
        if (Cost(candidate) >= Cost(current))
        {
            current = candidate;
        }
    }

    return current; // Return the final solution
}

int main()
{
    srand(time(0)); // Seed random number generator

    int iterMax = 1000;
    int problemSize = 10;

    vector<int> bestSolution = StochasticHillClimbing(iterMax, problemSize);

    // Output the best solution found
    cout << "Best solution found: ";
    for (int val : bestSolution)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
