/*Author: Sarah Wiegand
  Date: September 08, 2014
  Purpose: Write a program that simulates a deck of playing cards.
*/
#include <iostream>
using namespace std;
enum Suit {heart, clubs, diamonds, spades};
enum Face {Two, Three, Four, Five, Six, Seven, Eight,
	Nine, Ten, Jack, Queen, King, Ace};
struct Card
{
	Suit suit;
	Face face;
};
typedef Card Deck[52];
void fill_single (Card& card)
{
	cout<<"Please enter a suit and face value for a card.\n";
		cin>>card.suit>>card.face;
}
void fill_all (Deck& deck)
{

}

int main ()
{
	



	system ("pause");
	return 0;
}