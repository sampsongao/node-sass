#ifndef SASS_TYPES_COLOR_H
#define SASS_TYPES_COLOR_H

#include "sass_value_wrapper.h"

namespace SassTypes
{
  class Color : public SassValueWrapper<Color> {
    public:
      Color(napi_env, Sass_Value*);
      static char const* get_constructor_name() { return "SassColor"; }
      static Sass_Value* construct(napi_env, const std::vector<napi_value>, Sass_Value **);
      static napi_value getConstructor(napi_env, napi_callback);

      static void GetR(napi_env env, napi_callback_info info);
      static void GetG(napi_env env, napi_callback_info info);
      static void GetB(napi_env env, napi_callback_info info);
      static void GetA(napi_env env, napi_callback_info info);
      static void SetR(napi_env env, napi_callback_info info);
      static void SetG(napi_env env, napi_callback_info info);
      static void SetB(napi_env env, napi_callback_info info);
      static void SetA(napi_env env, napi_callback_info info);
  };
}

#endif
