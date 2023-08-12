#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include <string>

class Primitive
{
    public:
        std::string shape;

        Primitive();
        Primitive(std::string shape);

        virtual ~Primitive();
        
        std::string getShape();
        void setShape(std::string shape);
    
    protected:
        virtual std::string toString() = 0;
};

#endif