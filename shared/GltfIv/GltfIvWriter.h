#pragma once

#include "GltfIv.h"

class GltfIvWriter {
public:
    GltfIvWriter(tinygltf::Model && gltfModel);
    ~GltfIvWriter();
    bool write(std::string filename);

private:
    const tinygltf::Model m_gltfModel;
};