#include <iostream>
#include <vector>
using namespace std;
int main ()
{
	int sum=0, min, max;
	double avg;
	int input=0;
	vector<int> inputs;
	while (true)
	{
		cout<<"Please enter a positive number. Enter negative number to exit."<<endl;
		cin>>input;
		if (input<0)
			break;
		inputs.push_back(input);
	}
	max=0;
	min= INT_MAX;
	for (unsigned i=0; i<inputs.size(); ++i)
	{
		sum+=inputs[i];
		if (inputs[i]<min)
			min=inputs[i];
		if (inputs[i]>max)
			max=inputs[i];
	}
	cout<<"Minimum:	"<<min<<endl;
	cout<<"Maximum:	"<<max<<endl;
	cout<<"Sum:	"<<sum<<endl;
	avg=sum/(double) inputs.size();
	cout<<"Average:	"<<avg<<endl;
	system ("pause");
	return 0;
}