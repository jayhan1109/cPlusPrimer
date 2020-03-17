//#include <iostream>
//
//using namespace std;
//
//template <typename T>
//T max5(T arr[]);
//
//int main() {
//	int arr1[5] = { 4,2,5,8,7 };
//	double arr2[5] = { 4.3,9.5,5.72,7.65,3.26 };
//
//	int iMax = max5(arr1);
//	double dMax = max5(arr2);
//
//	cout << "int max: " << iMax << endl;
//	cout << "double max: " << dMax << endl;
//	return 0;
//}
//
//template <typename T>
//T max5(T arr[]) {
//	T max=arr[0];
//
//	for (int i = 1; i < 5; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//
//	return max;
//}