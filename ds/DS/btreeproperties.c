#include<stdio.h>
#include<stdlib.h>
 
typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} node;
 
node *create()
{
	node *p;
	int x;
	printf("Enter data(-1 for no data):");
	scanf("%d",&x);
	
	if(x==-1)
		return NULL;
	
	p=(node*)malloc(sizeof(node));
	p->data=x;
	
	printf("Enter left child of %d:\n",x);
	p->left=create();
 
	printf("Enter right child of %d:\n",x);
	p->right=create();
	
	return p;
}
 
void inorder(node *t)		//address of root node is passed in t
{
	if(t!=NULL)
	{
		
		inorder(t->left);		//inorder traversal on left subtree
		printf("%d ",t->data);	//visit the root
		inorder(t->right);		//inorder traversal on right subtree
	}
}
 
 

   int height(node *t)
  {
     int l,r;
    if(t!=NULL)
    {
     if((t->left==NULL)&&(t->right==NULL))
       return 0;
     l=height(t->left);
     r=height(t->right);
     if(l>r)
       return(l+1);
     return(r+1);
     }
    return -1;
 }
int size(struct node* node) {
  if (node==NULL) {
    return(0);
  } else {
    return(size(node->left) + 1 + size(node->right));
  }
}
   void mirror(node *temp)
{
    node *temp1;
    if (temp == NULL)
        return;
    temp1 = temp->left;
    temp->left = temp->right;
    temp->right = temp1;
    mirror(temp->left);
    mirror(temp->right);
} 
 int leafcount(node *t)
  {
     int l,r;
    if(t!=NULL)
    {
     if((t->left==NULL)&&(t->right==NULL))
       return 1;
     l=leafcount(t->left);
     r=leafcount(t->right);
     return(l+r);
    }  
   return 0;  
 }

 int countNonleaf(node* t) 
{ 
    // Base cases. 
    if (t == NULL || (t->left == NULL &&  
                         t->right == NULL)) 
        return 0; 
  
    // If root is Not NULL and its one of its 
    // child is also not NULL 
    return 1 + countNonleaf(t->left) +  
               countNonleaf(t->right); 
}

int main()
{	
	node *root;
	int leaf_count,treeheight,treesize, internalnodecount;
	root=create();
	printf("\nThe inorder traversal of tree is:\n");
	inorder(root);
	printf("\n Height of given tree is\n");
	treeheight=height(root);
	printf("%d",treeheight);
	printf("\n The number of leaf nodes in the tree\n");
    leaf_count=leafcount(root);
    printf("%d",leaf_count);
    printf("\n The total number of nodes in the tree\n");
    treesize=size(root);
    printf("%d",treesize);
    printf("\n The number of nonleaf nodes in the tree\n");
    internalnodecount=countNonleaf(root);
    printf("%d\n", internalnodecount);
    mirror(root);
    inorder(root);
	return 0;
}