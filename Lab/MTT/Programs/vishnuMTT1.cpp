#include <iostream>
using namespace std;
int i, j, choice;
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void disp()
{
    struct Node *p;
    p = head;
    if (p == NULL)
    {
        cout << "No element present" << endl;
    }
    else
    {
        cout << "**Linked List Elements**" << endl;
        while (p != NULL)
        {
            cout << p->data << endl;
            p = p->next;
        }
    }
}
void count_positive_negative()
{
    int positive = 0;
    int negative = 0;
    struct Node *p;
    p = head;
    if (head == NULL)
    {
        cout << "Linked List is empty" << endl;
    }
    else
    {
        while (p != NULL)
        {
            if (p->data >= 0)
            {
                positive += 1;
            }
            else
            {
                negative += 1;
            }
            p = p->next;
        }
    }
    cout << "Num of Positive elements: " << positive << endl;
    cout << "Num of Negative elements: " << negative << endl;
}
void insertAtBegin()
{
    struct Node *temp = new (struct Node);
    int num;
    cout << "Enter data to be inserted: " << endl;
    cin >> num;
    temp->data = num;
    if (head == NULL)
    {
        temp->next = NULL;
        head = temp;
        cout << "Node Inserted at Beginning" << endl;
    }
    else
    {
        temp->next = head;
        head = temp;
        cout << "Node Inserted at Beginning" << endl;
    }
}
void insertAtEnd()
{
    struct Node *temp, *r;
    temp = new (struct Node);
    r = head;
    int num;
    cout << "Enter data to be inserted: " << endl;
    cin >> num;
    temp->data = num;
    if (head == NULL)
    {
        temp->next = NULL;
        head = temp;
        cout << "Node Inserted at Ending" << endl;
    }
    else
    {
        while (r->next != NULL)
        {
            r = r->next;
        }
        temp->next = NULL;
        r->next = temp;
        cout << "Node Inserted at Ending" << endl;
    }
}

int main()
{
    cout << "1. Display the List" << endl;
    cout << "2. Insert at Starting" << endl;
    cout << "3. Insert at End" << endl;
    cout << "4. Count positive and negative element " << endl;
    cout << "5. Exit" << endl;
    while (choice != 5)
    {
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            disp();
            break;
        case 2:
            insertAtBegin();
            break;
        case 3:
            insertAtEnd();
            break;

        case 4:
            count_positive_negative();
            break;

        case 5:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}
