/*

Write a program (temperatures.cpp) that will input temperatures for consecutive days. 
The program will store these values into an array and call a function that will return the average of the temperatures. It will also call a function that will return the highest temperature and a function that will return the lowest temperature. The user will input the number of temperatures to be read. There will be no more than 50 temperatures. Use typedef to declare the array type. The average should be displayed to two decimal places.

*/

// Beatrix House

#include <iostream>
#include <iomanip>

//max size of array
const int MAX_TEMPERATURES = 50;

typedef float Temperature[MAX_TEMPERATURES];

float average_temp(float [], int);
float hightest_temp(float [], int);
float lowest_temp(float [], int);

Temperature temperatureArray;
int temperatureArray_size = 0;

int main()
{
    int input_size;
    
    cout << "Input the number of temperatures you want read." << endl;
    
    cin >> input_size;
    
    
   cout << "The average temperature is " << average_temp() << "." << endl;
   cout << "The highest temperature is " << highest_temp() << "." << endl;
   cout << "The lowest temperature is " <<  lowest_temp()  << "." << endl;
   
   return 0;
}




/* AVERAGE TEMPURATURE */
float average_temp()
{
    float sum = 0;
    
    for (int i = 0; i < temperatureArray_size; i++) 
    {
        sum += temperatureArray_size[i];
    }
    
    float average = sum / temperatureArray_size;
    
    return average;
}


/* HIGHTEST TEMPURATURE */
float highest_temp()
{
    float highest = temperatureArray[0];
    
    for (int i = 1; i < temperatureArray_size; i++) 
    {
        if (temperatureArray[i] >  highest)
        {
            highest = temperatureArray[i];
        }
    }
    
    return highest;
    
}


/* LOWEST TEMPURATURE */
float lowest_temp()
{
    float lowest = temperatureArray[0];
    
    for (int i = 1; i < temperatureArray_size; i++) 
    {
        if(temperatureArray[i] < lowest)
        {
            lowest = temperatureArray[i];
        }
    }
    
    return lowest;
    
}
