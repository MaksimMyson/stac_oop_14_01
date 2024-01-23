#include "BracketChecker.h"

BracketChecker::BracketChecker(const std::string& str) : input(str) {}

bool BracketChecker::checkBrackets() {
    std::stack<char> bracketStack;

    for (char ch : input) {
        if (ch == '(' || ch == '[' || ch == '{') {
            bracketStack.push(ch);
        }
        else if (ch == ')' || ch == ']' || ch == '}') {
            if (bracketStack.empty()) {
                return false;
            }

            char openBracket = bracketStack.top();
            bracketStack.pop();

            if ((ch == ')' && openBracket != '(') ||
                (ch == ']' && openBracket != '[') ||
                (ch == '}' && openBracket != '{')) {
                
                return false;
            }
        }
    }

    
    return bracketStack.empty();
}