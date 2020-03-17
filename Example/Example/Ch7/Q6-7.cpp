//#include <iostream>
//
//using namespace std;
//
//void Fill_array(double arr[], int n) {
//	int i;
//	for (i = 0; i < n; i++) {
//		cout << "Input a number: ";
//		if (!(cin >> arr[i])) {
//			break;
//		}
//	}
//
//	cout << "Total " << i << " numbers.\n";
//}
//
//void Show_array(double arr[], int n) {
//	cout << "====================================================\n";
//	cout << "Elements" << endl;
//	cout << "====================================================\n";
//	for (int i = 0; arr[i]; i++) {
//		cout << "array[" << i << "] : " << arr[i] << endl;
//	}
//}
//
//void Reverse_array(double arr[], int n) {
//	int count = 0;
//	for (int i = 0; arr[i]; i++) {
//		count++;
//	}
//
//	for (int i = 0; i < count / 2; i++) {
//		double temp = arr[i];
//		arr[i] = arr[count - i - 1];
//		arr[count - i - 1] = temp;
//	}
//
//	for (int i = 0; arr[i]; i++) {
//		cout << "arr[" << i << "] : " << arr[i] << endl;
//	}
//}
//
//int main() {
//	double arr[10];
//	Fill_array(arr, 10);
//	Show_array(arr, 10);
//	Reverse_array(arr, 10);
//	return 0;
//}