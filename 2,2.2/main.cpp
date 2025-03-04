#pragma warning(disable : 4996)

#include <iostream>
#include <cstring>
#include "f.h"

using namespace std;

int main(void)
{
    Node* top = nullptr;
    char str[1024];
    cin.getline(str, 1024);
    char* pch = strtok(str, " ,.:;!?-");
    cout << '\n';

    while (pch != NULL)
    {
        push1(&top, pch);
        pch = strtok(NULL, " ,.");
    }
    vyvod_stack(top);
    delete_all_nodes(&top);
}
