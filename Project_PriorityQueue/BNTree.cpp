#include"BNTree.h"
BSTNode* taoBSTNode(ItemType x) {
	BSTNode* p = new BSTNode;
	if (p == NULL)
		return NULL; // Trả về NULL nếu không thể tạo BSTNode mới
	p->data = x;
	p->Left = NULL;
	p->Right = NULL;
	return p;
}

// Xuất nội dung của BSTNode
void showBSTNode(BSTNode* p) {
	printf("%4d", p->data);đ
}


// Khởi tạo danh sách
void initBSTree(BSTree& BST) {
	BST.Root = NULL;
}

// Kiểm tra ds rỗng hay không
int isEmpty(BSTree BST) {
	if (BST.Root == NULL)
		return 1;// Trả về 1 nếu danh sách rỗng, ngược lại trả về 0
	else
		return 0;
}

// Duyệt danh sách và in ra màn hình
void showNLR(BSTNode* Root) {
	if (!Root) {
		return;
	}
	showBSTNode(Root);
	showNLR(Root->Left);
	showNLR(Root->Right);
}

// Thêm phần tử vào đầu danh sách
int insertRoot(BSTNode*& Root, BSTNode* p) {
	if (!p)
		return 0;	//không tồn tại p
	if (!Root) {
		//TH1 cây rỗng
		Root = p;
		return 1;
	}
	else if (Root->data == p->data) {
		return 0;	//bị trùng giá trị
	}
	else if (Root->data > p->data) {
		insertRoot(Root->Left, p);	//thêm trái
	}
	else
	{
		insertRoot(Root->Right, p);	//thêm phải
	}
	return 1;
}


// Tạo danh sách tự động với số lượng phần tử n nhập từ bàn phím
void taodanhsachtudong(BSTree& BST) {
	int n;
	do {
		printf("Ban hay cho biet so phan tu: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	initBSTree(BST);
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		ItemType x = rand() % 99 + 1; // Tạo số nguyên ngẫu nhiên từ 0 đến 100
		BSTNode* p = taoBSTNode(x);
		insertRoot(BST.Root, p);
	}
}

