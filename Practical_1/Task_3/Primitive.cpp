#include "Primitive.h"

Primitive::Primitive() 
{
    shape = "";
}

Primitive::Primitive(std::string shape)
{
    this->shape = shape;
}

Primitive::~Primitive()
{
    
}

std::string Primitive::getShape() {
    return shape;
}

void Primitive::setShape(std::string shape) {
    this->shape = shape;
}

