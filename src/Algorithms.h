#ifndef ALGORITHMS_H
#define ALGORITHMS_H

namespace alg
{
	template <typename Iter, typename Type>
	Iter find(Iter begin, Iter end, const Type& object)
	{
		for (; begin != end; begin++) if (*begin == object) return begin;
		return end;
	}

	template <typename Type>
	bool bfind(Type massive[], int begin, int end, const Type& object)
	{
		if (begin == end) return false;

		int median{ massive[(begin + end) / 2] };

		if (median == object) return true;
		else if (object < median) return bfind(massive, begin, (begin + end) / 2, object);
		return bfind(massive, (begin + end) / 2 + 1, end, object);
	}
}

#endif