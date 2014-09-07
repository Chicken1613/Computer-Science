/*----------------------------
Sarah Wiegand Lab 9 Exercise 2
----------------------------*/
#include <iostream>
using namespace std;
int main ()
{
	const int students=10;
	const int quizzes=2;
	int grades[students][quizzes]=
	{
		{20,11},
		{10,20},
		{39,14},
		{29,15},
		{22,23},
		{-1,-1},
		{-1,-1},
		{-1,-1},
		{-1,-1},
		{-1,-1}
	};
	for (int i=0; i<students; ++i)
	{
		for (int j=0; j<quizzes; ++j)
		{
			if (grades [i][j]!=-1)
			{
				cout<<grades [i][j]<<" ";
			}
		}
		cout<<endl;
	}
	for (int i=0;i<students; ++i)
	{
		int swap=-1;
		for (int j=i; j<students; ++j)
		{
			if (grades [i][0]!=-1 && grades [j][0])
			{
				if (grades [i][0]>grades [j][0] && swap==-1)
					swap=j;
				else if (swap>=0 && grades[swap][0]>grades[j][0])
					swap=j;
			}
		}
		if (swap>=0)
		{
			grades [i][0]^=grades [swap][0];
			grades [swap][0]^=grades [i][0];
			grades [i][0]^=grades [swap][0];
			grades [i][1]^=grades [swap][1];
			grades [swap][1]^=grades [i][1];
			grades [i][1]^=grades [swap][1];
		}
	}
	for (int i=0; i<students; ++i)
	{
		for (int j=0; j<quizzes; ++j)
		{
			if (grades [i][j]!=-1)
			{
				cout<<grades [i][j]<<" ";
			}
		}
		cout<<endl;
	}
	system ("pause");
	return 0;
}