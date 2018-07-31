#ifndef LinearList_H
#define LinearList_H

#define elemType int
class LinearList
{
	public:
		LinearList(int size);
		~LinearList();
		void clearList();
		bool listEmpty();
		int listLength();
		bool getElem(int i, elemType *e);
		int locateElem(elemType *e);
		bool priorElem(elemTpe *currentELem, elemType *preELem);
		bool nextElem(elemType *currentElem, elemType *nextElem);
		void traverse();
		bool insertElem(int i, elemType *e);
		bool deleteElem(int i, elemType *e);
	private:
		int *pmList;
		int imSize;
		int imLength;
};
#endif
