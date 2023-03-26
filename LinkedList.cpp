#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

node* head = new node();

void insert(int x) {
    node* temp = new node();
    temp->data = x;
    temp->next = head;
    head = temp;    
    
}
void display() {
    node* temp = head;
    while(temp!=NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    head = NULL;
    int n;
    cout<<"How may numbers do u wanna insert?"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        insert(x);
        display();
    }
    
}