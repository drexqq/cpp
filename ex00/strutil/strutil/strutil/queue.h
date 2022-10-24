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
		int ret = arr[0];
		for (int i = 1; i < len; i++)
			arr[i-1] = arr[i];
		len -= 1;
		return ret;
	}

	int size() {
		return len;
	}
} queue;