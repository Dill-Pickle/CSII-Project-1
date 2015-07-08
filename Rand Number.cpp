/*Jordan Stormo		
  Hasani Mason		
  Devin Gonzolas		
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

void numbers();
void cards();

int main()
{
	srand(time(NULL));
	numbers();
	cards();
    return 0;
}
void numbers()
{
	char answer;
	int numb[9];
        int* p;
  	int random;
    
	do
	{
		for (int i = 1; i < 9; i++)
		{
		    random = rand() % 52;
            int* p = find(numb, numb+9, random);
            while(p != numb+9){
                random = rand() % 52;
                p = find(numb, numb+9, random);
            }
            numb[i] = random;
                
		}
		for (int i = 0; i < 9; i++)
		{
			
			cout << numb[i] << endl;
		}
		
		cout << "Again (y/n)";
		cin >> answer;
		cout << endl;
	}
	while (answer == 'y');
}
void cards()
{
	char ans;
	int N;
	int S;
	int C;
	int check[9];
	string suit[4] = { "Hearts", "Clubs", "Diamonds", "Spade" };
	string card[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

	do
	{
		for (int i = 0; i < 9; i++)
		{
			N = rand() % 52;
			S = rand() % 4;
			C = rand() % 13;

			cout << card[C] << " of " << suit[S] << endl;
		}
		cout << "Again? (y/n)";
		cin >> ans;
	} while (ans == 'y');
}
