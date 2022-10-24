typedef unsigned int	uint8;

typedef struct {
	uint8* A;
	int	N;
	int	size;
} Arr;

bool arr_alloc(Arr* pA, int size) {
	pA->A = new uint8[size];
	pA->N = 0;
	pA->size = size;
	return pA->A != 0;
}

void arr_free(Arr* pA) {
	if (pA->A)
		delete pA->A;
	pA->A = 0, pA->N = 0, pA->size = 0;
}

#define arr_isFull(a) a.N == a.size
#define arr_isEmpty(a) a.N == 0;
#define arr_at(a, i) a.A[i];

bool arr_push_back(Arr* pA, uint8 val) {
	if (pA->N == pA->size)
		return 0;
	pA->A[pA->N++] = val;
	return 1;
}

bool arr_pop_back(Arr* pA) {
	if (pA->N == 0)
		return 0;
	pA->N--;
	return 1;
}

bool arr_push_at(Arr* pA, uint8 val, int pos) {
	if (pA->N == pA->size)
		return 0;
	pA->N++;
	for (int i = pA->N; i >= pos; i--)
		pA->A[i] = pA->A[i - 1];
	pA->A[pos] = val;
	return 1;
}

float arr_avg(Arr* pA) {
	int sum = 0;
	for (int i = 0; i < pA->N; i++)
		sum += pA->A[i];
	return sum / pA->N;
}