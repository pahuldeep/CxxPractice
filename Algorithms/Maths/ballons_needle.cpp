/* Buffon's needle

p = 2 / pi * l/t
l = lenght
t = unit or line

imagine random needle is droping at floor with equally spaced lines. the lenght of needle is the same as the distance between the line. 
write a program to simulated dropping needles that counts no. of times needles cross the lines in floor.
*/

#include <iostream>

// #define M_PI 3.142857142857143
using namespace std;

auto drop_needle(int &num_trails){
    int cross = 0;
    for(int i = 0; i < num_trails; i++){
        
        double x = double(rand()) / RAND_MAX;
        double theta = double(rand()) / RAND_MAX * M_PI / 2;

        double distance = x * cos(theta);

        if (distance < 0.5){
            cross +=1;
        }
    }
    return cross;
}

int main(){
    int num_trails;
    cin >> num_trails;

    cout << drop_needle(num_trails);
}