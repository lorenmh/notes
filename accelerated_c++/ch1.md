* "A variable is an object that has a name" (note "object")
* "An object ... is a part of the computer's memory that has a type"
* Objects can be unnamed (all variables are objects, not all objects are variables)
* `some_type foo`: *definition*
* local variable (ofc) only exists in the block it was defined, but, apparently it is "*destroyed*" once the closing brace is encountered
* the object has an interface (the set of operations possible to an object of a certain type)

    some_type foo; // implicit initilization

* `std::cin >> foo` stores input from `std::cin` into variable `foo`
* interestingly, `std::cin` will cause the output buffer to flush
* `std::endl` also causes the output buffer to flush
