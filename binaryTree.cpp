/*
Linked list

*/

#include <iostream>
using namespace std;
//node

struct node {
int data ;
node * next;

node (int data ){this->data =data;}

};

//structre

struct link{
node * first ;

link (){
first = NULL;
}
//
bool isEmpty(){return first==NULL;}
//
void add(int data){
if (isEmpty ()){
first = new node (data);
return;
}else{
node * tmp = new node(data);
tmp->next = first;
first = tmp;
}

}
//
void del(int data){

if (isEmpty())
return;
else if (first->data == data){
first = first->next;
return ;
}
else {
node *tmp = first;
while (tmp->next->next != NULL){
if (tmp->next->data == data){
tmp->next = tmp->next->next;
return;
}
tmp=tmp->next;

}


}

}


//
void display (){
node * tmp=first;

while (tmp!=NULL){

cout <<tmp->data<<endl;
tmp=tmp->next;
}


}


};


using namespace std;

int main()
{

link * l = new link ();


for (int i =1 ; i<100 ;i++)
l->add(i);
l->del(2);
l->display();
    return 0;
}
