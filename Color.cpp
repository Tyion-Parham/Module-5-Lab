#include "Color.h"

std::ostream& operator<<(std::ostream& strm, Color& c)
{
	if ((c.red == c.green == c.blue) && (c.red > 250))
		strm << "W";
	else if ((c.red == c.green == c.blue) && (50 <= c.red <= 250))
		strm << "G";
	else if ((c.red == c.green == c.blue) && (c.red < 50))
		strm << "D";
	else if ((c.red == c.blue) && (c.red > c.green))
		strm << "P";
	else if ((c.red == c.green) && (c.red > c.blue))
		strm << "Y";
	else if ((c.green == c.blue) && (c.green > c.red))
		strm << "T";
	else if (c.red > (c.green & c.blue))
		strm << "R";
	else if (c.green > (c.red & c.blue))
		strm << "G";
	else if (c.blue > (c.red & c.green))
		strm << "B";
	else
		strm << "V";
	return strm;
}