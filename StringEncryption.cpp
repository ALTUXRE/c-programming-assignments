#include <iostream>
#include <string>

using namespace std;

string encrypt(string input) {
string output = "";
int previous = input[0];
output += (char)(previous - 1);
for (int i = 1; i < input.length(); i++) {
int current = input[i];
int newVal = current - previous;
while (newVal < 97) {
newVal += 26;
}
output += (char)newVal;
previous = current;
}
return output;
}

int main() {
string input;
cout << "Enter a string to encrypt: ";
getline(cin, input);
cout << "Encrypted string: " << encrypt(input) << endl;
return 0;
}
