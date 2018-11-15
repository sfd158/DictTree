
#include "dictTree.h"
#include<stdio.h> 

void testDictTree()
{
	struct dictWordTree* tree = initDictWordTree(26);
	insertDictWordTree(tree,"hello", 2);
	insertDictWordTree(tree,"helloworld", 3);
	insertDictWordTree(tree,"hel", 4);
	insertDictWordTree(tree,"worldhello", 5);
	struct dictWordTreeNode* ans = findDictWordTree(tree, "hello", NULL);
	printf("ans hasnode:%d value:%d\n",ans->has_node,ans->value);
	removeFromDictTree(tree,"hello");
	ans = findDictWordTree(tree, "hello", NULL);
	printf("ans hasnode:%d value:%d\n",ans->has_node,ans->value);
	/*printf("ans == NULL %d\n",ans == NULL);*/
	outputDictTree(tree);
	destroyDictWordTree(tree);
}
int main(int argc, char **argv)
{
	testDictTree();
	return 0;
} 
