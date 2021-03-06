#pragma once

#ifndef GENE
#define GENE

#include <vector>

using namespace std;

class Gene
{
public:


	//Typical NEAT genome
	int innovation;
	int node_in;
	int node_out;
	int enabled;
	double weight;


	//offset for node Time-Space Topology Based NN 
	//will add up 
	vector<double> offset_vector;
	
	Gene copy();

	Gene();
	~Gene();

private:

};


#endif // !GENE
