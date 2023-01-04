// without tle
Node* merge( Node* first, Node* second){
   if( first == NULL){
       return second;
   }
   if( second == NULL){
       return first;
   }
   Node* dummy = new Node(-1);
   Node* temp = dummy;
   while( first != NULL && second != NULL){
       if( first->data <= second->data){
//why we are using child instead of child?
// because we break the connection of next pointer in line no 66;
           temp->child = first;
           temp = first;
           first = first->child;
       }
       else{
           temp->child = second;
           temp = second;
           second = second->child;
       }
   }
   //cant use when( ). use if
   if( first != NULL){
       temp->child = first;
       temp = first;
       first = first->child;
   }
   //cant use when( ).use if
   if( second != NULL){
       temp->child = second;
       temp = second;
       second = second->child;
   }
   dummy = dummy->child;
   return dummy;
}
Node* flattenLinkedList(Node* head) 
{
   if( head == NULL || head->next == NULL){
       return head;
   }
   //create a downnode by seprating the real node
   // childnodes is already sorted
   Node* down = head;
   Node* right = head->next;  
   down->next = NULL;
   
   //create a rightnode using recursion which is sorted
   right = flattenLinkedList( right );
   
   //merge two sorted array
   Node* ans = merge( down , right );
   
   //return ans;
   return ans;
}