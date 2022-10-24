class DynamicList : public List {
	uint8* _arr;
	uint8 N;
	uint8 _cap;
public:
	DynamicList(int cap) : N(0), _arr(new uint8[cap]), _cap(cap) {}

	~DynamicList() {
		delete _arr;
		printf("Delete DynamicList\n");
	}

	bool push(uint8 v) {
		if (N == _cap)
			return 0;
		_arr[N++] = v;
		return 1;
	};

	bool push_at(uint8 v, uint8 i) {
		if (N+1 > _cap || i > N)
			return 0;
		N++;
		for (uint8 j = N-1; j > i; j--)
			_arr[j] = _arr[j-1];
		_arr[i] = v;
		return 1;
	};

	bool pop() {
		if (N == 0)
			return 0;
		N--;
		return 1;
	};

	bool pop_at(uint8 i) {
		if (N == 0 || i < 0)
			return 0;
		for (uint8 j = i; j < N-1; j++)
			_arr[j] = _arr[j+1];
		N--;
		return 1;
	};

	uint8 at(uint8 i) {
		return _arr[i];
	};

	uint8 size() {
		return N;
	};

	void show() {
		printf("N : %d\n", size());
		for (uint8 i = 0; i < N; i++)
			printf("%d ", at(i));
		printf("\n");
	};
};