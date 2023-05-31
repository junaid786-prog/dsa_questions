////#include <iostream>
////#include <stack>
////#include <queue>
////using namespace std;
////
////class Node {
////
////public:
////	char data;
////	Node* left;
////	Node* right;
////
////	Node(char v) {
////		data = v;
////		right = NULL;
////		left = NULL;
////	}
////};
////
////// Depth first traverse
////void traverseBTree(Node* root) {
////	stack<Node*> tree;
////	if (root == NULL) return;
////	tree.push(root);
////
////	while (!tree.empty()) {
////		Node* current = tree.top();
////		tree.pop();
////		cout << "Data: " << current->data << endl;
////		if (current->right) tree.push(current->right);
////		if (current->left) tree.push(current->left);
////	}
////}
////
////// Breadth first traversal
////void traverseBTreeBF(Node* root) {
////	queue<Node*> tree;
////	if (root == NULL) return;
////	tree.push(root);
////
////	while (!tree.empty()) {
////		Node* current = tree.front();
////		tree.pop();
////		cout << "Data: " << current->data << endl;
////		if (current->left) tree.push(current->left);
////		if (current->right) tree.push(current->right);
////	}
////}
////int main() {
/////*
////	     a
////	   /  \
////	  b    c
////	 / \   |
////	d   e  f
////	
////*/
////
////	Node* a = new Node('a');
////	Node* b = new Node('b');
////	Node* c = new Node('c');
////	Node* d = new Node('d');
////	Node* e = new Node('e');
////	Node* f = new Node('f');
////
////	a->left = b;
////	a->right = c;
////	b->left = d;
////	b->right = e;
////	c->right = f;
////
////	traverseBTreeBF(a);
////}
//class BinTree
//{
//private:
//
//    class BinTreeNode
//    {
//    public:
//        string data;
//        BinTreeNode* first;
//        BinTreeNode* second;
//
//        BinTreeNode(string d)
//        {
//            this->data = d;
//            first = second = NULL;
//        }
//    };
//
//    BinTreeNode* root;
//
//public:
//    BinTree()
//    {
//        root = NULL;
//    }
//
//    ~BinTree()
//    {
//        // to be implemented
//    }
//
//    void dump() // display the tree node in a line
//    {
//        if (root != NULL)
//        {
//            stack<BinTreeNode*> s;
//            s.push(root);
//
//            BinTreeNode* tmp = NULL;
//
//            while (!s.empty())
//            {
//                tmp = s.top();
//                s.pop();
//
//                cout << tmp->data << " ";
//                if (tmp->first != NULL)
//                    s.push(tmp->first);
//                if (tmp->second != NULL)
//                    s.push(tmp->second);
//            }
//        }
//    }
//
//    void printInOrder()
//    {
//        if (root != NULL)
//        {
//            printInOrder(root);
//        }
//    }
//
//    void printInOrder(BinTreeNode* sr)
//    {
//        if (sr != NULL)
//        {
//            printInOrder(sr->first);
//            cout << sr->data << " ";
//            printInOrder(sr->second);
//        }
//    }
//
//    void printPreOrder()
//    {
//        if (root != NULL)
//        {
//            printPreOrder(root, 0);
//        }
//    }
//
//    void printPreOrder(BinTreeNode* sr, int lv)
//    {
//        if (sr != NULL)
//        {
//            for (int k = 0; k < lv; k++) cout << "----"; // indent two spaces
//            cout << sr->data << endl;
//
//            printPreOrder(sr->first, lv + 1);
//            printPreOrder(sr->second, lv + 1);
//        }
//    }
//
//    void addRoot(string d)
//    {
//        if (root == NULL)
//        {
//            root = new BinTreeNode(d);
//        }
//        else
//        {
//            // exception
//        }
//    }
//
//    BinTreeNode* findParent(string key)
//    {
//        if (root != NULL && root->data == key)
//        {
//            return root;
//        }
//
//        BinTreeNode* tmp = NULL;
//        stack<BinTreeNode*> s;
//
//        s.push(root);
//        while (!s.empty())
//        {
//            tmp = s.top();
//            s.pop();
//
//            if ((tmp->first != NULL && tmp->first->data == key) || (tmp->second != NULL && tmp->second->data == key))
//                return tmp;
//            if (tmp->first != NULL)
//                s.push(tmp->first);
//            if (tmp->second != NULL)
//                s.push(tmp->second);
//            tmp = NULL;
//        }
//        return tmp == NULL ? NULL : tmp;
//    }
//
//    BinTreeNode* findNode(string key)
//    {
//        BinTreeNode* tmp = NULL;
//        stack<BinTreeNode*> s;
//
//        s.push(root);
//        while (!s.empty())
//        {
//            tmp = s.top();
//            s.pop();
//
//            if (tmp->data == key)
//            {
//                break;
//            }
//            else
//            {
//                if (tmp->first != NULL)
//                    s.push(tmp->first);
//                if (tmp->second != NULL)
//                    s.push(tmp->second);
//            }
//            tmp = NULL;
//        }
//        return tmp == NULL ? NULL : tmp;
//    }
//
//    void addFirstChild(string d, string parent)
//    {
//        BinTreeNode* tmp = findNode(parent);
//        if (tmp != NULL && tmp->first == NULL)
//        {
//            tmp->first = new BinTreeNode(d);
//        }
//        else
//        {
//            // exception
//        }
//    }
//
//    void addSecondChild(string d, string parent)
//    {
//        BinTreeNode* tmp = findNode(parent);
//        if (tmp != NULL && tmp->second == NULL)
//        {
//            tmp->second = new BinTreeNode(d);
//        }
//        else
//        {
//            // exception
//        }
//    }
//
//};
//
//int main()
//{
//
//    BinTree fsr;
//
//    fsr.addRoot("20,H");
//    fsr.addFirstChild("30,F", "20,H");
//    fsr.addSecondChild("70,U", "20,H");
//    fsr.addFirstChild("90,N", "30,F");
//    fsr.addSecondChild("40,X", "30,F");
//    fsr.addFirstChild("60,Y", "70,U");
//    fsr.addSecondChild("80,O", "70,U");
//    fsr.addFirstChild("10,B", "90,N");
//    fsr.addSecondChild("33,K", "90,N");
//    fsr.addFirstChild("50,Z", "10,B");
//
//    //    fsr.addSecondChild("H", "E");
//    //    fsr.addFirstChild("I", "F");
//    //    fsr.addFirstChild("J", "I");
//    //    fsr.addSecondChild("K", "J");
//
//    cout << endl << endl << endl;
//    fsr.dump(); // Unformatted output of a tree
//    cout << endl << endl << endl;
//    fsr.printPreOrder();
//    cout << endl << endl << endl;
//    fsr.printInOrder(); // This (inorder) available only in Binary Trees
//    cout << endl << endl << endl;
//
//    return 0;
//}