struct node
{
	char *label;
	int add;
	struct node *next;
};

struct node* addnode(struct node* head, char* label, int add){

	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> label = strdup(label);
	temp ->add = add;
	temp->next = head;
	return temp;

}

int getadd(struct node* head, char* label){
	char* label1 = strcat(strdup(label),":");
	while(strcmp(head ->label,label1) !=0){
		head = head->next;
	}
	return head->add;


}
