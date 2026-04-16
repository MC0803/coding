#include <iostream>
using namespace std;

class Node
{ // make a node

public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }

    ~Node()
    {
        cout << "~node" << data << endl;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

class List
{ // collection of nodes
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List()
    {
        if (head != NULL)
        {
            cout << "~head" << endl;
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic allocation
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insertP(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Position out of bounds" << endl;
                delete newNode;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void popFront()
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void popBack()
    {
        if (head == NULL) // empty list
        {
            return;
        }

        // single node case
        if (head->next == NULL)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        Node *prev = NULL;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        tail = prev;
        tail->next = NULL;
        delete temp;
    }

    int searchitr(int key)
    {
        Node *temp = head;
        int i = 0;
        while (temp)
        {
            if (temp->data == key)
                return i;
            i++;
            temp = temp->next;
        }
        return -1; // not found
    }

    int helper(Node *temp, int key)
    {
        int idx = 0;
        if (temp == NULL)
        {
            return -1;
        }
        if (temp->data == key)
        {
            return 0;
        }
        idx = helper(temp->next, key);

        if (idx == -1)
            return -1;
        else
            return idx + 1;
    }

    int searchRec(int key)
    {
        return helper(head, key);
    }
    void Reverse()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    int getSize()
    {
        Node *temp = head;
        int s = 0;
        while (temp)
        {
            temp = temp->next;
            s++;
        }
        return s;
    }
    void RemNthFromEnd(int n)
    {
        int size = getSize();
        Node *prev = head;

        for (int i = 1; i < (size - n); i++)
        {
            prev = prev->next;
        }

        Node *toDel = prev->next;
        cout << "Deleting " << toDel->data << endl;
        prev->next = prev->next->next;
    }

    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.printList();
    // cout << "Data at position : " << ll.searchitr(2) << endl;
    // cout << "Rec search data found at pos : " << ll.searchRec(2) << endl;
    // ll.Reverse();
    // ll.RemNthFromEnd(2);

    return 0;
}