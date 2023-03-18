#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int flat(int m, int k, int p){
	int x;
	if (k % (m * p) == 0) {
		x = k / (m * p);
	}
	else {
		x = k / (m * p) + 1;
	}
	return x;
}

int man() {
	int N1, P1, K1, N2, P2, K2, M, x;
	cin >> K1 >> M >> K2 >> P2 >> N2;
	x = flat(M, K2, P2);
	
	return 0;
}