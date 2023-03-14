#include <iostream>
using namespace std;
class node
{
    static int count;

public:
    int number;
    node *next;
    node *prev;
    node(int x)
    {
        number = x;
        next = NULL;
        prev = NULL;
    }
    ~node()
    {
        count++;
        cout << "Called " << count << endl;
    }
};
int node ::count = 0;
void insertAthead(node* &ptr)
{
    int num;
    cout << "Enter Value: ";
    cin >> num;
    node *n = new node(num);
    n->next = ptr;
    if(ptr != NULL)
    {
    ptr->prev = n;
    }
    ptr = n;
}
void insertAttail(node* &ptr)
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
    temp->next  = n;
    n->prev = temp;
}
void display(node* ptr)
{
    node *temp = ptr;
    while(temp != NULL)
    {
        cout<<temp->number<<"\t";
        temp = temp->next;
    }
    cout<<endl;
}
void free_memory(node *&ptr)
{
    node *ptr1 = ptr;
    while(ptr != NULL)
    {
        ptr1=ptr1->next;
        delete ptr;
        ptr = ptr1;
    }
}
int main()
{
    cout << "Dynamic Memory Allocation" << endl;

    // Dynamic Memory allocation
    // int *p = new int(40);
    // cout<<"P: "<<*p<<endl;
    // int *arr = new int[3];
    // arr[0] = 10;
    // arr[1] = 11;
    // arr[2] = 22;
    // for(int i = 0 ; i < 3 ; i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }
    // cout<<endl;
    // delete[] arr;
    // delete p;
    // for(int i = 0 ; i < 3 ; i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }
    // cout<<endl;
    // cout<<"P: "<<*p<<endl;
    // cout<<endl;

    // Pointer to objects
    node *list = NULL;
    int opt;
    while (true)
    {
        cout << "\n\n(1)Insert at head\t(2)Insert at tail\t(3)End program" << endl;
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
    free_memory(list);
    return 0;
}