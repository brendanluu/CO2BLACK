#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Delegate
struct Delegate_t2757275082;
// System.ComponentModel.ListEntry
struct ListEntry_t1848973865;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3768973489;
// System.ComponentModel.ISite
struct ISite_t77941032;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t4293003447;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2160707079;
// System.Collections.IComparer
struct IComparer_t209824574;
// System.Collections.ArrayList
struct ArrayList_t1004296020;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2489369522;
// System.IntPtr[]
struct IntPtrU5BU5D_t1958778070;
// System.Collections.IDictionary
struct IDictionary_t1650869250;
// System.Collections.IEnumerator
struct IEnumerator_t2790178461;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1721508986;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t2595379383;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2157060358;
// System.Collections.Hashtable
struct Hashtable_t1579358919;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t3600713504;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3767106482;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t885769560;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t4076741920;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t4100824425;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t3187480132;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t2516631175;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t139043044;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t898630540;
// System.Char[]
struct CharU5BU5D_t204761021;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t3719675447;
// System.String[]
struct StringU5BU5D_t3517288861;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ENUMCOMPARER_T3137996732_H
#define ENUMCOMPARER_T3137996732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t3137996732  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T3137996732_H
#ifndef LISTENTRY_T1848973865_H
#define LISTENTRY_T1848973865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t1848973865  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t2757275082 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t1848973865 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t1848973865, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t1848973865, ___value_1)); }
	inline Delegate_t2757275082 * get_value_1() const { return ___value_1; }
	inline Delegate_t2757275082 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t2757275082 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t1848973865, ___next_2)); }
	inline ListEntry_t1848973865 * get_next_2() const { return ___next_2; }
	inline ListEntry_t1848973865 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t1848973865 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T1848973865_H
#ifndef EVENTHANDLERLIST_T3768973489_H
#define EVENTHANDLERLIST_T3768973489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t3768973489  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t1848973865 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t2757275082 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t3768973489, ___entries_0)); }
	inline ListEntry_t1848973865 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t1848973865 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t1848973865 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t3768973489, ___null_entry_1)); }
	inline Delegate_t2757275082 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t2757275082 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t2757275082 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T3768973489_H
#ifndef MARSHALBYVALUECOMPONENT_T1922440201_H
#define MARSHALBYVALUECOMPONENT_T1922440201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t1922440201  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t3768973489 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1922440201, ___eventList_0)); }
	inline EventHandlerList_t3768973489 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t3768973489 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t3768973489 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1922440201, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1922440201, ___disposedEvent_2)); }
	inline RuntimeObject * get_disposedEvent_2() const { return ___disposedEvent_2; }
	inline RuntimeObject ** get_address_of_disposedEvent_2() { return &___disposedEvent_2; }
	inline void set_disposedEvent_2(RuntimeObject * value)
	{
		___disposedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYVALUECOMPONENT_T1922440201_H
#ifndef MEMBERDESCRIPTOR_T1691648034_H
#define MEMBERDESCRIPTOR_T1691648034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t1691648034  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t4293003447* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t2160707079 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1691648034, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1691648034, ___attrs_1)); }
	inline AttributeU5BU5D_t4293003447* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t4293003447** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t4293003447* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1691648034, ___attrCollection_2)); }
	inline AttributeCollection_t2160707079 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t2160707079 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t2160707079 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t1691648034_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1691648034_StaticFields, ___default_comparer_3)); }
	inline RuntimeObject* get_default_comparer_3() const { return ___default_comparer_3; }
	inline RuntimeObject** get_address_of_default_comparer_3() { return &___default_comparer_3; }
	inline void set_default_comparer_3(RuntimeObject* value)
	{
		___default_comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___default_comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T1691648034_H
#ifndef MEMBERDESCRIPTORCOMPARER_T641404050_H
#define MEMBERDESCRIPTORCOMPARER_T641404050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t641404050  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T641404050_H
#ifndef CULTUREINFOCOMPARER_T1921086380_H
#define CULTUREINFOCOMPARER_T1921086380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t1921086380  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T1921086380_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T3614490649_H
#define PROPERTYDESCRIPTORCOLLECTION_T3614490649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t3614490649  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t1004296020 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3614490649, ___properties_1)); }
	inline ArrayList_t1004296020 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t1004296020 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t1004296020 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3614490649, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t3614490649_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t3614490649 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3614490649_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t3614490649 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t3614490649 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t3614490649 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T3614490649_H
#ifndef ATTRIBUTE_T1176385794_H
#define ATTRIBUTE_T1176385794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1176385794  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1176385794_H
#ifndef TYPECONVERTER_T139043044_H
#define TYPECONVERTER_T139043044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t139043044  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T139043044_H
#ifndef EVENTARGS_T1070293258_H
#define EVENTARGS_T1070293258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1070293258  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1070293258_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1070293258 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1070293258_StaticFields, ___Empty_0)); }
	inline EventArgs_t1070293258 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1070293258 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1070293258 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1070293258_H
#ifndef ATTRIBUTECOLLECTION_T2160707079_H
#define ATTRIBUTECOLLECTION_T2160707079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t2160707079  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t1004296020 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t2160707079, ___attrList_0)); }
	inline ArrayList_t1004296020 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t1004296020 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t1004296020 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t2160707079_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t2160707079 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t2160707079_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t2160707079 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t2160707079 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t2160707079 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T2160707079_H
#ifndef MARSHALBYREFOBJECT_T1608084657_H
#define MARSHALBYREFOBJECT_T1608084657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1608084657  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2489369522 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1608084657, ____identity_0)); }
	inline ServerIdentity_t2489369522 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2489369522 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2489369522 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1608084657_H
#ifndef READONLYCOLLECTIONBASE_T795669154_H
#define READONLYCOLLECTIONBASE_T795669154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t795669154  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t1004296020 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t795669154, ___list_0)); }
	inline ArrayList_t1004296020 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1004296020 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1004296020 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T795669154_H
#ifndef EXCEPTION_T2696948762_H
#define EXCEPTION_T2696948762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2696948762  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1958778070* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2696948762 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1958778070* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1958778070** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1958778070* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___inner_exception_1)); }
	inline Exception_t2696948762 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2696948762 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2696948762 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T2696948762_H
#ifndef STRINGENUMERATOR_T1221564134_H
#define STRINGENUMERATOR_T1221564134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringEnumerator
struct  StringEnumerator_t1221564134  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.StringEnumerator::enumerable
	RuntimeObject* ___enumerable_0;

public:
	inline static int32_t get_offset_of_enumerable_0() { return static_cast<int32_t>(offsetof(StringEnumerator_t1221564134, ___enumerable_0)); }
	inline RuntimeObject* get_enumerable_0() const { return ___enumerable_0; }
	inline RuntimeObject** get_address_of_enumerable_0() { return &___enumerable_0; }
	inline void set_enumerable_0(RuntimeObject* value)
	{
		___enumerable_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerable_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGENUMERATOR_T1221564134_H
#ifndef DICTIONARYNODECOLLECTION_T1002399496_H
#define DICTIONARYNODECOLLECTION_T1002399496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t1002399496  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1721508986 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t1002399496, ___dict_0)); }
	inline ListDictionary_t1721508986 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1721508986 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1721508986 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t1002399496, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTION_T1002399496_H
#ifndef INSTANCEDESCRIPTOR_T3685448073_H
#define INSTANCEDESCRIPTOR_T3685448073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t3685448073  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3685448073, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3685448073, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t3685448073, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T3685448073_H
#ifndef _ITEM_T3600713504_H
#define _ITEM_T3600713504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t3600713504  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t3600713504, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t3600713504, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _ITEM_T3600713504_H
#ifndef DICTIONARYNODEENUMERATOR_T3463933105_H
#define DICTIONARYNODEENUMERATOR_T3463933105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t3463933105  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1721508986 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t2157060358 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3463933105, ___dict_0)); }
	inline ListDictionary_t1721508986 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1721508986 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1721508986 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3463933105, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3463933105, ___current_2)); }
	inline DictionaryNode_t2157060358 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t2157060358 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t2157060358 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t3463933105, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODEENUMERATOR_T3463933105_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T3187480132_H
#define NAMEOBJECTCOLLECTIONBASE_T3187480132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t3187480132  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t1579358919 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t3600713504 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t1004296020 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t885769560 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t4076741920 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___m_ItemsContainer_0)); }
	inline Hashtable_t1579358919 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t1579358919 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t1579358919 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___m_NullKeyItem_1)); }
	inline _Item_t3600713504 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t3600713504 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t3600713504 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___m_ItemsArray_2)); }
	inline ArrayList_t1004296020 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t1004296020 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t1004296020 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___infoCopy_7)); }
	inline SerializationInfo_t885769560 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t885769560 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t885769560 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___keyscoll_8)); }
	inline KeysCollection_t4076741920 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t4076741920 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t4076741920 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t3187480132, ___equality_comparer_9)); }
	inline RuntimeObject* get_equality_comparer_9() const { return ___equality_comparer_9; }
	inline RuntimeObject** get_address_of_equality_comparer_9() { return &___equality_comparer_9; }
	inline void set_equality_comparer_9(RuntimeObject* value)
	{
		___equality_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___equality_comparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T3187480132_H
#ifndef _KEYSENUMERATOR_T1556627465_H
#define _KEYSENUMERATOR_T1556627465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t1556627465  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t3187480132 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t1556627465, ___m_collection_0)); }
	inline NameObjectCollectionBase_t3187480132 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t3187480132 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t3187480132 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t1556627465, ___m_position_1)); }
	inline int32_t get_m_position_1() const { return ___m_position_1; }
	inline int32_t* get_address_of_m_position_1() { return &___m_position_1; }
	inline void set_m_position_1(int32_t value)
	{
		___m_position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // _KEYSENUMERATOR_T1556627465_H
#ifndef DICTIONARYNODE_T2157060358_H
#define DICTIONARYNODE_T2157060358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t2157060358  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t2157060358 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t2157060358, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t2157060358, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t2157060358, ___next_2)); }
	inline DictionaryNode_t2157060358 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t2157060358 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t2157060358 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T2157060358_H
#ifndef KEYSCOLLECTION_T4076741920_H
#define KEYSCOLLECTION_T4076741920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t4076741920  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t3187480132 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t4076741920, ___m_collection_0)); }
	inline NameObjectCollectionBase_t3187480132 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t3187480132 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t3187480132 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T4076741920_H
#ifndef HYBRIDDICTIONARY_T3570642663_H
#define HYBRIDDICTIONARY_T3570642663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t3570642663  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t1579358919 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1721508986 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t3570642663, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t3570642663, ___hashtable_1)); }
	inline Hashtable_t1579358919 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t1579358919 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t1579358919 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t3570642663, ___list_2)); }
	inline ListDictionary_t1721508986 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t1721508986 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t1721508986 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T3570642663_H
#ifndef VALUETYPE_T3939321559_H
#define VALUETYPE_T3939321559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3939321559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3939321559_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3939321559_marshaled_com
{
};
#endif // VALUETYPE_T3939321559_H
#ifndef STRINGCOLLECTION_T1271062275_H
#define STRINGCOLLECTION_T1271062275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t1271062275  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t1004296020 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t1271062275, ___data_0)); }
	inline ArrayList_t1004296020 * get_data_0() const { return ___data_0; }
	inline ArrayList_t1004296020 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t1004296020 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T1271062275_H
#ifndef STRINGDICTIONARY_T3681979939_H
#define STRINGDICTIONARY_T3681979939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t3681979939  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t1579358919 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t3681979939, ___contents_0)); }
	inline Hashtable_t1579358919 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t1579358919 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t1579358919 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T3681979939_H
#ifndef LISTDICTIONARY_T1721508986_H
#define LISTDICTIONARY_T1721508986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1721508986  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t2157060358 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1721508986, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1721508986, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1721508986, ___head_2)); }
	inline DictionaryNode_t2157060358 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t2157060358 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t2157060358 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1721508986, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T1721508986_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T219093553_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T219093553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t219093553  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t219093553, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t219093553, ___isKeyList_1)); }
	inline bool get_isKeyList_1() const { return ___isKeyList_1; }
	inline bool* get_address_of_isKeyList_1() { return &___isKeyList_1; }
	inline void set_isKeyList_1(bool value)
	{
		___isKeyList_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T219093553_H
#ifndef EXPANDABLEOBJECTCONVERTER_T239021646_H
#define EXPANDABLEOBJECTCONVERTER_T239021646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t239021646  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T239021646_H
#ifndef GUIDCONVERTER_T1734302102_H
#define GUIDCONVERTER_T1734302102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1734302102  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1734302102_H
#ifndef LISTBINDABLEATTRIBUTE_T499552562_H
#define LISTBINDABLEATTRIBUTE_T499552562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t499552562  : public Attribute_t1176385794
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t499552562, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t499552562_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t499552562 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t499552562 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t499552562 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t499552562_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t499552562 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t499552562 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t499552562 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t499552562_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t499552562 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t499552562 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t499552562 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t499552562_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t499552562 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t499552562 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t499552562 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T499552562_H
#ifndef PROPERTYDESCRIPTOR_T2460604240_H
#define PROPERTYDESCRIPTOR_T2460604240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t2460604240  : public MemberDescriptor_t1691648034
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T2460604240_H
#ifndef NULLABLECONVERTER_T2843572450_H
#define NULLABLECONVERTER_T2843572450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t2843572450  : public TypeConverter_t139043044
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t139043044 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t2843572450, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t2843572450, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t2843572450, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t139043044 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t139043044 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t139043044 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T2843572450_H
#ifndef PROPERTYCHANGEDEVENTARGS_T4282074871_H
#define PROPERTYCHANGEDEVENTARGS_T4282074871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t4282074871  : public EventArgs_t1070293258
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t4282074871, ___propertyName_1)); }
	inline String_t* get_propertyName_1() const { return ___propertyName_1; }
	inline String_t** get_address_of_propertyName_1() { return &___propertyName_1; }
	inline void set_propertyName_1(String_t* value)
	{
		___propertyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___propertyName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCHANGEDEVENTARGS_T4282074871_H
#ifndef READONLYATTRIBUTE_T91240550_H
#define READONLYATTRIBUTE_T91240550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t91240550  : public Attribute_t1176385794
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t91240550, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t91240550_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t91240550 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t91240550 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t91240550 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t91240550_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t91240550 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t91240550 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t91240550 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t91240550_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t91240550 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t91240550 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t91240550 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t91240550_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t91240550 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t91240550 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t91240550 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T91240550_H
#ifndef REFERENCECONVERTER_T2181576518_H
#define REFERENCECONVERTER_T2181576518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t2181576518  : public TypeConverter_t139043044
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t2181576518, ___reference_type_0)); }
	inline Type_t * get_reference_type_0() const { return ___reference_type_0; }
	inline Type_t ** get_address_of_reference_type_0() { return &___reference_type_0; }
	inline void set_reference_type_0(Type_t * value)
	{
		___reference_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___reference_type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T2181576518_H
#ifndef STRINGCONVERTER_T2242616317_H
#define STRINGCONVERTER_T2242616317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t2242616317  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T2242616317_H
#ifndef TIMESPANCONVERTER_T648164363_H
#define TIMESPANCONVERTER_T648164363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t648164363  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T648164363_H
#ifndef TOOLBOXITEMATTRIBUTE_T1904735338_H
#define TOOLBOXITEMATTRIBUTE_T1904735338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t1904735338  : public Attribute_t1176385794
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_2;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_3;

public:
	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t1904735338, ___itemType_2)); }
	inline Type_t * get_itemType_2() const { return ___itemType_2; }
	inline Type_t ** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(Type_t * value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_2), value);
	}

	inline static int32_t get_offset_of_itemTypeName_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t1904735338, ___itemTypeName_3)); }
	inline String_t* get_itemTypeName_3() const { return ___itemTypeName_3; }
	inline String_t** get_address_of_itemTypeName_3() { return &___itemTypeName_3; }
	inline void set_itemTypeName_3(String_t* value)
	{
		___itemTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_3), value);
	}
};

struct ToolboxItemAttribute_t1904735338_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t1904735338 * ___Default_0;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t1904735338 * ___None_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t1904735338_StaticFields, ___Default_0)); }
	inline ToolboxItemAttribute_t1904735338 * get_Default_0() const { return ___Default_0; }
	inline ToolboxItemAttribute_t1904735338 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ToolboxItemAttribute_t1904735338 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t1904735338_StaticFields, ___None_1)); }
	inline ToolboxItemAttribute_t1904735338 * get_None_1() const { return ___None_1; }
	inline ToolboxItemAttribute_t1904735338 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(ToolboxItemAttribute_t1904735338 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T1904735338_H
#ifndef ENUMCONVERTER_T3994082443_H
#define ENUMCONVERTER_T3994082443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t3994082443  : public TypeConverter_t139043044
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t898630540 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t3994082443, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t3994082443, ___stdValues_1)); }
	inline StandardValuesCollection_t898630540 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t898630540 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t898630540 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T3994082443_H
#ifndef ENUM_T2079274484_H
#define ENUM_T2079274484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2079274484  : public ValueType_t3939321559
{
public:

public:
};

struct Enum_t2079274484_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t204761021* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2079274484_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t204761021* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t204761021** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t204761021* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2079274484_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2079274484_marshaled_com
{
};
#endif // ENUM_T2079274484_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T769002520_H
#define MERGABLEPROPERTYATTRIBUTE_T769002520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t769002520  : public Attribute_t1176385794
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t769002520, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t769002520_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t769002520 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t769002520 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t769002520 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t769002520_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t769002520 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t769002520 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t769002520 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t769002520_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t769002520 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t769002520 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t769002520 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t769002520_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t769002520 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t769002520 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t769002520 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T769002520_H
#ifndef EDITORATTRIBUTE_T3968065668_H
#define EDITORATTRIBUTE_T3968065668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t3968065668  : public Attribute_t1176385794
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t3968065668, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t3968065668, ___basename_1)); }
	inline String_t* get_basename_1() const { return ___basename_1; }
	inline String_t** get_address_of_basename_1() { return &___basename_1; }
	inline void set_basename_1(String_t* value)
	{
		___basename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORATTRIBUTE_T3968065668_H
#ifndef MONOTODOATTRIBUTE_T3410578934_H
#define MONOTODOATTRIBUTE_T3410578934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t3410578934  : public Attribute_t1176385794
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t3410578934, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T3410578934_H
#ifndef COMPONENTCOLLECTION_T587034656_H
#define COMPONENTCOLLECTION_T587034656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t587034656  : public ReadOnlyCollectionBase_t795669154
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T587034656_H
#ifndef BOOLEANCONVERTER_T1131532066_H
#define BOOLEANCONVERTER_T1131532066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t1131532066  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T1131532066_H
#ifndef BROWSABLEATTRIBUTE_T3881618246_H
#define BROWSABLEATTRIBUTE_T3881618246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t3881618246  : public Attribute_t1176385794
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3881618246, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t3881618246_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t3881618246 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t3881618246 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t3881618246 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3881618246_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t3881618246 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t3881618246 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t3881618246 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3881618246_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t3881618246 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t3881618246 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t3881618246 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t3881618246_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t3881618246 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t3881618246 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t3881618246 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T3881618246_H
#ifndef CATEGORYATTRIBUTE_T3719675447_H
#define CATEGORYATTRIBUTE_T3719675447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t3719675447  : public Attribute_t1176385794
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3719675447, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3719675447, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t3719675447_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t3719675447 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3719675447_StaticFields, ___def_2)); }
	inline CategoryAttribute_t3719675447 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t3719675447 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t3719675447 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3719675447_StaticFields, ___lockobj_3)); }
	inline RuntimeObject * get_lockobj_3() const { return ___lockobj_3; }
	inline RuntimeObject ** get_address_of_lockobj_3() { return &___lockobj_3; }
	inline void set_lockobj_3(RuntimeObject * value)
	{
		___lockobj_3 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYATTRIBUTE_T3719675447_H
#ifndef CHARCONVERTER_T3235449830_H
#define CHARCONVERTER_T3235449830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t3235449830  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T3235449830_H
#ifndef COLLECTIONCONVERTER_T25150736_H
#define COLLECTIONCONVERTER_T25150736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t25150736  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T25150736_H
#ifndef COMPONENT_T2240645860_H
#define COMPONENT_T2240645860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t2240645860  : public MarshalByRefObject_t1608084657
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t3768973489 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t2240645860, ___event_handlers_1)); }
	inline EventHandlerList_t3768973489 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t3768973489 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t3768973489 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t2240645860, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t2240645860, ___disposedEvent_3)); }
	inline RuntimeObject * get_disposedEvent_3() const { return ___disposedEvent_3; }
	inline RuntimeObject ** get_address_of_disposedEvent_3() { return &___disposedEvent_3; }
	inline void set_disposedEvent_3(RuntimeObject * value)
	{
		___disposedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___disposedEvent_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2240645860_H
#ifndef CULTUREINFOCONVERTER_T2293823248_H
#define CULTUREINFOCONVERTER_T2293823248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t2293823248  : public TypeConverter_t139043044
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t898630540 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t2293823248, ____standardValues_0)); }
	inline StandardValuesCollection_t898630540 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t898630540 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t898630540 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T2293823248_H
#ifndef BASENUMBERCONVERTER_T2303086145_H
#define BASENUMBERCONVERTER_T2303086145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t2303086145  : public TypeConverter_t139043044
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t2303086145, ___InnerType_0)); }
	inline Type_t * get_InnerType_0() const { return ___InnerType_0; }
	inline Type_t ** get_address_of_InnerType_0() { return &___InnerType_0; }
	inline void set_InnerType_0(Type_t * value)
	{
		___InnerType_0 = value;
		Il2CppCodeGenWriteBarrier((&___InnerType_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T2303086145_H
#ifndef DEFAULTEVENTATTRIBUTE_T1603045012_H
#define DEFAULTEVENTATTRIBUTE_T1603045012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t1603045012  : public Attribute_t1176385794
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t1603045012, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t1603045012_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t1603045012 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t1603045012_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t1603045012 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t1603045012 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t1603045012 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T1603045012_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T1620264219_H
#define DEFAULTPROPERTYATTRIBUTE_T1620264219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t1620264219  : public Attribute_t1176385794
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1620264219, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t1620264219_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t1620264219 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t1620264219_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t1620264219 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t1620264219 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t1620264219 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T1620264219_H
#ifndef DEFAULTVALUEATTRIBUTE_T3000096280_H
#define DEFAULTVALUEATTRIBUTE_T3000096280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t3000096280  : public Attribute_t1176385794
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t3000096280, ___DefaultValue_0)); }
	inline RuntimeObject * get_DefaultValue_0() const { return ___DefaultValue_0; }
	inline RuntimeObject ** get_address_of_DefaultValue_0() { return &___DefaultValue_0; }
	inline void set_DefaultValue_0(RuntimeObject * value)
	{
		___DefaultValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValue_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T3000096280_H
#ifndef DATETIMECONVERTER_T2543116011_H
#define DATETIMECONVERTER_T2543116011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2543116011  : public TypeConverter_t139043044
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2543116011_H
#ifndef NAMEVALUECOLLECTION_T2079161133_H
#define NAMEVALUECOLLECTION_T2079161133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t2079161133  : public NameObjectCollectionBase_t3187480132
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t3517288861* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t3517288861* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t2079161133, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t3517288861* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t3517288861** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t3517288861* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t2079161133, ___cachedAll_11)); }
	inline StringU5BU5D_t3517288861* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t3517288861** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t3517288861* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T2079161133_H
#ifndef SYSTEMEXCEPTION_T1142596300_H
#define SYSTEMEXCEPTION_T1142596300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1142596300  : public Exception_t2696948762
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1142596300_H
#ifndef DESIGNONLYATTRIBUTE_T3321136076_H
#define DESIGNONLYATTRIBUTE_T3321136076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t3321136076  : public Attribute_t1176385794
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3321136076, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t3321136076_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t3321136076 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t3321136076 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t3321136076 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3321136076_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t3321136076 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t3321136076 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t3321136076 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3321136076_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t3321136076 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t3321136076 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t3321136076 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3321136076_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t3321136076 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t3321136076 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t3321136076 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T3321136076_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T708818055_H
#define DESIGNERCATEGORYATTRIBUTE_T708818055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t708818055  : public Attribute_t1176385794
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t708818055, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t708818055_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t708818055 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t708818055 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t708818055 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t708818055 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t708818055_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t708818055 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t708818055 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t708818055 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t708818055_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t708818055 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t708818055 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t708818055 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t708818055_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t708818055 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t708818055 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t708818055 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t708818055_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t708818055 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t708818055 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t708818055 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T708818055_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T1285345037_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T1285345037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t1285345037  : public Attribute_t1176385794
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1285345037, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t1285345037_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t1285345037 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t1285345037 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t1285345037 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1285345037_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t1285345037 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t1285345037 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t1285345037 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1285345037_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t1285345037 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t1285345037 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t1285345037 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1285345037_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t1285345037 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t1285345037 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t1285345037 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T1285345037_H
#ifndef DESIGNERATTRIBUTE_T4059637883_H
#define DESIGNERATTRIBUTE_T4059637883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t4059637883  : public Attribute_t1176385794
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t4059637883, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t4059637883, ___basetypename_1)); }
	inline String_t* get_basetypename_1() const { return ___basetypename_1; }
	inline String_t** get_address_of_basetypename_1() { return &___basetypename_1; }
	inline void set_basetypename_1(String_t* value)
	{
		___basetypename_1 = value;
		Il2CppCodeGenWriteBarrier((&___basetypename_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T4059637883_H
#ifndef DESCRIPTIONATTRIBUTE_T2204886522_H
#define DESCRIPTIONATTRIBUTE_T2204886522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t2204886522  : public Attribute_t1176385794
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2204886522, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t2204886522_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2204886522 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2204886522_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t2204886522 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t2204886522 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t2204886522 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T2204886522_H
#ifndef LISTSORTDIRECTION_T2355622229_H
#define LISTSORTDIRECTION_T2355622229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t2355622229 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t2355622229, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTSORTDIRECTION_T2355622229_H
#ifndef EDITORBROWSABLESTATE_T3536124568_H
#define EDITORBROWSABLESTATE_T3536124568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t3536124568 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t3536124568, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLESTATE_T3536124568_H
#ifndef BYTECONVERTER_T2548910651_H
#define BYTECONVERTER_T2548910651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t2548910651  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T2548910651_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T180556621_H
#define DESIGNERSERIALIZATIONVISIBILITY_T180556621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t180556621 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t180556621, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITY_T180556621_H
#ifndef COLLECTIONCHANGEACTION_T1776707749_H
#define COLLECTIONCHANGEACTION_T1776707749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t1776707749 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t1776707749, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEACTION_T1776707749_H
#ifndef ARRAYCONVERTER_T1274761764_H
#define ARRAYCONVERTER_T1274761764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1274761764  : public CollectionConverter_t25150736
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1274761764_H
#ifndef SINGLECONVERTER_T1709494795_H
#define SINGLECONVERTER_T1709494795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t1709494795  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T1709494795_H
#ifndef REFRESHPROPERTIES_T2261747670_H
#define REFRESHPROPERTIES_T2261747670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t2261747670 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t2261747670, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIES_T2261747670_H
#ifndef ARGUMENTEXCEPTION_T3885435891_H
#define ARGUMENTEXCEPTION_T3885435891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3885435891  : public SystemException_t1142596300
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3885435891, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3885435891_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T1522331175_H
#define REFLECTIONPROPERTYDESCRIPTOR_T1522331175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t1522331175  : public PropertyDescriptor_t2460604240
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1522331175, ____member_4)); }
	inline PropertyInfo_t * get__member_4() const { return ____member_4; }
	inline PropertyInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(PropertyInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1522331175, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1522331175, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((&____propertyType_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTIONPROPERTYDESCRIPTOR_T1522331175_H
#ifndef DOUBLECONVERTER_T593719863_H
#define DOUBLECONVERTER_T593719863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t593719863  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T593719863_H
#ifndef COMPONENTCONVERTER_T501725288_H
#define COMPONENTCONVERTER_T501725288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t501725288  : public ReferenceConverter_t2181576518
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T501725288_H
#ifndef INT16CONVERTER_T3544417269_H
#define INT16CONVERTER_T3544417269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t3544417269  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T3544417269_H
#ifndef DECIMALCONVERTER_T2698926054_H
#define DECIMALCONVERTER_T2698926054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t2698926054  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T2698926054_H
#ifndef INT32CONVERTER_T2006306115_H
#define INT32CONVERTER_T2006306115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t2006306115  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T2006306115_H
#ifndef INT64CONVERTER_T4180321708_H
#define INT64CONVERTER_T4180321708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t4180321708  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T4180321708_H
#ifndef SBYTECONVERTER_T695632779_H
#define SBYTECONVERTER_T695632779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t695632779  : public BaseNumberConverter_t2303086145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T695632779_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T2881178518_H
#define ARRAYPROPERTYDESCRIPTOR_T2881178518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t2881178518  : public PropertyDescriptor_t2460604240
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_4;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_5;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t2881178518, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_array_type_5() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t2881178518, ___array_type_5)); }
	inline Type_t * get_array_type_5() const { return ___array_type_5; }
	inline Type_t ** get_address_of_array_type_5() { return &___array_type_5; }
	inline void set_array_type_5(Type_t * value)
	{
		___array_type_5 = value;
		Il2CppCodeGenWriteBarrier((&___array_type_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYPROPERTYDESCRIPTOR_T2881178518_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1431417917_H
#define EDITORBROWSABLEATTRIBUTE_T1431417917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1431417917  : public Attribute_t1176385794
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1431417917, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1431417917_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T1664888957_H
#define REFRESHPROPERTIESATTRIBUTE_T1664888957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t1664888957  : public Attribute_t1176385794
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1664888957, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t1664888957_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t1664888957 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t1664888957 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t1664888957 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1664888957_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t1664888957 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t1664888957 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t1664888957 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1664888957_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t1664888957 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t1664888957 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t1664888957 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1664888957_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t1664888957 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t1664888957 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t1664888957 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T1664888957_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T3383598415_H
#define INVALIDENUMARGUMENTEXCEPTION_T3383598415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t3383598415  : public ArgumentException_t3885435891
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T3383598415_H
#ifndef COLLECTIONCHANGEEVENTARGS_T1733016235_H
#define COLLECTIONCHANGEEVENTARGS_T1733016235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t1733016235  : public EventArgs_t1070293258
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1733016235, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t1733016235, ___theElement_2)); }
	inline RuntimeObject * get_theElement_2() const { return ___theElement_2; }
	inline RuntimeObject ** get_address_of_theElement_2() { return &___theElement_2; }
	inline void set_theElement_2(RuntimeObject * value)
	{
		___theElement_2 = value;
		Il2CppCodeGenWriteBarrier((&___theElement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCHANGEEVENTARGS_T1733016235_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1114400506_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1114400506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t1114400506  : public Attribute_t1176385794
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1114400506, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t1114400506_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t1114400506 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t1114400506 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t1114400506 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t1114400506 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1114400506_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t1114400506 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t1114400506 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t1114400506 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1114400506_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t1114400506 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t1114400506 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t1114400506 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1114400506_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t1114400506 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t1114400506 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t1114400506 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t1114400506_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t1114400506 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t1114400506 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t1114400506 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T1114400506_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (MonoTODOAttribute_t3410578934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1100[1] = 
{
	MonoTODOAttribute_t3410578934::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1101 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1101[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1102 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1102[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1103 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1103[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1104 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1104[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1105 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1105[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1106 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1106[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1107 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1107[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (HybridDictionary_t3570642663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[3] = 
{
	HybridDictionary_t3570642663::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t3570642663::get_offset_of_hashtable_1(),
	HybridDictionary_t3570642663::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (ListDictionary_t1721508986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1109[4] = 
{
	ListDictionary_t1721508986::get_offset_of_count_0(),
	ListDictionary_t1721508986::get_offset_of_version_1(),
	ListDictionary_t1721508986::get_offset_of_head_2(),
	ListDictionary_t1721508986::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (DictionaryNode_t2157060358), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1110[3] = 
{
	DictionaryNode_t2157060358::get_offset_of_key_0(),
	DictionaryNode_t2157060358::get_offset_of_value_1(),
	DictionaryNode_t2157060358::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (DictionaryNodeEnumerator_t3463933105), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[4] = 
{
	DictionaryNodeEnumerator_t3463933105::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t3463933105::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t3463933105::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t3463933105::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (DictionaryNodeCollection_t1002399496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1112[2] = 
{
	DictionaryNodeCollection_t1002399496::get_offset_of_dict_0(),
	DictionaryNodeCollection_t1002399496::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (DictionaryNodeCollectionEnumerator_t219093553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[2] = 
{
	DictionaryNodeCollectionEnumerator_t219093553::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t219093553::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (NameObjectCollectionBase_t3187480132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[10] = 
{
	NameObjectCollectionBase_t3187480132::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t3187480132::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t3187480132::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t3187480132::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t3187480132::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t3187480132::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t3187480132::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t3187480132::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t3187480132::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t3187480132::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (_Item_t3600713504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[2] = 
{
	_Item_t3600713504::get_offset_of_key_0(),
	_Item_t3600713504::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (_KeysEnumerator_t1556627465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[2] = 
{
	_KeysEnumerator_t1556627465::get_offset_of_m_collection_0(),
	_KeysEnumerator_t1556627465::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (KeysCollection_t4076741920), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[1] = 
{
	KeysCollection_t4076741920::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (NameValueCollection_t2079161133), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[2] = 
{
	NameValueCollection_t2079161133::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t2079161133::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (StringCollection_t1271062275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[1] = 
{
	StringCollection_t1271062275::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (StringDictionary_t3681979939), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[1] = 
{
	StringDictionary_t3681979939::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (StringEnumerator_t1221564134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[1] = 
{
	StringEnumerator_t1221564134::get_offset_of_enumerable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (InstanceDescriptor_t3685448073), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[3] = 
{
	InstanceDescriptor_t3685448073::get_offset_of_member_0(),
	InstanceDescriptor_t3685448073::get_offset_of_arguments_1(),
	InstanceDescriptor_t3685448073::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (ArrayConverter_t1274761764), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (ArrayPropertyDescriptor_t2881178518), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[2] = 
{
	ArrayPropertyDescriptor_t2881178518::get_offset_of_index_4(),
	ArrayPropertyDescriptor_t2881178518::get_offset_of_array_type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (AttributeCollection_t2160707079), -1, sizeof(AttributeCollection_t2160707079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1130[2] = 
{
	AttributeCollection_t2160707079::get_offset_of_attrList_0(),
	AttributeCollection_t2160707079_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (BaseNumberConverter_t2303086145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[1] = 
{
	BaseNumberConverter_t2303086145::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (BooleanConverter_t1131532066), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (BrowsableAttribute_t3881618246), -1, sizeof(BrowsableAttribute_t3881618246_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1133[4] = 
{
	BrowsableAttribute_t3881618246::get_offset_of_browsable_0(),
	BrowsableAttribute_t3881618246_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t3881618246_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t3881618246_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (ByteConverter_t2548910651), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (CategoryAttribute_t3719675447), -1, sizeof(CategoryAttribute_t3719675447_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1135[4] = 
{
	CategoryAttribute_t3719675447::get_offset_of_category_0(),
	CategoryAttribute_t3719675447::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t3719675447_StaticFields::get_offset_of_def_2(),
	CategoryAttribute_t3719675447_StaticFields::get_offset_of_lockobj_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (CharConverter_t3235449830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (CollectionChangeAction_t1776707749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1137[4] = 
{
	CollectionChangeAction_t1776707749::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (CollectionChangeEventArgs_t1733016235), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1138[2] = 
{
	CollectionChangeEventArgs_t1733016235::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t1733016235::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (CollectionConverter_t25150736), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (Component_t2240645860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1140[3] = 
{
	Component_t2240645860::get_offset_of_event_handlers_1(),
	Component_t2240645860::get_offset_of_mySite_2(),
	Component_t2240645860::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (ComponentCollection_t587034656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (ComponentConverter_t501725288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (CultureInfoConverter_t2293823248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1143[1] = 
{
	CultureInfoConverter_t2293823248::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (CultureInfoComparer_t1921086380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (DateTimeConverter_t2543116011), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (DecimalConverter_t2698926054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (DefaultEventAttribute_t1603045012), -1, sizeof(DefaultEventAttribute_t1603045012_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1147[2] = 
{
	DefaultEventAttribute_t1603045012::get_offset_of_eventName_0(),
	DefaultEventAttribute_t1603045012_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (DefaultPropertyAttribute_t1620264219), -1, sizeof(DefaultPropertyAttribute_t1620264219_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[2] = 
{
	DefaultPropertyAttribute_t1620264219::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t1620264219_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (DefaultValueAttribute_t3000096280), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1149[1] = 
{
	DefaultValueAttribute_t3000096280::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (DescriptionAttribute_t2204886522), -1, sizeof(DescriptionAttribute_t2204886522_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1150[2] = 
{
	DescriptionAttribute_t2204886522::get_offset_of_desc_0(),
	DescriptionAttribute_t2204886522_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (DesignOnlyAttribute_t3321136076), -1, sizeof(DesignOnlyAttribute_t3321136076_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1151[4] = 
{
	DesignOnlyAttribute_t3321136076::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t3321136076_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t3321136076_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t3321136076_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (DesignTimeVisibleAttribute_t1285345037), -1, sizeof(DesignTimeVisibleAttribute_t1285345037_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1152[4] = 
{
	DesignTimeVisibleAttribute_t1285345037::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t1285345037_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t1285345037_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t1285345037_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (DesignerAttribute_t4059637883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[2] = 
{
	DesignerAttribute_t4059637883::get_offset_of_name_0(),
	DesignerAttribute_t4059637883::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (DesignerCategoryAttribute_t708818055), -1, sizeof(DesignerCategoryAttribute_t708818055_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1154[5] = 
{
	DesignerCategoryAttribute_t708818055::get_offset_of_category_0(),
	DesignerCategoryAttribute_t708818055_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t708818055_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t708818055_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t708818055_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (DesignerSerializationVisibility_t180556621)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1155[4] = 
{
	DesignerSerializationVisibility_t180556621::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (DesignerSerializationVisibilityAttribute_t1114400506), -1, sizeof(DesignerSerializationVisibilityAttribute_t1114400506_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1156[5] = 
{
	DesignerSerializationVisibilityAttribute_t1114400506::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t1114400506_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t1114400506_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t1114400506_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t1114400506_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (DoubleConverter_t593719863), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (EditorAttribute_t3968065668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[2] = 
{
	EditorAttribute_t3968065668::get_offset_of_name_0(),
	EditorAttribute_t3968065668::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (EditorBrowsableAttribute_t1431417917), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1159[1] = 
{
	EditorBrowsableAttribute_t1431417917::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (EditorBrowsableState_t3536124568)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1160[4] = 
{
	EditorBrowsableState_t3536124568::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (EnumConverter_t3994082443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1161[2] = 
{
	EnumConverter_t3994082443::get_offset_of_type_0(),
	EnumConverter_t3994082443::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (EnumComparer_t3137996732), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (ListEntry_t1848973865), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1163[3] = 
{
	ListEntry_t1848973865::get_offset_of_key_0(),
	ListEntry_t1848973865::get_offset_of_value_1(),
	ListEntry_t1848973865::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (EventHandlerList_t3768973489), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1164[2] = 
{
	EventHandlerList_t3768973489::get_offset_of_entries_0(),
	EventHandlerList_t3768973489::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (ExpandableObjectConverter_t239021646), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (GuidConverter_t1734302102), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (Int16Converter_t3544417269), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (Int32Converter_t2006306115), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (Int64Converter_t4180321708), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (InvalidEnumArgumentException_t3383598415), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (ListBindableAttribute_t499552562), -1, sizeof(ListBindableAttribute_t499552562_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1180[4] = 
{
	ListBindableAttribute_t499552562_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t499552562_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t499552562_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t499552562::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (ListSortDirection_t2355622229)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1181[3] = 
{
	ListSortDirection_t2355622229::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (MarshalByValueComponent_t1922440201), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1182[3] = 
{
	MarshalByValueComponent_t1922440201::get_offset_of_eventList_0(),
	MarshalByValueComponent_t1922440201::get_offset_of_mySite_1(),
	MarshalByValueComponent_t1922440201::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (MemberDescriptor_t1691648034), -1, sizeof(MemberDescriptor_t1691648034_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1183[4] = 
{
	MemberDescriptor_t1691648034::get_offset_of_name_0(),
	MemberDescriptor_t1691648034::get_offset_of_attrs_1(),
	MemberDescriptor_t1691648034::get_offset_of_attrCollection_2(),
	MemberDescriptor_t1691648034_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (MemberDescriptorComparer_t641404050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (MergablePropertyAttribute_t769002520), -1, sizeof(MergablePropertyAttribute_t769002520_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1185[4] = 
{
	MergablePropertyAttribute_t769002520::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t769002520_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t769002520_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t769002520_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (NullableConverter_t2843572450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[3] = 
{
	NullableConverter_t2843572450::get_offset_of_nullableType_0(),
	NullableConverter_t2843572450::get_offset_of_underlyingType_1(),
	NullableConverter_t2843572450::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (PropertyChangedEventArgs_t4282074871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1187[1] = 
{
	PropertyChangedEventArgs_t4282074871::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (PropertyDescriptor_t2460604240), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (PropertyDescriptorCollection_t3614490649), -1, sizeof(PropertyDescriptorCollection_t3614490649_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1189[3] = 
{
	PropertyDescriptorCollection_t3614490649_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t3614490649::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t3614490649::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ReadOnlyAttribute_t91240550), -1, sizeof(ReadOnlyAttribute_t91240550_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1190[4] = 
{
	ReadOnlyAttribute_t91240550::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t91240550_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t91240550_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t91240550_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (ReferenceConverter_t2181576518), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[1] = 
{
	ReferenceConverter_t2181576518::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ReflectionPropertyDescriptor_t1522331175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[3] = 
{
	ReflectionPropertyDescriptor_t1522331175::get_offset_of__member_4(),
	ReflectionPropertyDescriptor_t1522331175::get_offset_of__componentType_5(),
	ReflectionPropertyDescriptor_t1522331175::get_offset_of__propertyType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (RefreshProperties_t2261747670)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1193[4] = 
{
	RefreshProperties_t2261747670::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (RefreshPropertiesAttribute_t1664888957), -1, sizeof(RefreshPropertiesAttribute_t1664888957_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1194[4] = 
{
	RefreshPropertiesAttribute_t1664888957::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t1664888957_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t1664888957_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t1664888957_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (SByteConverter_t695632779), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (SingleConverter_t1709494795), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (StringConverter_t2242616317), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (TimeSpanConverter_t648164363), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (ToolboxItemAttribute_t1904735338), -1, sizeof(ToolboxItemAttribute_t1904735338_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1199[4] = 
{
	ToolboxItemAttribute_t1904735338_StaticFields::get_offset_of_Default_0(),
	ToolboxItemAttribute_t1904735338_StaticFields::get_offset_of_None_1(),
	ToolboxItemAttribute_t1904735338::get_offset_of_itemType_2(),
	ToolboxItemAttribute_t1904735338::get_offset_of_itemTypeName_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
