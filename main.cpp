#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;

struct StudentData{
    string matNo;
    string FirstName;
    string LastName;
    int level;
    double dues_payed;
};




int main(){
    StudentData stdDat[3];
    string line;

    ifstream infile;
    infile.open("data.txt");

    while(std::getline(infile, line)){
        break;
    }

    int x = 0;

    for (x = 0 ; x < 3 ; x++){
        std::getline(infile, line);
        istringstream iss(line);
        iss >>stdDat[x].matNo>>stdDat[x].FirstName >> stdDat[x].LastName >> stdDat[x].level >> stdDat[x].dues_payed; 
    }
    cout<<"\t\tStudent Data \n\n\n";
    for (x = 0 ; x < 3; x ++){
        cout<<"MatNo.:\t\t"<< stdDat[x].matNo<<endl;
        cout<<"Name : \t\t"<<stdDat[x].FirstName<<"  "<< stdDat[x].LastName<<endl;
        cout<<"Level : \t"<<stdDat[x].level<<endl;
        cout<<"Dues Payed : \t"<<stdDat[x].dues_payed<<endl;
        cout<<endl;
    }

    infile.close();
    return 0;
}