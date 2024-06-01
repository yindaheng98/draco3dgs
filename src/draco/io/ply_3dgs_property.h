#ifndef DRACO_IO_PLY_3DGS_PROPERTY_H_
#define DRACO_IO_PLY_3DGS_PROPERTY_H_

#include <string>
#include <vector>

namespace draco {
const std::vector<std::vector<std::string>> PLY_3DGS_PROPERTY = {
    {"scale_0", "scale_1", "scale_2"},
    {"rot_0", "rot_1", "rot_2", "rot_3"},
    {"opacity"},
    {"f_dc_0", "f_dc_1", "f_dc_2"}};
}  // namespace draco

#endif  // DRACO_IO_PLY_PROPERTY_WRITER_H_
