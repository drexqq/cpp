#include "stdio.h"

class Rect {
public:
	int X, Y, W, H;

	Rect(int x = 0, int y = 0, int w = 0, int h = 0) : X(x), Y(y), W(w), H(h) {}

	bool operator==(Rect r) { return X == r.X && Y == r.Y && W == r.W && H == r.H; }

	bool contains(int x, int y) {
		return x >= X && x <= X+W && y >= Y && y <= Y+H;
	}

	int right() { return X+W; }

	int bottom() { return Y+H; }

	void inflate(int dx, int dy) {
		W += dx;
		H += dy;
	}

	int abs(int a, int b) {
		return a-b > 0 ? a-b : (a-b)*-1;
	}

	Rect Union(Rect r) {
		int x = (X < r.X) ? X : r.X;
		int y = (Y < r.Y) ? Y : r.Y;
		int w = (right() > r.right()) ? right() : r.right();
		int h = (bottom() > r.bottom()) ? bottom() : r.bottom();
		return Rect(x, y, w, h);
	}

	Rect Intersect(Rect r) {
		if (contains(r.X, r.Y) || contains(r.X+W, r.Y) || contains(r.X, r.Y+H) || contains(r.X+W, r.Y+H)) {
			int x = (X > r.X) ? X : r.X;
			int y = (Y > r.Y) ? Y : r.Y;
			int w = (right() < r.right()) ? right()-x : r.right()-x;
			int h = (bottom() < r.bottom()) ? bottom()-y : r.bottom()-y;
			printf("%d %d %d %d\n", x,y,w,h);
			return Rect(x, y, w, h);
		}
		else {
			return r;
		}
	}

	void show() {
		for (int i = Y; i < H; i++) {
			for (int j = X; j < W; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n");
	}
};