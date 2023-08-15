#include <iostream>

int main(){
	using namespace std;
	const int FACTOR = 12;
	int height;
	cout << "请输入您的身高（英寸）：_____\b\b\b\b\b";
	cin >> height;

	cout << "您的身高是" << height / 12 << "英尺" << height % 12 << "英寸" << endl;
	return 0;
}
