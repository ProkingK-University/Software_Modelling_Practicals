#include <map>
#include <iostream>
#include "NumericCalculator.h"

double NumericCalculator::performCalculation()
{
    std::stack<char> operators;
    std::stack<double> operands;

    std::map<char, int> precedence;

    precedence['+'] = 1;
    precedence['-'] = 1;
    precedence['*'] = 2;
    precedence['/'] = 2;

    std::string expression = getInputString();

    for (char c : expression)
    {
        if (isdigit(c))
        {
            double num;

            std::cin.putback(c);
            std::cin >> num;

            operands.push(num);
        }
        else if (c == '(')
        {
            operators.push(c);
        }
        else if (c == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                applyOperator(operands, operators);
            }

            operators.pop();
        }
        else if (isOperator(c))
        {
            while (!operators.empty() && precedence[c] <= precedence[operators.top()])
            {
                applyOperator(operands, operators);
            }

            operators.push(c);
        }
    }
}

bool NumericCalculator::isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

void NumericCalculator::applyOperator(std::stack<double> &operands, std::stack<char> &operators)
{
    double b = operands.top();
    operands.pop();

    double a = operands.top();
    operands.pop();

    char op = operators.top();
    operators.pop();

    switch (op)
    {
    case '+':
        operands.push(a + b);
        break;
    case '-':
        operands.push(a - b);
        break;
    case '*':
        operands.push(a * b);
        break;
    case '/':
        operands.push(a / b);
        break;
    }
}