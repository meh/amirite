#include "amirite"

int
main (int argc, char* argv[])
{
	return amirite("duh", {
		{ "truthy (ok)", []{
			amitruthy(23);
		}},

		{ "truthy (fail)", []{
			amitruthy(0);
		}},

		{ "falsy (fail)", []{
			amifalsy(1);
		}},

		{ "equal (fail)", []{
			amiequal(1, 0, "derpy doo");
		}},

		{ "different (fail)", []{
			amidifferent(1, 1, "._. ");
		}},

		{ "similar (ok)", []{
			amisimilar(0.543, 0.5432, 3);
		}},

		{ "similar (fail)", []{
			amisimilar(0.543, 0.5432, 4);
		}},

		{ "thrown (fail)", []{
			amithrown(std::runtime_error, []{});
		}},

		{ "okay (fail)", []{
			amiokay([]{
				throw "lol";
			});
		}}
	});
}
