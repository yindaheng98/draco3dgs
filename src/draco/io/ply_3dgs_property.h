#ifndef DRACO_IO_PLY_3DGS_PROPERTY_H_
#define DRACO_IO_PLY_3DGS_PROPERTY_H_
#define PLY_3DGS_PROPERTY_NAMES_SCALE \
  { "scale" }
#define PLY_3DGS_PROPERTY_NAMES_ROTATE \
  { "rot_re", "rot_im" }
#define PLY_3DGS_PROPERTY_NAMES_OPACITY \
  { "opacity" }
#define PLY_3DGS_PROPERTY_NAMES_FEATURE_DC \
  { "f_dc" }
#define PLY_3DGS_PROPERTY_NAMES_FEATURE_REST \
  {"f_rest_0_0", "f_rest_0_1", "f_rest_0_2", "f_rest_1_0", "f_rest_1_1", "f_rest_1_2", "f_rest_2_0", "f_rest_2_1", "f_rest_2_2"}
#include <string>
#include <vector>

namespace draco {
const std::vector<std::vector<std::string>> PLY_3DGS_PROPERTY = {};
}  // namespace draco

#endif  // DRACO_IO_PLY_PROPERTY_WRITER_H_
