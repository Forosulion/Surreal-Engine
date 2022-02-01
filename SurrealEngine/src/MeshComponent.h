#pragma once
#include <vector>



namespace engine_name_placeholder {

	struct Vertex
	{
		//Vertex fields
	};



	class MeshComponent
	{

	private:
		MeshComponent();
		std::vector<Vertex> verticies;
		std::vector<unsigned int> indicies;


	};
}


