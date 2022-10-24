typedef struct {
	int arr[1000];
	int len;

	void init() {
		len = 0;
	}

	void show() {
		for (int i = 0; i < len; i++)
			printf("%d, ", arr[i]);
		printf("\n");
	}

	bool empty() {
		return len ? false : true;
	}

	void push(int val) {
		arr[len++] = val;
	}
	
	int pop() {
		if (empty())
			return -1;
		return arr[len--];
	}

	int size() {
		return len;
	}
} stack;