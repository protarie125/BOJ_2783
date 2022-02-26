#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	double x, y;
	cin >> x >> y;

	auto m = 1000 * x / y;

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		auto v = 1000 * x / y;
		if (v < m) {
			m = v;
		}
	}

	cout << fixed << setprecision(3) << m;

	return 0;
}