#pragma warning(disable : 4996)

#include <iostream>
#include <cstring> 
#include "f.h"
using namespace std;

void push1(Node** top, char* d)
{
    Node* pv = new Node; //выделение пам€ти
    pv->d = d; //св€зка 
    strcpy(pv->d, d); 
    pv->p = *top; 
    *top = pv; //новый адрес начала стека
}

void delete_all_nodes(Node** top) {
    while (*top != nullptr) {
        Node* temp = *top;
        *top = (*top)->p;
        delete temp;
    }
}

void vyvod_stack(Node* top)
{
    while (top)
    {
        cout << top->d << ' ';
        top = top->p;
    }
    cout << "\n";
}