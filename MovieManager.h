#pragma once
#include <vector>
#include "Movie.h"
//

class MovieManager {
public:
	int addMovie(const std::string& title, const std::string& genre, int releaseYear);
	std::string rateMovie(int id, int rating);
	std::string setWatched(int id, bool watched);
	const std::vector<Movie>& getMovies() const;

private:
	Movie& findMovie(int id);
	std::vector<Movie> movies_;
	int nextId_ = 1;
};