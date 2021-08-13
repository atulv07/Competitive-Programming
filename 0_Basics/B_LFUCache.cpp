#include<bits/stdc++.h>
using namespace std;

// Least Frequent Used Cache
// a caching algorithm in which the least frequently used cache block is removed whenever the cache is overflowed
// We check the old page as well as the frequency of that page and if the frequency of the page is larger than the old page we cannot remove it
// if all the old pages are having same frequency then take last i.e FIFO method for that and remove that page

// get(key) returns the value of key if present else -1
// put(key, value) if present up update, else insert the key
// 		if capacity is full remove the least frequently used keys (if tie remove on the basis of fcfs) then insert
// both these operations are of TC O(1) in LFU Cache
// O(capacity) space

// Min-heap data structure is a good option to implement this algorithm,
//  as it handles insertion, deletion, and update in logarithmic time complexity
// A tie can be resolved by removing the least recently used cache block.
// The following two containers have been used to solve the problem:
// 1. A vector of integer pairs has been used to represent the cache,
//    where each pair consists of the block number and the number of times it has been used.
//    The vector is ordered in the form of a min-heap, which allows us to access the least frequently used block in O(1).
// 2. A hashmap has been used to store the indices of the cache blocks which allows searching in O(1).

struct Node {
	int key, value, cnt;
	Node *next, *prev;
	Node(int k, int v) {
		key = k;
		val = v;
		cnt = 1;
	}
};

struct List {
	int size;
	Node *head, *tail;
	List() {
		head = new Node(-1, -1);
		tail = new Node(-1, -1);
		head->next = tail;
		tail->prev = head;
		size = 0;
	}

	void addFront(Node *node) {
		Node *temp = head->next;
		head->next = node;
		node->prev = head;
		node->next = temp;
		temp->prev = node;
		size++;
	}

	void removeNode(Node* delNode) {
		Node *delPrev = delNode->prev;
		Node *delNext = delNode->next;
		delPrev->next = delNext;
		delNext->prev = delPrev;
	}
};

class LFUCache {
	unordered_map<int, Node*> keyNode;
	unordered_map<int, List*> freqListMap;
	int maxSizeCache;
	int minFreq;
	int curSize;
public:
	LFUCache(int capacity) {
		maxSizeCache = capacity;
		minFreq = 0;
		curSize = 0;
	}

	void updateFreqListMap(Node *node) {
		keyNode.erase(node->key);
		freqListMap[node->cnt]->removeNode(node);
		if(node->cnt == minFreq && freqListMap[node->cnt]->size == 0)
			minFreq++;
		List *nextHigherFreqList = new List();
		if(freqListMap.find(node->cnt + 1) != freqListMap.end())
			nextHigherFreqList = freqListMap[node->cnt + 1];
		node->cnt++;
		nextHigherFreqList->addFront(node);
		freqListMap[node->cnt] = nextHigherFreqList;
		keyNode[node->key] = node;
	}

	int get(int k) {
		if(keyNode.find(k) != keyNode.end()) {
			Node* node = keyNode[k];
			int val = node->value;
			updateFreqListMap(node);
			return val;
		}
		return -1;
	}

	void put(int k, int v) {
		if(maxSizeCache == 0)
			return;
		if(keyNode.find(k) != keyNode.end()) {
			Node *node = keyNode[k];
			node->value = v;
			updateFreqListMap(node);
		}
		else {
			if(curSize == maxSizeCache) {
				List *list = freqListMap[minFreq];
				keyNode.erase(list->tail->prev);
				freqListMap[minFreq]->removeNode(list->tail->prev);
				curSize--;
			}
			curSize++;
			List* listFreq = new List();
			if(freqListMap.find(minFreq) != freqListMap.end())
				listFreq = freqListMap[minFreq];
			Node *node = new Node(k, v);
			listFreq->addFront(node);
			keyNode[k] = node;
			freqListMap[minFreq] = listFreq;
		}
	}
};