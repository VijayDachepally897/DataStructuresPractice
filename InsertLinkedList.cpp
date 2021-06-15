#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

Node* insertData(int data,int pos,Node *head)
{
	int count=0;
	Node *newNode=new Node(data);
	Node *temp=head;
	while(count<i-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp!=NULL)
	{
		Node *a=temp->next;
		temp->next=newNode;
		newNode->next=a;
	}
return head;
}

Node* takeinput()
{
    int data;
    cin>>data;
    Node *head=NULL;
   
   // Node *temp;
    while(data!=-1)
    {
    	Node *newNode = new Node(data);
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            Node *temp=head;
            while(temp->next!=NULL)
			{
				temp=temp->next;
			}      
			temp->next=newNode;   
        }
        cin>>data;
	}
    return head;
}

void print(Node *head){
    Node *temp1 = head;
    while(temp1 != NULL){
        cout << temp1 -> data << " ";
        temp1 = temp1 -> next;
    }
    cout << endl;
}

void increment(Node *head){
    Node *temp = head;
    while(temp != NULL){
        temp -> data++;
        temp = temp -> next;
    }
}

int main(){

    Node *head=takeinput();
    print(head);
   int i,data;
   cin>>i>>data;
   head=insertNode(head,i,data);
   print(head);
}