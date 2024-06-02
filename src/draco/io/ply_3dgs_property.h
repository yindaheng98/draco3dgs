#ifndef DRACO_IO_PLY_3DGS_PROPERTY_H_
#define DRACO_IO_PLY_3DGS_PROPERTY_H_
#define PLY_3DGS_PROPERTY_NAMES_SCALE \
  { "scale_0", "scale_1", "scale_2" }
#define PLY_3DGS_PROPERTY_NAMES_ROTATE \
  { "rot_0", "rot_1", "rot_2", "rot_3" }
#define PLY_3DGS_PROPERTY_NAMES_OPACITY \
  { "opacity" }
#define PLY_3DGS_PROPERTY_NAMES_F_DC \
  { "f_dc_0", "f_dc_1", "f_dc_2" }
#include <string>
#include <vector>

namespace draco {
const std::vector<std::vector<std::string>> PLY_3DGS_PROPERTY = {
    {"f_rest_0",  "f_rest_1",  "f_rest_2",  "f_rest_3",  "f_rest_4",
     "f_rest_5",  "f_rest_6",  "f_rest_7",  "f_rest_8",  "f_rest_9",
     "f_rest_10", "f_rest_11", "f_rest_12", "f_rest_13", "f_rest_14",
     "f_rest_15", "f_rest_16", "f_rest_17", "f_rest_18", "f_rest_19",
     "f_rest_20", "f_rest_21", "f_rest_22", "f_rest_23", "f_rest_24",
     "f_rest_25", "f_rest_26", "f_rest_27", "f_rest_28", "f_rest_29",
     "f_rest_30", "f_rest_31", "f_rest_32", "f_rest_33", "f_rest_34",
     "f_rest_35", "f_rest_36", "f_rest_37", "f_rest_38", "f_rest_39",
     "f_rest_40", "f_rest_41", "f_rest_42", "f_rest_43", "f_rest_44"}};
}  // namespace draco

#endif  // DRACO_IO_PLY_PROPERTY_WRITER_H_
