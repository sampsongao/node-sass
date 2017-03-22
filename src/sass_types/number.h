#ifndef SASS_TYPES_NUMBER_H
#define SASS_TYPES_NUMBER_H

#include "sass_value_wrapper.h"

namespace SassTypes
{
  class Number : public SassValueWrapper<Number> {
    public:
      Number(napi_env, Sass_Value*);
      static char const* get_constructor_name() { return "SassNumber"; }
      static Sass_Value* construct(napi_env, const std::vector<napi_value>, Sass_Value **);
      static napi_value getConstructor(napi_env, napi_callback);

      static void GetValue(napi_env env, napi_callback_info info);
      static void GetUnit(napi_env env, napi_callback_info info);
      static void SetValue(napi_env env, napi_callback_info info);
      static void SetUnit(napi_env env, napi_callback_info info);
  };
}

#endif
