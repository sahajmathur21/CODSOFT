      // TASK 2
      // SIMPLE CALCULATOR
      
#include <iostream>;
using namespace std;

int main()
{
	char operations;
	double num1;
	double num2;
	double result;
	
	cout << "Enter Two Numbers:";
	cin >> num1 >> num2;
	
	// To display the operators
	cout << "Choose an Operator ( + , - , / , * ) ";
	cin >> operations;
	
	switch(operations)
	{
		case '+' :
			result = num1 + num2;
			cout << num1 << "+" << num2 << "=" << result <<endl;
			break;
			
	    case '-' :
	    	result = num1 - num2;
	    	cout << num1 << "-" << num2 << "=" << result <<endl;
	    	break;
	    	
	    case '/' :
	    	if(num2!= 0)
	    	{
	    		result = num1 / num2;
	    		cout << num1 << "/" << num2 << "=" << result <<endl;
	    	}
	    	else
	    	{
	    		cout << "Error! Division by Zero " << endl;
			}
			break;
			
		case '*' :
			result = num1 * num2;
	    	cout << num1 << "*" << num2 << "=" << result <<endl;
	    	break;
			
		default :
			cout << " Operator Entered is Invalid " << endl;
			break;
			}
			
        return 0;		
	}

	

