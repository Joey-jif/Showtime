#pragma once
#include <string>
//


class Movie {
public:
	Movie(int id, const std::string& title, const std::string& genre, int releaseYear);

	int getId() const;
	std::string getTitle() const;
	std::string getGenre() const;
	int getReleaseYear() const;
	bool isWatched() const;
	int getRating() const;

	void setWatched(bool watched);
	void setRating(int rating);

private:
	int id_;
	std::string title_;
	std::string genre_;
	int releaseYear_;
	bool watched_;
	int rating_;
};