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


void insert_at_tail(Node* &head, int val)
{
    Node* newnode = new Node(val);
    
    if(head == NULL)//If Head is empty;
    {
        head = newnode;
        return;
    }

    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;


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
    
    Node* head = NULL; //If Head is empty;

    // Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);

    // head->next = a;
    // a->next = b;

    insert_at_tail(head, 100);
    insert_at_tail(head, 500);
    insert_at_tail(head, 600);

    print_linked_list(head);



    return 0;
}