/* 
@brief there are 4 types:
    inclusion   > generic methods (pure)                (dynamic)
    parameteric > generic methods with type deduction   (static)
    overriding  > changes behaviour [base, child, ....]
    overloading > same name in different methods
    
@return dynamic polymorphism */

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

class dataMiner{
public:
    void cluster(Algorithm *pa){
        pa->cluster();
    }
};

int main(){
    vector<Algorithm*> algo;
    algo.push_back(new kmean());
    algo.push_back(new kmode());
    algo.push_back(new kmode());
    algo.push_back(new kmean());

    dataMiner extract;
    for(auto i = 0; i < algo.size(); i++){
        extract.cluster(algo[i]);
    }

}
