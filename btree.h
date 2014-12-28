#ifndef BTREE_H
#define BTREE_H


typedef struct treeNode
{
	void* element;
	struct treeNode *left;
	struct treeNode *right;


} treeNode;


treeNode** tree_init ( );
int insertNode(void* element, treeNode **root, int (*f)(void*, void*));

#endif