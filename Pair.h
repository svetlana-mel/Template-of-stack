#ifndef PAIR_H
#define PAIR_H

class Pair {
private:
	int intP;
	double doubleP;
public:
	Pair() {
		intP = 0;
		doubleP = 0;
	}
	Pair(int i, double d) {
		intP = i;
		doubleP = d;
	}
	int getInt() { return intP; }
	double getDouble() { return doubleP; }
	// перегрузки операторов
	Pair& operator= (const Pair& p) {
		intP = p.intP;
		doubleP = p.doubleP;
		return *this;
	}

	friend std::ostream& operator<< (std::ostream& os, Pair p) {
		os << "(" << p.getInt() << ", " << p.getDouble() << ")";
		return os;
	}
};

#endif