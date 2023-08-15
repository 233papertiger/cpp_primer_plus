#include <iostream>

double dist_cvrt(double dis);
int main() {
    using namespace std;
	cout << "请输入一个以long为单位的距离：" << endl;
	
	double dis;
	cin >> dis;
	cout << "转换后的距离为" << dist_cvrt(dis) << "码" << endl;
    return 0;
}

double dist_cvrt(double dis) {
	return dis * 220;
}
