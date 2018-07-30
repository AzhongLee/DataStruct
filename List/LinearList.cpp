#include <LinearList.h>
#include <iostrem>
using namespace std;

LinearList:LinearList (int size)
{
	imSize = size;
	pmList = new int [imSize];
	imLength =0;
}

LinearList:~LinearList ()
{
	delete [] pmList;
	pmList = NULL;
}
