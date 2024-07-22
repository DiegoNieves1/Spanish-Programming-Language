#ifndef __LEXER_H
#define __LEXER_H
#include <string>


enum type
{
  IDENTIFIER,
  STRING,
  LOGICAL_AND, LOGICAL_OR, LS_EQ, GR_EQ, EQ, NOT_EQ,
  MUL_ASSIGN, DIV_ASSIGN, MOD_ASSIGN, ADD_ASSIGN, SUB_ASSIGN,
  INCREMENT, DECREMENT,
  INT, VOID, CHAR, FLOAT, CHAR_STAR,
  IF, FOR, WHILE, CONTINUE, BREAK, RETURN, ELSE, LOWER_THAN_ELSE, PRNTF
};

struct Token
{
    enum type type;
    std::string code;
};

class Lexer
{
    public:
    Lexer(std::string sourceCode)
    {
        source = sourceCode;
        cursor = 0;
        size = sourceCode.length();
        current = sourceCode.at(cursor);
    }

    private:
    std::string source;
    int cursor;
    int size;
    char current;
};

#endif