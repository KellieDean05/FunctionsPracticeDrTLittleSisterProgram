/*Folder: Little_Sister_YourLastName
CPP: Function_Practice_Little_Sister.cpp
Teacher: Dr. Tyson McMillan, 9-1-2019
Student: TYPE_YOUR_NAME_HERE

Description: Dr_T's little sister is smart.
She uses a divide and concur method to get $20 from the parents.
She asks mom and dad individually. Based upon their responses she can
earn $0, $20, or $40 from them.
Create a dad/mom yes/no (True/false) program to capture the possibilities.
Use functions and pass by value.
Also address the programming challenges in int main() make the appropriate
function prototypes, function definition, and functions calls to make the program work.
This completed work shall be uploaded to Extra Credit item 15: Little_Sister_YourLastName.zip
*/
#include<iostream>
using namespace std;

//$_earned       mom  dad
double MakeBank(bool,bool); //function prototype
double numberCube(double); // function prototype
void welcomeMessage (); // function prototype
void dayOFTheWeek(int); // function prototype
#include <cmath>
#include <iomanip>

int main()
{ 

int dayMain = 0; // day input from the user
double numMain = 0.0;
 cout << fixed << setprecision(4) << numberCube(numMain) << endl;
 char exit ='\0'; // null char initialization
 
 do
 { //begin do
 welcomeMessage();

 
    //function calls (true = "yes", false="no"
    cout << "\nLittle Sister Function calls: ";
    cout << "\nOption 1, Little Sister Earns: $" << MakeBank(true,false);
    cout << "\nOption 2, Little Sister Earns: $" << MakeBank(false,true);
    cout << "\nOption 3, Little Sister Earns: $" << MakeBank(true,true);
    cout << "\nOption 4, Little Sister Earns: $" <<  MakeBank(false,false);
 
  cout << "\nPlease enter the day of the week (1-7): " << endl;
  cin >> dayMain;
  dayOFTheWeek(dayMain); // call: pass as argument the value from the user

  cout << "\n Please enter a number. I will cube it for you: " << endl;
  cin >> numMain; // accept input from the user of a double variable.
  cout << "\nCube result of number " << numMain << " = " << numberCube(numMain);
  cout << endl;

    /*Programming Challenges
      1. Extend this program to output how much Little Sister earns in each scenario.
      2. Create a void welcomeMessage(); function to show a nice greeting on screen to the program.
      3. Extend this program to write a void dayOfTheWeek(int); function given user input of the number (1 output Sunday);
      4. Output each day of the week in a different color.
      5. Extend this program create a function double numberCube(double); to output the cube of the number passed.
      6. Extend this program set the precision of the numberCube result to 4 decimal places
      7. Loop the program until exit conditions 'E' AND 'e', clear the screen upon each loop #include<cstdlib> system("cls");
    */
    cout << "\nPress any key to continue (E or e to exit): " ; 
    cin >> exit; // ask the user to loop the program E to exit (get data)
    } while (exit != 'e' && exit != 'E'); // DeMorgan's law //end do-while
    return 0;
}

double MakeBank(bool mom, bool dad)
{
	double amtEarned = 0.0; //what sister can get from parents
	//handle each scenario How much does Little Sister earn $20 increments.
  if(mom == true)
    {
      amtEarned += 20.0; // mom said yes
    }
  if(dad == true)
    {
      amtEarned += 20.0; // dad said yes
    }
  if(mom == false)
    {
      cout << "\nAin't $" ;
    }
  if(dad == false)
    {
      cout << "\nNo $.";
    }
	return amtEarned;
}
void welcomeMessage ()
{
  for(int i = 0; i<= 20; i++)
  cout << "*";
  cout << "\x1b[32;1mI work hard for the money! So hard for it honey!\x1b[0m\n" << endl;
}

void dayOFTheWeek(int day)
{
  if (day == 1)
  {
    cout << "\x1b[44;1mTuesday\x1b[0m\n" << endl; // bold 1
  }
  else if (day == 2)
  {
    cout << "\x1b[33;1mMonday\x1b[0m\n"; // Bold 2
  }
  else if (day == 3)
  {
    cout << "\x1b[45;1mWednesday\x1b[0m\n" << endl; // bold 3
  }
  else if (day == 4)
  {
    cout << "\x1b[36;1mThursday\x1b[0m\n"; // Bold 4
  }
  else if (day == 5)
  {
    cout << "\x1b[32;1mFriday\x1b[0m\n" << endl; // bold 5
  }
  else if (day == 6)
  {
    cout << "\x1b[32;1mSaturday\x1b[0m\n"; // Bold 6
  }
  else // default clause
  {
    cout << "\nError: Something went wrong." << endl;
  }
}
double numberCube(double n)
  {
  //return (n*n*n);
// must add #include <cmath>
 return pow(n, 3.0);  
  }


