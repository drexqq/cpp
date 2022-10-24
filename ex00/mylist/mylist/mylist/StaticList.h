class StaticList : public List {
	uint8 _arr[10];
	uint8 N;
public:
	StaticList() : N(0) {}

	~StaticList() { printf("Delete StaticList\n"); }

	bool push(uint8 v) {
		if (N+1 > 10)
			return 0;
		_arr[N++] = v;
		return 1;
	};

	bool push_at(uint8 v, uint8 i) {
		if (N+1 > 10 || i > N)
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