//
//  Employee.hpp
//  CPP-PRG-13-02-Employee-Class
//
//  Created by Keith Smith on 11/14/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef Employee_hpp
#define Employee_hpp

#include <stdio.h>
#include <string>

class Employee
{
    private:
        std::string strName;
        int intIDNumber;
        std::string strDepartment;
        std::string strPosition;
    public:
        Employee(std::string, int, std::string, std::string);
        Employee(std::string, int);
        Employee();
        void setName(std::string);
        void setIDNumber(int);
        void setDepartment(std::string);
        void setPosition(std::string);
        std::string getName() const;
        int getIDNumber() const;
        std::string getDepartment() const;
        std::string getPosition() const;
};

#endif /* Employee_hpp */
