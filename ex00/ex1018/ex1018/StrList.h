#include "File.h"

class Node {
public:
	char* str;
	Node* next;
	Node() : next() {}
};

class StrList {
	Node* hd;
public:
	StrList() : hd(nullptr) {}

	~StrList() {}

	void push_front(char* str) {
		Node* n = new Node();
		n->str = str;
		n->next = hd;
		hd = n;
	}

	void pop_front() {
		if (hd->next) {
			Node* head = hd;
			hd = head->next;
			delete head;
		}
	}

	void push_back(char* str) {
		if (hd == nullptr) {
			push_front(str);
			return ;
		}
		Node* n = new Node();
		n->str = str;
		n->next = nullptr;
		Node* head = hd;
		while (head->next)
			head = head->next;
		head->next = n;
	}

	void pop_back() {
		Node* head = hd;
		while (head->next->next)
			head = head->next;
		head->next = nullptr;
	}

	bool save(char* path) {
		File fd = File();
		if (fd.open(path, "wb")) {
			Node* head = hd;
			int len = 0;
			while (head) {
				fd.write(head->str, strlen(head->str));
				fd.write("\n", 1);
				head = head->next;
			}
			fd.close();
			return 1;
		}
		return 0;
	}

	bool load(char* path) {
		File fd = File();
		if (fd.open(path)){
			int file_size = fd.size();
			char* cnt = new char[file_size + 1];
			cnt[file_size] = 0;
			fd.read(cnt, file_size);
			fd.close();
			push_back(cnt);
			return 1;
		}
		return 0;
	}

	char* at(int i) {
		if (i >= 0 || i < size()) {
			Node* head = hd;
			while (head) {
				if (!i--)
					return head->str;
				head = head->next;
			}
		}
		return "Fail";
	}

	int size() {
		Node* head = hd;
		int i = 0;
		while (head) {
			head = head->next;
			i++;
		}
		return i;
	}

	void show() {
		Node* head = hd;
		while (head) {
			printf("[%s] ", head->str);
			head = head->next;
		}
		printf("\n");
	}
};
