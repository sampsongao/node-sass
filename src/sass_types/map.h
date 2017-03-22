#ifndef SASS_TYPES_MAP_H
#define SASS_TYPES_MAP_H

#include "sass_value_wrapper.h"

namespace SassTypes
{
  class Map : public SassValueWrapper<Map> {
    public:
      Map(napi_env, Sass_Value*);
      static char const* get_constructor_name() { return "SassMap"; }
      static Sass_Value* construct(napi_env, const std::vector<napi_value>, Sass_Value **);
      static napi_value getConstructor(napi_env, napi_callback);

      static void GetValue(napi_env env, napi_callback_info info);
      static void SetValue(napi_env env, napi_callback_info info);
      static void GetKey(napi_env env, napi_callback_info info);
      static void SetKey(napi_env env, napi_callback_info info);
      static void GetLength(napi_env env, napi_callback_info info);
  };
}

#endif
