/*
shelves is a container for call numbers
shelves are sorted according to each library's preference
*/

#include <iostream>
using namespace std;

struct node
{
	node *next;
	std::string text;
};

