amirite?
========
Simple unit testing library for C++11.

Assertions
==========
You can directly call `ami::fail`, `ami::pass` or `ami::success` if you want,
but the best way is to call the various helpers instead.

In these helpers there's an additional parameter which is additional
information to be passed with the testcase result.

`amitruthy (value)`
-------------------
Gets a value and checks it's truthy using `if (value)`, which means if there's
an `operator bool` it will be used.

`amifalsy (value)`
------------------
Gets a value and checks it's falsy using `if (!value)`, which means if there's
an `operator !` it will be used.

`amiequal (first, second)`
--------------------------
Gets two values to compare using `if (first == second)`, which means if there's
an `operator ==` it will be used.

`amidifferent (first, second)`
------------------------------
Gets two values to compare using `if (first != second)`, which means if there's
an `operator !=` it will be used.

`amithrown (type = std::exception, body)`
-----------------------------------------
Gets the type of the exception and a lambda, function or other `std::function`
wrappable value and checks for the exception to be thrown, if nothing is thrown
it fails.

`amiokay (body)`
----------------
Gets a lambda, function or ther `std::function` wrappable value and checks
nothing is thrown, if something is it fails.
