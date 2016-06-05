//binary search
#include <iostream>
#include <stdlib.h>   
#include <time.h>
#include <string>
using namespace std;

void show(int *ar , int Max , int i=0){

for (;i<Max;i++)
cout <<ar[i]<<" | ";
}

int main(){

const int Max=10;

srand( time(NULL));

int *ar = new int[Max];

for (int i=0;i<10;i++)
ar[i]=rand() % 100;

show(ar,Max);

//sort 
for (int pass=0;pass<Max/2;pass++){
for (int i=0;i<Max-1;i++){
for (int u=i+1;u<Max;u++){

if (ar[i]<ar[u] && i!=u){
int t=ar[u];
ar[u]=ar[i];
ar[i]=t;
break;
}

}
}
}
cout <<endl<<"After sorting : "<<endl<<endl;
show (ar,Max);

cout <<"\n\n";
// binary search 
int key=12,min=0,max=Max,med=0;
string str="Key not found";
while (min <= max){
cout <<"Pre calc min = "<<min<<" , max = "<<max<<" , med "<<med<<" , value of ar["<<med<<"] = "<<ar[med]  <<" , key = "<<key <<endl;
//find medim indice = = (max - min) / 2
med = (max - min)/2;

if (key==ar[med]){
str = "key found";
break;
}else if (key<ar[med]){
min=med;
}else{
max=med;
}

cout <<"Post calc min = "<<min<<" , max = "<<max<<" , med "<<med<<" , value of ar["<<med<<"] = "<<ar[med]  <<" , key = "<<key <<endl;
cout <<"---------------------------------------------\n";
}

cout <<str<<endl;

return 0;
}


