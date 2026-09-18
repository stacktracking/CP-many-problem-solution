#include<bits/stdc++.h>
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

void insert_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
    if (tail == NULL) tail = newnode;
}

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

int size(Node* head) {
    int count = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void delete_at_index(Node* &head, Node* &tail, int idx) {
    if (head == NULL) return;

    if (idx == 0) {
        Node* delNode = head;
        head = head->next;
        delete delNode;
        if (head == NULL) tail = NULL;
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < idx - 1; i++) {
        if (tmp == NULL || tmp->next == NULL) return; // invalid
        tmp = tmp->next;
    }

    Node* delNode = tmp->next;
    if (delNode == NULL) return;

    tmp->next = delNode->next;
    if (tmp->next == NULL) tail = tmp;
    delete delNode;
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

    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            insert_head(head, tail, v);
        } else if (x == 1) {
            insert_tail(head, tail, v);
        } else if (x == 2) {
            int sz = size(head);
            if (v >= 0 && v < sz) {
                delete_at_index(head, tail, v);
            }
        }

        print_list(head);
    }

    return 0;
}
