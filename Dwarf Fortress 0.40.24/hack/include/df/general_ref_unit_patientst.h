/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_GENERAL_REF_UNIT_PATIENTST_H
#define DF_GENERAL_REF_UNIT_PATIENTST_H
#ifndef DF_GENERAL_REF_UNIT_H
#include "general_ref_unit.h"
#endif
namespace df {
  struct DFHACK_EXPORT general_ref_unit_patientst : general_ref_unit {
    static virtual_identity _identity;
  protected:
    general_ref_unit_patientst(virtual_identity *_id = &general_ref_unit_patientst::_identity);
    friend void *df::allocator_fn<general_ref_unit_patientst>(void*,const void*);
  };
}
#endif
