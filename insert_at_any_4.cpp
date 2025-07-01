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

void insert_at_any(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);

    Node* temp = head;
    for(int i = 1; i < idx; i++)
    {
        temp = temp->next;
        if(temp == NULL) // If Index is grater than liked list size;
        {
            return;
        }
    }
    newnode->next = temp->next;
    temp->next = newnode;

}



void print_linked_list(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
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
    a->next = b;

    insert_at_any(head, 2, 100);
    insert_at_any(head, 2, 400);
    print_linked_list(head);




    return 0;
}