#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> &ll)
{
    list<int>::iterator itr;
    // ll.begin() returns an iterator pointing to the first element in the list
    // ll.end() returns an iterator pointing to the position just after the last element in the list
    for (itr = ll.begin(); itr != ll.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
int main()
{
    list<int> ll;
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(1);
    ll.push_front(4);
    printList(ll);
    cout << "size of ll :" << ll.size() << endl;
    // ll.front() returns the first element in the list
    cout << "head : " << ll.front() << endl;
    // ll.back() returns the last element in the list
    cout << "tail : " << ll.back() << endl;
    // pop_front() removes the first element from the list
    // pop_back() removes the last element from the list
    return 0;
}

// Notes
//   .insert() always inserts BEFORE the iterator
//  1.ll.insert(it, count, value);
//  2. ll.insert(it, value);
//  3. Insert Range (from another container)
//     l.insert(it, start_iterator, end_iterator);
//     .Parameters:
//     it → where to insert
//     start_iterator → start of range
//     end_iterator → end of range
//     .Example
//        list<int> l1 = {1, 2};
//        list<int> l2 = {3, 4};

//       l1.insert(l1.end(), l2.begin(), l2.end());
//       👉 Result: 1 2 3 4