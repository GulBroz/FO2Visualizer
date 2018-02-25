#include "material_info.h"

using namespace std;

namespace CMU462 { namespace Collada {

ostream& operator<<(ostream& os, const MaterialInfo& material) {

  os << "MaterialInfo: " << material.name << " (id:" << material.id << ")";

  os << " [" << " BSDF=" << material.bsdf << " ]";

  return os;
}

} // namespace Collada
} // namespace CMU462
