#include <stdio.h>
template<class T>

class Arr2D {
	T* M;
public:
	int W, H;
	Arr2D(int w, int h) : W(w), H(h), M(new T[w*h]) {}

	T& at(int x, int y) {
		return M[(y*W)+x];
	}

	void init(T v) {
		T* curr = M;
		while (*curr)
			*curr++ = v;
	}

	void show() {
		T* curr = M;
		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				printf("%c", M[(y*W)+x]);
			}
			printf("\n");
		}
		printf("\n");
	}

	void fill(int x, int y, int w, int h, T val) {
		for (int i = y; i < y+h; i++) {
			for (int j = x; j < x+w; j++) {
				M[(i*W)+j] = val;
			}
		}
	}
};