#include <iostream>
using namespace std;

class Person {
   private:
    int age;

   public:
    // 1. Constructor with no arguments
    Person() {
        age = 20;
    }

	Person(Person &temp){
		age = temp.age;
	}

    // 2. Constructor with an argument
    Person(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
	~Person()
	{
		cout<<"Object Destroyed!!!"<<endl;

	}

	
	
	
};

int main() {
    Person person1, person2(45);
	Person person3(person2);

    cout << "Person1 Age = " << person1.getAge() << endl;
    cout << "Person2 Age = " << person2.getAge() << endl;
	cout << "copied Person2 Age = " << person3.getAge() << endl;
    return 0;
}
