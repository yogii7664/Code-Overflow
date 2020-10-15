#include <iostream>
using namespace std;

struct node
{
int data;
struct node *next;
};


struct myStack{
struct node *top;
void push(int item)
{
struct node *t= new node;
t->data=item;
t->next=top;
top=t;
//cout<<"pushed "<<item<<endl;
}
int pop()
{
int item;
if(top==NULL)
{
cout<<"UnderFlow"<<endl; return -1;
}
else
    {
     node *p=top;
     item=top->data;
    top=top->next;
    delete p;
    }
    return item;
}
bool isEmpty(){if (top==NULL) return true; else return false;}
};
myStack s1,s2;

void insertQ(int item)
{
s1.push(item);
cout<<"inserted in Queue "<<item<<endl;

}
int delQ()
{
while(!s1.isEmpty()){ s2.push(s1.pop());}
int item =s2.pop();
while(!s2.isEmpty()){ s1.push(s2.pop());}
cout<<"deleted "<<item<<endl;
return item;
}
int main()
{
insertQ(20);insertQ(30);insertQ(40);insertQ(50);
delQ();delQ();insertQ(60);

}
