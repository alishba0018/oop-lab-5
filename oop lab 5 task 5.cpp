#include <iostream>
#include<string>
using namespace std;

class ValidateString{
	private:
		string word;
	public:
		ValidateString(string word){
			this->word=word;
		}
	bool check() const {
        for (char ch : word) {
            if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')) {
                return false;
            }
        }
        return true;
    }
    void display() const {
        if (check()) {
            cout << " " << word << " is all good!\n";
        } else {
            cout << " " << word <<" is not correct\n";
        }
    }

};


int main() {
    string inputWord;
    cout << "Enter a string to check: ";
    cin >> inputWord;

    ValidateString a(inputWord);
    a.display();

    return 0;
}
