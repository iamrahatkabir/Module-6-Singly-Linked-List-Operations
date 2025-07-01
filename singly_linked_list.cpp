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

void insert(Node* &head, int val)
{
    Node* newnode = new Node(val);

    if(head == NULL)
    {
        head = newnode;
        return;
    }
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
  
    Node* head = NULL;

    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n; cin >> n;
        insert(head, n);
    }
    print_linked_list(head);
    
    return 0;
}