# Showtime
Showtime allows movie fans to document their movies. Users of the program are able to add movies to their watchlist where they can set the movies watch status and give the movies a rating from 1 to 5.
The user is also able to ask the program what movie to watch next! 

**Team Code-Masters:** Kevin, Joseph, Kaiya

**Intended Users:** Anyone who is a fan of movies!

# Program Functionality
1. Add Movie - User types in Title, Genre, Release Date (A movie is create, given an ID, and added to the list)
2. View Watchlist (Displays every movie with its ID, Title, Genre, Year Released, Watch Status, and Rating)
3. Set Watch Status - User types ID of their selected movie then type 1/2 to set the watch status (Selected movies watch status is updated to users option)
4. Rate a Movie - User types ID of their selected movie then type a rating from 1 to 5 (Selected movies rating is updated to users option)
5. What To Watch? - User types 1/2 to select a movie by the highest rating or by the newest release (Finds an unwatched movie based off users option)
0. Quit (Closes Program)

# Setup Instructions
**Windows:**
1. Clone the Repository
2. In Visual Studio hit File -> Open -> Folder and select the "Showtime" folder.
3. Wait until output states "CMake Finished"
4. Choose "Showtime.exe" as the startup
5. Build the solution
6. Run the exe

**Mac:**
1. Install the tools once: xcode-select --install
2. Install CMake (brew install cmake) 
3. In the Showtime folder run:
```
cmake -S . -B build
cmake --build build
./build/Showtime
```
# Code Explained
**Movie.h/.cpp** - Creates a movie (ID, Title, Genre, Release Year, WatchStatus, Rating), constructor and setters check validity

**MovieManager.h/.cpp** - Holds list of movies and verifies them. Functions (add, find by ID, rate, set watch status, select movie to watch)

**SelectMethod.h** - Abstract base class, virtual function "select"

**HighestRatedSelect.h/.cpp** - Child class, selects the highest rated movies (not watched)

**NewestMovieSelect.h/.cpp** - Child class, selects the newest released movies (not watched)

**ShowtimeMain.cpp** - Runs everything, reads user inputs, calls "MovieManager", and prints all results

# AI Assistance
A mixture of youtube and AI was used to explain how to make Windows and Mac cross compatible using CMake because teammates had different operating systems making it difficult to work together. It was also used to cross reference the program against the rubric so nothing on the rubric was left missing (Didn't add anything itself only told what was missing). 
