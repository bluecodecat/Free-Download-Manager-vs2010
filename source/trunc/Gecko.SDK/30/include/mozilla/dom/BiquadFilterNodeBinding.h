/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_BiquadFilterNodeBinding_h__
#define mozilla_dom_BiquadFilterNodeBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class BiquadFilterNode;
class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(BiquadFilterType, uint32_t)
  _0,
  _1,
  _2,
  _3,
  _4,
  _5,
  _6,
  _7,
  Lowpass,
  Highpass,
  Bandpass,
  Lowshelf,
  Highshelf,
  Peaking,
  Notch,
  Allpass
MOZ_END_ENUM_CLASS(BiquadFilterType)

namespace BiquadFilterTypeValues {
extern const EnumEntry strings[17];
} // namespace BiquadFilterTypeValues


namespace BiquadFilterNodeBinding {

  typedef mozilla::dom::BiquadFilterNode NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::BiquadFilterNode* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace BiquadFilterNodeBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_BiquadFilterNodeBinding_h__
