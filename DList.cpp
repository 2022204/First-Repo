#include <iostream>
using namespace std;
class node
{
    static int count;

public:
    int num;
    node *prev;
    node *next;
    node(int a)
    {
        num = a;
        prev = NULL;
        next = NULL;
    }
    ~node()
    {
        cout << "Called " << count << endl;
        count++;
    }
};
int node ::count = 0;
void insertAthead(node *&ptr)
{
    int num;
    cout << "Enter Value: ";
    cin >> num;
    node *n = new node(num);
    n->next = ptr;
    if (ptr != NULL)
    {
        ptr->prev = n;
    }
    ptr = n;
}
void insertAttail(node *&ptr)
{
    if (ptr == NULL)
    {
        insertAthead(ptr);
        return;
    }
    int num;
    cout << "Enter Value: ";
    cin >> num;
    node *n = new node(num);
    node *temp = ptr;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node * ptr)
{
    node *temp = ptr;
    while (temp != NULL)
    {
        cout << temp->num << "\t";
        temp = temp->next;
    }
    cout << endl;
}
void delete_memory(node *ptr)
{
    node *temp = ptr;
    while (temp != NULL)
    {
        temp = temp->next;
        delete ptr;
        ptr = temp;
    }
}
int main()
{
    cout << "Doubly Linked list" << endl;
    node *list = NULL;
    int opt;
    while (true)
    {
        cout << "(1)Add at Head\n(2)Add at tail\n(3)End program" << endl;
        cin >> opt;
        if (opt == 1)
        {
            insertAthead(list);
            display(list);
        }
        else if (opt == 2)
        {
            insertAttail(list);
            display(list);
        }
        else
        {
            break;
        }
    }
    cout << "Final SHow Down" << endl;
    display(list);
    delete_memory(list);
    return 0;
}