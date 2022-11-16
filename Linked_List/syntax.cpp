#include <iostream>
 using namespace std;

 class node{
    public:
    int data;
    node *next;
    node(){
        data = 0;
        next = NULL;
    }
    node(int x){
        this->data = x;
        this ->next = NULL;
    }
 }*head;

void insert(int x)
{
    node *ptr = new node(x);
    node *temp = head;
    

    if(head==NULL){
        head = ptr;
        return;
    }

    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next = ptr;

}
void display(){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void delete_first(){
    head = head->next;
}



int main(){
    int n,j;
    cout<<"how many numbers to insert: ";
    cin>>n;

    for(int i = 0; i<n;i++){
        cout<<"Enter: ";
        cin>>j;
        insert(j);   
    }

    return 0;
 }