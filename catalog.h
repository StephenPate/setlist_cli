/* Catalog.h
 * Defines Catalog class
 */

// Definitions
#ifndef CATALOG_H
#define CATALOG_H

// Headers
#include "song.h"
#include <vector>
using namespace std;

class Catalog
{
	private:
		vector<Song*> cat;
		unsigned int iterator;
	public:
		Catalog();
		~Catalog();
		void duplicate(Catalog *dup);
		void addSong(Song *i);
		void sort_composer();
		void sort_genre();
		void sort_title();
		void shuffle();
		Song getSong(unsigned int i);
		Song* getSongptr(unsigned int i);
		void printSongs();
		void clear();
		unsigned int size();
		void expand(unsigned int size);
};
std::string catalogSortFormat(std::string instring);
#endif
