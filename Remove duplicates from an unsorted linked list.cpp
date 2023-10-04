class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     map<int,bool>vis;
     if(head==NULL){
         return NULL;
     }
     Node* curr=head;
     while(curr->next!=NULL){
         vis[curr->data]=true;
         if(vis[curr->next->data]==1){
            curr->next=curr->next->next;
         }
         else{
             curr=curr->next; } }
     return head;
    }
};
