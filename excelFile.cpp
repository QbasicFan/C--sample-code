#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "Test writting to an excel file \n" << endl;

  ofstream myfile ("example.csv", ios_base::app);
  if (myfile.is_open())
  {
    myfile << "Name , Height , Weight\n";
    myfile << "Laetitia , 184 , 94 \n";
    myfile.close();
  }
  else cout << "Unable to open file";

    return 0;
}
