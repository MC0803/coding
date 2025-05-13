#include<iostream>
#include<cstdlib>
using namespace std;

struct node {
    int data;
    struct node *next;
};

struct node *stnode = NULL;

void create(int n);
void sort();
void display();

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter data:\n";
    create(n);
    sort();
    cout << "Sorted List:\n";
    display();

    return 0;
}

void create(int n) {
    struct node *fnode, *tmp;
    int i, value;

    stnode = (struct node *)malloc(sizeof(struct node));
    cin >> value;
    stnode->data = value;
    stnode->next = NULL;
    tmp = stnode;

    for (i = 1; i < n; i++) {
        fnode = (struct node *)malloc(sizeof(struct node));
        cin >> value;
        fnode->data = value;
        fnode->next = NULL;
        tmp->next = fnode;
        tmp = fnode;
    }
}

void sort() {
    struct node *i, *j;
    int temp;

    for (i = stnode; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void display() {
    struct node *tmp;
    tmp = stnode;
    while (tmp != NULL) {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}