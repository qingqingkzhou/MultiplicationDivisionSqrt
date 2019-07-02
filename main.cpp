//
//  Main.cpp
//
//  Created by Qingqing Zhou on June 29, 2019
//

/*==================================================
1. Create a class for Karatsuba Multiplication
2. Create a class for Division
3. Create a class for Square Root
4. In main(), calculate n digits precision of sqrt(a)
5. Let user to enter the n and a from console
6. Because n can be longer than 64-bits capability,
   use string to represent the number
==================================================== */


// header files
#include <iostream>
#include "Karatsuba.h"
#include "Division.h"
#include "SqrtNewton.h"

void main()
{
    std::cout<< "Newton Method - Qingqing Zhou \n\n";

    //// ============ Multiplication ========================================
    // get numbers from user
    std::string lhs{}, rhs{};
    std::cout << "Please give the First multiplier : ";
    std::cin >> lhs;
    std::cout << "\nPlease give the Second multiplier : ";
    std::cin >> rhs;

    // Using Karatsuba Multiplication Algorithm for String Multiplication
    std::cout << "\n\nKaratsuba Algorithm : \n";
    Karatsuba kar{};
    std::cout << lhs << " * " << rhs << " = " << kar.multiply(lhs, rhs);
    std::cout << "\n===================================================\n\n";

    //// ============ Division ========================================
    std::cout << "Please give the Dividend : ";
    std::cin >> lhs;
    std::cout << "\nPlease give the Divisor : ";
    std::cin >> rhs;
    std::cout << "\nPlease give the Precision : ";
    std::string precision{};
    std::cin >> precision;

    // Division using Karatsuba and Newton Method
    std::cout << "\n\nDivision using Newton Method : \n";
    Division div{};
    std::cout << lhs << "/" << rhs << " = " << div.DivFloat(lhs, rhs, std::atoi(precision.c_str())) << std::endl;
    std::cout << lhs << "/" << rhs << " = " << div.Div(lhs, rhs, std::atoi(precision.c_str())) << std::endl;
    std::cout << "\n===================================================\n\n";

    // ============ Square Root ========================================
    std::cout << "Please give the number : ";
    std::cin >> lhs;
    std::cout << "\nPlease give the Precision : ";
    std::cin >> precision;

    // Sqrt using Newton
    std::cout << "\n\nSquare Root using Newton Method : \n";
    SqrtNewton sqrt{};
    std::cout << "sqrt(" << lhs << ") = " << sqrt.Sqrt(lhs, std::atoi(precision.c_str())) << std::endl;
    std::cout << "\n===================================================\n\n";
}
