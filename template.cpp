/// Copyright (C) <Year> <Name>
/// All rights reserved.

#include <ai.h>
#include <cstring>

AI_SHADER_NODE_EXPORT_METHODS(ShaderMethods);

/// ---------------------------------------------------------------------------
/// ---------------------------------------------------------------------------
enum ShaderParameters
{
  // Shader parameter listing
};

/// ---------------------------------------------------------------------------
/// ---------------------------------------------------------------------------
node_parameters
{
  // Shader parameter initialization (important: in the same order
  // as listed in the ShaderParameters enum).
}

/// ---------------------------------------------------------------------------
/// ---------------------------------------------------------------------------
node_initialize
{
}

/// ---------------------------------------------------------------------------
/// ---------------------------------------------------------------------------
node_update
{
}

/// ---------------------------------------------------------------------------
/// ---------------------------------------------------------------------------
node_finish
{
}

/// ---------------------------------------------------------------------------
/// ---------------------------------------------------------------------------
shader_evaluate
{
  // Evaluate the shader and write the output data into \p sg.
}

/// ---------------------------------------------------------------------------
/// ---------------------------------------------------------------------------
node_loader
{
  if (i > 0) return false;
  node->methods = ShaderMethods;
  node->output_type = AI_TYPE_RGB;         // TODO: Change shader output type
  node->name = "creator_arnold_template";  // TODO: Change shader name (unuíque)
  node->node_type = AI_NODE_SHADER;
  strcpy(node->version, AI_VERSION);
  return true;
}
