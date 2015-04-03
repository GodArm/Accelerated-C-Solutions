//0-7
#include <iostream>
int main()
{
/* This is a comment that extends over several lines
because it uses /* and */ as its starting and ending delimiters */
std::cout << "Does this work?" << std::endl;
return 0;
}

/*
No its not a valid C++ program.

Errors:
[Error] 'as' was not declared in this scope
[Error] expected ';' before 'its'
*/
// A correctly written comment is surrounded by the 
// /* and */.
// Anything in between is a comment. 
// Anything outside is not a comment.
// Once you start a comment with /* it will end as soon as we write */
// Hence the comment ends on the encounter of the first */
