#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

void generateFibonacciNumbers()
{
    int numbers[20];
    int a = 1;
    int b = 1;
    int temp;

    for(int i = 1; i < 21; i++)
    {
        if(i < 3)
        {
            if(i == 1)
            {
               numbers[i] = a; 
            }
            else
            {
                numbers[i] = b;
            }
        }
        else
        {
            temp = a + b;
            numbers[i] = temp;
        
            if(i % 2 == 0)
            {
                a = temp;
            }
            else
            {
                b = temp;
            }
        }
    }
    
    for(int i = 1; i < 21; i++)
    {
        cout << "Fibonacci # " << i << " is: " << numbers[i] << endl;
    }
    
    cout << endl;
}

void perfectNumbers()
{
    cout << "Here are all the perfect numbers less then 1000." << endl;
    
    int i,j,sum;

    //check numbers from 1-1000
    for (i = 1; i <= 1000; i++)
    {
        sum = 0;

        //look for the factors of a number
        for (j = 1; j < i; j++)
        {
            //check for factors and add them up
            if (0 == (i%j))
            {
                sum += j;
            }
        }

        //if perfect number, print
        if (sum == i)
        {
            cout << i << endl;
        }
    }
   cout << endl;
}

void close()
{
    exit(0);
}

void menu()
{
    int input;
    
    cout << "*********" << endl;
    cout << "Special Number Generator" << endl;
    cout << "*********" << endl;
    cout << "1) Calculate Fibonacci Numbers" << endl;
    cout << "2) Calculate Perfect Numbers" << endl;
    cout << "3) Exit Program" << endl;
    cout << "Please select an option : ";
    
    cin >> input;

    do
    {
       if(input == 0)
        {
            cout << "Press any key to continue - - - ";
            cin >> input;
        }
        else if(input == 1)
        {
            cout << endl;
            generateFibonacciNumbers();
            input = 0;
        }
        else if(input == 2)
        {
            cout << endl;
            perfectNumbers();
            input = 0;
        }
        else
        {
            cout << endl;
            cout << "Invalid Option Entered" << endl << endl; 
            input = 0;
        } 
   
    }
    while(input != 3);
    
    if(input == 3)
    {
        close();
    }
}   

int main(int argc, char** argv) {

    menu();
}

