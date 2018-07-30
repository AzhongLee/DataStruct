#ifndef LinearList_H
#define LinearList_H
class LinearList
{
	public:
		LinearList(int size);
		~LinearList();
	private:
		int *pmList;
		int imSize;
		int imLength;
};
#endif
