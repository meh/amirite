#include <iostream>
#include "amirite"

int
main (int argc, char* argv[])
{
	return amirite("duh", {
		{ "dah", []{
			ami::truthy(23);
		}},

		{ "deh", []{
			ami::truthy(0);
		}}
	});
}
