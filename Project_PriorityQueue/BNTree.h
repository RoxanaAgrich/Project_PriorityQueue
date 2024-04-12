#ifndef BNTree_h
#define BNTree_h
//lefter file
//tên nguyễn trọng giáp
//lớp THCTDL-buoi-01
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

typedef int ItemType;

struct BSTNode {
	ItemType data; //lưu trữ thông tin
	BSTNode* Left;
	BSTNode* Right;
};

// Định nghĩa kiểu dữ liệu cho dBSTk đơn 
struct BSTree {
	BSTNode* Root;
};
BSTNode* taoBSTNode(ItemType x);
void showBSTNode(BSTNode* p);
void initBSTree(BSTree& BST);
int isEmpty(BSTree BST);
void showNLR(BSTNode* Root);
int insertRoot(BSTNode*& Root, BSTNode* p);
void taodanhsachtudong(BSTree& BST);

#endif BNTree_h
