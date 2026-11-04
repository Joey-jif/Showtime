#include "MovieManager.h"
#include <stdexcept>

int MovieManager::addMovie(const std::string& title, const std::string& genre, int releaseYear) {
	Movie movie(nextId_, title, genre, releaseYear);
	movies_.push_back(movie);
	nextId_++;
	return movie.getId();
}

std::string MovieManager::rateMovie(int id, int rating) {
	Movie& movie = findMovie(id);
	movie.setRating(rating);
	return movie.getTitle();
}

std::string MovieManager::setWatched(int id, bool watched) {
	Movie& movie = findMovie(id);
	movie.setWatched(watched);
	return movie.getTitle();
}

const std::vector<Movie>& MovieManager::getMovies() const {
	return movies_;
}

Movie& MovieManager::findMovie(int id) {
	for (Movie& mov : movies_) {
		if (mov.getId() == id) {
			return mov;
		}
	}
	throw std::out_of_range("A Movie With ID " + std::to_string(id) + " Does Not Exist!\n");
}