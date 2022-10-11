#include <iostream>

using namespace std;

const float EURO_PTS = 166.386;
const float MILLIONS = 1e6;
int main()
{
	float eur;
	float pts;

	cout << "introduce el numero en euros: ";
	cin >> eur;

	pts = eur * EURO_PTS;
	cout << eur << " euros son " << pts << " pesetas" << endl;
	
	if(pts >= MILLIONS)
	{
		cout << "MILLONNETIS" << endl;
	}
	else
	{
		cout << "sigue sonando" << endl;
	}
	return 0;
}