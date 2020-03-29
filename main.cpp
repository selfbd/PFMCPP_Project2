#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

 (reference: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm)
bool
char
int
float
double
void
wchar_t
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    bool isAwake = true;
    bool wearsGloves = true;
    bool worksFromHome = true;
    char dollarSign = '$';
    char capA = 'A';
    char numberTwo = '2';
    int numApples = 3;
    int numCars = 2;
    int numKids = 2;
    float pi = 3.14f;
    float temperature = 98.6f;
    float marathonDistanceMiles = 26.22f;
    double bigPi = 3.14159265359;
    double voltageV = 3.234567;
    double pressureT = 760.123456789; 

    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(isAwake, wearsGloves, worksFromHome, dollarSign, capA, numberTwo, numApples, numCars, numKids, pi, temperature, marathonDistanceMiles, bigPi, voltageV, pressureT);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
void doAssignment(unsigned int projectNumber, bool requiresCodeReview = true)
{
    ignoreUnused(projectNumber, requiresCodeReview);
}

/*
 2)
 */
void coolRoom(int coolingDevice = 0)
{
    ignoreUnused(coolingDevice);
}
/*
 3)
 */
float getRoomTemperature(bool useFahrenheitUnits = true)
{
    ignoreUnused(useFahrenheitUnits);
    return {};
}

/*
 4)
 */
bool isRoomCool()
{
    return {};
}

/*
 5)
 */
float converFahrenheitToCelsius(float tempF)
{
    ignoreUnused(tempF);
    return {};
}

/*
 6)
 */
float calculateAverage(int score1, int score2, int score3, int score4, int score5)
{
    ignoreUnused(score1, score2, score3, score4, score5);
    return {};
}
/*
 7)
 */
float getSoundPressureLevelDb(char weighting = 'A', bool responseSpeedFast = true)
{
    ignoreUnused(weighting, responseSpeedFast);
    return {};
}

/*
 8)
 */
double getRelativeHumidity(double dryBulbTemp, double wetBulbTemp)
{
    ignoreUnused(dryBulbTemp, wetBulbTemp);
    return {};
}

/*
 9)
 */
char getLetterGrade(int studentId, bool assistIfNeeded = false)
{
    ignoreUnused(studentId, assistIfNeeded);
    return {};  
}

/*
 10)
 */
 void chill(int chillTimeMinutes)
 {
    ignoreUnused(chillTimeMinutes);
    return;
 }

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    doAssignment(2);  

    //2)
    coolRoom();   

    //3)
    auto roomTempC = getRoomTemperature(false);

    //4)
    auto roomIsCool = isRoomCool();

    //5)
    auto tempC = converFahrenheitToCelsius(212.87f);

    //6)
    auto averageScore = calculateAverage(98, 92, 0, 100, 89);

    //7)
    auto splDbAFast = getSoundPressureLevelDb();

    //8)
    auto rh = getRelativeHumidity(99, 90);

    //9)
    auto letterGrade = getLetterGrade(1101, true);

    //10)
    chill(1440);
    
    ignoreUnused(carRented);
    
    ignoreUnused(roomTempC, roomIsCool, tempC, averageScore, splDbAFast, rh, letterGrade);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
