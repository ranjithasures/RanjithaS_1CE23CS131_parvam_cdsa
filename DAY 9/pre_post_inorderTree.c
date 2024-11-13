#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data)
{
   struct Node*Node=(struct Node*)malloc(sizeof(struct Node));
    Node->data=data;
    Node->left=Node->right=NULL;
    return Node;
}
struct Node* insert(struct Node* root,int data){
    if(root==NULL)return createNode(data);
    if(data<root->data)
       root->left=insert(root->left,data);
    else
       root->right=insert(root->right,data);
    return root;
}
void preorder(struct Node*root)
{
    if(root!=NULL)
    {
      printf("%d",root->data);
      preorder(root->left);
      preorder(root->right);
    }
}
void inorder(struct Node*root)
{
    if(root!=NULL)
    {
      inorder(root->left);
       printf("%d",root->data);
      inorder(root->right);
    }
}
 void postorder(struct Node*root)
{
    if(root!=NULL)
    {
      postorder(root->left);
      postorder(root->right);
       printf("%d",root->data);
    }
}
int main()
{
   struct Node*root=NULL;
    int values[]={5,3,7,2,4,6,8};
    int n= sizeof(values)/sizeof(values[0]);
    for(int i=0;i<n;i++){
        root=insert(root,values[i]);
    }
    printf("In-order traversal: ");
    inorder(root);
    printf("\n");

     printf("post-order traversal: ");
    postorder(root);
    printf("\n");

     printf("pre-order traversal: ");
    preorder(root);
    printf("\n");

    return 0;

}
//IN-ORDER(L,N,R)
//POST-ORDER(L R N)
//PRE-ORDER(N L R)
