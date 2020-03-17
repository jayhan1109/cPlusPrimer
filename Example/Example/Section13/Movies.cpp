//#include "Movies.h"
//#include <iostream>
//
//void Movies::display_all() const
//{
//	std::cout << "============================\n"
//		<< "List of Movies\n";
//	for (int i = 0; i < movies.size(); i++) {
//		std::cout << movies.at(i).get_name() << "\t";
//	}
//	std::cout << "\n============================\n\n";
//}
//
//void Movies::display_one(std::string n) const
//{
//	std::cout << "============================\n"
//		<< "Information of "<<n<<"\n";
//	for (int i = 0; i < movies.size(); i++) {
//		if (movies.at(i).get_name() == n) {
//			std::cout << "Title: " << movies.at(i).get_name() << std::endl
//				<< "Rating: " << movies.at(i).get_rating() << std::endl
//				<< "Watched: " << movies.at(i).get_watched() << std::endl;
//			break;
//		}
//	}
//	std::cout << "============================\n\n";
//}
//
//void Movies::add_movie(Movie movie)
//{
//	movies.push_back(movie);
//}
//
//void Movies::increment_watched(std::string n)
//{
//	for (int i = 0; i < movies.size(); i++) {
//		if (movies.at(i).get_name() == n) {
//			movies.at(i).incre_watched();
//			break;
//		}
//	}
//}
