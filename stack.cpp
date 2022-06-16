#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> ids;
    ids.push(3);
    ids.push(2);
    ids.push(1);
    int id = ids.top(); // stack is LIFO, so id will take 1
    ids.pop(); // remove top of stack i.e. 1
    int id1 = ids.top(); // top of stack is now 2, id1 takes that
    ids.pop();
    ids.pop();
    //int id2 = ids.top(); // will cause a seg fault as nothing left in stack
    if (ids.empty() == 1){cout << "empty" << endl;}
    cout << id1 << endl;
}