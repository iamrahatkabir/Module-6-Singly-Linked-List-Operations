#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }

};

//Node* &head does share the address of head because head is passed by reference using Node*& head. & //Node* head. It receives a copy of the pointer by value, and the actual head in the main function remains unchanged.
void insert_at_head(Node* &head, int val) 
{               
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode; 
}


void print_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

}


int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    (*a).next = b;
    

    insert_at_head(head, 100);
    insert_at_head(head, 200);


    print_linked_list(head);



    return 0;
}