//
//  token.h
//  paincompiler
//
//  Created by Leoc O'Cear on 11/8/14.
//  Copyright (c) 2014 Leoc O'Cear. All rights reserved.
//

#ifndef __paincompiler__token__
#define __paincompiler__token__

#include <stdio.h>
#include <string>
#include <iostream>
#include <tuple>
#include <map>

#endif /* defined(__paincompiler__token__) */

namespace paincompiler {
    
    enum class TokenType{
        
        BYTE,
        CHAR,
        BOOLEAN,
        INTEGER,
        LONG,
        FLOAT,
        STRING,
        OBJECT,
        
        IDENTIFIER,
        KEYWORDS,
        OPERATORS,
        DELIMITER,
        END_OF_FILE,
        UNKNOWN
        
    };
    
    enum class TokenValue {
        
        FOR,
        WHILE,
        LOOP,
        IN,
        IF,
        ELSE,
        AND,
        OR,
        NOT,
        
        VAR,
        CONST,
        
        LEFT_PAREN,
        RIGHT_PAREN,
        LEFT_SQUARE,
        RIGHT_SQUARE,
        PLUS,
        MINUS,
        MULTIPLY,
        DIVIDE,
        COMMA,
        SEMICOLON,
        COLON,
        ASSIGN,
        PERIOD,
        DOUBLE_DOT,
        UPARROW,
        
        LESS_OR_EQUAL,
        LESS_THAN,
        GREATER_OR_EQUAL,
        GREATER_THAN,
        EQUAL,
        NOT_EQUAL,
        
    };
    
    class TokenLocation {
        
    public:
        TokenLocation();
        TokenLocation(const std::string& fileName, int line, int column);
        
    private:
        std::string fileName_;
        int line_;
        int column_;
        
    };
    
    class Token{
    public:
        Token();
        Token(TokenType type, TokenValue value, const TokenLocation& location, std::string& stringValue, std::string stringName);
        
        TokenType getTokenType() const;
        TokenValue getTokenValue() const;
        const TokenLocation& getTokenLocation() const;
        
        
    private:
        TokenType type_;
        TokenValue value_;
        TokenLocation location_;
    };
    
}