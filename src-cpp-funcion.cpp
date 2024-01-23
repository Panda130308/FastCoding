#include<bits/stdc++.h>
using namespace std;
namespace Funcion
{
	/// @brief A namespace of The IO-operator-set.
	///
	namespace IO
	{
		template<class _Tp> auto& operator>>(istream __is,vector<_Tp> vec)
			{foreach(vec,&x) __is>>x;return __is;}
	}using namespace IO;
	/// @brief Change `a` to `min{a,b}`.
	/// @param a Value 1.
	/// @param b Value 2.
	/// @return Value of `a` After Change.
	/// @warning `Note the Type.`
	template<class _Tp> _Tp chmin(_Tp &a,_Tp &b)
		{a=min(a,b);return a;}
	/// @brief Change `a` to `max{a,b}`.
	/// @param a Value 1.
	/// @param b Value 2.
	/// @return Value of `a` After Change.
	/// @warning `Note the Type.`
	template<class _Tp> _Tp chmax(_Tp &a,_Tp &b)
		{a=max(a,b);return a;}
	/// @brief Get an `array`.
	/// @tparam _Tp Type of the array.
	/// @param __first Begin Iterator.
	/// @param __last End Iterator.
	template<class _Tp> void getarray(_Tp __first,_Tp __last)
		{for(;__first!=__last;__first++) cin>>*__first;}
	/// @brief Sort a vector.
	/// @param __x A `vector`.
	template<class _Tp> void sort(vector<_Tp> __x)
		{sort(__x.begin(),__x.end());}
}using namespace Funcion;