#ifndef CONDITIONS_H_INCLUDED
#define CONDITIONS_H_INCLUDED

#include <vector>

using namespace std;

class conditions {
	public:
		conditions(const vector<int>& c, const vector<int>& p, const int K_P, const int n);
		int get_ci(int i);
		int get_pi(int i);
		int get_KP();
	private:
		vector<int> c;
		vector<int> p;
		int K_P;
		int n;
};

#endif
