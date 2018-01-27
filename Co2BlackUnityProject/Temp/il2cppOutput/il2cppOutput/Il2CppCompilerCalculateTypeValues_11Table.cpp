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
struct Delegate_t801673651;
// System.ComponentModel.ListEntry
struct ListEntry_t3874298496;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1087968340;
// System.ComponentModel.ISite
struct ISite_t3725438725;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t2930258131;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3446190252;
// System.Collections.IComparer
struct IComparer_t3406770931;
// System.Collections.ArrayList
struct ArrayList_t1101967077;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2970456578;
// System.IntPtr[]
struct IntPtrU5BU5D_t1989084195;
// System.Collections.IDictionary
struct IDictionary_t2630098372;
// System.Collections.IEnumerator
struct IEnumerator_t2681114029;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1537629484;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t3848618038;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t1669451401;
// System.Collections.Hashtable
struct Hashtable_t185980411;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2878910013;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3205372670;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3828772948;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t941787167;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1360005268;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1747351877;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1228116821;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2175577306;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t4234082488;
// System.Char[]
struct CharU5BU5D_t634402932;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t3913174301;
// System.String[]
struct StringU5BU5D_t2345192506;
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
#ifndef ENUMCOMPARER_T3296709721_H
#define ENUMCOMPARER_T3296709721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t3296709721  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T3296709721_H
#ifndef LISTENTRY_T3874298496_H
#define LISTENTRY_T3874298496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t3874298496  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t801673651 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t3874298496 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t3874298496, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t3874298496, ___value_1)); }
	inline Delegate_t801673651 * get_value_1() const { return ___value_1; }
	inline Delegate_t801673651 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t801673651 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t3874298496, ___next_2)); }
	inline ListEntry_t3874298496 * get_next_2() const { return ___next_2; }
	inline ListEntry_t3874298496 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t3874298496 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T3874298496_H
#ifndef EVENTHANDLERLIST_T1087968340_H
#define EVENTHANDLERLIST_T1087968340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1087968340  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t3874298496 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t801673651 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1087968340, ___entries_0)); }
	inline ListEntry_t3874298496 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t3874298496 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t3874298496 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1087968340, ___null_entry_1)); }
	inline Delegate_t801673651 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t801673651 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t801673651 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1087968340_H
#ifndef MARSHALBYVALUECOMPONENT_T3226250876_H
#define MARSHALBYVALUECOMPONENT_T3226250876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t3226250876  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t1087968340 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3226250876, ___eventList_0)); }
	inline EventHandlerList_t1087968340 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t1087968340 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t1087968340 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3226250876, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3226250876, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T3226250876_H
#ifndef MEMBERDESCRIPTOR_T2001315964_H
#define MEMBERDESCRIPTOR_T2001315964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t2001315964  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t2930258131* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t3446190252 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2001315964, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2001315964, ___attrs_1)); }
	inline AttributeU5BU5D_t2930258131* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t2930258131** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t2930258131* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2001315964, ___attrCollection_2)); }
	inline AttributeCollection_t3446190252 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t3446190252 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t3446190252 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t2001315964_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t2001315964_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T2001315964_H
#ifndef MEMBERDESCRIPTORCOMPARER_T2524866766_H
#define MEMBERDESCRIPTORCOMPARER_T2524866766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t2524866766  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T2524866766_H
#ifndef CULTUREINFOCOMPARER_T4204772296_H
#define CULTUREINFOCOMPARER_T4204772296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t4204772296  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T4204772296_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T1420793436_H
#define PROPERTYDESCRIPTORCOLLECTION_T1420793436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t1420793436  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t1101967077 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1420793436, ___properties_1)); }
	inline ArrayList_t1101967077 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t1101967077 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t1101967077 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1420793436, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t1420793436_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t1420793436 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1420793436_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t1420793436 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t1420793436 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t1420793436 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T1420793436_H
#ifndef ATTRIBUTE_T3112973846_H
#define ATTRIBUTE_T3112973846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3112973846  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3112973846_H
#ifndef TYPECONVERTER_T2175577306_H
#define TYPECONVERTER_T2175577306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2175577306  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2175577306_H
#ifndef EVENTARGS_T22914321_H
#define EVENTARGS_T22914321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t22914321  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t22914321_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t22914321 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t22914321_StaticFields, ___Empty_0)); }
	inline EventArgs_t22914321 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t22914321 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t22914321 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T22914321_H
#ifndef ATTRIBUTECOLLECTION_T3446190252_H
#define ATTRIBUTECOLLECTION_T3446190252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t3446190252  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t1101967077 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t3446190252, ___attrList_0)); }
	inline ArrayList_t1101967077 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t1101967077 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t1101967077 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t3446190252_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t3446190252 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t3446190252_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t3446190252 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t3446190252 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t3446190252 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T3446190252_H
#ifndef MARSHALBYREFOBJECT_T1003039113_H
#define MARSHALBYREFOBJECT_T1003039113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1003039113  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2970456578 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1003039113, ____identity_0)); }
	inline ServerIdentity_t2970456578 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2970456578 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2970456578 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T1003039113_H
#ifndef READONLYCOLLECTIONBASE_T376302787_H
#define READONLYCOLLECTIONBASE_T376302787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t376302787  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t1101967077 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t376302787, ___list_0)); }
	inline ArrayList_t1101967077 * get_list_0() const { return ___list_0; }
	inline ArrayList_t1101967077 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t1101967077 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T376302787_H
#ifndef EXCEPTION_T2369173661_H
#define EXCEPTION_T2369173661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2369173661  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1989084195* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2369173661 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1989084195* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1989084195** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1989084195* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___inner_exception_1)); }
	inline Exception_t2369173661 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2369173661 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2369173661 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2369173661, ____data_10)); }
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
#endif // EXCEPTION_T2369173661_H
#ifndef STRINGENUMERATOR_T3484144004_H
#define STRINGENUMERATOR_T3484144004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringEnumerator
struct  StringEnumerator_t3484144004  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.StringEnumerator::enumerable
	RuntimeObject* ___enumerable_0;

public:
	inline static int32_t get_offset_of_enumerable_0() { return static_cast<int32_t>(offsetof(StringEnumerator_t3484144004, ___enumerable_0)); }
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
#endif // STRINGENUMERATOR_T3484144004_H
#ifndef DICTIONARYNODECOLLECTION_T4176097086_H
#define DICTIONARYNODECOLLECTION_T4176097086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t4176097086  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1537629484 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t4176097086, ___dict_0)); }
	inline ListDictionary_t1537629484 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1537629484 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1537629484 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t4176097086, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTION_T4176097086_H
#ifndef INSTANCEDESCRIPTOR_T2000325492_H
#define INSTANCEDESCRIPTOR_T2000325492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t2000325492  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2000325492, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2000325492, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2000325492, ___isComplete_2)); }
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
#endif // INSTANCEDESCRIPTOR_T2000325492_H
#ifndef _ITEM_T2878910013_H
#define _ITEM_T2878910013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t2878910013  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t2878910013, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t2878910013, ___value_1)); }
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
#endif // _ITEM_T2878910013_H
#ifndef DICTIONARYNODEENUMERATOR_T2512456164_H
#define DICTIONARYNODEENUMERATOR_T2512456164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t2512456164  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1537629484 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t1669451401 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2512456164, ___dict_0)); }
	inline ListDictionary_t1537629484 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1537629484 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1537629484 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2512456164, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2512456164, ___current_2)); }
	inline DictionaryNode_t1669451401 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t1669451401 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t1669451401 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t2512456164, ___version_3)); }
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
#endif // DICTIONARYNODEENUMERATOR_T2512456164_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T1747351877_H
#define NAMEOBJECTCOLLECTIONBASE_T1747351877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t1747351877  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t185980411 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t2878910013 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t1101967077 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t3828772948 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t941787167 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___m_ItemsContainer_0)); }
	inline Hashtable_t185980411 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t185980411 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t185980411 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___m_NullKeyItem_1)); }
	inline _Item_t2878910013 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t2878910013 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t2878910013 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___m_ItemsArray_2)); }
	inline ArrayList_t1101967077 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t1101967077 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t1101967077 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___infoCopy_7)); }
	inline SerializationInfo_t3828772948 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t3828772948 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t3828772948 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___keyscoll_8)); }
	inline KeysCollection_t941787167 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t941787167 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t941787167 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1747351877, ___equality_comparer_9)); }
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
#endif // NAMEOBJECTCOLLECTIONBASE_T1747351877_H
#ifndef _KEYSENUMERATOR_T2040795304_H
#define _KEYSENUMERATOR_T2040795304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t2040795304  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t1747351877 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t2040795304, ___m_collection_0)); }
	inline NameObjectCollectionBase_t1747351877 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t1747351877 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t1747351877 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t2040795304, ___m_position_1)); }
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
#endif // _KEYSENUMERATOR_T2040795304_H
#ifndef DICTIONARYNODE_T1669451401_H
#define DICTIONARYNODE_T1669451401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t1669451401  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t1669451401 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t1669451401, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t1669451401, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t1669451401, ___next_2)); }
	inline DictionaryNode_t1669451401 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t1669451401 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t1669451401 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T1669451401_H
#ifndef KEYSCOLLECTION_T941787167_H
#define KEYSCOLLECTION_T941787167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t941787167  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t1747351877 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t941787167, ___m_collection_0)); }
	inline NameObjectCollectionBase_t1747351877 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t1747351877 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t1747351877 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T941787167_H
#ifndef HYBRIDDICTIONARY_T2333092713_H
#define HYBRIDDICTIONARY_T2333092713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t2333092713  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t185980411 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1537629484 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t2333092713, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t2333092713, ___hashtable_1)); }
	inline Hashtable_t185980411 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t185980411 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t185980411 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t2333092713, ___list_2)); }
	inline ListDictionary_t1537629484 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t1537629484 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t1537629484 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T2333092713_H
#ifndef VALUETYPE_T2822424709_H
#define VALUETYPE_T2822424709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2822424709  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2822424709_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2822424709_marshaled_com
{
};
#endif // VALUETYPE_T2822424709_H
#ifndef STRINGCOLLECTION_T2919590384_H
#define STRINGCOLLECTION_T2919590384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t2919590384  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t1101967077 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t2919590384, ___data_0)); }
	inline ArrayList_t1101967077 * get_data_0() const { return ___data_0; }
	inline ArrayList_t1101967077 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t1101967077 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T2919590384_H
#ifndef STRINGDICTIONARY_T122672999_H
#define STRINGDICTIONARY_T122672999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t122672999  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t185980411 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t122672999, ___contents_0)); }
	inline Hashtable_t185980411 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t185980411 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t185980411 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T122672999_H
#ifndef LISTDICTIONARY_T1537629484_H
#define LISTDICTIONARY_T1537629484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1537629484  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t1669451401 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1537629484, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1537629484, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1537629484, ___head_2)); }
	inline DictionaryNode_t1669451401 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t1669451401 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t1669451401 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1537629484, ___comparer_3)); }
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
#endif // LISTDICTIONARY_T1537629484_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T3964706330_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T3964706330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t3964706330  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t3964706330, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t3964706330, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T3964706330_H
#ifndef EXPANDABLEOBJECTCONVERTER_T2782052683_H
#define EXPANDABLEOBJECTCONVERTER_T2782052683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t2782052683  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T2782052683_H
#ifndef GUIDCONVERTER_T3629422487_H
#define GUIDCONVERTER_T3629422487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t3629422487  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T3629422487_H
#ifndef LISTBINDABLEATTRIBUTE_T857264165_H
#define LISTBINDABLEATTRIBUTE_T857264165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t857264165  : public Attribute_t3112973846
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t857264165, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t857264165_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t857264165 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t857264165 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t857264165 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t857264165_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t857264165 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t857264165 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t857264165 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t857264165_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t857264165 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t857264165 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t857264165 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t857264165_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t857264165 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t857264165 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t857264165 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T857264165_H
#ifndef PROPERTYDESCRIPTOR_T586799522_H
#define PROPERTYDESCRIPTOR_T586799522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t586799522  : public MemberDescriptor_t2001315964
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T586799522_H
#ifndef NULLABLECONVERTER_T1797581634_H
#define NULLABLECONVERTER_T1797581634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1797581634  : public TypeConverter_t2175577306
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2175577306 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t1797581634, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t1797581634, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t1797581634, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2175577306 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2175577306 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2175577306 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T1797581634_H
#ifndef PROPERTYCHANGEDEVENTARGS_T3178871599_H
#define PROPERTYCHANGEDEVENTARGS_T3178871599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t3178871599  : public EventArgs_t22914321
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t3178871599, ___propertyName_1)); }
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
#endif // PROPERTYCHANGEDEVENTARGS_T3178871599_H
#ifndef READONLYATTRIBUTE_T2266825642_H
#define READONLYATTRIBUTE_T2266825642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t2266825642  : public Attribute_t3112973846
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2266825642, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t2266825642_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t2266825642 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t2266825642 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t2266825642 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2266825642_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t2266825642 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t2266825642 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t2266825642 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2266825642_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t2266825642 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t2266825642 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t2266825642 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t2266825642_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t2266825642 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t2266825642 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t2266825642 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T2266825642_H
#ifndef REFERENCECONVERTER_T3767376292_H
#define REFERENCECONVERTER_T3767376292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t3767376292  : public TypeConverter_t2175577306
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3767376292, ___reference_type_0)); }
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
#endif // REFERENCECONVERTER_T3767376292_H
#ifndef STRINGCONVERTER_T1860171815_H
#define STRINGCONVERTER_T1860171815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t1860171815  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T1860171815_H
#ifndef TIMESPANCONVERTER_T2099217940_H
#define TIMESPANCONVERTER_T2099217940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t2099217940  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T2099217940_H
#ifndef TOOLBOXITEMATTRIBUTE_T3889099186_H
#define TOOLBOXITEMATTRIBUTE_T3889099186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t3889099186  : public Attribute_t3112973846
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_2;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_3;

public:
	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3889099186, ___itemType_2)); }
	inline Type_t * get_itemType_2() const { return ___itemType_2; }
	inline Type_t ** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(Type_t * value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_2), value);
	}

	inline static int32_t get_offset_of_itemTypeName_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3889099186, ___itemTypeName_3)); }
	inline String_t* get_itemTypeName_3() const { return ___itemTypeName_3; }
	inline String_t** get_address_of_itemTypeName_3() { return &___itemTypeName_3; }
	inline void set_itemTypeName_3(String_t* value)
	{
		___itemTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_3), value);
	}
};

struct ToolboxItemAttribute_t3889099186_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t3889099186 * ___Default_0;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t3889099186 * ___None_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3889099186_StaticFields, ___Default_0)); }
	inline ToolboxItemAttribute_t3889099186 * get_Default_0() const { return ___Default_0; }
	inline ToolboxItemAttribute_t3889099186 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ToolboxItemAttribute_t3889099186 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t3889099186_StaticFields, ___None_1)); }
	inline ToolboxItemAttribute_t3889099186 * get_None_1() const { return ___None_1; }
	inline ToolboxItemAttribute_t3889099186 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(ToolboxItemAttribute_t3889099186 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T3889099186_H
#ifndef ENUMCONVERTER_T3790350646_H
#define ENUMCONVERTER_T3790350646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t3790350646  : public TypeConverter_t2175577306
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t4234082488 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t3790350646, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t3790350646, ___stdValues_1)); }
	inline StandardValuesCollection_t4234082488 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t4234082488 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t4234082488 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T3790350646_H
#ifndef ENUM_T1483920291_H
#define ENUM_T1483920291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1483920291  : public ValueType_t2822424709
{
public:

public:
};

struct Enum_t1483920291_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t634402932* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1483920291_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t634402932* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t634402932** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t634402932* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1483920291_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1483920291_marshaled_com
{
};
#endif // ENUM_T1483920291_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T3133758738_H
#define MERGABLEPROPERTYATTRIBUTE_T3133758738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t3133758738  : public Attribute_t3112973846
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t3133758738, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t3133758738_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t3133758738 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t3133758738 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t3133758738 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t3133758738_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t3133758738 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t3133758738 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t3133758738 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t3133758738_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t3133758738 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t3133758738 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t3133758738 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t3133758738_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t3133758738 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t3133758738 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t3133758738 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T3133758738_H
#ifndef EDITORATTRIBUTE_T1739457421_H
#define EDITORATTRIBUTE_T1739457421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t1739457421  : public Attribute_t3112973846
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t1739457421, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t1739457421, ___basename_1)); }
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
#endif // EDITORATTRIBUTE_T1739457421_H
#ifndef MONOTODOATTRIBUTE_T2345288005_H
#define MONOTODOATTRIBUTE_T2345288005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t2345288005  : public Attribute_t3112973846
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t2345288005, ___comment_0)); }
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
#endif // MONOTODOATTRIBUTE_T2345288005_H
#ifndef COMPONENTCOLLECTION_T1994394721_H
#define COMPONENTCOLLECTION_T1994394721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1994394721  : public ReadOnlyCollectionBase_t376302787
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1994394721_H
#ifndef BOOLEANCONVERTER_T1775901727_H
#define BOOLEANCONVERTER_T1775901727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t1775901727  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T1775901727_H
#ifndef BROWSABLEATTRIBUTE_T1931657807_H
#define BROWSABLEATTRIBUTE_T1931657807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t1931657807  : public Attribute_t3112973846
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1931657807, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t1931657807_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t1931657807 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t1931657807 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t1931657807 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1931657807_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t1931657807 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t1931657807 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t1931657807 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1931657807_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t1931657807 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t1931657807 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t1931657807 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1931657807_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t1931657807 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t1931657807 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t1931657807 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T1931657807_H
#ifndef CATEGORYATTRIBUTE_T3913174301_H
#define CATEGORYATTRIBUTE_T3913174301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t3913174301  : public Attribute_t3112973846
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3913174301, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3913174301, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t3913174301_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t3913174301 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3913174301_StaticFields, ___def_2)); }
	inline CategoryAttribute_t3913174301 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t3913174301 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t3913174301 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t3913174301_StaticFields, ___lockobj_3)); }
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
#endif // CATEGORYATTRIBUTE_T3913174301_H
#ifndef CHARCONVERTER_T396461256_H
#define CHARCONVERTER_T396461256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t396461256  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T396461256_H
#ifndef COLLECTIONCONVERTER_T3939135206_H
#define COLLECTIONCONVERTER_T3939135206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3939135206  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3939135206_H
#ifndef COMPONENT_T450588100_H
#define COMPONENT_T450588100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t450588100  : public MarshalByRefObject_t1003039113
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t1087968340 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t450588100, ___event_handlers_1)); }
	inline EventHandlerList_t1087968340 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t1087968340 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t1087968340 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t450588100, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t450588100, ___disposedEvent_3)); }
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
#endif // COMPONENT_T450588100_H
#ifndef CULTUREINFOCONVERTER_T735318533_H
#define CULTUREINFOCONVERTER_T735318533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t735318533  : public TypeConverter_t2175577306
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t4234082488 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t735318533, ____standardValues_0)); }
	inline StandardValuesCollection_t4234082488 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t4234082488 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t4234082488 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T735318533_H
#ifndef BASENUMBERCONVERTER_T592793250_H
#define BASENUMBERCONVERTER_T592793250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t592793250  : public TypeConverter_t2175577306
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t592793250, ___InnerType_0)); }
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
#endif // BASENUMBERCONVERTER_T592793250_H
#ifndef DEFAULTEVENTATTRIBUTE_T3321590292_H
#define DEFAULTEVENTATTRIBUTE_T3321590292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t3321590292  : public Attribute_t3112973846
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3321590292, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t3321590292_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t3321590292 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t3321590292_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t3321590292 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t3321590292 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t3321590292 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T3321590292_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T3383949621_H
#define DEFAULTPROPERTYATTRIBUTE_T3383949621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t3383949621  : public Attribute_t3112973846
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t3383949621, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t3383949621_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t3383949621 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t3383949621_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t3383949621 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t3383949621 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t3383949621 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T3383949621_H
#ifndef DEFAULTVALUEATTRIBUTE_T3911332770_H
#define DEFAULTVALUEATTRIBUTE_T3911332770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t3911332770  : public Attribute_t3112973846
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t3911332770, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T3911332770_H
#ifndef DATETIMECONVERTER_T4210789653_H
#define DATETIMECONVERTER_T4210789653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t4210789653  : public TypeConverter_t2175577306
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T4210789653_H
#ifndef NAMEVALUECOLLECTION_T3610984081_H
#define NAMEVALUECOLLECTION_T3610984081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t3610984081  : public NameObjectCollectionBase_t1747351877
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t2345192506* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t2345192506* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t3610984081, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t2345192506* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t2345192506** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t2345192506* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t3610984081, ___cachedAll_11)); }
	inline StringU5BU5D_t2345192506* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t2345192506** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t2345192506* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T3610984081_H
#ifndef SYSTEMEXCEPTION_T1541254430_H
#define SYSTEMEXCEPTION_T1541254430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1541254430  : public Exception_t2369173661
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1541254430_H
#ifndef DESIGNONLYATTRIBUTE_T3988512995_H
#define DESIGNONLYATTRIBUTE_T3988512995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t3988512995  : public Attribute_t3112973846
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3988512995, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t3988512995_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t3988512995 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t3988512995 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t3988512995 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3988512995_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t3988512995 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t3988512995 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t3988512995 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3988512995_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t3988512995 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t3988512995 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t3988512995 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3988512995_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t3988512995 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t3988512995 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t3988512995 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T3988512995_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T865691291_H
#define DESIGNERCATEGORYATTRIBUTE_T865691291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t865691291  : public Attribute_t3112973846
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t865691291, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t865691291_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t865691291 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t865691291 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t865691291 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t865691291 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t865691291_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t865691291 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t865691291 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t865691291 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t865691291_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t865691291 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t865691291 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t865691291 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t865691291_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t865691291 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t865691291 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t865691291 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t865691291_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t865691291 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t865691291 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t865691291 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T865691291_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T3475720605_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T3475720605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t3475720605  : public Attribute_t3112973846
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t3475720605, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t3475720605_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t3475720605 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t3475720605 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t3475720605 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t3475720605_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t3475720605 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t3475720605 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t3475720605 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t3475720605_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t3475720605 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t3475720605 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t3475720605 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t3475720605_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t3475720605 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t3475720605 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t3475720605 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T3475720605_H
#ifndef DESIGNERATTRIBUTE_T2139703594_H
#define DESIGNERATTRIBUTE_T2139703594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2139703594  : public Attribute_t3112973846
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2139703594, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2139703594, ___basetypename_1)); }
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
#endif // DESIGNERATTRIBUTE_T2139703594_H
#ifndef DESCRIPTIONATTRIBUTE_T2412423578_H
#define DESCRIPTIONATTRIBUTE_T2412423578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t2412423578  : public Attribute_t3112973846
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2412423578, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t2412423578_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2412423578 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t2412423578_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t2412423578 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t2412423578 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t2412423578 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T2412423578_H
#ifndef LISTSORTDIRECTION_T3761798193_H
#define LISTSORTDIRECTION_T3761798193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t3761798193 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t3761798193, ___value___1)); }
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
#endif // LISTSORTDIRECTION_T3761798193_H
#ifndef EDITORBROWSABLESTATE_T2311305040_H
#define EDITORBROWSABLESTATE_T2311305040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t2311305040 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t2311305040, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T2311305040_H
#ifndef BYTECONVERTER_T1071415142_H
#define BYTECONVERTER_T1071415142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1071415142  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1071415142_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3976894420_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3976894420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3976894420 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3976894420, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3976894420_H
#ifndef COLLECTIONCHANGEACTION_T4016311983_H
#define COLLECTIONCHANGEACTION_T4016311983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t4016311983 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t4016311983, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T4016311983_H
#ifndef ARRAYCONVERTER_T2701726060_H
#define ARRAYCONVERTER_T2701726060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t2701726060  : public CollectionConverter_t3939135206
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T2701726060_H
#ifndef SINGLECONVERTER_T500181955_H
#define SINGLECONVERTER_T500181955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t500181955  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T500181955_H
#ifndef REFRESHPROPERTIES_T1140138483_H
#define REFRESHPROPERTIES_T1140138483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t1140138483 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t1140138483, ___value___1)); }
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
#endif // REFRESHPROPERTIES_T1140138483_H
#ifndef ARGUMENTEXCEPTION_T2461935345_H
#define ARGUMENTEXCEPTION_T2461935345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t2461935345  : public SystemException_t1541254430
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t2461935345, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T2461935345_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T1620369166_H
#define REFLECTIONPROPERTYDESCRIPTOR_T1620369166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t1620369166  : public PropertyDescriptor_t586799522
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1620369166, ____member_4)); }
	inline PropertyInfo_t * get__member_4() const { return ____member_4; }
	inline PropertyInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(PropertyInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1620369166, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t1620369166, ____propertyType_6)); }
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
#endif // REFLECTIONPROPERTYDESCRIPTOR_T1620369166_H
#ifndef DOUBLECONVERTER_T2569438526_H
#define DOUBLECONVERTER_T2569438526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t2569438526  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T2569438526_H
#ifndef COMPONENTCONVERTER_T3862641875_H
#define COMPONENTCONVERTER_T3862641875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t3862641875  : public ReferenceConverter_t3767376292
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T3862641875_H
#ifndef INT16CONVERTER_T3846143234_H
#define INT16CONVERTER_T3846143234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t3846143234  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T3846143234_H
#ifndef DECIMALCONVERTER_T1666172839_H
#define DECIMALCONVERTER_T1666172839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1666172839  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1666172839_H
#ifndef INT32CONVERTER_T3451594508_H
#define INT32CONVERTER_T3451594508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t3451594508  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T3451594508_H
#ifndef INT64CONVERTER_T885884224_H
#define INT64CONVERTER_T885884224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t885884224  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T885884224_H
#ifndef SBYTECONVERTER_T1932014729_H
#define SBYTECONVERTER_T1932014729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t1932014729  : public BaseNumberConverter_t592793250
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T1932014729_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T1708715955_H
#define ARRAYPROPERTYDESCRIPTOR_T1708715955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t1708715955  : public PropertyDescriptor_t586799522
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_4;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_5;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t1708715955, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_array_type_5() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t1708715955, ___array_type_5)); }
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
#endif // ARRAYPROPERTYDESCRIPTOR_T1708715955_H
#ifndef EDITORBROWSABLEATTRIBUTE_T2734754116_H
#define EDITORBROWSABLEATTRIBUTE_T2734754116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t2734754116  : public Attribute_t3112973846
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t2734754116, ___state_0)); }
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
#endif // EDITORBROWSABLEATTRIBUTE_T2734754116_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T540925782_H
#define REFRESHPROPERTIESATTRIBUTE_T540925782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t540925782  : public Attribute_t3112973846
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t540925782, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t540925782_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t540925782 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t540925782 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t540925782 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t540925782_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t540925782 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t540925782 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t540925782 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t540925782_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t540925782 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t540925782 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t540925782 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t540925782_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t540925782 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t540925782 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t540925782 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T540925782_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T2323213300_H
#define INVALIDENUMARGUMENTEXCEPTION_T2323213300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t2323213300  : public ArgumentException_t2461935345
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T2323213300_H
#ifndef COLLECTIONCHANGEEVENTARGS_T3862231695_H
#define COLLECTIONCHANGEEVENTARGS_T3862231695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t3862231695  : public EventArgs_t22914321
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t3862231695, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t3862231695, ___theElement_2)); }
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
#endif // COLLECTIONCHANGEEVENTARGS_T3862231695_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3268685221_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3268685221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t3268685221  : public Attribute_t3112973846
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3268685221, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t3268685221_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t3268685221 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t3268685221 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t3268685221 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t3268685221 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3268685221_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t3268685221 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t3268685221 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t3268685221 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3268685221_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t3268685221 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t3268685221 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t3268685221 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3268685221_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t3268685221 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t3268685221 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t3268685221 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3268685221_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t3268685221 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t3268685221 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t3268685221 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3268685221_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (MonoTODOAttribute_t2345288005), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1100[1] = 
{
	MonoTODOAttribute_t2345288005::get_offset_of_comment_0(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (HybridDictionary_t2333092713), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[3] = 
{
	HybridDictionary_t2333092713::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t2333092713::get_offset_of_hashtable_1(),
	HybridDictionary_t2333092713::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (ListDictionary_t1537629484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1109[4] = 
{
	ListDictionary_t1537629484::get_offset_of_count_0(),
	ListDictionary_t1537629484::get_offset_of_version_1(),
	ListDictionary_t1537629484::get_offset_of_head_2(),
	ListDictionary_t1537629484::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (DictionaryNode_t1669451401), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1110[3] = 
{
	DictionaryNode_t1669451401::get_offset_of_key_0(),
	DictionaryNode_t1669451401::get_offset_of_value_1(),
	DictionaryNode_t1669451401::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (DictionaryNodeEnumerator_t2512456164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[4] = 
{
	DictionaryNodeEnumerator_t2512456164::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t2512456164::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t2512456164::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t2512456164::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (DictionaryNodeCollection_t4176097086), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1112[2] = 
{
	DictionaryNodeCollection_t4176097086::get_offset_of_dict_0(),
	DictionaryNodeCollection_t4176097086::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (DictionaryNodeCollectionEnumerator_t3964706330), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[2] = 
{
	DictionaryNodeCollectionEnumerator_t3964706330::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t3964706330::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (NameObjectCollectionBase_t1747351877), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[10] = 
{
	NameObjectCollectionBase_t1747351877::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t1747351877::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t1747351877::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t1747351877::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t1747351877::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t1747351877::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t1747351877::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t1747351877::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t1747351877::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t1747351877::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (_Item_t2878910013), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[2] = 
{
	_Item_t2878910013::get_offset_of_key_0(),
	_Item_t2878910013::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (_KeysEnumerator_t2040795304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[2] = 
{
	_KeysEnumerator_t2040795304::get_offset_of_m_collection_0(),
	_KeysEnumerator_t2040795304::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (KeysCollection_t941787167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[1] = 
{
	KeysCollection_t941787167::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (NameValueCollection_t3610984081), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[2] = 
{
	NameValueCollection_t3610984081::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t3610984081::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (StringCollection_t2919590384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[1] = 
{
	StringCollection_t2919590384::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (StringDictionary_t122672999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[1] = 
{
	StringDictionary_t122672999::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (StringEnumerator_t3484144004), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[1] = 
{
	StringEnumerator_t3484144004::get_offset_of_enumerable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (InstanceDescriptor_t2000325492), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[3] = 
{
	InstanceDescriptor_t2000325492::get_offset_of_member_0(),
	InstanceDescriptor_t2000325492::get_offset_of_arguments_1(),
	InstanceDescriptor_t2000325492::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (ArrayConverter_t2701726060), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (ArrayPropertyDescriptor_t1708715955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[2] = 
{
	ArrayPropertyDescriptor_t1708715955::get_offset_of_index_4(),
	ArrayPropertyDescriptor_t1708715955::get_offset_of_array_type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (AttributeCollection_t3446190252), -1, sizeof(AttributeCollection_t3446190252_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1130[2] = 
{
	AttributeCollection_t3446190252::get_offset_of_attrList_0(),
	AttributeCollection_t3446190252_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (BaseNumberConverter_t592793250), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[1] = 
{
	BaseNumberConverter_t592793250::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (BooleanConverter_t1775901727), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (BrowsableAttribute_t1931657807), -1, sizeof(BrowsableAttribute_t1931657807_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1133[4] = 
{
	BrowsableAttribute_t1931657807::get_offset_of_browsable_0(),
	BrowsableAttribute_t1931657807_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t1931657807_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t1931657807_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (ByteConverter_t1071415142), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (CategoryAttribute_t3913174301), -1, sizeof(CategoryAttribute_t3913174301_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1135[4] = 
{
	CategoryAttribute_t3913174301::get_offset_of_category_0(),
	CategoryAttribute_t3913174301::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t3913174301_StaticFields::get_offset_of_def_2(),
	CategoryAttribute_t3913174301_StaticFields::get_offset_of_lockobj_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (CharConverter_t396461256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (CollectionChangeAction_t4016311983)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1137[4] = 
{
	CollectionChangeAction_t4016311983::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (CollectionChangeEventArgs_t3862231695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1138[2] = 
{
	CollectionChangeEventArgs_t3862231695::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t3862231695::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (CollectionConverter_t3939135206), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (Component_t450588100), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1140[3] = 
{
	Component_t450588100::get_offset_of_event_handlers_1(),
	Component_t450588100::get_offset_of_mySite_2(),
	Component_t450588100::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (ComponentCollection_t1994394721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (ComponentConverter_t3862641875), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (CultureInfoConverter_t735318533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1143[1] = 
{
	CultureInfoConverter_t735318533::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (CultureInfoComparer_t4204772296), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (DateTimeConverter_t4210789653), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (DecimalConverter_t1666172839), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (DefaultEventAttribute_t3321590292), -1, sizeof(DefaultEventAttribute_t3321590292_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1147[2] = 
{
	DefaultEventAttribute_t3321590292::get_offset_of_eventName_0(),
	DefaultEventAttribute_t3321590292_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (DefaultPropertyAttribute_t3383949621), -1, sizeof(DefaultPropertyAttribute_t3383949621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[2] = 
{
	DefaultPropertyAttribute_t3383949621::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t3383949621_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (DefaultValueAttribute_t3911332770), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1149[1] = 
{
	DefaultValueAttribute_t3911332770::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (DescriptionAttribute_t2412423578), -1, sizeof(DescriptionAttribute_t2412423578_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1150[2] = 
{
	DescriptionAttribute_t2412423578::get_offset_of_desc_0(),
	DescriptionAttribute_t2412423578_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (DesignOnlyAttribute_t3988512995), -1, sizeof(DesignOnlyAttribute_t3988512995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1151[4] = 
{
	DesignOnlyAttribute_t3988512995::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t3988512995_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t3988512995_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t3988512995_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (DesignTimeVisibleAttribute_t3475720605), -1, sizeof(DesignTimeVisibleAttribute_t3475720605_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1152[4] = 
{
	DesignTimeVisibleAttribute_t3475720605::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t3475720605_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t3475720605_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t3475720605_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (DesignerAttribute_t2139703594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[2] = 
{
	DesignerAttribute_t2139703594::get_offset_of_name_0(),
	DesignerAttribute_t2139703594::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (DesignerCategoryAttribute_t865691291), -1, sizeof(DesignerCategoryAttribute_t865691291_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1154[5] = 
{
	DesignerCategoryAttribute_t865691291::get_offset_of_category_0(),
	DesignerCategoryAttribute_t865691291_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t865691291_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t865691291_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t865691291_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (DesignerSerializationVisibility_t3976894420)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1155[4] = 
{
	DesignerSerializationVisibility_t3976894420::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (DesignerSerializationVisibilityAttribute_t3268685221), -1, sizeof(DesignerSerializationVisibilityAttribute_t3268685221_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1156[5] = 
{
	DesignerSerializationVisibilityAttribute_t3268685221::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t3268685221_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t3268685221_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t3268685221_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t3268685221_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (DoubleConverter_t2569438526), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (EditorAttribute_t1739457421), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[2] = 
{
	EditorAttribute_t1739457421::get_offset_of_name_0(),
	EditorAttribute_t1739457421::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (EditorBrowsableAttribute_t2734754116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1159[1] = 
{
	EditorBrowsableAttribute_t2734754116::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (EditorBrowsableState_t2311305040)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1160[4] = 
{
	EditorBrowsableState_t2311305040::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (EnumConverter_t3790350646), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1161[2] = 
{
	EnumConverter_t3790350646::get_offset_of_type_0(),
	EnumConverter_t3790350646::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (EnumComparer_t3296709721), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (ListEntry_t3874298496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1163[3] = 
{
	ListEntry_t3874298496::get_offset_of_key_0(),
	ListEntry_t3874298496::get_offset_of_value_1(),
	ListEntry_t3874298496::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (EventHandlerList_t1087968340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1164[2] = 
{
	EventHandlerList_t1087968340::get_offset_of_entries_0(),
	EventHandlerList_t1087968340::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (ExpandableObjectConverter_t2782052683), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (GuidConverter_t3629422487), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (Int16Converter_t3846143234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (Int32Converter_t3451594508), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (Int64Converter_t885884224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (InvalidEnumArgumentException_t2323213300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (ListBindableAttribute_t857264165), -1, sizeof(ListBindableAttribute_t857264165_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1180[4] = 
{
	ListBindableAttribute_t857264165_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t857264165_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t857264165_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t857264165::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (ListSortDirection_t3761798193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1181[3] = 
{
	ListSortDirection_t3761798193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (MarshalByValueComponent_t3226250876), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1182[3] = 
{
	MarshalByValueComponent_t3226250876::get_offset_of_eventList_0(),
	MarshalByValueComponent_t3226250876::get_offset_of_mySite_1(),
	MarshalByValueComponent_t3226250876::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (MemberDescriptor_t2001315964), -1, sizeof(MemberDescriptor_t2001315964_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1183[4] = 
{
	MemberDescriptor_t2001315964::get_offset_of_name_0(),
	MemberDescriptor_t2001315964::get_offset_of_attrs_1(),
	MemberDescriptor_t2001315964::get_offset_of_attrCollection_2(),
	MemberDescriptor_t2001315964_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (MemberDescriptorComparer_t2524866766), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (MergablePropertyAttribute_t3133758738), -1, sizeof(MergablePropertyAttribute_t3133758738_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1185[4] = 
{
	MergablePropertyAttribute_t3133758738::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t3133758738_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t3133758738_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t3133758738_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (NullableConverter_t1797581634), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[3] = 
{
	NullableConverter_t1797581634::get_offset_of_nullableType_0(),
	NullableConverter_t1797581634::get_offset_of_underlyingType_1(),
	NullableConverter_t1797581634::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (PropertyChangedEventArgs_t3178871599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1187[1] = 
{
	PropertyChangedEventArgs_t3178871599::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (PropertyDescriptor_t586799522), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (PropertyDescriptorCollection_t1420793436), -1, sizeof(PropertyDescriptorCollection_t1420793436_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1189[3] = 
{
	PropertyDescriptorCollection_t1420793436_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t1420793436::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t1420793436::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ReadOnlyAttribute_t2266825642), -1, sizeof(ReadOnlyAttribute_t2266825642_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1190[4] = 
{
	ReadOnlyAttribute_t2266825642::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t2266825642_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t2266825642_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t2266825642_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (ReferenceConverter_t3767376292), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[1] = 
{
	ReferenceConverter_t3767376292::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ReflectionPropertyDescriptor_t1620369166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[3] = 
{
	ReflectionPropertyDescriptor_t1620369166::get_offset_of__member_4(),
	ReflectionPropertyDescriptor_t1620369166::get_offset_of__componentType_5(),
	ReflectionPropertyDescriptor_t1620369166::get_offset_of__propertyType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (RefreshProperties_t1140138483)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1193[4] = 
{
	RefreshProperties_t1140138483::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (RefreshPropertiesAttribute_t540925782), -1, sizeof(RefreshPropertiesAttribute_t540925782_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1194[4] = 
{
	RefreshPropertiesAttribute_t540925782::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t540925782_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t540925782_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t540925782_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (SByteConverter_t1932014729), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (SingleConverter_t500181955), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (StringConverter_t1860171815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (TimeSpanConverter_t2099217940), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (ToolboxItemAttribute_t3889099186), -1, sizeof(ToolboxItemAttribute_t3889099186_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1199[4] = 
{
	ToolboxItemAttribute_t3889099186_StaticFields::get_offset_of_Default_0(),
	ToolboxItemAttribute_t3889099186_StaticFields::get_offset_of_None_1(),
	ToolboxItemAttribute_t3889099186::get_offset_of_itemType_2(),
	ToolboxItemAttribute_t3889099186::get_offset_of_itemTypeName_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
