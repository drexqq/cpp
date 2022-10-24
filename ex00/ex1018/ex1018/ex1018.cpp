#include <stdio.h>
#include <vector>
#include "StrList.h"

using namespace std;

bool isNumber(char c) { return c >= '0' && c <= '9'; }

void calc(vector<int>* n, vector<char>* o) {
	int a = n->back();
	n->pop_back();
	int b = n->back();
	n->pop_back();
	char op = o->back();
	o->pop_back();

	if (op == '+')
		n->push_back(b + a);
	else if (op == '-')
		n->push_back(b - a);
}

void show_v(vector<int> n, vector<char> o) {
	for (int i = 0; i < n.size(); i++)
		printf("%d,", n[i]);
	printf("\n");
	for (int i = 0; i < o.size(); i++)
		printf("%c,", o[i]);
	printf("\n------\n");
}

int main(int argc, char* argv[]) {
	//vector<int> n;
	//vector<char> o;

	//char exp[100] = "1+2+(3-(4+1)+(3+1))";
	////gets(exp);
	//int i = 0;
	//int block = 0;
 //	while (exp[i] != 0) {
	//	if (isNumber(exp[i])) {
	//		n.push_back(exp[i]-'0');
	//	}
	//	else if (exp[i] == '(') {
	//		o.push_back(exp[i]);
	//	}
	//	else if (exp[i] == ')') {
	//		while (o.back() != '(')
	//			calc(&n, &o);
	//		o.pop_back();
	//	}
	//	else if (exp[i] == '+' || exp[i] == '-') {
	//		while (!o.empty() && o.back() != '(')
	//			calc(&n, &o);
	//		o.push_back(exp[i]);
	//	}
	//	i++;
	//	show_v(n, o);
	//}

	//while (!o.empty())
	//	calc(&n, &o);
	//printf("Result : %d\n", n[0]);

	StrList sl = StrList();
	sl.push_front("test");
	sl.push_front("test1");
	sl.push_front("test2");
	sl.push_back("test55");
	sl.pop_front();
	sl.show();
	sl.pop_back();
	sl.load("D:\\ex00\\file_tmp\\test.txt");
	sl.save("D:\\ex00\\file_tmp\\savetest.txt");
	sl.show();

	printf("at %d : [%s]\n", 0, sl.at(0));
	printf("at %d : [%s]\n", 1, sl.at(1));
	printf("at %d : [%s]\n", 2, sl.at(2));
	printf("at %d : [%s]\n", 3, sl.at(3));

	File f = File();
	File::dup("D:\\ex00\\file_tmp\\test.txt", "D:\\ex00\\file_tmp\\test_dup.txt");
	printf("%d\n", File::is_exist("D:\\ex00\\file_tmp\\test.txt"));
	printf("%d\n", File::is_exist("D:\\ex00\\file_tmp\\tesasast.txt"));
	return 0;
}

