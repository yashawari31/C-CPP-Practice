/*

	- Write a program to manage different types of coding competetions, The program should have the following requirements:
	
	- Base class: 
		- Create an abstract base class "CodingCompetition" with a pure virtual function displayDetails() and a virtual destructor. 
		- The class should store common attributes like competition name, location and duration(in hours).
		
	- Derived classes: 
		- class: "Hackathon"
			- It stores additional details like team size and override displayDetails() to include all details.
		
		- class : "CodingChallenge"
			- Store additional details like problemCount and override displayDetails() to include all details.
			
		- class : "DebuggingCount"
			- Store additional details like debuggingTimeLimit(int minutes) and override displayDetails() to include all details.
			
	- Menu: 
		- Allow the user to choose which type of competition to create and input the details for it
		- Use dynamic memory allocation to create objects for competitions and store them in a collection( array or pointers)
		- Display the details of all created competitions.

*/

#include<iostream>

class CodingCompetition
{
	protected:
	std::string competitionName;
	std::string location;
	int duration;
    public:
    CodingCompetition(std::string competitionName,std::string location,int duration):competitionName(competitionName),location(location),duration(duration){}

	virtual void displayDetails()=0;

	virtual ~ CodingCompetition(){}
};

class Hackathon: public CodingCompetition
{
	int teamSize;

	public:
    Hackathon(std::string competitionName,std::string location,int duration,int teamSize):CodingCompetition(competitionName,location,duration),teamSize(teamSize){}

	virtual void displayDetails()
	{
		std::cout<<"Hackathon Details:"<<std::endl;
		std::cout<<"Hackathon Name: "<<competitionName<<std::endl;
		std::cout<<"Hackathon Location: "<<location<<std::endl;
		std::cout<<"Team Size: "<<teamSize<<std::endl;
	}

};

class CodingChallenge: public CodingCompetition
{
	int problemCount;

	public:
	 CodingChallenge(std::string competitionName,std::string location,int duration,int problemCount):CodingCompetition(competitionName,location,duration),problemCount(problemCount){}

	virtual void displayDetails()
	{
        std::cout<<"Coding Challenge Details:"<<std::endl;
		std::cout<<"Coding Challenge Name: "<<competitionName<<std::endl;
		std::cout<<"Coding Challenge Location: "<<location<<std::endl;
		std::cout<<"Problem Count: "<<problemCount<<std::endl;
	}
};

class DebuggingCount: public CodingCompetition
{
	int debuggingTimeLimit;

	public:
	DebuggingCount(std::string competitionName,std::string location,int duration,int timeLimit):CodingCompetition(competitionName,location,duration),debuggingTimeLimit(timeLimit){}

	virtual void displayDetails()
	{
		std::cout<<"Debugging Contest Details:"<<std::endl;
		std::cout<<"Debugging Contest Name: "<<competitionName<<std::endl;
		std::cout<<"Debugging Contest Location: "<<location<<std::endl;
		std::cout<<"Debugging Time Limit: "<<debuggingTimeLimit<<std::endl;
	}

};

#include <vector>
#include<iterator>

int main()
{
    std::vector<CodingCompetition*> competitions;

    int choice;

    while(1)
    {
        std::cout << "\n===== Coding Competition Management =====\n";
        std::cout << "1. Create Hackathon\n";
        std::cout << "2. Create Coding Challenge\n";
        std::cout << "3. Create Debugging Contest\n";
        std::cout << "4. Display All Competitions\n";
        std::cout << "5. Exit\n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                std::string name, location;
                int duration, teamSize;

                std::cout << "\nEnter competition name: ";
                std::cin.ignore();
                std::getline(std::cin, name);

                std::cout << "Enter location: ";
                std::getline(std::cin, location);

                std::cout << "Enter duration (hours): ";
                std::cin >> duration;

                std::cout << "Enter team size: ";
                std::cin >> teamSize;

                competitions.push_back(
                    new Hackathon(name, location, duration, teamSize)
                );

                std::cout << "Hackathon created successfully!\n";
                break;
            }

            case 2:
            {
                std::string name, location;
                int duration, problemCount;

                std::cout << "\nEnter competition name: ";
                std::cin.ignore();
                std::getline(std::cin, name);

                std::cout << "Enter location: ";
                std::getline(std::cin, location);

                std::cout << "Enter duration (hours): ";
                std::cin >> duration;

                std::cout << "Enter number of problems: ";
                std::cin >> problemCount;

                competitions.push_back(
                    new CodingChallenge(name, location, duration, problemCount)
                );

                std::cout << "Coding Challenge created successfully!\n";
                break;
            }

            case 3:
            {
                std::string name, location;
                int duration, debuggingTimeLimit;

                std::cout << "\nEnter competition name: ";
                std::cin.ignore();
                std::getline(std::cin, name);

                std::cout << "Enter location: ";
                std::getline(std::cin, location);

                std::cout << "Enter duration (hours): ";
                std::cin >> duration;

                std::cout << "Enter debugging time limit (minutes): ";
                std::cin >> debuggingTimeLimit;

                competitions.push_back(
                    new DebuggingCount(name, location, duration,
                                       debuggingTimeLimit)
                );

                std::cout << "Debugging Contest created successfully!\n";
                break;
            }

            case 4:
            {
                if(competitions.empty())
                {
                    std::cout << "\nNo competitions created yet.\n";
                }
                else
                {
                    std::cout << "\n===== All Competitions =====\n";
                    std::vector<CodingCompetition*>::iterator it;
                    for(it=competitions.begin();it!=competitions.end();++it)
                    {
                        (*it)->displayDetails();
                        std::cout << "---------------------------\n";
                    }
                }

                break;
            }

            case 5:
            {
                std::cout << "\nExiting...\n";

                // Delete dynamically created objects
                for(CodingCompetition *c : competitions)
                {
                    delete c;
                }

                return 0;
            }

            default:
                std::cout << "\nInvalid choice!\n";
        }
    }

    return 0;
}