/* Setlist.h
/  Defines setlist class
*/

#include <vector>
#include <string>
#include "song.h"
#include "songselector.h"
#include "catalog.h"

#ifndef SETLIST_H
#define SETLIST_H

class Setlist : public Catalog
{
	private:
		unsigned int Length;
		unsigned int BreakCount;
		unsigned int BreakLength;
		Song *intermission;
		std::vector<std::string> GenreRestrict;
		unsigned int currentLength();
	public:
		Setlist();
		~Setlist();	
		Setlist(unsigned int length, unsigned int breakcount, unsigned int breaklength, 
				std::string genrerestrict, SongSelector select);
		Setlist(unsigned int length, unsigned int breakcount, unsigned int breaklength, 
				std::string genrerestrict, Catalog* cat);
		void setGenreRestrict(std::string in);
		void populate(SongSelector select);
		void populate(Catalog* cat);
		void setLength(unsigned int l);
		unsigned int getLength();
		void setBreakCount(unsigned int c);
		unsigned int getBreakCount();
		void setBreakLength(unsigned int bl);
		unsigned int getBreakLength();
};
bool genreCompare(std::string a, std::string b);



#endif
