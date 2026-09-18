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

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        Node* head = NULL;
        Node* tail = NULL;
        int val;

        
        while (true) {
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }

        int x;
        cin >> x;

        
        vector<int> values;
        Node* tmp = head;
        while (tmp != NULL) {
            values.push_back(tmp->val);
            tmp = tmp->next;
        }

        
        int flog = -1;
        for (int i = 0; i < values.size(); i++) {
            if (values[i] == x) {
                flog = i;
                break;
            }
        }

        cout << flog << endl;

       
        while (head != NULL) {
            Node* del = head;
            head = head->next;
            delete del;
        }
    }

    return 0;
}
