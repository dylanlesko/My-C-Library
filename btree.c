#include "lesko.h"

typedef struct treeNode
{
	void* element;
	struct treeNode *left;
	struct treeNode *right;


} treeNode;


treeNode** tree_init ( );
int insertNode(void* element, treeNode **root, int (*f)(void*, void*));

treeNode** tree_init ( )
{
	treeNode **newNode = (treeNode**)malloc(sizeof(treeNode*));

	return newNode;
}


int insertNode(void* element, treeNode **root, int (*cmp)(void*, void*))
{		

	if( (*root) == NULL)
	{
		(*root) = (treeNode*)malloc(sizeof(treeNode));
		//(*root)->token = string_init(token);
		(*root)->element = element;

		(*root)->left = NULL;
		(*root)->right = NULL;
		//(*root)->pathRecords = NULL;
	}
	else
	{

	}

	return 0;

}