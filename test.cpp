#include <iostream>
#include "amirite"

int
main (int argc, char* argv[])
{
	amirite("duh", {
		{ "dah", []{
			ami::truthy(23);
		}},

		{ "deh", []{
			ami::truthy(0);
		}}
	});

	amirite(ami::printer::prelude, ami::printer::dots, {
		{ "dah", []{
			ami::truthy(23);
		}},

		{ "deh", []{
			ami::truthy(0);
		}}
	});
}
