#include "Node.h"

Node::Node()
{

}

Node::~Node()
{

}

int Node::getData(void)
{
	return data;
}

void Node::setData(int& data)
{
	this->data = data;
}