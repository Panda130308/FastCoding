#include<bits/stdc++.h>
using namespace std;
namespace Class
{
	#define Template template<class T>
	class Int32{
		public:
			int val;
			bitset<32> bit;
			int lowbit;
			int ctz,clz;
		private:
			void Update(int __val)
				{val=__val;bit=__val;lowbit=val&(-val);ctz=__builtin_ctz(val);
					clz=__builtin_clz(val);}
		public:
			Int32()=default;
			Int32(int __val):val(__val){};
			Int32(bitset<32> __bit)
				{val=0;for(int i=0;i<32;i++)val+=(__bit[i]<<i);Update(val);}
			Int32(int __val,bitset<32> __bit):val(__val),bit(__bit){};
			Int32(string s){Update(stoi(s));}
			Int32(const char* s){Update(atoi(s));}
			Int32(Int32&& rhs):val(rhs.val),bit(rhs.bit){};
			Int32(char ch):val(ch-'0'),bit(ch-'0'){};
			operator int(){return val;}
			Template Int32 operator+=(T x){Update(val+x);return *this;}
			Template Int32 operator-=(T x){Update(val+x);return *this;}
			Template Int32 operator*=(T x){Update(val+x);return *this;}
			Template Int32 operator/=(T x){Update(val+x);return *this;}
			Template Int32 operator++(T x){Update(val+x);return *this;}
			Template Int32 operator--(T x){Update(val+x);return *this;}
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

	template<class _Tp>
		class Int1024{
			bitset<1024> bit;
			
		};
}using namespace Class;
int main(){
	
}