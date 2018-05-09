#include <iostream>
#include <iomanip>
using namespace std;
char chr;

int main()
{
	int number;
	int guess;
	int tries;
    char answer;

    srand(number>0);                                               // initializes the pseudo-random number generator.
	do
	{
    number=rand()%100+1;;                                         //selects a number using rand() between 1 and 100 using the remainder operator. Would return a number between 1 and RAND_MAX if not present.
	cout<<"Enter a number between 1 and 100"<<endl;
	cin>>guess;
	if (number<guess)
		cout<<"Too high try again"<<endl;
	tries=1;
	} while(number>guess);
		cout<<"Too low try again"<<endl;
		tries++;
	if(number==guess)
		cout<<"Congratualtions!! "<<endl;
	cout<<"You got the right number in "<<tries<<" tries";
	do
	{
cout<<"Would you like to play again?  Enter Y/N";
		cin>>answer;
    if ('N')
		cout<<"Thanks for playing!";
	} while(answer='Y');
			

	
	cin>>chr;
		return 0;

	}
