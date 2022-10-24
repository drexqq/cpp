class Node {
public:
	Node* p;
	uint8 data;
};

class LinkedList : public List {
public:
	Node* hd;

	LinkedList() : hd(nullptr) {}

	~LinkedList() { delete hd; }

	bool push(uint8 v) {
		Node* n = new Node();
		n->data = v;
		n->p = nullptr;
		if (hd == nullptr)
			hd = n;
		else {
			Node* curr = hd;
			while (curr->p)
				curr = curr->p;
			curr->p = n;
		}
		return 1;
	}

	bool push_front(uint8 v) {
		Node* n = new Node();
		n->data = v;
		n->p = hd;
		hd = n;
		return 1;
	}

	bool push_at(uint8 v, uint8 i) {
		if (size() <= i || i < 0)
			return 0;
		Node* n = new Node();
		n->data = v;
		if (hd == nullptr) {
			hd = n;
			n->p = nullptr;
		}
		else {
			if (i == 0) {
				push_front(v);
				return 1;
			}
			Node* curr = hd;
			for (uint8 j = 0; j < i; j++)
				curr = curr->p;
			n->p = curr->p;
			curr->p = n;
		}
		return 1;
	};

	bool pop() {
		uint8 N = size();
		if (!N)
			return 0;
		if (N == 1) {
			delete hd;
			hd = nullptr;
			return 1;
		}
		Node* curr = hd;
		for (uint8 i = 0; i < N-2; i++)
			curr = curr->p;
		delete curr->p->p;
		curr->p = nullptr;
		return 1;
	};

	bool pop_front() {
		uint8 N = size();
		if (!N)
			return 0;
		if (N == 1) {
			delete hd;
			hd = nullptr;
			return 1;
		}
		Node* curr = hd;
		hd = curr->p;
		delete curr;
		return 1;
	}

	bool pop_at(uint8 i) {
		uint8 N = size();
		if (N <= i || i < 0 || !N) {
			printf("pop_at ERR\n");
			return 0;
		}
		if (i == 0) {
			pop_front();
			return 1;
		}
		Node* curr = hd;
		Node* prev;
		while (i--) {
			if (i == 0)
				prev = curr;
			curr = curr->p;
		}
		prev->p = curr->p;
		delete curr;
		return 1;
	};

	uint8 at(uint8 i) {
		if (size() <= i || i < 0)
			return -1;
		Node* curr = hd;
		while (i--)
			curr = curr->p;
		return curr->data;
	};

	uint8 size() {
		Node* curr = hd;
		uint8 N = 0;
		while (curr) {
			curr = curr->p;
			N++;
		}
		return N;
	};

	void show() {
		Node* curr = hd;
		while (curr) {
			printf("data: %d ,", curr->data);
			curr = curr->p;
		}
		printf("\n");
	}
};