#include <iostream>

using namespace std;

// prints the first n even numbers
void printFirstNEvenNumbers(int n) {
	int counter = 0;
	int i = 1;
	int even = 0;
	counter += 2; // for i = 1 and even = 0
	
	while (i <= n) {
		counter++; // for BC i <= n evaluating to true
		even = i * 2;
		counter++; // for even = i * 2
		cout << even << " ";
		counter++; // for cout
		i++;
		counter++; // for i++
	}
	counter++; // for one time BC i <=n evaluates to false
	cout << endl;
	counter++; // for cout 
	cout << "counter: " << counter << endl;
}

int main() {
	int n = 20;
	
	printFirstNEvenNumbers(n);


	return 0;
}
