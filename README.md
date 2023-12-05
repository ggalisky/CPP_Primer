This repo will be home to my notes and exercises for C++ Primer 5th edition. I will be referencing this repo to make sure my solutions are on the right track: https://github.com/jaege/Cpp-Primer-5th-Exercises/blob/master/ch1/1.5.cpp

Although I have a good chunk of informal experience with C++, I'd like to formalize that experience by working my way through the C++ Primer. I'm sure I'll learn some new stuff along the way. 

This readme will also serve as my logbook for how my progress is going.

11/18/2023 
Start Page 0
End Page 86

What did I learn? 

Most of this is review, but I learned more about reading input and output from the command line, similar to python. Excited to dig more into classes and pointers, but thats further along. 

11/21/2023

Start page 86

End 136

Learned about pointers, references, dereference, and basic data types. 

11/22/2023 

Start page 136
End page 155

Learned about const, constexpr, typedef to create type aliases and the auto type. 

11/23/2023

Start 155

I've been hand writing notes, but I don't have access to my notebook, right now. 
I'll type the notes here instead

the auto type tell the compiler to figure out the type for a variable or expression
Having the compiler deduce type can be useful for code readability: 

```
std::pair<const std::string, std::vector<foo<T>>::iterator> baz() {
	return std::make_pair("Hello", _table.begin());
}

using myType = std::pair<const std::string, std::vector<foo<T>>::iterator>;
myType baz() {
	return std::make_pair("Hello", _table.begin());
}

auto baz() {
	return std::make_pair("Hello", _table.begin());
}
```

You cant use auto and not initialize a variable. 

Auto can also be useful when the return type of a function is ambiguous

2.5.3 - decltype

decltype(f()) sum = x // sum has the type that f returns

if f() is "int f()" then sum will have type int. The type assigned depends on the
type of the function passed into decltype


2.6 Defining Our Own Data Structures - see exercises

Finish page 179

Learned about auto, decltype, and structs

11/26/2023

Start page 179

Going to continue with typed notes, since it's easier

Ch3, Strings, Vectors, and Arrays

a string is a variable length sequence of characters. A vector holds a variable length sequecne of objects of a given type
Arrays are a built in type where as string and vector come from C++ libs
arrays are more of a pain to use since they represent "facilites of the hardware" - wtf does this mean?

Basically what it boils down to is arrays must have their size defined at compile time, while vectors can change size at runtime - important for embedded systems development

namespaces don't have to be used every time, you can use:

using std::cin;
Note - you need to type "using::XYZ" for each and every scope you want to include

headers should NEVER have using:: in them bc when you include them that "using::ZYX" gets applied to the entire program. Always consider the scope when you want to use "using::XYZ"

Ways to init a string

string s1; // empty string
string s2 (s1); //s2 is a copy of s1
string s2 = s1 // equivalent to s2(s1), s2 is a copy of s1
string s3 ("value") // s3 is a copy of the string literal, not including the null char
string s3 = "value" // Equivalent to s3("value"), s3 is a copy of the string literal
string s4(n,'C') // init s4 with n copies of the charcter 'c'

interestingly my_string.size(); does not return type int, it returns type string::size_type. We can avoid writing:

string::size_type len = my_string.size();

and write it as

auto len = my_string.size(); //good example of auto being used to make the code easier to type and read. 

If we need to get len into an int, then we can just do (int)len and cast it as an int

end page 198

learned about using::, strings, and the for range thing


12/4/2023

Start Page 198

Library vector Type

vector is a collection of objects all of which have the same type
vectors are also  referred to as "containers"

a vector is a template not a type

vector<int> is the syntax to make a vector to hold ints

interesting note on page 215, vectors elements can be added at runtime often with better performance than if they were init with those values hardcoded. This differs from C and Java

Started learning about iterators

end page 225


