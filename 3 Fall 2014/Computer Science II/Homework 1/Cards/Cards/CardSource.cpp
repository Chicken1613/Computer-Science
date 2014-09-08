/*Author: Sarah Wiegand
  Date: September 08, 2014
  Purpose: Write a program that simulates a deck of playing cards.
*/
#include <iostream>
using namespace std;
enum Suit {heart, clubs, diamonds, spades};
enum Face {Two=2, Three, Four, Five, Six, Seven, Eight,
	Nine, Ten, Jack, Queen, King, Ace};
struct Card
{
	Suit suit;
	Face face;
};
typedef Card Deck[52];
/*Purpose:Write a function that asks the user to fill out a suit and face for a card.
  Preconditions:A Card object must exist.
  Postconditions:A suit and face are filled in.
*/
void fill_single (Card& card)
{
	int suit, face;
	cout<<"Please enter a number that represents a suit."<<endl;
	cout<<"0:heart, 1:clubs,2:diamonds, and 3:spades."<<endl;
	cin>>suit;
	cout<<"Please enter a number that represents a face value for a card."<<endl;
	cout<<"2:Two, 3:Three, 4:Four, 5:Five, 6:Six, 7:Seven, 8:Eight, 9:Nine, 10:Ten\n";
	cout<<"11:Jack, 12:Queen, 13:King, 14:Ace"<<endl;
	cin>>face;
	card.suit=(Suit)suit;
	card.face=(Face)face;
}
/*Purpose:Write a function that fills all 52 cards in a deck and uses the above data
  structure.
  Preconditions:A Card object and a Deck array must exist.
  Postconditions:All 52 cards' information are filled in for suit and face.
*/
void fill_all (Deck& deck)
{

}

int main ()
{
	Card card;
	fill_single (card);
	fill_all (card);

	system ("pause");
	return 0;
}