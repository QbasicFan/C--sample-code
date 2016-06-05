#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
bool isDigit (string str){
for (int i=0;i<str.length();i++)
if (! ((int)str.at(i)>47 && (int)str.at(i)<58) )
return false;
return true;
}

int main (int argc , char * argv[]){
string d="1313212";

cout << "Is it a digit ? "<<endl;
if (isDigit(d))
cout <<"yes"<<endl;
else 
cout <<"no"<<endl;



return 0;
}
