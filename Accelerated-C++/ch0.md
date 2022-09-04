# CH0

* `#include <XXXX>` XXXX is a *standard header*
* `<<` is the *output operator*
* `std::cout` has type `std::ostream`
* `xxx::yyy`, xxx is a *namespace*

`<<` is *left associative*, meaning:

    std::cout << "foo" << std::endl;
    // is equiv to
    (std::cout << "foo") << std::endl;
    // which yields
    std::cout << std::endl;
    // which yields
    std::cout;

* `std::endl` is a *manipulator*, which means when the `<<` operator sees it, it 'manipulates' the stream by writing a newline to the stream and yielding `cout`
* `xxx::yyy` is a *qualified name* (because it uses `::`)
* `::` is the *scope operator*
* `a+2`: *expression*
* `a+2;`: *statement*
* a *block* is a sequence of statements enclosed in curly braces.
