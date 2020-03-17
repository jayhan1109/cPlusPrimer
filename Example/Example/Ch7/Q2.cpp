//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void inputScore(vector<double>* scores);
//double getSum(vector<double>* scores);
//double getAvg(vector<double>* scores);
//
//int main() {
//	double sum;
//	double avg;
//	vector<double> scores;
//	inputScore(&scores);
//	sum=getSum(&scores);
//	avg=getAvg(&scores);
//
//	cout << "Sum: " << sum << endl;
//	cout << "Avg: " << avg << endl;
//	return 0;
//}
//
//void inputScore(vector<double>* scores) {
//	double score;
//	for (int i = 0; i < 10; i++) {
//		cout << "Add a score: (EXIT: 000)";
//		cin >> score;
//		if (score == 000) {
//			break;
//		}
//		else {
//			scores->push_back(score);
//		}
//	}
//}
//
//double getSum(vector<double>* scores) {
//	double sum=0;
//	for (int i = 0; i < (*scores).size(); i++) {
//		sum += scores->at(i);
//	}
//
//	return sum;
//}
//
//double getAvg(vector<double>* scores) {
//	double sum=0;
//	for (int i = 0; i < (*scores).size(); i++) {
//		sum += scores->at(i);
//	}
//
//	return (sum/(*scores).size());
//}
