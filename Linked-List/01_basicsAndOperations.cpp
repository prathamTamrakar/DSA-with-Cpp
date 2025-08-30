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

        ~Node(){
            cout << "~Node " << data << endl;
            if(next != NULL){
                delete next;
                next = NULL;
            }
        }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List(){
        cout << "~List" << endl;

        if(head != NULL){
            delete head;
            head=NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic
        // Node* newNode(val)  // static
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

    void push_back(int val){
        Node *newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head==NULL){
            cout << "LINked list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout << "LINked list is empty" << endl;
            return;
        }
        Node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;

    }

    // void print(){
    //     cout << head->data << endl;
    //     cout << head->next->data << endl;
    //     cout << head->next->next->data << endl;
    //     cout << head->next->next->next->data << endl;
    //     // cout << tail->data;
    // }

    void printList(){
        Node*temp = head;
        while(temp!= NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void insertInMiddle(int val,int pos){
        Node* newNode = new Node(val);
        Node*temp = head;
        for (int i = 0; i < pos-1; i++)
        {
            if(temp == NULL){
                cout << "position is invalid" << endl;
                return;
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int searchItr(int key){
        Node *temp = head;
        int idx=0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
                temp = temp->next;
                idx++;
        }
        return -1;
    }
};

int main()
{
    // int a= 5;
    // int *p = &a;
    // cout << a << " " << p << " " << &a << " " << *p << endl;
    // 5 0x61ff08 0x61ff08 5

    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();

    ll.push_back(4);
    ll.printList();

    ll.insertInMiddle(5,2);
    ll.printList();

    // ll.pop_front();
    // ll.printList();

    // ll.pop_back();
    // ll.printList();


    

    cout << ll.searchItr(45) << endl;
    return 0;
}