//#include <iostream>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//void print(const int* const, int);
//int* apply_all(const int* const, int, const int* const, int);
//
//int main() 
//{
//	int array1[]{ 1,2,3,4,5 };
//	int array2[]{ 10,20,30 };
//	cout << "Array 1: ";
//	print(array1, 5);
//	
//	cout << "Array 2: ";
//	print(array2, 3);
//
//	int* result = apply_all(array1, 5, array2, 3);
//	cout << "Result: ";
//	print(result, 15);
//	delete[] result;
//	return 0;
//}
//
//void print(const int* const arr, int n) {
//	cout << "[ ";
//	for (size_t i{ 0 }; i < n;i++) {
//		cout << arr[i] << " ";
//	}
//	cout << "]\n\n";
//}
//
//int* apply_all(const int* const arr1, int n1, const int* const arr2, int n2)
//{
//	int* tmp = new int[n1 * n2];
//	for (size_t i{ 0 }; i < n2; i++) {
//		for (size_t j{ 0 }; j < n1; j++) {
//			tmp[i * 5 + j] = arr2[i] * arr1[j];
//		}
//	}
//	return tmp;
//}