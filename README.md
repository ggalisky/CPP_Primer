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



