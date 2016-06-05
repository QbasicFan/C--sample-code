#include <iostream>
#include <string>
using namespace std;
unsigned const int coef=10000;

//

struct BMI {
private:
    double meter , kilo;
    double feet , pounds , bmi ;

public:
    void setMK(double meter , double kilo) {
        this->meter = meter;
        this->kilo=kilo;
    };
    double getFeet(double meter) {
        return meter*.0328;   //convert from meter to feet
    }
    double getPound(double kilo) {
        return kilo*2.204;   //convert from kilo to pound
    }
    double getBmi(double meter , double kilo) {
        return (kilo/(meter*meter))*coef;
    }


    string standing(double bmi) {
        if (bmi <=18.5 )
            return " under weight ";
        else if (bmi >18.5 && bmi<=25 )
            return " normal weight ";
        else
            return " over weight ";
    };

    double ideal(double kilo) {
        return (21*(meter*meter))/coef;

    };


    void show() {
        cout <<"\n"<<getFeet(meter) <<" feet\n"<<getPound(kilo) <<" pounds\n"<<endl;
        cout << "BMI = "<<getBmi(meter , kilo)<< endl ;
    };
};
//

struct person:public BMI {
public:
    person(string name , int age , double meter , double kilo ) {
        this->name = name ;
        this->age = age ;
        this->meter = meter ;
        this->kilo = kilo ;
        setMK(meter , kilo);
        totalWeight=0;
        days=1;
    };
    ~person() {};
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    void toString() {
        cout <<name<<" , "<<age<<" , "<<meter<<" , "<<kilo<<" , "<<getBmi(meter , kilo)<<endl;
    }
//overload
    void toString(double meter , double kilo ) {
        cout <<meter<<" cm = "<<getFeet(meter)<<" ft  and "<<kilo<<" kg = "<<getPound(kilo)<<" ponds"<<endl;
    }

private:
    string name ;
    unsigned int age ,days;
    double meter , kilo,totalWeight;

};
