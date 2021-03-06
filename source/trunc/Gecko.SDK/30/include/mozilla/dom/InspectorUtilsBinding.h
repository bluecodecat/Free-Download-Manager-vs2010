/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_InspectorUtilsBinding_h__
#define mozilla_dom_InspectorUtilsBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

struct InspectorRGBTripleAtoms;
class NativePropertyHooks;
class ProtoAndIfaceArray;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct InspectorRGBTriple : public DictionaryBase
{
  uint8_t mB;
  uint8_t mG;
  uint8_t mR;

  InspectorRGBTriple();

  explicit inline InspectorRGBTriple(const InspectorRGBTriple& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline InspectorRGBTriple(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, InspectorRGBTripleAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const InspectorRGBTriple& aOther);
};

namespace binding_detail {
struct FastInspectorRGBTriple : public InspectorRGBTriple
{
  inline FastInspectorRGBTriple()
    : InspectorRGBTriple(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_InspectorUtilsBinding_h__
