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
struct Delegate_t378097376;
// System.ComponentModel.ListEntry
struct ListEntry_t273374633;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3866233725;
// System.ComponentModel.ISite
struct ISite_t3082376888;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t2079273933;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t527996993;
// System.Collections.IComparer
struct IComparer_t2143127634;
// System.Collections.ArrayList
struct ArrayList_t3867410345;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2977429132;
// System.IntPtr[]
struct IntPtrU5BU5D_t1175376876;
// System.Collections.IDictionary
struct IDictionary_t295350754;
// System.Collections.IEnumerator
struct IEnumerator_t2062334834;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t403595626;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t117185631;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t1132502598;
// System.Collections.Hashtable
struct Hashtable_t916193709;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t1801119898;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3322010673;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t722839904;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3089358567;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t488308688;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2136446544;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1828503846;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2453909609;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t1944243311;
// System.Char[]
struct CharU5BU5D_t3978811185;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t1613873256;
// System.String[]
struct StringU5BU5D_t131720724;
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
#ifndef ENUMCOMPARER_T844396560_H
#define ENUMCOMPARER_T844396560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t844396560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T844396560_H
#ifndef LISTENTRY_T273374633_H
#define LISTENTRY_T273374633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t273374633  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t378097376 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t273374633 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t273374633, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t273374633, ___value_1)); }
	inline Delegate_t378097376 * get_value_1() const { return ___value_1; }
	inline Delegate_t378097376 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t378097376 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t273374633, ___next_2)); }
	inline ListEntry_t273374633 * get_next_2() const { return ___next_2; }
	inline ListEntry_t273374633 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t273374633 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T273374633_H
#ifndef EVENTHANDLERLIST_T3866233725_H
#define EVENTHANDLERLIST_T3866233725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t3866233725  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t273374633 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t378097376 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t3866233725, ___entries_0)); }
	inline ListEntry_t273374633 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t273374633 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t273374633 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t3866233725, ___null_entry_1)); }
	inline Delegate_t378097376 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t378097376 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t378097376 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T3866233725_H
#ifndef MARSHALBYVALUECOMPONENT_T4052398083_H
#define MARSHALBYVALUECOMPONENT_T4052398083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t4052398083  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t3866233725 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t4052398083, ___eventList_0)); }
	inline EventHandlerList_t3866233725 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t3866233725 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t3866233725 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t4052398083, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t4052398083, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T4052398083_H
#ifndef MEMBERDESCRIPTOR_T3125813082_H
#define MEMBERDESCRIPTOR_T3125813082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3125813082  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t2079273933* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t527996993 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3125813082, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3125813082, ___attrs_1)); }
	inline AttributeU5BU5D_t2079273933* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t2079273933** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t2079273933* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3125813082, ___attrCollection_2)); }
	inline AttributeCollection_t527996993 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t527996993 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t527996993 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t3125813082_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3125813082_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T3125813082_H
#ifndef MEMBERDESCRIPTORCOMPARER_T2030142704_H
#define MEMBERDESCRIPTORCOMPARER_T2030142704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t2030142704  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T2030142704_H
#ifndef CULTUREINFOCOMPARER_T3668266041_H
#define CULTUREINFOCOMPARER_T3668266041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t3668266041  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T3668266041_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T2032515041_H
#define PROPERTYDESCRIPTORCOLLECTION_T2032515041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t2032515041  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t3867410345 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t2032515041, ___properties_1)); }
	inline ArrayList_t3867410345 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t3867410345 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t3867410345 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t2032515041, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t2032515041_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t2032515041 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t2032515041_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t2032515041 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t2032515041 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t2032515041 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T2032515041_H
#ifndef ATTRIBUTE_T73266980_H
#define ATTRIBUTE_T73266980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t73266980  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T73266980_H
#ifndef TYPECONVERTER_T2453909609_H
#define TYPECONVERTER_T2453909609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2453909609  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2453909609_H
#ifndef EVENTARGS_T2356377238_H
#define EVENTARGS_T2356377238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2356377238  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2356377238_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2356377238 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2356377238_StaticFields, ___Empty_0)); }
	inline EventArgs_t2356377238 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2356377238 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2356377238 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2356377238_H
#ifndef ATTRIBUTECOLLECTION_T527996993_H
#define ATTRIBUTECOLLECTION_T527996993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t527996993  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t3867410345 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t527996993, ___attrList_0)); }
	inline ArrayList_t3867410345 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t3867410345 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t3867410345 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t527996993_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t527996993 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t527996993_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t527996993 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t527996993 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t527996993 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T527996993_H
#ifndef MARSHALBYREFOBJECT_T831623228_H
#define MARSHALBYREFOBJECT_T831623228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t831623228  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2977429132 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t831623228, ____identity_0)); }
	inline ServerIdentity_t2977429132 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2977429132 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2977429132 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T831623228_H
#ifndef READONLYCOLLECTIONBASE_T281148350_H
#define READONLYCOLLECTIONBASE_T281148350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t281148350  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t3867410345 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t281148350, ___list_0)); }
	inline ArrayList_t3867410345 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3867410345 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3867410345 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T281148350_H
#ifndef EXCEPTION_T2073411968_H
#define EXCEPTION_T2073411968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2073411968  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1175376876* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2073411968 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1175376876* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1175376876** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1175376876* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___inner_exception_1)); }
	inline Exception_t2073411968 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2073411968 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2073411968 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ____data_10)); }
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
#endif // EXCEPTION_T2073411968_H
#ifndef STRINGENUMERATOR_T611372676_H
#define STRINGENUMERATOR_T611372676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringEnumerator
struct  StringEnumerator_t611372676  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.StringEnumerator::enumerable
	RuntimeObject* ___enumerable_0;

public:
	inline static int32_t get_offset_of_enumerable_0() { return static_cast<int32_t>(offsetof(StringEnumerator_t611372676, ___enumerable_0)); }
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
#endif // STRINGENUMERATOR_T611372676_H
#ifndef DICTIONARYNODECOLLECTION_T921430959_H
#define DICTIONARYNODECOLLECTION_T921430959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t921430959  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t403595626 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t921430959, ___dict_0)); }
	inline ListDictionary_t403595626 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t403595626 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t403595626 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t921430959, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTION_T921430959_H
#ifndef INSTANCEDESCRIPTOR_T2918744043_H
#define INSTANCEDESCRIPTOR_T2918744043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t2918744043  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2918744043, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2918744043, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2918744043, ___isComplete_2)); }
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
#endif // INSTANCEDESCRIPTOR_T2918744043_H
#ifndef _ITEM_T1801119898_H
#define _ITEM_T1801119898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t1801119898  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t1801119898, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t1801119898, ___value_1)); }
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
#endif // _ITEM_T1801119898_H
#ifndef DICTIONARYNODEENUMERATOR_T1793709129_H
#define DICTIONARYNODEENUMERATOR_T1793709129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t1793709129  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t403595626 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t1132502598 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1793709129, ___dict_0)); }
	inline ListDictionary_t403595626 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t403595626 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t403595626 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1793709129, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1793709129, ___current_2)); }
	inline DictionaryNode_t1132502598 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t1132502598 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t1132502598 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1793709129, ___version_3)); }
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
#endif // DICTIONARYNODEENUMERATOR_T1793709129_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2136446544_H
#define NAMEOBJECTCOLLECTIONBASE_T2136446544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2136446544  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t916193709 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t1801119898 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t3867410345 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t722839904 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t3089358567 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___m_ItemsContainer_0)); }
	inline Hashtable_t916193709 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t916193709 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t916193709 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___m_NullKeyItem_1)); }
	inline _Item_t1801119898 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t1801119898 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t1801119898 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___m_ItemsArray_2)); }
	inline ArrayList_t3867410345 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t3867410345 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t3867410345 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___infoCopy_7)); }
	inline SerializationInfo_t722839904 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t722839904 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t722839904 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___keyscoll_8)); }
	inline KeysCollection_t3089358567 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t3089358567 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t3089358567 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2136446544, ___equality_comparer_9)); }
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
#endif // NAMEOBJECTCOLLECTIONBASE_T2136446544_H
#ifndef _KEYSENUMERATOR_T543036933_H
#define _KEYSENUMERATOR_T543036933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t543036933  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t2136446544 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t543036933, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2136446544 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2136446544 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2136446544 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t543036933, ___m_position_1)); }
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
#endif // _KEYSENUMERATOR_T543036933_H
#ifndef DICTIONARYNODE_T1132502598_H
#define DICTIONARYNODE_T1132502598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t1132502598  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t1132502598 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t1132502598, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t1132502598, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t1132502598, ___next_2)); }
	inline DictionaryNode_t1132502598 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t1132502598 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t1132502598 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T1132502598_H
#ifndef KEYSCOLLECTION_T3089358567_H
#define KEYSCOLLECTION_T3089358567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t3089358567  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t2136446544 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t3089358567, ___m_collection_0)); }
	inline NameObjectCollectionBase_t2136446544 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t2136446544 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t2136446544 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T3089358567_H
#ifndef HYBRIDDICTIONARY_T835008899_H
#define HYBRIDDICTIONARY_T835008899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t835008899  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t916193709 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t403595626 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t835008899, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t835008899, ___hashtable_1)); }
	inline Hashtable_t916193709 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t916193709 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t916193709 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t835008899, ___list_2)); }
	inline ListDictionary_t403595626 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t403595626 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t403595626 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T835008899_H
#ifndef VALUETYPE_T1642587522_H
#define VALUETYPE_T1642587522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1642587522  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1642587522_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1642587522_marshaled_com
{
};
#endif // VALUETYPE_T1642587522_H
#ifndef STRINGCOLLECTION_T2298403830_H
#define STRINGCOLLECTION_T2298403830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t2298403830  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t3867410345 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t2298403830, ___data_0)); }
	inline ArrayList_t3867410345 * get_data_0() const { return ___data_0; }
	inline ArrayList_t3867410345 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t3867410345 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T2298403830_H
#ifndef STRINGDICTIONARY_T3891252205_H
#define STRINGDICTIONARY_T3891252205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t3891252205  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t916193709 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t3891252205, ___contents_0)); }
	inline Hashtable_t916193709 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t916193709 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t916193709 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T3891252205_H
#ifndef LISTDICTIONARY_T403595626_H
#define LISTDICTIONARY_T403595626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t403595626  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t1132502598 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t403595626, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t403595626, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t403595626, ___head_2)); }
	inline DictionaryNode_t1132502598 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t1132502598 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t1132502598 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t403595626, ___comparer_3)); }
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
#endif // LISTDICTIONARY_T403595626_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T3831156795_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T3831156795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t3831156795  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t3831156795, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t3831156795, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T3831156795_H
#ifndef EXPANDABLEOBJECTCONVERTER_T1805364312_H
#define EXPANDABLEOBJECTCONVERTER_T1805364312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t1805364312  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T1805364312_H
#ifndef GUIDCONVERTER_T3868552449_H
#define GUIDCONVERTER_T3868552449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3868552449  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3868552449_H
#ifndef LISTBINDABLEATTRIBUTE_T2523740632_H
#define LISTBINDABLEATTRIBUTE_T2523740632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t2523740632  : public Attribute_t73266980
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2523740632, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t2523740632_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t2523740632 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t2523740632 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t2523740632 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2523740632_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t2523740632 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t2523740632 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t2523740632 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2523740632_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t2523740632 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t2523740632 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t2523740632 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t2523740632_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t2523740632 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t2523740632 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t2523740632 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T2523740632_H
#ifndef PROPERTYDESCRIPTOR_T2641612103_H
#define PROPERTYDESCRIPTOR_T2641612103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t2641612103  : public MemberDescriptor_t3125813082
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T2641612103_H
#ifndef NULLABLECONVERTER_T4264707312_H
#define NULLABLECONVERTER_T4264707312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t4264707312  : public TypeConverter_t2453909609
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2453909609 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t4264707312, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t4264707312, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t4264707312, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2453909609 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2453909609 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2453909609 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T4264707312_H
#ifndef PROPERTYCHANGEDEVENTARGS_T2869991721_H
#define PROPERTYCHANGEDEVENTARGS_T2869991721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t2869991721  : public EventArgs_t2356377238
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t2869991721, ___propertyName_1)); }
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
#endif // PROPERTYCHANGEDEVENTARGS_T2869991721_H
#ifndef READONLYATTRIBUTE_T2103922798_H
#define READONLYATTRIBUTE_T2103922798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t2103922798  : public Attribute_t73266980
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2103922798, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t2103922798_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t2103922798 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t2103922798 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t2103922798 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2103922798_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t2103922798 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t2103922798 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t2103922798 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2103922798_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t2103922798 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t2103922798 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t2103922798 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2103922798_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t2103922798 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t2103922798 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t2103922798 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T2103922798_H
#ifndef REFERENCECONVERTER_T1406265196_H
#define REFERENCECONVERTER_T1406265196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1406265196  : public TypeConverter_t2453909609
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1406265196, ___reference_type_0)); }
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
#endif // REFERENCECONVERTER_T1406265196_H
#ifndef STRINGCONVERTER_T570240707_H
#define STRINGCONVERTER_T570240707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t570240707  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T570240707_H
#ifndef TIMESPANCONVERTER_T2566949000_H
#define TIMESPANCONVERTER_T2566949000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t2566949000  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T2566949000_H
#ifndef TOOLBOXITEMATTRIBUTE_T218987904_H
#define TOOLBOXITEMATTRIBUTE_T218987904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t218987904  : public Attribute_t73266980
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_2;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_3;

public:
	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t218987904, ___itemType_2)); }
	inline Type_t * get_itemType_2() const { return ___itemType_2; }
	inline Type_t ** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(Type_t * value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_2), value);
	}

	inline static int32_t get_offset_of_itemTypeName_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t218987904, ___itemTypeName_3)); }
	inline String_t* get_itemTypeName_3() const { return ___itemTypeName_3; }
	inline String_t** get_address_of_itemTypeName_3() { return &___itemTypeName_3; }
	inline void set_itemTypeName_3(String_t* value)
	{
		___itemTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_3), value);
	}
};

struct ToolboxItemAttribute_t218987904_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t218987904 * ___Default_0;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t218987904 * ___None_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t218987904_StaticFields, ___Default_0)); }
	inline ToolboxItemAttribute_t218987904 * get_Default_0() const { return ___Default_0; }
	inline ToolboxItemAttribute_t218987904 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ToolboxItemAttribute_t218987904 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t218987904_StaticFields, ___None_1)); }
	inline ToolboxItemAttribute_t218987904 * get_None_1() const { return ___None_1; }
	inline ToolboxItemAttribute_t218987904 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(ToolboxItemAttribute_t218987904 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T218987904_H
#ifndef ENUMCONVERTER_T1303151863_H
#define ENUMCONVERTER_T1303151863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t1303151863  : public TypeConverter_t2453909609
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t1944243311 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t1303151863, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t1303151863, ___stdValues_1)); }
	inline StandardValuesCollection_t1944243311 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t1944243311 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t1944243311 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T1303151863_H
#ifndef ENUM_T2966527543_H
#define ENUM_T2966527543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2966527543  : public ValueType_t1642587522
{
public:

public:
};

struct Enum_t2966527543_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3978811185* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2966527543_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3978811185* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3978811185** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3978811185* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2966527543_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2966527543_marshaled_com
{
};
#endif // ENUM_T2966527543_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T1242131243_H
#define MERGABLEPROPERTYATTRIBUTE_T1242131243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t1242131243  : public Attribute_t73266980
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1242131243, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t1242131243_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t1242131243 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t1242131243 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t1242131243 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1242131243_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t1242131243 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t1242131243 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t1242131243 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1242131243_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t1242131243 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t1242131243 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t1242131243 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t1242131243_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t1242131243 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t1242131243 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t1242131243 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T1242131243_H
#ifndef EDITORATTRIBUTE_T89953439_H
#define EDITORATTRIBUTE_T89953439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t89953439  : public Attribute_t73266980
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t89953439, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t89953439, ___basename_1)); }
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
#endif // EDITORATTRIBUTE_T89953439_H
#ifndef MONOTODOATTRIBUTE_T103019451_H
#define MONOTODOATTRIBUTE_T103019451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t103019451  : public Attribute_t73266980
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t103019451, ___comment_0)); }
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
#endif // MONOTODOATTRIBUTE_T103019451_H
#ifndef COMPONENTCOLLECTION_T3567794463_H
#define COMPONENTCOLLECTION_T3567794463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t3567794463  : public ReadOnlyCollectionBase_t281148350
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T3567794463_H
#ifndef BOOLEANCONVERTER_T641244472_H
#define BOOLEANCONVERTER_T641244472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t641244472  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T641244472_H
#ifndef BROWSABLEATTRIBUTE_T42532030_H
#define BROWSABLEATTRIBUTE_T42532030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t42532030  : public Attribute_t73266980
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t42532030, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t42532030_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t42532030 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t42532030 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t42532030 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t42532030_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t42532030 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t42532030 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t42532030 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t42532030_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t42532030 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t42532030 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t42532030 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t42532030_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t42532030 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t42532030 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t42532030 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T42532030_H
#ifndef CATEGORYATTRIBUTE_T1613873256_H
#define CATEGORYATTRIBUTE_T1613873256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t1613873256  : public Attribute_t73266980
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1613873256, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1613873256, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t1613873256_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t1613873256 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1613873256_StaticFields, ___def_2)); }
	inline CategoryAttribute_t1613873256 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t1613873256 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t1613873256 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1613873256_StaticFields, ___lockobj_3)); }
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
#endif // CATEGORYATTRIBUTE_T1613873256_H
#ifndef CHARCONVERTER_T3590540500_H
#define CHARCONVERTER_T3590540500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t3590540500  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T3590540500_H
#ifndef COLLECTIONCONVERTER_T2852851786_H
#define COLLECTIONCONVERTER_T2852851786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t2852851786  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T2852851786_H
#ifndef COMPONENT_T1401598189_H
#define COMPONENT_T1401598189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t1401598189  : public MarshalByRefObject_t831623228
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t3866233725 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t1401598189, ___event_handlers_1)); }
	inline EventHandlerList_t3866233725 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t3866233725 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t3866233725 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t1401598189, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t1401598189, ___disposedEvent_3)); }
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
#endif // COMPONENT_T1401598189_H
#ifndef CULTUREINFOCONVERTER_T4074296488_H
#define CULTUREINFOCONVERTER_T4074296488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t4074296488  : public TypeConverter_t2453909609
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t1944243311 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t4074296488, ____standardValues_0)); }
	inline StandardValuesCollection_t1944243311 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t1944243311 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t1944243311 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T4074296488_H
#ifndef BASENUMBERCONVERTER_T1163817214_H
#define BASENUMBERCONVERTER_T1163817214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t1163817214  : public TypeConverter_t2453909609
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t1163817214, ___InnerType_0)); }
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
#endif // BASENUMBERCONVERTER_T1163817214_H
#ifndef DEFAULTEVENTATTRIBUTE_T937308770_H
#define DEFAULTEVENTATTRIBUTE_T937308770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t937308770  : public Attribute_t73266980
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t937308770, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t937308770_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t937308770 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t937308770_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t937308770 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t937308770 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t937308770 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T937308770_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T2327560709_H
#define DEFAULTPROPERTYATTRIBUTE_T2327560709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t2327560709  : public Attribute_t73266980
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t2327560709, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t2327560709_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t2327560709 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t2327560709_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t2327560709 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t2327560709 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t2327560709 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T2327560709_H
#ifndef DEFAULTVALUEATTRIBUTE_T2701471286_H
#define DEFAULTVALUEATTRIBUTE_T2701471286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t2701471286  : public Attribute_t73266980
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t2701471286, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T2701471286_H
#ifndef DATETIMECONVERTER_T3647953417_H
#define DATETIMECONVERTER_T3647953417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t3647953417  : public TypeConverter_t2453909609
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T3647953417_H
#ifndef NAMEVALUECOLLECTION_T4285905234_H
#define NAMEVALUECOLLECTION_T4285905234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t4285905234  : public NameObjectCollectionBase_t2136446544
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t131720724* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t131720724* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t4285905234, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t131720724* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t131720724** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t131720724* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t4285905234, ___cachedAll_11)); }
	inline StringU5BU5D_t131720724* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t131720724** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t131720724* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T4285905234_H
#ifndef SYSTEMEXCEPTION_T2446273261_H
#define SYSTEMEXCEPTION_T2446273261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2446273261  : public Exception_t2073411968
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2446273261_H
#ifndef DESIGNONLYATTRIBUTE_T346549209_H
#define DESIGNONLYATTRIBUTE_T346549209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t346549209  : public Attribute_t73266980
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t346549209, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t346549209_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t346549209 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t346549209 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t346549209 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t346549209_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t346549209 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t346549209 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t346549209 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t346549209_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t346549209 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t346549209 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t346549209 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t346549209_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t346549209 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t346549209 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t346549209 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T346549209_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T1924393081_H
#define DESIGNERCATEGORYATTRIBUTE_T1924393081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t1924393081  : public Attribute_t73266980
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1924393081, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t1924393081_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t1924393081 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t1924393081 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t1924393081 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t1924393081 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1924393081_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t1924393081 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t1924393081 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t1924393081 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1924393081_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t1924393081 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t1924393081 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t1924393081 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1924393081_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t1924393081 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t1924393081 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t1924393081 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1924393081_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t1924393081 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t1924393081 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t1924393081 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T1924393081_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T1025724941_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T1025724941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t1025724941  : public Attribute_t73266980
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1025724941, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t1025724941_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t1025724941 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t1025724941 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t1025724941 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1025724941_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t1025724941 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t1025724941 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t1025724941 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1025724941_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t1025724941 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t1025724941 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t1025724941 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1025724941_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t1025724941 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t1025724941 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t1025724941 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T1025724941_H
#ifndef DESIGNERATTRIBUTE_T1377660944_H
#define DESIGNERATTRIBUTE_T1377660944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t1377660944  : public Attribute_t73266980
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1377660944, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1377660944, ___basetypename_1)); }
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
#endif // DESIGNERATTRIBUTE_T1377660944_H
#ifndef DESCRIPTIONATTRIBUTE_T3890337366_H
#define DESCRIPTIONATTRIBUTE_T3890337366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t3890337366  : public Attribute_t73266980
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3890337366, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t3890337366_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t3890337366 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3890337366_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t3890337366 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t3890337366 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t3890337366 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T3890337366_H
#ifndef LISTSORTDIRECTION_T1877749140_H
#define LISTSORTDIRECTION_T1877749140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t1877749140 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t1877749140, ___value___1)); }
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
#endif // LISTSORTDIRECTION_T1877749140_H
#ifndef EDITORBROWSABLESTATE_T1664900524_H
#define EDITORBROWSABLESTATE_T1664900524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t1664900524 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t1664900524, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T1664900524_H
#ifndef BYTECONVERTER_T781285133_H
#define BYTECONVERTER_T781285133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t781285133  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T781285133_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T2174312452_H
#define DESIGNERSERIALIZATIONVISIBILITY_T2174312452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t2174312452 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t2174312452, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T2174312452_H
#ifndef COLLECTIONCHANGEACTION_T1069151349_H
#define COLLECTIONCHANGEACTION_T1069151349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t1069151349 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t1069151349, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T1069151349_H
#ifndef ARRAYCONVERTER_T2886665591_H
#define ARRAYCONVERTER_T2886665591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t2886665591  : public CollectionConverter_t2852851786
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T2886665591_H
#ifndef SINGLECONVERTER_T1804524199_H
#define SINGLECONVERTER_T1804524199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t1804524199  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T1804524199_H
#ifndef REFRESHPROPERTIES_T2500641561_H
#define REFRESHPROPERTIES_T2500641561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t2500641561 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t2500641561, ___value___1)); }
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
#endif // REFRESHPROPERTIES_T2500641561_H
#ifndef ARGUMENTEXCEPTION_T2974907625_H
#define ARGUMENTEXCEPTION_T2974907625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t2974907625  : public SystemException_t2446273261
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t2974907625, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T2974907625_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T2169499273_H
#define REFLECTIONPROPERTYDESCRIPTOR_T2169499273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t2169499273  : public PropertyDescriptor_t2641612103
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2169499273, ____member_4)); }
	inline PropertyInfo_t * get__member_4() const { return ____member_4; }
	inline PropertyInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(PropertyInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2169499273, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t2169499273, ____propertyType_6)); }
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
#endif // REFLECTIONPROPERTYDESCRIPTOR_T2169499273_H
#ifndef DOUBLECONVERTER_T450810574_H
#define DOUBLECONVERTER_T450810574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t450810574  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T450810574_H
#ifndef COMPONENTCONVERTER_T2166390519_H
#define COMPONENTCONVERTER_T2166390519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t2166390519  : public ReferenceConverter_t1406265196
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T2166390519_H
#ifndef INT16CONVERTER_T2716205274_H
#define INT16CONVERTER_T2716205274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t2716205274  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T2716205274_H
#ifndef DECIMALCONVERTER_T3746474170_H
#define DECIMALCONVERTER_T3746474170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t3746474170  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T3746474170_H
#ifndef INT32CONVERTER_T1662691493_H
#define INT32CONVERTER_T1662691493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t1662691493  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T1662691493_H
#ifndef INT64CONVERTER_T539762520_H
#define INT64CONVERTER_T539762520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t539762520  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T539762520_H
#ifndef SBYTECONVERTER_T4263688359_H
#define SBYTECONVERTER_T4263688359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t4263688359  : public BaseNumberConverter_t1163817214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T4263688359_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T94360987_H
#define ARRAYPROPERTYDESCRIPTOR_T94360987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t94360987  : public PropertyDescriptor_t2641612103
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_4;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_5;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t94360987, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_array_type_5() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t94360987, ___array_type_5)); }
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
#endif // ARRAYPROPERTYDESCRIPTOR_T94360987_H
#ifndef EDITORBROWSABLEATTRIBUTE_T3516448866_H
#define EDITORBROWSABLEATTRIBUTE_T3516448866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t3516448866  : public Attribute_t73266980
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t3516448866, ___state_0)); }
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
#endif // EDITORBROWSABLEATTRIBUTE_T3516448866_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T1837589154_H
#define REFRESHPROPERTIESATTRIBUTE_T1837589154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t1837589154  : public Attribute_t73266980
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1837589154, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t1837589154_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t1837589154 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t1837589154 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t1837589154 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1837589154_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t1837589154 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t1837589154 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t1837589154 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1837589154_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t1837589154 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t1837589154 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t1837589154 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t1837589154_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t1837589154 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t1837589154 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t1837589154 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T1837589154_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T785242675_H
#define INVALIDENUMARGUMENTEXCEPTION_T785242675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t785242675  : public ArgumentException_t2974907625
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T785242675_H
#ifndef COLLECTIONCHANGEEVENTARGS_T3327682369_H
#define COLLECTIONCHANGEEVENTARGS_T3327682369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t3327682369  : public EventArgs_t2356377238
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t3327682369, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t3327682369, ___theElement_2)); }
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
#endif // COLLECTIONCHANGEEVENTARGS_T3327682369_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2073974342_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2073974342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t2073974342  : public Attribute_t73266980
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2073974342, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t2073974342_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t2073974342 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t2073974342 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t2073974342 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t2073974342 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2073974342_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t2073974342 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t2073974342 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t2073974342 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2073974342_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t2073974342 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t2073974342 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t2073974342 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2073974342_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t2073974342 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t2073974342 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t2073974342 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2073974342_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t2073974342 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t2073974342 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t2073974342 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2073974342_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (MonoTODOAttribute_t103019451), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1100[1] = 
{
	MonoTODOAttribute_t103019451::get_offset_of_comment_0(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (HybridDictionary_t835008899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[3] = 
{
	HybridDictionary_t835008899::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t835008899::get_offset_of_hashtable_1(),
	HybridDictionary_t835008899::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (ListDictionary_t403595626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1109[4] = 
{
	ListDictionary_t403595626::get_offset_of_count_0(),
	ListDictionary_t403595626::get_offset_of_version_1(),
	ListDictionary_t403595626::get_offset_of_head_2(),
	ListDictionary_t403595626::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (DictionaryNode_t1132502598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1110[3] = 
{
	DictionaryNode_t1132502598::get_offset_of_key_0(),
	DictionaryNode_t1132502598::get_offset_of_value_1(),
	DictionaryNode_t1132502598::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (DictionaryNodeEnumerator_t1793709129), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[4] = 
{
	DictionaryNodeEnumerator_t1793709129::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t1793709129::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t1793709129::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t1793709129::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (DictionaryNodeCollection_t921430959), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1112[2] = 
{
	DictionaryNodeCollection_t921430959::get_offset_of_dict_0(),
	DictionaryNodeCollection_t921430959::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (DictionaryNodeCollectionEnumerator_t3831156795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[2] = 
{
	DictionaryNodeCollectionEnumerator_t3831156795::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t3831156795::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (NameObjectCollectionBase_t2136446544), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[10] = 
{
	NameObjectCollectionBase_t2136446544::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t2136446544::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t2136446544::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t2136446544::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t2136446544::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t2136446544::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t2136446544::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t2136446544::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t2136446544::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t2136446544::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (_Item_t1801119898), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[2] = 
{
	_Item_t1801119898::get_offset_of_key_0(),
	_Item_t1801119898::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (_KeysEnumerator_t543036933), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[2] = 
{
	_KeysEnumerator_t543036933::get_offset_of_m_collection_0(),
	_KeysEnumerator_t543036933::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (KeysCollection_t3089358567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[1] = 
{
	KeysCollection_t3089358567::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (NameValueCollection_t4285905234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[2] = 
{
	NameValueCollection_t4285905234::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t4285905234::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (StringCollection_t2298403830), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[1] = 
{
	StringCollection_t2298403830::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (StringDictionary_t3891252205), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[1] = 
{
	StringDictionary_t3891252205::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (StringEnumerator_t611372676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[1] = 
{
	StringEnumerator_t611372676::get_offset_of_enumerable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (InstanceDescriptor_t2918744043), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[3] = 
{
	InstanceDescriptor_t2918744043::get_offset_of_member_0(),
	InstanceDescriptor_t2918744043::get_offset_of_arguments_1(),
	InstanceDescriptor_t2918744043::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (ArrayConverter_t2886665591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (ArrayPropertyDescriptor_t94360987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[2] = 
{
	ArrayPropertyDescriptor_t94360987::get_offset_of_index_4(),
	ArrayPropertyDescriptor_t94360987::get_offset_of_array_type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (AttributeCollection_t527996993), -1, sizeof(AttributeCollection_t527996993_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1130[2] = 
{
	AttributeCollection_t527996993::get_offset_of_attrList_0(),
	AttributeCollection_t527996993_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (BaseNumberConverter_t1163817214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[1] = 
{
	BaseNumberConverter_t1163817214::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (BooleanConverter_t641244472), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (BrowsableAttribute_t42532030), -1, sizeof(BrowsableAttribute_t42532030_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1133[4] = 
{
	BrowsableAttribute_t42532030::get_offset_of_browsable_0(),
	BrowsableAttribute_t42532030_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t42532030_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t42532030_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (ByteConverter_t781285133), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (CategoryAttribute_t1613873256), -1, sizeof(CategoryAttribute_t1613873256_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1135[4] = 
{
	CategoryAttribute_t1613873256::get_offset_of_category_0(),
	CategoryAttribute_t1613873256::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t1613873256_StaticFields::get_offset_of_def_2(),
	CategoryAttribute_t1613873256_StaticFields::get_offset_of_lockobj_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (CharConverter_t3590540500), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (CollectionChangeAction_t1069151349)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1137[4] = 
{
	CollectionChangeAction_t1069151349::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (CollectionChangeEventArgs_t3327682369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1138[2] = 
{
	CollectionChangeEventArgs_t3327682369::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t3327682369::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (CollectionConverter_t2852851786), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (Component_t1401598189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1140[3] = 
{
	Component_t1401598189::get_offset_of_event_handlers_1(),
	Component_t1401598189::get_offset_of_mySite_2(),
	Component_t1401598189::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (ComponentCollection_t3567794463), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (ComponentConverter_t2166390519), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (CultureInfoConverter_t4074296488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1143[1] = 
{
	CultureInfoConverter_t4074296488::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (CultureInfoComparer_t3668266041), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (DateTimeConverter_t3647953417), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (DecimalConverter_t3746474170), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (DefaultEventAttribute_t937308770), -1, sizeof(DefaultEventAttribute_t937308770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1147[2] = 
{
	DefaultEventAttribute_t937308770::get_offset_of_eventName_0(),
	DefaultEventAttribute_t937308770_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (DefaultPropertyAttribute_t2327560709), -1, sizeof(DefaultPropertyAttribute_t2327560709_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[2] = 
{
	DefaultPropertyAttribute_t2327560709::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t2327560709_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (DefaultValueAttribute_t2701471286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1149[1] = 
{
	DefaultValueAttribute_t2701471286::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (DescriptionAttribute_t3890337366), -1, sizeof(DescriptionAttribute_t3890337366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1150[2] = 
{
	DescriptionAttribute_t3890337366::get_offset_of_desc_0(),
	DescriptionAttribute_t3890337366_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (DesignOnlyAttribute_t346549209), -1, sizeof(DesignOnlyAttribute_t346549209_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1151[4] = 
{
	DesignOnlyAttribute_t346549209::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t346549209_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t346549209_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t346549209_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (DesignTimeVisibleAttribute_t1025724941), -1, sizeof(DesignTimeVisibleAttribute_t1025724941_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1152[4] = 
{
	DesignTimeVisibleAttribute_t1025724941::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t1025724941_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t1025724941_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t1025724941_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (DesignerAttribute_t1377660944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[2] = 
{
	DesignerAttribute_t1377660944::get_offset_of_name_0(),
	DesignerAttribute_t1377660944::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (DesignerCategoryAttribute_t1924393081), -1, sizeof(DesignerCategoryAttribute_t1924393081_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1154[5] = 
{
	DesignerCategoryAttribute_t1924393081::get_offset_of_category_0(),
	DesignerCategoryAttribute_t1924393081_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t1924393081_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t1924393081_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t1924393081_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (DesignerSerializationVisibility_t2174312452)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1155[4] = 
{
	DesignerSerializationVisibility_t2174312452::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (DesignerSerializationVisibilityAttribute_t2073974342), -1, sizeof(DesignerSerializationVisibilityAttribute_t2073974342_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1156[5] = 
{
	DesignerSerializationVisibilityAttribute_t2073974342::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t2073974342_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t2073974342_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t2073974342_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t2073974342_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (DoubleConverter_t450810574), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (EditorAttribute_t89953439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[2] = 
{
	EditorAttribute_t89953439::get_offset_of_name_0(),
	EditorAttribute_t89953439::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (EditorBrowsableAttribute_t3516448866), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1159[1] = 
{
	EditorBrowsableAttribute_t3516448866::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (EditorBrowsableState_t1664900524)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1160[4] = 
{
	EditorBrowsableState_t1664900524::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (EnumConverter_t1303151863), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1161[2] = 
{
	EnumConverter_t1303151863::get_offset_of_type_0(),
	EnumConverter_t1303151863::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (EnumComparer_t844396560), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (ListEntry_t273374633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1163[3] = 
{
	ListEntry_t273374633::get_offset_of_key_0(),
	ListEntry_t273374633::get_offset_of_value_1(),
	ListEntry_t273374633::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (EventHandlerList_t3866233725), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1164[2] = 
{
	EventHandlerList_t3866233725::get_offset_of_entries_0(),
	EventHandlerList_t3866233725::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (ExpandableObjectConverter_t1805364312), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (GuidConverter_t3868552449), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (Int16Converter_t2716205274), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (Int32Converter_t1662691493), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (Int64Converter_t539762520), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (InvalidEnumArgumentException_t785242675), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (ListBindableAttribute_t2523740632), -1, sizeof(ListBindableAttribute_t2523740632_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1180[4] = 
{
	ListBindableAttribute_t2523740632_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t2523740632_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t2523740632_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t2523740632::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (ListSortDirection_t1877749140)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1181[3] = 
{
	ListSortDirection_t1877749140::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (MarshalByValueComponent_t4052398083), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1182[3] = 
{
	MarshalByValueComponent_t4052398083::get_offset_of_eventList_0(),
	MarshalByValueComponent_t4052398083::get_offset_of_mySite_1(),
	MarshalByValueComponent_t4052398083::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (MemberDescriptor_t3125813082), -1, sizeof(MemberDescriptor_t3125813082_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1183[4] = 
{
	MemberDescriptor_t3125813082::get_offset_of_name_0(),
	MemberDescriptor_t3125813082::get_offset_of_attrs_1(),
	MemberDescriptor_t3125813082::get_offset_of_attrCollection_2(),
	MemberDescriptor_t3125813082_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (MemberDescriptorComparer_t2030142704), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (MergablePropertyAttribute_t1242131243), -1, sizeof(MergablePropertyAttribute_t1242131243_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1185[4] = 
{
	MergablePropertyAttribute_t1242131243::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t1242131243_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t1242131243_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t1242131243_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (NullableConverter_t4264707312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[3] = 
{
	NullableConverter_t4264707312::get_offset_of_nullableType_0(),
	NullableConverter_t4264707312::get_offset_of_underlyingType_1(),
	NullableConverter_t4264707312::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (PropertyChangedEventArgs_t2869991721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1187[1] = 
{
	PropertyChangedEventArgs_t2869991721::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (PropertyDescriptor_t2641612103), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (PropertyDescriptorCollection_t2032515041), -1, sizeof(PropertyDescriptorCollection_t2032515041_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1189[3] = 
{
	PropertyDescriptorCollection_t2032515041_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t2032515041::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t2032515041::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ReadOnlyAttribute_t2103922798), -1, sizeof(ReadOnlyAttribute_t2103922798_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1190[4] = 
{
	ReadOnlyAttribute_t2103922798::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t2103922798_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t2103922798_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t2103922798_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (ReferenceConverter_t1406265196), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[1] = 
{
	ReferenceConverter_t1406265196::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ReflectionPropertyDescriptor_t2169499273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[3] = 
{
	ReflectionPropertyDescriptor_t2169499273::get_offset_of__member_4(),
	ReflectionPropertyDescriptor_t2169499273::get_offset_of__componentType_5(),
	ReflectionPropertyDescriptor_t2169499273::get_offset_of__propertyType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (RefreshProperties_t2500641561)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1193[4] = 
{
	RefreshProperties_t2500641561::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (RefreshPropertiesAttribute_t1837589154), -1, sizeof(RefreshPropertiesAttribute_t1837589154_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1194[4] = 
{
	RefreshPropertiesAttribute_t1837589154::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t1837589154_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t1837589154_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t1837589154_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (SByteConverter_t4263688359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (SingleConverter_t1804524199), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (StringConverter_t570240707), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (TimeSpanConverter_t2566949000), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (ToolboxItemAttribute_t218987904), -1, sizeof(ToolboxItemAttribute_t218987904_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1199[4] = 
{
	ToolboxItemAttribute_t218987904_StaticFields::get_offset_of_Default_0(),
	ToolboxItemAttribute_t218987904_StaticFields::get_offset_of_None_1(),
	ToolboxItemAttribute_t218987904::get_offset_of_itemType_2(),
	ToolboxItemAttribute_t218987904::get_offset_of_itemTypeName_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
