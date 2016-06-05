#include <iostream>
#include <string>
/*
Convert a decimal number into a Roman notation
*/
using namespace std;

string roman(int number){
string strList[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"},str;
int numbList[]={1000,900,500,400,100,90,50,40,10,9,5,4,1},ind=0;
while (number){
if (number>=numbList[ind])
str += strList[ind],number-=numbList[ind];
else if (ind++>13)
ind=0;
}
return str;
}


int main()
{
int v=0;
    cout << "Roman number converter" << endl;
    for (;;){
    cout << "\nEnter a value (<0 to quit)";
    cin >>v;
    if (v<0) break;cout <<endl<<roman(v)<<endl;
    }
    return 0;
}
