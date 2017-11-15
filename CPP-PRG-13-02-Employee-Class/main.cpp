//
//  main.cpp
//  CPP-PRG-13-02-Employee-Class
//
//  Created by Keith Smith on 11/14/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a class named Employee that has the following member variables:
//
//      * name - a string that holds the employee's name
//      * idNumber - an int variable that holds the employee's ID number
//      * department - a string that holds the name of the department where the employee
//        works
//      * position - a string that holds the employee's job title
//
//  The class should have the following constructors:
//
//      * A constructor that accepts the following values as arguments and assigns them to
//        the appropriate member variables: employee's name, employee's ID number,
//        department, and position.
//      * A constructor that accepts the following values as arguments and assigns them to
//        the appropriate member variables: employee's name and ID number. The department
//        and position fields should be assigned an empty string ("").
//      * A default constructor that assigns empty strings ("") to the name, department, and
//        position member variables, and 0 to the idNumber member variable.
//
//  Write appropriate mutator functions that store values in these member variables and
//  accessor functions that return the values in these member variables. Once you have
//  written the class, write a separate program that creates three Employee objects to hold
//  the following data:
//
//  Name                ID Number           Department              Position
//  ------------------------------------------------------------------------------
//  Susan Meyers        47899               Accounting              Vice President
//  Mark Jones          39119               IT                      Programmer
//  Joy Rogers          81774               Manufacturing           Engineer
//
//  The program should store this data in three objects and then display the data for
//  each employee on the screen.

#include <iostream>
#include <iomanip>
#include "Employee.hpp"

using namespace std;

Employee createEmployeeSusan();
Employee createEmployeeMark();
Employee createEmployeeJoy();

int main()
{
    Employee empEmployee1;
    Employee empEmployee2;
    Employee empEmployee3;
    
    empEmployee1 = createEmployeeSusan();
    empEmployee2 = createEmployeeMark();
    empEmployee3 = createEmployeeJoy();
    
    cout << left << setw(15) << "Name";
    cout << left << setw(15) << "ID Number";
    cout << left << setw(15) << "Department";
    cout << left << setw(15) << "Position";
    cout << endl;
    
    cout << "-------------------------------";
    cout << "------------------------------" << endl;
    
    cout << left << setw(15) << empEmployee1.getName();
    cout << left << setw(15) << empEmployee1.getIDNumber();
    cout << left << setw(15) << empEmployee1.getDepartment();
    cout << left << setw(15) << empEmployee1.getPosition();
    cout << endl;
    
    cout << left << setw(15) << empEmployee2.getName();
    cout << left << setw(15) << empEmployee2.getIDNumber();
    cout << left << setw(15) << empEmployee2.getDepartment();
    cout << left << setw(15) << empEmployee2.getPosition();
    cout << endl;
    
    cout << left << setw(15) << empEmployee3.getName();
    cout << left << setw(15) << empEmployee3.getIDNumber();
    cout << left << setw(15) << empEmployee3.getDepartment();
    cout << left << setw(15) << empEmployee3.getPosition();
    cout << endl;
    
    return 0;
}

Employee createEmployeeSusan()
{
    Employee empEmployee;
    
    empEmployee.setName("Susan Meyers");
    empEmployee.setIDNumber(47899);
    empEmployee.setDepartment("Accounting");
    empEmployee.setPosition("Vice President");
    
    return empEmployee;
}

Employee createEmployeeMark()
{
    Employee empEmployee;
    
    empEmployee.setName("Mark Jones");
    empEmployee.setIDNumber(39119);
    empEmployee.setDepartment("IT");
    empEmployee.setPosition("Programmer");
    
    return empEmployee;
}

Employee createEmployeeJoy()
{
    Employee empEmployee;
    
    empEmployee.setName("Joy Rogers");
    empEmployee.setIDNumber(81774);
    empEmployee.setDepartment("Accounting");
    empEmployee.setPosition("Engineer");
    
    return empEmployee;
}
