#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
node(int data){
    this->data=data;                                
    next=NULL;
}
};
node*takeinput(){
    int data;
    cout<<"input the elementts in linked list= ";
    cin>>data;
    node*head=NULL;
    while(data!=-1){
        node* newnode =new node(data);
        if(head==NULL){
            head=newnode;
        }
        else{
            node* temp=head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}
 void sorted(node*head){
     node*temp=head;
     node*p=head->next;
     while(temp != NULL)
     {
       if(temp->data < p){
           cout<<"sorted";
       }
       else{
           cout<<"not sorted";
       }
       temp=temp->next;
       p=p->next;
     }
 }
void print(node*head)
{
    node*temp=head;                     //temp isliye liya warna last me head null hota fir hum agge kbhi head ko na le pate kyuki uske pass abhi kisika adress hini hai
    while(temp!=0){
        cout<<temp->data <<"  ";
        temp=temp->next;
    }
}
int main(){
 node*head=takeinput();
 sorted(head);
 print(head);

    /*node n1(1);             //statically
    node*head=&n1;
    node n2(2);
    node n3(3);
    node n4(4);
    node n5(5);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;
   
   print(head);*/
   return 0;
}