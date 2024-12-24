/*  
@brief - Inheritance
@details - demonstrated by Eucidean Distance inheriting from Distance and implementing the abstract method.

@example 
Abstraction is used through the pure virtual function in the Distance class.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Distance
{
private:
    string _name;

public:
    Distance(const string &name) : _name(name) {}
    ~Distance() {}

    virtual double operator()(const vector<double> &x, const vector<double> &y) const = 0; /* pure virtual function operator() */
    const string &name() { return _name; } /* abstraction [ _name ] or encapsulation */
};

class Eucidean_Distance : public Distance
{
public:
    Eucidean_Distance() : Distance("Eucidean distance") {}

    double operator()(const vector<double> &x, const vector<double> &y) const
    {
        if (x.size() != y.size()) return -1.0;

        double d_sum = 0.0;
        
        // for (auto i = 0; i < x.size(); ++i)        {
        //     d_sum += (x[i] - y[i]) * (x[i] - y[i]); // simple formula
        // } 
        // return sqrt(d_sum);

        for(auto i = 0.0; i < x.size(); ++i){
            d_sum += hypot(x[i] - y[i], 0.0);    // hypotenuse formula (precise)
        }
        return d_sum;
    }
};

class Manhattan_Distance : public Distance
{
public:
    Manhattan_Distance() : Distance("Manhattan distance") {}

    double operator()(const vector<double> &x, const vector<double> &y) const override
    {
        if (x.size() != y.size()) return -1.0;

        double d_sum = 0;
        for (auto i = 0; i < x.size(); ++i)
        {
            d_sum += abs(x[i] - y[i]);
        }
        return d_sum;
    }
};

class Chebyshev_Distance : public Distance
{
public:
    Chebyshev_Distance() : Distance("Chebyshev distance") {}
    double operator()(const vector<double> &x, const vector<double> &y) const override
    {
        if (x.size() != y.size()) return -1.0;

        double max_diff = 0.0;
        for (auto i = 0; i < x.size(); ++i)
        {
            double diff = abs(x[i] - y[i]);
            if (diff > max_diff)
            {
                max_diff = diff;
            }
        }
        return max_diff;
    }
};

int main()
{
    vector<double> x(2), y(2);
    x = {0, 0};
    y = {1, 1};

    // Eucidean between vectors x and y
    Eucidean_Distance eucid;
    double dist_1 = eucid(x, y);
    cout << eucid.name() << ": " << dist_1 << endl; /* eucid._name object call is inaccessible*/

    // Manhattan between vectors x and y
    Manhattan_Distance manhattan;
    double dist_2 = manhattan(x, y);
    cout << manhattan.name() << ": " << dist_2 << endl;

    // Chebyshev between vectors x and y
    Chebyshev_Distance chebyshev;
    double dist_3 = chebyshev(x, y);
    cout << chebyshev.name() << ": " << dist_3 << endl;

    return 0;
}
