#include <iostream>
#include <stack>
using namespace std;

class Btree {
private:
	class Node {
	public:
		string data;
		Node* first;
		Node* second;

		Node(string a) {
			data = a;
			first = second = NULL;
		}
	};
public:
	Node* root;
	Btree() {
		root = NULL;
	}
	Node* findParentNode(string k) {
		if (root == NULL) return NULL;
		if (root->data == k) return root;
		
		Node* temp = NULL;
		stack <Node*> t;
		t.push(root);

		while (!t.empty())
		{
			temp = t.top();
			if (temp->first && temp->first->data == k || temp->second && temp->second->data == k) return temp;

			if (temp->first != NULL) t.push(temp->first);
			if (temp->second != NULL) t.push(temp->second);
			temp = NULL;
		}
		return temp;
	}
	 Node* findNode(string key)
    {
        Node* tmp = NULL;
        stack<Node*> s;

        s.push(root);
        while (!s.empty())
        {
            tmp = s.top();
            s.pop();

            if (tmp->data == key)
            {
                break;
            }
            else
            {
                if (tmp->first != NULL)
                    s.push(tmp->first);
                if (tmp->second != NULL)
                    s.push(tmp->second);
            }
            tmp = NULL;
        }
        return tmp == NULL ? NULL : tmp;
    }
	void addFirstChild(string val, string parent) {
		Node* pNode = findNode(parent);
		if (pNode != NULL && pNode->first == NULL) {
			pNode->first = new Node(val);
			cout << "root first node" << endl;
		}
		else return;
	}

	void addSecondChild(string val, string parent) {
		Node* pNode = findNode(parent);
		if (pNode != NULL && pNode->second == NULL ) {
			pNode->second = new Node(val);
			cout << "second node" << endl;
		}
		else return;
	}

	void preOrder() {
		if (root != NULL) printPreOrder(root, 0);
		else cout << "Empty Tree" << endl;
	}

	void printPreOrder(Node* sr, int lv)
	{
		if (sr != NULL)
		{
			for (int k = 0; k < lv; k++) cout << "----"; // indent two spaces
			cout << sr->data << endl;

			printPreOrder(sr->first, lv + 1);
			printPreOrder(sr->second, lv + 1);
		}
	}
	void addRoot(string d) {
		if (root == NULL) {
			root = new Node(d);
			cout << "root added" << endl;
		}
	}
};

int main() {
	Btree fsr;

	fsr.addRoot("20,H");
	fsr.addFirstChild("30,F", "20,H");
	fsr.addSecondChild("70,U", "20,H");
	fsr.addFirstChild("90,N", "30,F");
	fsr.addSecondChild("40,X", "30,F");
	fsr.addFirstChild("60,Y", "70,U");
	fsr.addSecondChild("80,O", "70,U");
	fsr.addFirstChild("10,B", "90,N");
	fsr.addSecondChild("33,K", "90,N");
	fsr.addFirstChild("50,Z", "10,B");

	cout << endl << endl << endl;
    fsr.preOrder();
    cout << endl << endl << endl;
}