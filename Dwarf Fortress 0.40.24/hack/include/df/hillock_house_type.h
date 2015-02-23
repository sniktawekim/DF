/* THIS FILE WAS GENERATED. DO NOT EDIT. */
#ifndef DF_HILLOCK_HOUSE_TYPE_H
#define DF_HILLOCK_HOUSE_TYPE_H
namespace df {
  namespace enums {
    namespace hillock_house_type {
      enum hillock_house_type : int32_t {
        anon_1,
        CivicMound,
        CastleMound,
        DrinkingMound
      };
    }
  }
  using enums::hillock_house_type::hillock_house_type;
  template<> struct DFHACK_EXPORT identity_traits<hillock_house_type> {
    static enum_identity identity;
    static enum_identity *get() { return &identity; }
  };
  template<> struct DFHACK_EXPORT enum_traits<hillock_house_type> {
    typedef int32_t base_type;
    typedef hillock_house_type enum_type;
    static const base_type first_item_value = 0;
    static const base_type last_item_value = 3;
    static inline bool is_valid(enum_type value) {
      return (base_type(value) >= first_item_value && base_type(value) <= last_item_value);
    }
    static const enum_type first_item = (enum_type)first_item_value;
    static const enum_type last_item = (enum_type)last_item_value;
    static const char *const key_table[4];
  };
}
#endif
