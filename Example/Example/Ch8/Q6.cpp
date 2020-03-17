//#include <iostream>
//#include <string>
//
//using namespace std;
//
//template <typename T>
//T maxn(const T arr[], int n);
//
//template<>
//string maxn(const string str[], int n);
//
//int main() {
//	int arr1[] = { 2,5,4,8,6,5 };
//	double arr2[] = { 12.5,24.5,26,23.4 };
//	string arr3[] = { "hello","world","yes","goodbye","gooo" };
//	cout << "int: " << maxn(arr1, 6)<<endl;
//	cout << "double: " << maxn(arr2, 4) << endl;
//	cout << "string: " << maxn(arr3, 5) << endl;
//
//	return 0;
//}
//
//
//template <typename T>
//T maxn(const T arr[], int n) {
//	T max = arr[0];
//	for (int i = 1; i < n; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	
//	return max;
//}
//
//template<>
//string maxn(const string str[], int n) {
//	string max = str[0];
//	for (int i = 1; i < n; i++) {
//		if (str[i].length() > max.length()) {
//			max = str[i];
//		}
//	}
//
//	return max;
//}