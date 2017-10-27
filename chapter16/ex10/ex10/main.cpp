// vect3.cpp -- using STL functions
//ex10 done b)
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

struct Review {
	std::string title;
	int rating;
	float price;
};
bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool worseThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2);
bool FillReview(std::shared_ptr<Review> & rr);
void ShowReview(const std::shared_ptr<Review> & rr);
int main()
{
	using namespace std;
	vector<shared_ptr<Review> > books;
	shared_ptr<Review> temp(new Review);
	while (FillReview(temp))
	{
		books.push_back(temp);
		temp.reset(new Review);
	}
	if (books.size() > 0)
	{
		cout << "Thank you. You entered the following "
			<< books.size() << " ratings:\n"
			<< "Rating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end());
		cout << "Sorted by title:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);
		sort(books.begin(), books.end(), worseThan);
		cout << "Sorted by rating:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);
		random_shuffle(books.begin(), books.end());
		cout << "After shuffling:\nRating\tBook\n";
		for_each(books.begin(), books.end(), ShowReview);
	}
	else
		cout << "No entries. ";
	cout << "Bye.\n";
	system("pause");
	return 0;
}
bool operator<(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
		if (r1->title < r2->title)
			return true;
		else if (r1->title == r2->title && r1->rating < r2->rating)
			return true;
		else
			return false;
}
bool worseThan(const std::shared_ptr<Review> & r1, const std::shared_ptr<Review> & r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool FillReview(std::shared_ptr<Review> & rr)
{
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin, rr->title);
	if (rr->title == "quit")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr->rating;
	if (!std::cin)
		return false;
	// get rid of rest of input line
	while (std::cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(const std::shared_ptr<Review> & rr)
{
	std::cout << rr->rating << "\t" << rr->title << std::endl;
}