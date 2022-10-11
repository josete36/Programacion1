#include <iostream>

using namespace std;

const float EURO_PTS = 166.386;
const float millonario = 1e6;
int main()
{
	float eur;
	float pts;

	cout << "introduce el numero en euros: ";
	cin >> eur;

	pts = eur * EURO_PTS;
	cout << eur << " euros son " << pts << " pesetas" << endl;

	return 0;
}