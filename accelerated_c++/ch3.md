* floats might be less performant than doubles on some architectures
* inputs can be chained, for ex `std::cin >> var1 >> var2;`
* Multiple string literals seperated only by whitespace becomes one string literal.

    "foo " "bar "     "baz "
    "blah ";
    
    // becomes
    "foo bar baz blah"

* only non-built-in types (string, objects, etc) are initialized with the default constructor when they have not been explicitly initialized. Built-in types have garbage values if they are not explicitly initialized.

    // string is not a built in type; it is initalized with string()
    string foo;
    
    // int is a built in type; it has a garbage value
    int bar;


