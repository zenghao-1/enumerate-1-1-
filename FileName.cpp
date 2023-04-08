#include <iostream>
using namespace std;
enum MyEnum
{
	ME_name,
	ME_year
};

int main()
{
	MyEnum MyID;
	MyID = ME_name;
	switch (MyID)
	{
	case ME_name:
		cout << "zeng";
		break;
	case ME_year:
		cout << "19";
		break;
	default:
		break;
	}
}