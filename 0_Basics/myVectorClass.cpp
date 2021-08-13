#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long int
#define ull unsigned long long int
#define ld long double
#define all(x) (x).begin(), (x).end()

template<typename T> class myVector {
	// arr is the integer pointer which stores address of our vector
	T* arr;

	// total storage of the vector
	int capacity;

	// number of elements
	int current;

public:
	myVector() {
		arr = new T[1];
		capacity = 1;
		current = 0;
	}

	void push(T data) {
		if(current == capacity) {
			T* temp = new T[2 * capacity];
			for(int i = 0; i < capacity; i++)
				temp[i] = arr[i];
			delete[] arr;
			capacity *= 2;
			arr = temp;
		}
		arr[current] = data;
		current++;
	}

	// function to extract element at an idx
	T get(int idx) {
		if(idx < current)
			return arr[idx];
	}

	void pop() {
		current--;
	}

	int getCapacity() {
		return capacity;
	}

	void print() {
		for(int i = 0; i < current; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
	}
};

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, a;
	cin >> n;
	// myVector<int>* v = new myVector<int>();
	// for(int i = 0; i < n; i++) {
	// 	cin >> a;
	// 	v->push(a);
	// }
	// v->print();


	myVector<int> v;;
	for(int i = 0; i < n; i++) {
		cin >> a;
		v.push(a);
	}
	v.print();
	return 0;
}