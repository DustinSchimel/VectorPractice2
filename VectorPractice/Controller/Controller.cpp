//
//  Controller.cpp
//  VectorPractice
//
//  Created by Schimel, Dustin on 2/7/18.
//  Copyright © 2018 Schimel, Dustin. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include <iostream>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    vector<int> intList(10);
    vector<string> stringList(5);
    
    for (int index = 0; index < 10; index++)
    {
        intList[index] = index;
        cout << intList[index] << endl;
    }
    
    cout << endl;
    
    for (int index = 0; index < 5; index++)
    {
        if (index == 0)
        {
            stringList[index] = "Zero";
        }
        if (index == 1)
        {
            stringList[index] = "One";
        }
        if (index == 2)
        {
            stringList[index] = "Two";
        }
        if (index == 3)
        {
            stringList[index] = "Three";
        }
        if (index == 4)
        {
            stringList[index] = "Four";
        }
        
        cout << stringList[index] << endl;
    }
}
