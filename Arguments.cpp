#include<iostream>
using namespace std;
//void duplicate(int& a,int& b){a*= 2;   b<<=1;}
class A{float i,j;};
class B{
    int x,y;
        public:
            B(int a,int b)
            {a = x; b = y;}
            int result()
        {return x+y;} 
};

int main()
{
    A d;
    B* p;
    p = (B*) &d;
    cout<<p->result();
    return 0;
}