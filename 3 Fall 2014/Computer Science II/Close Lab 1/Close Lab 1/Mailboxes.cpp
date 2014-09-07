/*Author: Sarah Wiegand
  Date: September 03, 2014
  Purpose: Write a program to calculate which mailboxes Peter
  the postman closed after he closed and opened a variety of
  them.
*/
#include <iostream>
using namespace std;
enum mailbox_door {open, closed};
/*Purpose:Write a function that closes all the mailboxes
  Preconditions:Mailboxes need to be initialized.
  Postconditions:All mailbox doors are closed.
*/
void close_all (mailbox_door door[], int a)
{
	for (int x=0; x<a; ++x)
	{
		door[x]= closed;
	}
}
/*Purpose:Write a function that conducts everything Peter did
  to the mailbox doors.
  Preconditions:All mailboxes are closed.
  Postconditions:Some mailboxes are open and some closed.
*/
void conduct (mailbox_door door[], int a)
{
	for (int i=2;  i<=a; ++i)
	{
		for (int j=i-1; j<=a; j+=i)
		{
			door[j]= ((closed== door[j])? open:closed);
		}
	}
}
/*Purpose:Write a function that outputs all the closed
  mailbox doors at the end.
  Preconditions:None
  Postconditions:Printed mailbox doors that are open to the screen.
*/
void print (mailbox_door door[], int a)
{
	for (int i=0; i<a; ++i)
	{
		if (closed== door[i])
			cout<<"Door "<<i+1<<" is closed."<<endl;
	}
}
int main ()
{
	mailbox_door mailbox_doors[150];
	close_all (mailbox_doors, 150);
	conduct (mailbox_doors, 150);
	print (mailbox_doors, 150);
	system ("pause");
	return 0;
}