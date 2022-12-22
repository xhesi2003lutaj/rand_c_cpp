//single liked list

struct node {
 int data;
 struct *node next;
}typedef struct node my_list;

my_list *add_bign(my_list *head,int item){
  my_list *newnode=malloc(sizeof(my_list));
  if (newnode==null){
    printf("error allocating memory");
       exit(1);
  }
   if(head==null){
     newnode->data=item;
	 newnode->next=null;//not crucial here
	 head=newnode;
   }
   else{   //head not null
       newnode->data=item;
	   newnode->next=head;
	   head=newnode;
	   return head;
   }
}

my_list *add_end(my_list *head,int item){
     my_list *newnode=malloc(sizeof(my_list));
	  if (newnode==null){
    printf("error allocating memory");
       exit(1);
  }
    my_list *curr=head;
	
  newnode->data=item;
newnode->next=null;
   if(head==null){
    
	 head=newnode;
   }
   else{   //head not null
    while(curr->next!=null){
	curr=curr->next;
	                         //if you put it here it will remove the elemts and let only the first and the last
	  
	}
 curr->next=newnode;
	 return head;
   }
}
  my_list *remove_begin(my_list *head){
     my_list *curr;
	 if(head==null){
	   return -1;
	 }
	 {
	   curr=head;
	   head-=head->next;
	   free(curr);
	   return head;	
	 }
  }
  void dipose(my_list *list){
     my_list *nextelem;
	 while(list!=NULL){
	 nextelem=list->next;
	 free(list);
	 list=nextelem;
	 }
  }
  void print_list(my_list *head){
     if(head==NULL){
	   printf("nothing to print");
	   return;
	 }
	 while(head!=NULL){
	    printf("%d",head->data);
		head=head->next;
	 }
  }
  my_list *remove_end(my_list *head){
     if(head==null){
	  printf("nothing to delete");
	  exit(1);
	 }
	 {
		  my_list *tail=head;
		  my_list *previous;
	  while(tail->next!=null){
	    previous=tail;
	    tail=tail->next;
		previous->next=null;
		free(tail);
		return head;
	  }
	 }
  }
  my_list *reverse(my_list *head){
    if(head==null){
	  printf("nothing to reverse");
	  exit(1);
	 }
	 {
		  my_list *previous=null;
		  my_list *current=head;
		  my_list *nextt;
		  while(current!=null){
		  nextt=current->next;
		  current->next=previous;
		  previous=current;
		  current=nextt;
		  }
		  my_list=previous;
		  return my_list;
	  }
  }
  my_list *add_at_pos(my_list *head,int value,int position){
    if(head==null && position!=0){
	    print invalid
		return my_list;
	}
	int count=0;
	while(head!=null){
	 head=head->next;
	 count++;
	}
	if(position==0){
	  add_bign(head,val);
	}
	if(position<0 || position>count){
	   print invalid position;
	}
	if(position==count){
	   add_end(head,value);
	}
	else{
	   my_list *current=head;
	   my_list *newel=malloc(sizeof(my_list));
	   if(newel==null){
	      print a message;
	   }
	   for(int i=0;i<position-1;i++){
	       current=current->next;
		   
	   }
	   newel->data=value;
		   newel->next=current->next;
		   current->next=newel;
		   
	}
	return my_list;
  }
  int getmiddle(struct list* my_list){
    struct list *fast=my_list;
    struct list *slow=my_list;
    while (fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
         
    }
    return slow->info;
  
}
struct list *removemiddle(struct list *my_list){
    struct list *current;
    struct list *head=my_list;
    struct list *fast=my_list;
    struct list *slow=my_list;
    int count=0;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        count++;
    }
    while (count-1)
       head=head->next;
    

    head->next=head->next->next;
    return my_list;
}