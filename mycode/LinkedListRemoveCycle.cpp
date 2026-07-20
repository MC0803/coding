#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
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

    void remCycle(Node *slow)
    {
        Node *fast = slow;
        slow = head;
        // special case of cycle at head
        if (slow == fast)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL;
        }
        Node *prev = fast;
        while (slow != fast)
        {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL;
    }

    bool detectCycle()
    {
        Node *slow = head;
        Node *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                remCycle(slow);
                return true;
            }
        }
        return false;
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

void mergeSort(Node *head)
{
    if (head == NULL || head->next == NULL)
        return;

    Node *rightHead = splitAtMid(head);
    mergeSort(head);      // left half
    mergeSort(rightHead); // right half

    merge(head, rightHead);
};

int main()
{
    List ll;
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.tail->next = ll.head->next; // create a cycle
    if (ll.detectCycle())
        cout << "Cycle detected and removed\n";
    ll.printList();
}