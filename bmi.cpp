// basic converter and BMI calculator

#include <fstream>
#include <iomanip>
#include <stdlib.h>
#include "bmi.h";
bool fentry;
//write
void write(string name ,int age , double height , double weight , double bmi ) {
    ofstream myfile;

    myfile.open ("theFile.csv" , ofstream::out | ofstream::app);
    if (fentry) {
        myfile << name<<"#"<<age<<"#"<<height<<"#"<<weight<<"#"<<bmi<<endl;
        myfile << "Name "<<","<<"BMI "<<","<<"Average Weight"<<","<<
               "Target"<<","<<"Loss"<<","<<"Total Weight"<<","<<"Days"<<endl;
    }
    myfile << name <<" , "<<age<<","<<height<<","<<weight<<","<<bmi<<endl;
    myfile.close();

};

//read

string read() {
    string line,str;
    ifstream myfile1 ("theFile.csv");
    int counter=0;
    if (myfile1.is_open()) {
        while ( getline (myfile1,line) ) {
            counter++;
            cout <<line ;
            str +=line+"..";
        }
        myfile1.close();
    }
    //get
    //cout <<counter << str.at(21)<<endl;

    return str;
};

//
template <class T>
T getVal(string message ) {
    cout<<"================================================================================\n";
    cout <<message;
    T val;
    cin >> val;
    return val;
};








int main() {

    //  string _myFile="theFile.csv";

    ifstream file("theFile.csv");
    if (!file) {
        cout <<"new file "<<read()<<endl;
        fentry=true;
    } else {
     cout <<read()<<endl;
        fentry=false;
    }
/*
totalWeight
days

*/

    cout<<"================================================================================\n";
    cout<<"***************************** BMI Calculator ***********************************\n";
    cout<<"================================================================================\n";
    string name = getVal<string>("Enter your name : ");
    unsigned int age = getVal<unsigned int>("Enter your age : ");
    system("clear");
    double height = getVal<double>("Enter your height(cm) : ");
    double weight = getVal<double>("Enter your weight(kg) : ");


    person person(name,age,height,weight);
    double bmi =person.getBmi(height , weight);
    person.toString(height,weight);
    cout <<person.getName()<<" your BMI is : "<<bmi;
    cout <<person.standing(bmi)<<endl;
    cout <<"\nYour ideal weight should be "<<person.ideal(weight)<<endl;
    write(name,age,height,weight,bmi);

//
    return 0;
}
