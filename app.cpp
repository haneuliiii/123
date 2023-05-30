#include "Truck.h"

using std::cout;
using std::endl;
int main(void)
{
	Person ptest("Kim");
	Person pcopy1;
	Person pcopy2(ptest);
	pcopy1 = ptest;
	cout << "name is " << ptest.getName()<<endl;
	cout << "name is " << pcopy1.getName() << endl;
	cout << "name is " << pcopy2.getName() << endl<<endl;

	Vehicle vtest("Hyundai", 3, ptest);
	Vehicle vcopy1;
	Vehicle vcopy2(vtest);
	vcopy1 = vtest;
	cout << "manufacture is "<<vtest.getmfn()<<endl;
	cout << "the number of Cylinders is " << vtest.getnC() << endl;
	cout << "Owner name is " << vtest.getown() << endl<<endl;

	cout << "manufacture is " << vcopy1.getmfn() << endl;
	cout << "the number of Cylinders is " << vcopy1.getnC() << endl;
	cout << "Owner name is " << vcopy1.getown() << endl<<endl;

	cout << "manufacture is " << vcopy2.getmfn() << endl;
	cout << "the number of Cylinders is " << vcopy2.getnC() << endl;
	cout << "Owner name is " << vcopy2.getown() << endl<<endl;

	Truck ttest(1.1, 100, "BMW",5,ptest);
	Truck tcopy1;
	Truck tcopy2(ttest);
	tcopy1 = ttest;
	cout << "carring capacity is " << ttest.getload() << "kg" << endl;
	cout << "towing capacity is " << ttest.gettowing() << "pw" << endl;
	cout << "manufacture is " << ttest.getmfn() << endl;
	cout << "the number of Cylinders is " << ttest.getnC() << endl;
	cout << "Owner name is " << ttest.getown() << endl<<endl;

	cout << "carring capacity is " << tcopy1.getload() << "kg" << endl;
	cout << "towing capacity is " << tcopy1.gettowing() << "pw" << endl;
	cout << "manufacture is " << tcopy1.getmfn() << endl;
	cout << "the number of Cylinders is " << tcopy1.getnC() << endl;
	cout << "Owner name is " << tcopy1.getown() << endl<<endl;

	cout << "carring capacity is " << tcopy2.getload() << "kg" << endl;
	cout << "towing capacity is " << tcopy2.gettowing() << "pw" << endl;
	cout << "manufacture is " << tcopy2.getmfn() << endl;
	cout << "the number of Cylinders is " << tcopy2.getnC() << endl;
	cout << "Owner name is " << tcopy2.getown() << endl;

	return 0;

}