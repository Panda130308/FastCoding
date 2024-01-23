#include<bits/stdc++.h>
namespace std
{
#pragma optimize("-O3")
/// FAST_CODING_BEGIN
#define DEBUG(FLAG,VAL) cout<<##FLAG<<"="<<##VAL<<"\n";
#define foreach(Vector,Iter) for(auto Iter : Vector)
#include<bits/stdc++.h>
using namespace std;
namespace Class
{
	class Int32{
		public:
			int val;
			bitset<32> bit;
			Int32()=default;
			Int32(int __val):val(__val){};
			Int32(bitset<32> __bit)
				{val=0,bit=__bit;for(int i=0;i<32;i++)val+=(__bit[i]<<i);}
			Int32(int __val,bitset<32> __bit):val(__val),bit(__bit){};
			Int32(string s)
				{val=stoi(s);bit=val;}
			Int32(const char* s)
				{val=atoi(s);bit=val;}
			Int32(Int32&& rhs):val(rhs.val),bit(rhs.bit){};
			Int32(char ch):val(ch-'0'),bit(ch-'0'){};
	};
	bitset<32> operator""b(unsigned long long val){
		bitset<32> tmp;
		int k=0;
		while(val){
			tmp[k++]=val%10;
			val/=10;
		}
		return tmp;
	}
}using namespace Class;
namespace Funcion
{
	/// @brief A namespace of The IO-operator-set.
	///
	namespace IO
	{
		template<class _Tp> auto operator>>(istream __is,vector<_Tp> vec)
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
/// FAST_CODING_END
}