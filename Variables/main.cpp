//
//  main.cpp
//  Variables
//
//  Created by Nicky Sandoz on 4/2/14.
//  Copyright (c) 2014 Nicky Sandoz. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
   /*
    int x;
    int y;
    
    x = 7;
    y = x + 3;
    std::cout << (y);
    */
    
    /*
    std::string myFirstName;
    myFirstName = "Bob";
    std::cout<< (myFirstName);
    */
    
    //string myFirstName = "Bob";
    
    int x = 7;
    std::string y = "5";
    std::string myFirstTry = x.ToString() + y;
    int mySecondTry = x + int.Parse(y);
    //std::cout<< (myFirstTry);
    std::cout<< (mySecondTry);
}
