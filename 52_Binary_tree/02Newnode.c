#include"header.h"
struct node* Newnode(int data){

	struct node *new=NULL;
	new=(struct node*)malloc(sizeof(struct node*));
	new->data=data;
	new->left=NULL;
	new->right=NULL;
	return new;
}
