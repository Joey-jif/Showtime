#pragma once
#include <vector>
#include "Movie.h"

//Manages the full list of movies
class MovieManager {
public:
	//Creates a movie and adds it to the list
	int addMovie(const std::string& title, const std::string& genre, int releaseYear);

	//Changes a movies watch status or rating
	std::string rateMovie(int id, int rating);
	std::string setWatched(int id, bool watched);

	//Lets other functions read the list of movies but not change it 
	const std::vector<Movie>& getMovies() const;

private:
	//Looks up movie using its id
	Movie& findMovie(int id);
	std::vector<Movie> movies_;
	int nextId_ = 1;
};