#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};
class linkedList
{
    public:
    Node* head = nullptr;
    void linkedinsert(int val)
    {
        Node* a = new Node(val);
        if(!head)
        {
            head = a ;
            return;
        }
        Node* temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = a;
    }

    void disp()
    {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    linkedList obj;
    int choice, val;

    while (true) 
    {
        cout << "\n 1.Insert Value \n 2.Display List \n 3.Exit \n Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> val;
                obj.linkedinsert(val);
                break;
            case 2:
                obj.disp();
                break;
            case 3:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}