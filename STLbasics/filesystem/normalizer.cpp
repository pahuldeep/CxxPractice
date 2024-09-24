#include <iostream>
#include <filesystem>

using namespace std;

int main(int argc, char *argv[]){
    
    if(argc != 2){
        cout << "currently used: " << argv[0] << " path \n";
        return 1;
    }

    filesystem::path directory{argv[1]}; 
    
    if(!filesystem::exists(directory)){
        cout << "Path " << directory << " does not exist. \n";
        return 1;
    }

    cout << filesystem::canonical(directory) << "\n";
}
