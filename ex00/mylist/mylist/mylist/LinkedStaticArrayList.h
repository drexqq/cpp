class ArrayNode{
public:
	ArrayNode* p;
	uint8 data[3];
	uint8 N;
};

class LinkedStaticArrayList : public List {
public:
	ArrayNode* hd;

	LinkedStaticArrayList() : hd(nullptr) {}

	~LinkedStaticArrayList() { delete hd; }

	bool push(uint8 v) {
		ArrayNode* curr = hd;
		while (curr) {
			if (curr->N+1 > 3) {
				curr = curr->p;
			} else {
				break;
			}
		}
		hd->data[hd->N++] = v;
		return 1;
	}

	bool push_at(uint8 v, uint8 i) {
		return 1;
	}

	bool pop() {
		return 1;
	}

	bool pop_at(uint8 i) {
		return 1;
	}

	uint8 at(uint8 i) {
		return 1;
	}

	uint8 size() {
		return 1;
	}
};