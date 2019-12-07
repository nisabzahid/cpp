#include <bits/stdc++.h>

using namespace std;

class node
{

public:
    int data;
    node* next;
};

int printll(node* n)
{

    while(n!= nullptr)
    {

        cout<< n->data <<" "<<endl;
        n= n->next;

    }
    return 0;
}





int main()
{


    node* head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 100;
    head->next = second ;

    second->data = 200;
    second->next = third;

    third->data = 300;
    third->next = nullptr;


    printll(head);


    return 0;
}
