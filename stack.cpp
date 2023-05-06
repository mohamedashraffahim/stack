#include <bits/stdc++.h>
#include "singleLinkedList.h"
using namespace std;
class Stack
{
    sll a;

public:
    Stack() {}
    Stack(int n)
    {
        a.insertAtHead(n);
    }
    void push(int n)
    {
        a.insertAtHead(n);
    }
    void pop()
    {
        a.removeAtHead();
    }
    int top()
    {
        return a.retrieveAt(1);
    }
    int size()
    {
        return a.size();
    }
    bool isEmpty()
    {
        if (a.size() == 0)
            return true;
        return false;
    }
    void clear()
    {
        a.clear();
    }
    friend ostream &operator<<(ostream &out, Stack &a)
    {
        out << a.a;
        return out;
    }
};

int main()
{
    Stack a(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.pop();
    cout << a.top() << endl;
    cout << a.size() << endl;
    cout << a.isEmpty() << endl;
    a.clear();
    cout << a;

    return 0;
}
