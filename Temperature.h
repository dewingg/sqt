#include <iostream>
#include <string>
using namespace std;
class Temperature
{
protected:
	int temperatura = 90;//�����������
	string temperatura;
public:
	int getTemperature() {
		return temperatura;
	}
	string getTemperatura() {
		return temperatura;

	}
	void show_temerature() {
		cout << "�����������:" << getTemperature << endl;

	}
	void set_temperature(char) {
		do {
			char ans;
			switch (ans) {
			case 75:
				cout << "�����������:\n" << getTemperature << "temperatura + 1 = " << temperatura + 1 = << endl;
				break;
			case 93:
				cout << "�����������:\n" << getTemperature << "temperatura - 1 = " << temperatura - 1 = << endl;
				break;
			default:
				cout << "Error";
			}




		}



	}

};

