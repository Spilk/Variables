//
//  main.cpp
//  Trig Calc
//
//  Created by Nicky Sandoz on 4/14/14.
//  Copyright (c) 2014 Nicky Sandoz. All rights reserved.
//

#include <iostream>
#include <stdio.h>      /* printf */
#include <math.h>       /* sin */
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
#define PI 3.14159265

int main(int argc, const char * argv[])
{
    /*int f;
    for(; f > 0;)
    {
    */
    int x;
    int f;
     cout << "Please select 1 for 'sin' , -1 for 'cos', or 0 for 'tan'\n";
    cin >> f;
    
    x = 0;
   
    
    if (f > x){
       
        for(;;)
            //loop for sin
                {
            int y;
            cout << "To calculate sine, please press 1. Press 0 to return.\n";
            cin >> y;
            for(; y > 0;)
                    {
                int i;
                double param, result;
                cout << "Enter angle:\n ";
                cin >> i;
                param = i;
                result = sin (param*PI/180);
                printf ("The sine of %f degrees is %f.\n", param, result );
                cout << "To calculate again, press 1. To exit, press 0.\n ";
                cout << endl;
                
                cin >> y;
                
                    }
            break;
                }
        
        
            }
        if (f < x){
            int y;
            cout << "To calculate cosine, please press 1. Press 0 to return.\n";
            cin >> y;
            for(; y > 0;)
            {
                int i;
                double param, result;
                cout << "Enter angle:\n ";
                cin >> i;
                param = i;
                result = cos (param*PI/180);
                printf ("The cosine of %f degrees is %f.\n", param, result );
                cout << "To calculate again, press 1. To exit, press 0.\n ";
                cout << endl;
            
                cin >> y;
            }
    
        }
    if (f == 0 ){
    int y;
    cout << "To calculate Tangent, please press 1. Press 0 to return.\n";
    cin >> y;
    for(; y > 0;)
    {
        int i;
        double param, result;
        cout << "Enter angle:\n ";
        cin >> i;
        param = i;
        result = tan (param*PI/180);
        printf ("The tangent of %f degrees is %f.\n", param, result );
        cout << "To calculate again, press 1. To exit, press 0.\n ";
        cout << endl;
        
        cin >> y;
    }
    }
}
