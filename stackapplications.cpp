//#include <iostream>
//#include <stack>
//using namespace std;
//
//void display(stack<int>);
//bool isOPerator(char);
//bool validParenthesis(string exp) {
//	if (exp == "") return true;
//	stack<char> st;
//
//	for (int i = 0; i < exp.length(); i++) {
//		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
//			st.push(exp[i]);
//		}
//		else if ((exp[i] == ')' && st.top() == '(') || (exp[i] == '}' && st.top() == '{') || (exp[i] == ']' && st.top() == '[')) {
//			st.pop();
//		}
//		else {
//			return false;
//		}
//	}
//	return (st.empty()) ? true : false;
//}
//
//void reverseString(string& exp) {
//	stack<char> st;
//	for (int i = 0; i < exp.length(); i++) st.push(exp[i]);
//	exp = "";
//	while (!st.empty()) {
//		exp += st.top();
//		st.pop();
//	}
//}
//void pushAtBottom(stack<int>& st, int item) {
//	if (st.empty()) {
//		st.push(item);
//		return;
//	}
//	int temp = st.top();
//	st.pop();
//	pushAtBottom(st, item);
//	st.push(temp);
//}
//
//void reverseStack(stack<int>& st) {
//	if (st.empty()) return;
//	int top = st.top();
//	st.pop();
//	reverseStack(st);
//	pushAtBottom(st, top);
//}
//
//void pushAtMidUtil(stack<int>& st, int item, int index, int size) {
//	if (index == size / 2) {
//		st.push(item);
//		return;
//	}
//	int popedItem = st.top();
//	st.pop();
//	pushAtMidUtil(st, item, index + 1, size);
//	st.push(popedItem);
//}
//void pushAtMid(stack <int> &st,int item) {
//	pushAtMidUtil(st, item, 0, st.size());
//}
//
//void removeMidElemUtil(stack<int>& st, int i, int s) {
//	if (i == s / 2) {
//		st.pop();
//		return;
//	}
//	int top = st.top();
//	st.pop();
//	removeMidElemUtil(st, i + 1, s);
//	st.push(top);
//}
//void removeMidElem(stack<int>& st) {
//	removeMidElemUtil(st, 0, st.size());
//}
//
//void sortedInsert(stack<int>& st, int item) {
//	if (st.empty() || st.top() > item) {
//		st.push(item);
//		return;
//	}
//	int num = st.top();
//	st.pop();
//	sortedInsert(st, item);
//	st.push(num);
//}
//void sortStack(stack<int>& st) {
//	if (st.empty()) return;
//	int item = st.top();
//	st.pop();
//	sortStack(st);
//	sortedInsert(st, item);
//}
//
//bool checkRedundatBracket(string exp) {
//	stack<char> st;
//	
//	for (int i = 0; i < exp.length(); i++) {
//		char ch = exp[i];
//		if (isOPerator(ch) || ch == '(') {
//			st.push(ch);
//		}
//		else {
//			if (exp[i] == ')') {
//				bool isRed = true;
//				while (st.top() != '(') {
//					char top = st.top();
//					if (isOPerator(top)) isRed = false;
//					st.pop();
//				}
//				if (isRed == true) return true;
//				st.pop();
//			}
//			
//		}
//	}
//	return false;
//}
//int main() {
//	stack<int> st;
//	st.push(13);
//	st.push(8);
//	st.push(5);
//	st.push(6);
//	st.push(15);
//	st.push(9);
//	display(st);
//	cout << endl;
//	sortStack(st);
//	display(st);
//}
//
//void display(stack <int> st) {
//	while (!st.empty()) {
//		cout << st.top() << endl;
//		st.pop();
//	}
//}
//
//bool isOPerator(char op) {
//	if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') return true;
//	return false;
//}