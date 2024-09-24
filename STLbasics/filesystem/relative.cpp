#include <iostream>
#include <string>
#include <filesystem>

using namespace std;

int main(){
    filesystem::path directory("pathRelative.txt");
    
    string str(100, '+');
    cout << str << "\n";
    
    cout << "current path: " << filesystem::current_path() << "\n";
    cout << "absolute path: " << filesystem::absolute(directory) << "\n";
    cout << "canonical path: " << filesystem::canonical(directory) << "\n";

    cout << str << "\n";
    cout << filesystem::path{"build"} / "pathRelative.txt" << "\n";

}   