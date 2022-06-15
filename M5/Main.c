#define _CRT_SECURE_NO_WARNINGS
#define ALLOC(p,n)  (p = malloc(n*sizeof *p);)
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "BST.h"

void main()
{
	BST* mgBST = (BST*)malloc(sizeof(BST));
	assert(mgBST);

	int highNum = 0;

	initBST(mgBST);
	
	insertBST(mgBST, 5);
	insertBST(mgBST, 2);
	insertBST(mgBST, 1);
	insertBST(mgBST, 1);
	insertBST(mgBST, 2);
	insertBST(mgBST, 4);
	insertBST(mgBST, 5);
	insertBST(mgBST, 8);
	insertBST(mgBST, 8);
	insertBST(mgBST, 8);
	insertBST(mgBST, 9);
	insertBST(mgBST, 9);


	printTreeInorder(mgBST);
	//destroyBST(mgBST);
	highNum=findIndexNFromLast(mgBST,4);
	printf("\n%d",highNum);
}