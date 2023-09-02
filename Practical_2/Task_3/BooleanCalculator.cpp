#include "BooleanCalculator.h"

double BooleanCalculator::performCalculation()
{
    std::stack<bool> values;
    std::stack<char> operators;

    std::map<char, int> precedence;

    precedence['O'] = 1;
    precedence['A'] = 2;
    precedence['N'] = 3;

    std::string expression = getInputString();

    for (char c : expression)
    {
        if (c == 'T' || c == 'F')
        {
            values.push(c == 'T');
        }
        else if (c == '(')
        {
            operators.push(c);
        }
        else if (c == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                applyOperator(values, operators);
            }

            operators.pop();
        }
        else if (isOperator(c))
        {
            while (!operators.empty() && precedence[c] <= precedence[operators.top()])
            {
                applyOperator(values, operators);
            }
            
            operators.push(c);
        }
    }

    while (!operators.empty())
    {
        applyOperator(values, operators);
    }

    return values.top();
}

bool BooleanCalculator::isOperator(char c)
{
    return c == 'A' || c == 'O' || c == 'N';
}

void BooleanCalculator::applyOperator(std::stack<bool> &values, std::stack<char> &operators)
{
    bool b = values.top();
    values.pop();

    char op = operators.top();
    operators.pop();

    if (op == 'N')
    {
        values.push(!b);
    }
    else
    {
        bool a = values.top();

        values.pop();

        if (op == 'A')
        {
            values.push(a && b);
        }
        else if (op == 'O')
        {
            values.push(a || b);
        }
    }
}