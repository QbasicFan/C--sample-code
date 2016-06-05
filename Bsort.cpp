#include <iostream>
using namespace std ;

int getSize (int * nb ){
int itSize = sizeof(nb);
for (int i=0;i<itSize;i++ )
cout <<"Number is : "<<nb[i]<<endl;
cout <<"Total size is : "<<itSize<<endl;
}

void Bsort(int * nb ){
int itSize = sizeof(nb);
int mn;

for (int inner = 0 ; inner < itSize-1 ; inner++){

mn= nb[inner];
for (int i=inner+1 ; i<itSize;i++)
{
if (mn > nb[i])
mn=nb[i];
swap(nb[i],nb[inner]);
}

}

}




int main (void){
//sorting

int * listi ;

listi = new int [4];

listi[0]=4;
listi[1]=5;
listi[2]=2;
listi[3]=1;


cout << "Unsorted list \n"<<endl;
int y=getSize(listi);


cout << "\nSorted list \n"<<endl;
Bsort(listi);
y= getSize(listi);


return 0;
}
