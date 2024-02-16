#include <stdio.h>
#include <stdlib.h>
/*
��������ǰ�������������������������
*/
typedef int DataType;
typedef struct BTNode
{
	DataType data;
	struct BTNode *leftChild;
	struct BTNode *RightChild;
} BinaryTreeNode;//���������ṹ

//ǰ��ʽ����������
void Create_BinaryTree (BinaryTreeNode ** T)
{
	DataType ch;
	scanf ("%d", &ch);
	if (ch == -1)
	{
		*T = NULL;
	}
	else
	{
		*T = (BinaryTreeNode *) malloc (sizeof (BinaryTreeNode));
		if (*T == NULL)
		{
			printf ("CreateBinaryTree fail:malloc error\n");
			return;
		}
		(*T)->data = ch;
		printf ("������%d�����ӽڵ㣺\n", ch);
		Create_BinaryTree (&((*T)->leftChild));
		printf ("������%d�����ӽڵ㣺\n", ch);
		Create_BinaryTree (&((*T)->RightChild));
	}
}

//ǰ�����������
void PreOrderTraverse_BinaryTree (BinaryTreeNode * T)
{
	if (T == NULL)
	{
		return;
	}
	else
	{
		printf ("%d ", T->data);
		PreOrderTraverse_BinaryTree (T->leftChild);
		PreOrderTraverse_BinaryTree (T->RightChild);
	}
}

//�������������
void InOrderTraverse_BinaryTree (BinaryTreeNode * T)
{
	if (T == NULL)
	{
		return;
	}
	else
	{
		InOrderTraverse_BinaryTree (T->leftChild);
		printf ("%d ", T->data);
		InOrderTraverse_BinaryTree (T->RightChild);
	}
}

//�������������
void PostOrderTraverse_BinaryTree (BinaryTreeNode * T)
{
	if (T == NULL)
	{
		return;
	}
	else
	{
		PostOrderTraverse_BinaryTree (T->leftChild);
		PostOrderTraverse_BinaryTree (T->RightChild);
		printf ("%d ", T->data);
	}
}

//��ȡ���������
int GetDepth_BinaryTree (BinaryTreeNode * T)
{
	int depth = 0;
	int left_depth;
	int right_depth;
	if (T != NULL)
	{
		left_depth = GetDepth_BinaryTree (T->leftChild);
		right_depth = GetDepth_BinaryTree (T->RightChild);
		depth = left_depth >= right_depth ? left_depth + 1 : right_depth + 1;
	}
	return depth;
}

//��ȡҶ������
int GetLeafCount_BinaryTree (BinaryTreeNode * T)
{
	static int count;
	if (T != NULL)
	{
		if (T->leftChild == NULL && T->RightChild == NULL)
		{
			count++;
		}
		GetLeafCount_BinaryTree (T->leftChild);
		GetLeafCount_BinaryTree (T->RightChild);
	}
	return count;
}

=
