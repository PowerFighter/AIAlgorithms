#pragma once
#include <stdlib.h>
#include <string>

struct AdjListNode
{
	AdjListNode()
	{
		label = "UnAssigned";
		next = nullptr;
	}

	std::string label;
	AdjListNode* next;
};

struct AdjList
{
	AdjList()
	{
		head = nullptr;
	}

	AdjListNode* head;
};

struct Graph
{
	Graph()
	{
		vertices = 0;
	}

	int vertices;
	AdjList* array;
};


static Graph* CreateGraph(int V)
{
	Graph* outgraph = (Graph*)malloc(sizeof(struct Graph));
	
	

}