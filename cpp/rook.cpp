
#include <bits/stdc++.h>
using namespace std;


void MinSteps(int SourceX, int SourceY, int DestX, int DestY)
{
	
	cout << max(abs(SourceX - DestX), abs(SourceY - DestY)) << endl;

	while ((SourceX != DestX) || (SourceY != DestY)) {

		// Go up
		if (SourceX < DestX) {
			cout << 'U';
			SourceX++;
		}

		// Go down
		if (SourceX > DestX) {
			cout << 'D';
			SourceX--;
		}

		// Go left
		if (SourceY > DestY) {
			cout << 'L';
			SourceY--;
		}

		// Go right
		if (SourceY < DestY) {
			cout << 'R';
			SourceY++;
		}

		cout << endl;
	}
}


int main()
{
	int sourceX = 2, sourceY = 1;
	int destinationX = 6, destinationY = 7;

	MinSteps(sourceX, sourceY, destinationX, destinationY);

	return 0;
}
