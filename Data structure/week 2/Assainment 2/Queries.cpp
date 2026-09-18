#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
        tail = newNode;
    }
}


void insert_tail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}


void delete_at_index(Node*& head, Node*& tail, int index) {
    if (head == NULL) {
        return;
    }
    if (index == 0) {
        Node* del = head;
        head = head->next;
        delete del;
        if (head == NULL) 
        {
            tail = NULL; 
        }
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < index - 1; i++) {
        if (tmp == NULL || tmp->next == NULL)
        {
            return;
        } 
        tmp = tmp->next;
    }

    Node* del = tmp->next;
    if (del == NULL)
    {
        return;
    } 

    tmp->next = del->next;
    if (tmp->next == NULL)
    {
        tail = tmp;
        delete del;
    } 
}


void print_list(Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;

    while (t--) {
        int idx, val;
        cin >>idx>>val;

        if (idx== 0) {
            insert_head(head, tail, val);
        } else if (idx == 1) {
            insert_tail(head, tail, val);
        } else if (idx == 2) {
            delete_at_index(head, tail, val);
        }

        print_list(head);
    }

    return 0;
}
