#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
int a[maxn];
int n;
int check(int num[],int x) {
	for(int i=1; i<=n; i++) {
		if(num[i]==x)return i;
	}
	return 0;
}
int scheck(int num[],int x) {
	int l=1,r=n;
	while(l<r) {
		int mid=(l+r)/2;
		if(num[mid]==x)return mid;
		else if(num[mid]<x) l=mid+1;
		else r=mid-1;
	}
	if(num[l]!=x)l=0;
	return l;
}
int main() {
	int k;
	cout<<"请输入数组长度:"<<endl;
	cin>>n;
	cout<<"请输入数组:"<<endl;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}
	cout<<"请输入要查询的数字:"<<endl;
	cin>>k;
	cout<<"直接查询数组下标为: ";
	cout<<check(a,k)<<endl;
	cout<<"二分查询数组下标为: ";
	cout<<scheck(a,k);
}