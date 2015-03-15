#include <Node.hpp>

Node::Node(void)
{
	return ;
}

Node::~Node(void)
{
	return ;
}

Node::Node(Node const &copy)
{
	*this = copy;
}

Node 				&Node::operator=(Node const &rhs)
{
	_parent = rhs.getParent();
	_map = rhs.getMap();
	return (*this);
}

Node::Node(Map map)
{
	_map = map;
}


Node				*Node::getParent(void) const
{
	return _parent;
}

void				Node::setParent(Node *parent)
{
	_parent = parent;
}

Map					Node::getMap(void) const
{
	return _map;
}

void				Node::setMap(Map map)
{
	_map = map;
}

double				Node::getQuality(void) const
{
	return _quality;
}

void				Node::setQuality(double quality)
{
	_quality = quality;
}
