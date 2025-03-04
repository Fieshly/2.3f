#pragma once

struct Node
{
    char* d;
    Node* p;
};

void push1(Node** top, char* d);
void vyvod_stack(Node* top);
void delete_all_nodes(Node** top);