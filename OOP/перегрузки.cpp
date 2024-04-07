#include <iostream>

using namespace std;

class item {
private:
	int hight;
	int whight;
public:
	item() {
		cout << "constructor standart completed " << endl;
	}
	item(const item & now) {
		cout << "constructor copir completed " << endl;
		this->hight = now.hight;
		this->whight = now.whight;
	}
	item(item && other) {
		cout << "constructor perenos completed " << endl;
		this->hight = other.hight;
		other.hight = 0;
		this->whight = other.whight;
		other.whight = 0;
	}
	~item() {
		cout << "destructor completed " << endl;
	}
	void set_hight(int set) {
		this->hight = set;
	}
	void set_whight(int set2) {
		this->whight = set2;
	}
	int get_hight() {
		return hight;
	}
	int get_whight() {
		return whight;
	}
	item operator +(const item & cls) {
		item temp;
		temp.hight = this->hight + cls.hight;
		temp.whight = this->whight + cls.whight;
		return temp;
	}
	item operator -(const item& cls) {
		item temp;
		temp.hight = this->hight - cls.hight;
		temp.whight = this->whight - cls.whight;
		return temp;
	}
	item operator *(const item& cls) {
		item temp;
		temp.hight = this->hight * cls.hight;
		temp.whight = this->whight * cls.whight;
		return temp;
	}
	item operator /(const item& cls) {
		item temp;
		temp.hight = this->hight / cls.hight;
		temp.whight = this->whight / cls.whight;
		return temp;
	}
	item operator =(const item& cls) noexcept {
		cout << "operator = completed " << endl;
		this->hight = cls.hight;
	    this->whight = cls.whight;
		return cls;
	}
};

int main() {
	int hi, wh;
	cout << "enter hight: ";
	cin >> hi;
	cout << "enter whight: ";
	cin >> wh;

	item first;
	first.set_hight(hi);
	first.set_whight(wh);
	item second;

	cout << "enter hight: ";
	cin >> hi;
	cout << "enter whight: ";
	cin >> wh;
	second.set_hight(hi);
	second.set_whight(wh);

	item theth = move(second);

	cout << first.get_hight() << " " << first.get_whight() << endl;
	cout << second.get_hight() << " " << second.get_whight() << endl;
	cout << theth.get_hight() << " " << theth.get_whight() << endl;

	return 0;
}