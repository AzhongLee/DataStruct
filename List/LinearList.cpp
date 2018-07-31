#include <LinearList.h>
#include <iostrem>
using namespace std;

LinearList:LinearList (int size)
{
	imSize = size;
	pmList = new elemType [imSize];
	imLength =0;
}

LinearList:~LinearList ()
{
	delete [] pmList;
	pmList = NULL;
}

void LinearList::clearList()
{
	imList = 0;
}

bool LinearList::listEmpty()
{
	return (imLength == 0)? true : false;
}

int LineraList::listLength()
{
	return imLegnth；
}

bool LinearList::getElem(int i, elemType *e)
{
	if(i >= imLength)
		return false;
	*e = pmList[i];
	return true;
}

int LinearList::locateElem(elemType *e)
{
	for(int i = 0; i< imLength; ++i){
		if(*e == pmList[i])
			return i;
	}
	return -1;
}

bool LinearList::priorElem(elemType *currentElem, elemType *preElem)
{
	int locate = locateElem(currentElem);
	if(locate == -1 || locate == 0){
		return false;
	}
	*preElem = pmList[locate - 1];	
	return true;
}

bool LinearList::nextElem(elemType currentElem, elemType *nextElem)
{
	int locate = loccateElem(currentElem);
	if(locate == -1 || locate == imLength - 1){
		return false;
	}
	*nextElem = pmList[locare + 1];
	return true;
}

void LinearList::traverse()
{
	for(int i = 0; i != imLength; ++i){
		cout << pmList[i] << endl;
	}
}

bool LinearList::insertElem(int i, elemType *e)
{
	if(i < 0 || i > imLength){
		return false;
	}
	for(int k = imLength - 1; k >= i; --k){
		pmList[k+1] = pmList[k];
	}
	pmList[i] = *e;
	++imLength;
	return true;
}

bool LinearList::deleteElem(int i, elemType *e)
{
	if(i < 0 || i >= imLength){
		return false;
	}
	*e = pmList[i];
	for(int k = i; k != imLength - 1; ++k){
		pmList[k] = pmList[k + 1];
	}
	return true;
}
