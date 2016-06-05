//Stack based on singly linked list
#include <iostream>

//avoid sdt::cout , std::cin , std::endl etc ...
using namespace std;

//code starts here 

//////////////////////////////////////
//declaring the structs , object ...//
//class prototyping                 //
//////////////////////////////////////
//obj node 
struct node {
public:
node(int counter);//constructor has to be unvoid ... i think
~node();//will be called by delete => obj 
int counter;
node *next;//making a node pointer called next , that points to a node obj or null
};

//obj link list
struct linkList {
public:
linkList (node *first);//takes a node
~linkList ();
void push(node *);
node *pop();
void show();
node *first;
};


//declaring classes
//////////////////////////////
//constructors & destructors//
//////////////////////////////
//node
node::node(int n){counter=n;}
node::~node(){cout <<"delete node "<<endl;}

//linkList
linkList::linkList(node *n){first =n;}
linkList::~linkList(){cout<<"delete linkList"<<endl;delete first;}

////////////////////
//member functions//
////////////////////
//push
void linkList::push(node * n){
if (first==NULL){//so here I can use interchangeably 
		 //first==NULL   <=====>  !first 
cout <<"list is empty"<<endl;//just a little helper
first=new node (n->counter);//set first
}
else{
cout <<"not null , adding "<<n->counter<<endl;
node *tmp = new node(n->counter);//new node
tmp->next=first;//points to first
first=tmp;//then swap them
}
}

///////
//pop//
///////
node * linkList::pop(){
node * tmp=first;
if (!first)
return NULL;
else if (!first->next){
tmp=first;
first=NULL;
return tmp;
}else {
tmp=first;
first=first->next;
return tmp;
}

return first;
}

////////
//show//
////////
void linkList::show(){
node *tmp=first;
while (tmp){
cout <<"value is : "<<tmp->counter<<endl;
tmp=tmp->next;//goto next node
}
}


int main (void){

linkList *n = new linkList(new node(5));
for (int i=0;i<10;i++)
n->push(new node(i));

n->show();
delete n; //cleaning , linkList node 

return 0;
}
