#include <iostream>
int main()
{
	int x, y;
	int x1, y1;
	int x2, y2;
	std::cin >> x >> y;
	x1 = -x;
	y1 = y;
	x2 = x1;
	y2 = -y1;
	std::cout << -x2 << std::endl;
	std::cout << y2;
	return 0;
}