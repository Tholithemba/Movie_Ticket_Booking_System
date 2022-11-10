#ifndef MOVIE_H
#define MOVIE_H
#include<string>

class movie{
 private:
	int m_id;
	string m_name;
	string director;
	string actors;
	
 public:
 	movie();
 	void setMovieID();
 	int getMovieID();
 	void setMovieName();
 	string getMovieName();
 	void setDirector();
 	string getDirector();
 	void setActors();
 	string getActors();
};

#include "movie.cpp"
#endif
