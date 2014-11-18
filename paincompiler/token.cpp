//
//  token.cpp
//  paincompiler
//
//  Created by Leoc O'Cear on 11/8/14.
//  Copyright (c) 2014 Leoc O'Cear. All rights reserved.
//

#include "token.h"

namespace paincompiler {
    
    TokenLocation::TokenLocation(const std::string& fileName, int line, int column):
    fileName_(fileName), line_(line), column_(column) {}
    
}