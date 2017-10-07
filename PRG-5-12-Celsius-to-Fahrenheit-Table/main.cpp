//
//  main.cpp
//  PRG-5-12-Celsius-to-Fahrenheit-Table
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  In 3.12, you were asked to write a program that
//  converts a Celsius temperature to Fahrenheit. Modify that program so that it uses a loop
//  to display a table of the Celsius temperatures 0-20, and the Fahrenheit equivalents.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float fltTempCelsius,
          fltTempFahrenheit;
    
    fltTempCelsius = -1; //Offset to account for initial ++ in for loop and start at 0C
    
    cout << setw(10) << "Celsius" << "\t" << setw(10) << "Fahrenheit" << endl;
    
    for(int i = 0 ; i < 21 ; i++)
    {
        fltTempCelsius++;
        
        fltTempFahrenheit = ((9.0f/5.0f) * fltTempCelsius) + 32.0f;
        
        cout << setw(9) << fltTempCelsius << 'C' << endl
             << setw(9) << fltTempFahrenheit << 'F' << endl;
    }
    
    return 0;
}


