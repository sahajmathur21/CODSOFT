     // TASK 1 
     // NUMBER GUESSING GAME
     
     #include <iostream>
     #include <ctime>
     #include <cstdlib>
     using namespace std;
     
     int main()
     {
     	srand(time(0));
     	
       	// generating a random number from 1 to 100
       	
     	int randomNumber = rand() %100 +1;
     	
     	int UserGuess = 0;
     	
     	cout << "Guess the Number Between 1 to 100:";
     	
     	while (UserGuess!= randomNumber )
     	{
     		cin >> userGuess;
     		
     		if(UserGuess > randomNumber)
     		{
     			cout << "Too High! Please Try Again:";
			 }
			 else if (UserGuess < randomNumber)
			 {
			 	cout << "Low! Please Try Again:";
			 }
			 else
			 {
			  cout << "WELL DONE !! You have Guessed the Correct Number " <<endl;	
			 }
			 
		 }
		 
		 return 0;
	 }
    
     
