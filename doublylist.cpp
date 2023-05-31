//#include "iostream"
//using namespace std;
//
//class Node {
//public:
//	int data;
//	Node* prev;
//	Node* next;
//
//public:
//	Node(int d = 0) {
//		data = d;
//		this->prev = NULL;
//		this->next = NULL;
//	}
//};
//
//class DLL {
//	Node* head;
//	Node* tail;
//	int size;
//
//public:
//	DLL() {
//		size = 0;
//		tail = new Node();
//		head = new Node();
//
//		head->next = tail;
//		tail->prev = head;
//		head->prev = tail->next = NULL;
//	}
//
//	bool isEmpty() {
//		if (head->next == tail) return true;
//		else return false;
//	}
//
//	void appendNode(int d) {
//		Node* newNode = new Node(d);
//		if (isEmpty()) {
//			newNode->next = tail;
//			newNode->prev = head;
//			tail->prev = newNode;
//			head->next = newNode;
//			size++;
//		}
//		else {
//			newNode->next = tail;
//			newNode->prev = tail->prev;
//			tail->prev->next = newNode;
//			tail->prev = newNode;
//			size++;
//		}
//	}
//
//	void insertNode(int i, int d) {
//		if (i > size || i <= 0) {
//			cout << "there is no such index in list " << endl;
//			return;
//		}
//		if (i == size) {
//			appendNode(d);
//			cout << "Node inserted after index " << i << endl; return;
//		}
//		int j = 1;
//		Node* temp = new Node();
//		temp = head->next;
//		while (j != i) {
//			temp = temp->next;
//			j++;
//		}
//
//		Node* nodeForInsertion = new Node(d);
//		nodeForInsertion->prev = temp;
//		nodeForInsertion->next = temp->next;
//		temp->next->prev = nodeForInsertion;
//		temp->next = nodeForInsertion;
//		size++;
//	}
//
//	void prependNode(int d) {
//		if (isEmpty()) {
//			appendNode(d); return;
//		}
//		Node* newNode = new Node(d);
//		newNode->next = head->next;
//		newNode->prev = head;
//		head->next = newNode;
//	}
//
//	void deleteNode(int index) {
//		int j = 1;
//		Node* temp = NULL;
//		temp = head->next;
//		while (j != index) {
//			temp = temp->next;
//			j++;
//		}
//		temp->prev->next = temp->next;
//		temp->next->prev = temp->prev;
//		delete temp;
//	}
//
//	void display() {
//		Node* temp = NULL;
//		temp = head->next; int i = 1;
//		while (temp != tail) {
//			cout << "Node " << i << " : data: " << temp->data << endl;
//			temp = temp->next; i++;
//		}
//	}
//
//	void reverseList() {
//		Node* curr = NULL;
//		Node* nextNode = NULL;
//
//		curr = head;
//		while (curr != NULL) {
//			nextNode = curr->next;
//			curr->next = curr->prev;
//			curr->prev = nextNode;
//			curr = nextNode;
//		}
//		Node* temp = head;
//		head = tail;
//		tail = temp;
//	}
//	~DLL() {
//		Node* ptr = NULL;
//
//		for (ptr = head; head; ptr = head)
//		{
//			head = head->next;
//			delete ptr;
//		}
//	}
//};
//
//int main() {
//	DLL dll;
//	dll.appendNode(2);
//	dll.appendNode(4);
//	dll.appendNode(6);
//	dll.appendNode(8);
//	dll.appendNode(10);
//	dll.display();
//	cout << endl;
//	//dll.prependNode(20);
//	dll.reverseList();
//	//dll.deleteNode(3);
//	dll.display();
//
//}
