//
//  Employee.cpp
//  CPP-PRG-13-02-Employee-Class
//
//  Created by Keith Smith on 11/14/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "Employee.hpp"

Employee::Employee(std::string name, int IDNum, std::string department, std::string position)
{
    strName = name;
    intIDNumber = IDNum;
    strDepartment = department;
    strPosition = position;
}

Employee::Employee(std::string name, int idNum)
{
    strName = name;
    intIDNumber = idNum;
    strDepartment = "";
    strPosition = "";
}

Employee::Employee()
{
    strName = "";
    intIDNumber = 0;
    strDepartment = "";
    strPosition = "";
}

void Employee::setName(std::string name)
{
    strName = name;
}

void Employee::setIDNumber(int idNum)
{
    intIDNumber = idNum;
}

void Employee::setDepartment(std::string department)
{
    strDepartment = department;
}
void Employee::setPosition(std::string position)
{
    strPosition = position;
}

std::string Employee::getName() const
{
    return strName;
}

int Employee::getIDNumber() const
{
    return intIDNumber;
}

std::string Employee::getDepartment() const
{
    return strDepartment;
}

std::string Employee::getPosition() const
{
    return strPosition;
}
