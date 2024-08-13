#pragma once
#include <string>
#include <ostream>
class Color
{
private:
	int red, green, blue;

public:
	class ColorExceptions
	{
		std::string FileNotFoundException = "\nFailed to open given file, perhaps it isn't in the folder or it is misspelled.\n\t\tShutting down.";
		std::string ColorFileFormatException = "\nThere was an error in fetching a color coordinate. \n\t\tShutting down.";
	};
	Color(int r, int g, int b) : red(r), green(g), blue(b) {}
	friend std::ostream& operator<<(std::ostream& strm, Color& c);
};