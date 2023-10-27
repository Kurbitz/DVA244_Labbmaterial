#ifndef BSTREE_H
#define BSTREE_H

#include <stdio.h>

struct treeNode
{
	int data;
	struct treeNode* left;
	struct treeNode* right;
};

typedef struct treeNode* BSTree;

/* Skapar ett tomt träd */
BSTree emptyTree(void);

/* Returnerar 1 ifall trädet är tomt, 0 annars */
int isEmpty(const BSTree tree);

/* Sätter in 'data' sorterat i *tree */
void insertSorted(BSTree* tree, int data);

/* Utskriftsfunktioner*/
void printPreorder(const BSTree tree, FILE *textfile);
void printInorder(const BSTree tree, FILE *textfile);
void printPostorder(const BSTree tree, FILE *textfile);

/* Returnerar 1 om 'data' finns i tree, 0 annars */
int find(const BSTree tree, int data);

/* Tar bort 'data' från trädet om det finns */
void removeElement(BSTree* tree, int data);

/* Returnerar hur många noder som totalt finns i trädet */
int numberOfNodes(const BSTree tree);

/* Returnerar hur djupt trädet är */
int depth(const BSTree tree);

/* Returnerar minimidjupet för trädet */
int minDepth(const BSTree tree);

/* Balansera trädet så att depth(tree) == minDepth(tree) */
void balanceTree(BSTree* tree);

/* Töm trädet och frigör minnet för de olika noderna */
void freeTree(BSTree* tree);

#endif
