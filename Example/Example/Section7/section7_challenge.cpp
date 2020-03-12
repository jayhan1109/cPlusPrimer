//#include <iostream>
//#include <vector>
//
//int main() {
//	using std::cout;
//	using std::cin;
//	using std::endl;
//	using std::vector;
//
//	vector<int> vector1;
//	vector<int> vector2;
//
//	vector1.push_back(10);
//	vector1.push_back(20);
//	cout << "Elements of vector1 : { " << vector1.at(0) << " , " << vector1.at(1) << "}\n";
//	cout << "Size of vector1 : " << vector1.size()<<endl;
//	
//	vector2.push_back(100);
//	vector2.push_back(200);
//	cout << "Elements of vector2 : { " << vector2.at(0) << " , " << vector2.at(1) << "}\n";
//	cout << "Size of vector2 : " << vector2.size() << endl;
//
//	vector<vector<int>> vector_2d;
//	vector_2d.push_back(vector1);
//	vector_2d.push_back(vector2);
//
//	cout << "First element of vector_2d : " << vector_2d.at(0).at(0)<<endl;
//
//	cout << "Change vector1.at(0) to 1000\n";
//	vector1.at(0) = 1000;
//	cout<<"First element of vector_2d : " << vector_2d.at(0).at(0) << endl;
//	cout << "Elements of vector1 : { " << vector1.at(0) << " , " << vector1.at(1) << "}\n";
//
//	return 0;
//}