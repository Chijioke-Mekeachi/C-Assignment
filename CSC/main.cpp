#include<fstream>
#include<iostream>
#include<string>
#include<sstream>


int main(){
    std::ifstream infile("list.txt");
    std::string ing[10];
    std::string line;
    // std::getline(infile, line);

    for(int x = 0; x < 7 ; x ++){
        infile >> line;
        ing[x] = line;
    }
    for (int f = 0 ; f < 7 ; f ++){
        std::cout<< ing[f]<<'\t';
    }
    std::cout<<std::endl;
    return 0;
}