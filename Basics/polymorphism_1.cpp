/**
 * @brief This code illustrates four types of generic programming:
 * 1. **Inclusion**: Generic methods that operate on any data type (dynamic).
 * 2. **Parametric**: Generic methods with type deduction (static).
 * 3. **Overriding**: Changing method behavior in derived classes (base and child).
 * 4. **Overloading**: Multiple methods with the same name but different parameters.
 */


#include <iostream>
#include <vector>

using namespace std;

class Algorithm{
public:
    virtual ~Algorithm() {}
    virtual void cluster() = 0;
};

class kmean: public Algorithm{
    void cluster(){
        cout << "cluster by k-mean" << endl;
    }
};

class kmode: public Algorithm{
    void cluster(){
        cout << "cluster by k-mode" << endl;
    }
};

class kmedian: public Algorithm{
    void cluster(){
        cout << "cluster by k-median" << endl;
    }
};

class dataMiner{
public:
    void cluster(Algorithm *pa){
        pa->cluster();
    }
};

int main()
{
    vector<Algorithm*> algo;
    
    algo.push_back(new kmean());
    algo.push_back(new kmode());
    algo.push_back(new kmedian());
    algo.push_back(new kmode());
    algo.push_back(new kmean());

    dataMiner extract;
    for(auto i = 0; i < algo.size(); i++){
        extract.cluster(algo[i]);
    }

}
