#include"header.h"
int main()
{
	int var=10;
	struct node *root=NULL;
	printf("%s_begins\n",__func__);
	while(1)
	{
		if(!root)
		{
			root=Newnode(var);
			if(root)
				printf("ROOT is Created\n");
			printf("Root Have Data:%d\n",root->data);
			var++;
		}
		else
		{
			root->left=Newnode(var);
			var++;
			root->right=Newnode(var);
			var++;
			root->left->left=Newnode(var);
			var++;
			root->left->right=Newnode(var);
		}
	}
	printf("%s_ends\n",__func__);
	return 0;
}
