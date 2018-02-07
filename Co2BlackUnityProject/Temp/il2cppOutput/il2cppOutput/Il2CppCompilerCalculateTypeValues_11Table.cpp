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
struct Delegate_t3574239864;
// System.ComponentModel.ListEntry
struct ListEntry_t2412571684;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2653672671;
// System.ComponentModel.ISite
struct ISite_t1385528305;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1512205306;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t3836735504;
// System.Collections.IComparer
struct IComparer_t126108597;
// System.Collections.ArrayList
struct ArrayList_t4079597318;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1451704854;
// System.IntPtr[]
struct IntPtrU5BU5D_t1003436725;
// System.Collections.IDictionary
struct IDictionary_t3166512676;
// System.Collections.IEnumerator
struct IEnumerator_t3111610490;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1600387944;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t3802319844;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2953886644;
// System.Collections.Hashtable
struct Hashtable_t826752006;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t1315836901;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t147112519;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t307154411;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t3206097442;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t993751832;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t759708161;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t2821367524;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2747148575;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2828638324;
// System.Char[]
struct CharU5BU5D_t1174261403;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t1795666869;
// System.String[]
struct StringU5BU5D_t2633181040;
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
#ifndef ENUMCOMPARER_T3511327880_H
#define ENUMCOMPARER_T3511327880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter/EnumComparer
struct  EnumComparer_t3511327880  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCOMPARER_T3511327880_H
#ifndef LISTENTRY_T2412571684_H
#define LISTENTRY_T2412571684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListEntry
struct  ListEntry_t2412571684  : public RuntimeObject
{
public:
	// System.Object System.ComponentModel.ListEntry::key
	RuntimeObject * ___key_0;
	// System.Delegate System.ComponentModel.ListEntry::value
	Delegate_t3574239864 * ___value_1;
	// System.ComponentModel.ListEntry System.ComponentModel.ListEntry::next
	ListEntry_t2412571684 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(ListEntry_t2412571684, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(ListEntry_t2412571684, ___value_1)); }
	inline Delegate_t3574239864 * get_value_1() const { return ___value_1; }
	inline Delegate_t3574239864 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Delegate_t3574239864 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(ListEntry_t2412571684, ___next_2)); }
	inline ListEntry_t2412571684 * get_next_2() const { return ___next_2; }
	inline ListEntry_t2412571684 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(ListEntry_t2412571684 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T2412571684_H
#ifndef EVENTHANDLERLIST_T2653672671_H
#define EVENTHANDLERLIST_T2653672671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t2653672671  : public RuntimeObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t2412571684 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t3574239864 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t2653672671, ___entries_0)); }
	inline ListEntry_t2412571684 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t2412571684 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t2412571684 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t2653672671, ___null_entry_1)); }
	inline Delegate_t3574239864 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t3574239864 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t3574239864 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier((&___null_entry_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T2653672671_H
#ifndef MARSHALBYVALUECOMPONENT_T2696619689_H
#define MARSHALBYVALUECOMPONENT_T2696619689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t2696619689  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t2653672671 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2696619689, ___eventList_0)); }
	inline EventHandlerList_t2653672671 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t2653672671 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t2653672671 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2696619689, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t2696619689, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T2696619689_H
#ifndef MEMBERDESCRIPTOR_T1633641753_H
#define MEMBERDESCRIPTOR_T1633641753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t1633641753  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attrs
	AttributeU5BU5D_t1512205306* ___attrs_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attrCollection
	AttributeCollection_t3836735504 * ___attrCollection_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1633641753, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1633641753, ___attrs_1)); }
	inline AttributeU5BU5D_t1512205306* get_attrs_1() const { return ___attrs_1; }
	inline AttributeU5BU5D_t1512205306** get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(AttributeU5BU5D_t1512205306* value)
	{
		___attrs_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrs_1), value);
	}

	inline static int32_t get_offset_of_attrCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1633641753, ___attrCollection_2)); }
	inline AttributeCollection_t3836735504 * get_attrCollection_2() const { return ___attrCollection_2; }
	inline AttributeCollection_t3836735504 ** get_address_of_attrCollection_2() { return &___attrCollection_2; }
	inline void set_attrCollection_2(AttributeCollection_t3836735504 * value)
	{
		___attrCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attrCollection_2), value);
	}
};

struct MemberDescriptor_t1633641753_StaticFields
{
public:
	// System.Collections.IComparer System.ComponentModel.MemberDescriptor::default_comparer
	RuntimeObject* ___default_comparer_3;

public:
	inline static int32_t get_offset_of_default_comparer_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t1633641753_StaticFields, ___default_comparer_3)); }
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
#endif // MEMBERDESCRIPTOR_T1633641753_H
#ifndef MEMBERDESCRIPTORCOMPARER_T365568581_H
#define MEMBERDESCRIPTORCOMPARER_T365568581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t365568581  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T365568581_H
#ifndef CULTUREINFOCOMPARER_T192883438_H
#define CULTUREINFOCOMPARER_T192883438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoComparer
struct  CultureInfoComparer_t192883438  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCOMPARER_T192883438_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T1742346747_H
#define PROPERTYDESCRIPTORCOLLECTION_T1742346747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t1742346747  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.PropertyDescriptorCollection::properties
	ArrayList_t4079597318 * ___properties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_2;

public:
	inline static int32_t get_offset_of_properties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1742346747, ___properties_1)); }
	inline ArrayList_t4079597318 * get_properties_1() const { return ___properties_1; }
	inline ArrayList_t4079597318 ** get_address_of_properties_1() { return &___properties_1; }
	inline void set_properties_1(ArrayList_t4079597318 * value)
	{
		___properties_1 = value;
		Il2CppCodeGenWriteBarrier((&___properties_1), value);
	}

	inline static int32_t get_offset_of_readOnly_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1742346747, ___readOnly_2)); }
	inline bool get_readOnly_2() const { return ___readOnly_2; }
	inline bool* get_address_of_readOnly_2() { return &___readOnly_2; }
	inline void set_readOnly_2(bool value)
	{
		___readOnly_2 = value;
	}
};

struct PropertyDescriptorCollection_t1742346747_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t1742346747 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t1742346747_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t1742346747 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t1742346747 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t1742346747 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T1742346747_H
#ifndef ATTRIBUTE_T562250427_H
#define ATTRIBUTE_T562250427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t562250427  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T562250427_H
#ifndef TYPECONVERTER_T2747148575_H
#define TYPECONVERTER_T2747148575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2747148575  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2747148575_H
#ifndef EVENTARGS_T7372661_H
#define EVENTARGS_T7372661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t7372661  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t7372661_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t7372661 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t7372661_StaticFields, ___Empty_0)); }
	inline EventArgs_t7372661 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t7372661 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t7372661 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T7372661_H
#ifndef ATTRIBUTECOLLECTION_T3836735504_H
#define ATTRIBUTECOLLECTION_T3836735504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t3836735504  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.ComponentModel.AttributeCollection::attrList
	ArrayList_t4079597318 * ___attrList_0;

public:
	inline static int32_t get_offset_of_attrList_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t3836735504, ___attrList_0)); }
	inline ArrayList_t4079597318 * get_attrList_0() const { return ___attrList_0; }
	inline ArrayList_t4079597318 ** get_address_of_attrList_0() { return &___attrList_0; }
	inline void set_attrList_0(ArrayList_t4079597318 * value)
	{
		___attrList_0 = value;
		Il2CppCodeGenWriteBarrier((&___attrList_0), value);
	}
};

struct AttributeCollection_t3836735504_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t3836735504 * ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t3836735504_StaticFields, ___Empty_1)); }
	inline AttributeCollection_t3836735504 * get_Empty_1() const { return ___Empty_1; }
	inline AttributeCollection_t3836735504 ** get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(AttributeCollection_t3836735504 * value)
	{
		___Empty_1 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T3836735504_H
#ifndef MARSHALBYREFOBJECT_T664427687_H
#define MARSHALBYREFOBJECT_T664427687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t664427687  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1451704854 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t664427687, ____identity_0)); }
	inline ServerIdentity_t1451704854 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1451704854 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1451704854 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T664427687_H
#ifndef READONLYCOLLECTIONBASE_T2789748444_H
#define READONLYCOLLECTIONBASE_T2789748444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t2789748444  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t4079597318 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t2789748444, ___list_0)); }
	inline ArrayList_t4079597318 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4079597318 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4079597318 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T2789748444_H
#ifndef EXCEPTION_T542961288_H
#define EXCEPTION_T542961288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t542961288  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1003436725* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t542961288 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1003436725* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1003436725** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1003436725* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___inner_exception_1)); }
	inline Exception_t542961288 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t542961288 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t542961288 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t542961288, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t542961288, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t542961288, ____data_10)); }
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
#endif // EXCEPTION_T542961288_H
#ifndef STRINGENUMERATOR_T2355884342_H
#define STRINGENUMERATOR_T2355884342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringEnumerator
struct  StringEnumerator_t2355884342  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Collections.Specialized.StringEnumerator::enumerable
	RuntimeObject* ___enumerable_0;

public:
	inline static int32_t get_offset_of_enumerable_0() { return static_cast<int32_t>(offsetof(StringEnumerator_t2355884342, ___enumerable_0)); }
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
#endif // STRINGENUMERATOR_T2355884342_H
#ifndef DICTIONARYNODECOLLECTION_T3608384492_H
#define DICTIONARYNODECOLLECTION_T3608384492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection
struct  DictionaryNodeCollection_t3608384492  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::dict
	ListDictionary_t1600387944 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t3608384492, ___dict_0)); }
	inline ListDictionary_t1600387944 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1600387944 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1600387944 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollection_t3608384492, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTION_T3608384492_H
#ifndef INSTANCEDESCRIPTOR_T2009398710_H
#define INSTANCEDESCRIPTOR_T2009398710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t2009398710  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2009398710, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2009398710, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t2009398710, ___isComplete_2)); }
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
#endif // INSTANCEDESCRIPTOR_T2009398710_H
#ifndef _ITEM_T1315836901_H
#define _ITEM_T1315836901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct  _Item_t1315836901  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/_Item::key
	String_t* ___key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/_Item::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(_Item_t1315836901, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(_Item_t1315836901, ___value_1)); }
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
#endif // _ITEM_T1315836901_H
#ifndef DICTIONARYNODEENUMERATOR_T1402259964_H
#define DICTIONARYNODEENUMERATOR_T1402259964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator
struct  DictionaryNodeEnumerator_t1402259964  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::dict
	ListDictionary_t1600387944 * ___dict_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::isAtStart
	bool ___isAtStart_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::current
	DictionaryNode_t2953886644 * ___current_2;
	// System.Int32 System.Collections.Specialized.ListDictionary/DictionaryNodeEnumerator::version
	int32_t ___version_3;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1402259964, ___dict_0)); }
	inline ListDictionary_t1600387944 * get_dict_0() const { return ___dict_0; }
	inline ListDictionary_t1600387944 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(ListDictionary_t1600387944 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier((&___dict_0), value);
	}

	inline static int32_t get_offset_of_isAtStart_1() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1402259964, ___isAtStart_1)); }
	inline bool get_isAtStart_1() const { return ___isAtStart_1; }
	inline bool* get_address_of_isAtStart_1() { return &___isAtStart_1; }
	inline void set_isAtStart_1(bool value)
	{
		___isAtStart_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1402259964, ___current_2)); }
	inline DictionaryNode_t2953886644 * get_current_2() const { return ___current_2; }
	inline DictionaryNode_t2953886644 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(DictionaryNode_t2953886644 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(DictionaryNodeEnumerator_t1402259964, ___version_3)); }
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
#endif // DICTIONARYNODEENUMERATOR_T1402259964_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T759708161_H
#define NAMEOBJECTCOLLECTIONBASE_T759708161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t759708161  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.NameObjectCollectionBase::m_ItemsContainer
	Hashtable_t826752006 * ___m_ItemsContainer_0;
	// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::m_NullKeyItem
	_Item_t1315836901 * ___m_NullKeyItem_1;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::m_ItemsArray
	ArrayList_t4079597318 * ___m_ItemsArray_2;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::m_hashprovider
	RuntimeObject* ___m_hashprovider_3;
	// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::m_comparer
	RuntimeObject* ___m_comparer_4;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::m_defCapacity
	int32_t ___m_defCapacity_5;
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::m_readonly
	bool ___m_readonly_6;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::infoCopy
	SerializationInfo_t307154411 * ___infoCopy_7;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::keyscoll
	KeysCollection_t3206097442 * ___keyscoll_8;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::equality_comparer
	RuntimeObject* ___equality_comparer_9;

public:
	inline static int32_t get_offset_of_m_ItemsContainer_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___m_ItemsContainer_0)); }
	inline Hashtable_t826752006 * get_m_ItemsContainer_0() const { return ___m_ItemsContainer_0; }
	inline Hashtable_t826752006 ** get_address_of_m_ItemsContainer_0() { return &___m_ItemsContainer_0; }
	inline void set_m_ItemsContainer_0(Hashtable_t826752006 * value)
	{
		___m_ItemsContainer_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsContainer_0), value);
	}

	inline static int32_t get_offset_of_m_NullKeyItem_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___m_NullKeyItem_1)); }
	inline _Item_t1315836901 * get_m_NullKeyItem_1() const { return ___m_NullKeyItem_1; }
	inline _Item_t1315836901 ** get_address_of_m_NullKeyItem_1() { return &___m_NullKeyItem_1; }
	inline void set_m_NullKeyItem_1(_Item_t1315836901 * value)
	{
		___m_NullKeyItem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_NullKeyItem_1), value);
	}

	inline static int32_t get_offset_of_m_ItemsArray_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___m_ItemsArray_2)); }
	inline ArrayList_t4079597318 * get_m_ItemsArray_2() const { return ___m_ItemsArray_2; }
	inline ArrayList_t4079597318 ** get_address_of_m_ItemsArray_2() { return &___m_ItemsArray_2; }
	inline void set_m_ItemsArray_2(ArrayList_t4079597318 * value)
	{
		___m_ItemsArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ItemsArray_2), value);
	}

	inline static int32_t get_offset_of_m_hashprovider_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___m_hashprovider_3)); }
	inline RuntimeObject* get_m_hashprovider_3() const { return ___m_hashprovider_3; }
	inline RuntimeObject** get_address_of_m_hashprovider_3() { return &___m_hashprovider_3; }
	inline void set_m_hashprovider_3(RuntimeObject* value)
	{
		___m_hashprovider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_hashprovider_3), value);
	}

	inline static int32_t get_offset_of_m_comparer_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___m_comparer_4)); }
	inline RuntimeObject* get_m_comparer_4() const { return ___m_comparer_4; }
	inline RuntimeObject** get_address_of_m_comparer_4() { return &___m_comparer_4; }
	inline void set_m_comparer_4(RuntimeObject* value)
	{
		___m_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_comparer_4), value);
	}

	inline static int32_t get_offset_of_m_defCapacity_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___m_defCapacity_5)); }
	inline int32_t get_m_defCapacity_5() const { return ___m_defCapacity_5; }
	inline int32_t* get_address_of_m_defCapacity_5() { return &___m_defCapacity_5; }
	inline void set_m_defCapacity_5(int32_t value)
	{
		___m_defCapacity_5 = value;
	}

	inline static int32_t get_offset_of_m_readonly_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___m_readonly_6)); }
	inline bool get_m_readonly_6() const { return ___m_readonly_6; }
	inline bool* get_address_of_m_readonly_6() { return &___m_readonly_6; }
	inline void set_m_readonly_6(bool value)
	{
		___m_readonly_6 = value;
	}

	inline static int32_t get_offset_of_infoCopy_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___infoCopy_7)); }
	inline SerializationInfo_t307154411 * get_infoCopy_7() const { return ___infoCopy_7; }
	inline SerializationInfo_t307154411 ** get_address_of_infoCopy_7() { return &___infoCopy_7; }
	inline void set_infoCopy_7(SerializationInfo_t307154411 * value)
	{
		___infoCopy_7 = value;
		Il2CppCodeGenWriteBarrier((&___infoCopy_7), value);
	}

	inline static int32_t get_offset_of_keyscoll_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___keyscoll_8)); }
	inline KeysCollection_t3206097442 * get_keyscoll_8() const { return ___keyscoll_8; }
	inline KeysCollection_t3206097442 ** get_address_of_keyscoll_8() { return &___keyscoll_8; }
	inline void set_keyscoll_8(KeysCollection_t3206097442 * value)
	{
		___keyscoll_8 = value;
		Il2CppCodeGenWriteBarrier((&___keyscoll_8), value);
	}

	inline static int32_t get_offset_of_equality_comparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t759708161, ___equality_comparer_9)); }
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
#endif // NAMEOBJECTCOLLECTIONBASE_T759708161_H
#ifndef _KEYSENUMERATOR_T3326083874_H
#define _KEYSENUMERATOR_T3326083874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator
struct  _KeysEnumerator_t3326083874  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_collection
	NameObjectCollectionBase_t759708161 * ___m_collection_0;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/_KeysEnumerator::m_position
	int32_t ___m_position_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3326083874, ___m_collection_0)); }
	inline NameObjectCollectionBase_t759708161 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t759708161 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t759708161 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}

	inline static int32_t get_offset_of_m_position_1() { return static_cast<int32_t>(offsetof(_KeysEnumerator_t3326083874, ___m_position_1)); }
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
#endif // _KEYSENUMERATOR_T3326083874_H
#ifndef DICTIONARYNODE_T2953886644_H
#define DICTIONARYNODE_T2953886644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t2953886644  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t2953886644 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t2953886644, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t2953886644, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t2953886644, ___next_2)); }
	inline DictionaryNode_t2953886644 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t2953886644 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t2953886644 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T2953886644_H
#ifndef KEYSCOLLECTION_T3206097442_H
#define KEYSCOLLECTION_T3206097442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t3206097442  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::m_collection
	NameObjectCollectionBase_t759708161 * ___m_collection_0;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(KeysCollection_t3206097442, ___m_collection_0)); }
	inline NameObjectCollectionBase_t759708161 * get_m_collection_0() const { return ___m_collection_0; }
	inline NameObjectCollectionBase_t759708161 ** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(NameObjectCollectionBase_t759708161 * value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_collection_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T3206097442_H
#ifndef HYBRIDDICTIONARY_T3618023867_H
#define HYBRIDDICTIONARY_T3618023867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t3618023867  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t826752006 * ___hashtable_1;
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t1600387944 * ___list_2;

public:
	inline static int32_t get_offset_of_caseInsensitive_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t3618023867, ___caseInsensitive_0)); }
	inline bool get_caseInsensitive_0() const { return ___caseInsensitive_0; }
	inline bool* get_address_of_caseInsensitive_0() { return &___caseInsensitive_0; }
	inline void set_caseInsensitive_0(bool value)
	{
		___caseInsensitive_0 = value;
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t3618023867, ___hashtable_1)); }
	inline Hashtable_t826752006 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t826752006 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t826752006 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_list_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t3618023867, ___list_2)); }
	inline ListDictionary_t1600387944 * get_list_2() const { return ___list_2; }
	inline ListDictionary_t1600387944 ** get_address_of_list_2() { return &___list_2; }
	inline void set_list_2(ListDictionary_t1600387944 * value)
	{
		___list_2 = value;
		Il2CppCodeGenWriteBarrier((&___list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T3618023867_H
#ifndef VALUETYPE_T175624090_H
#define VALUETYPE_T175624090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t175624090  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t175624090_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t175624090_marshaled_com
{
};
#endif // VALUETYPE_T175624090_H
#ifndef STRINGCOLLECTION_T3585650082_H
#define STRINGCOLLECTION_T3585650082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t3585650082  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t4079597318 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t3585650082, ___data_0)); }
	inline ArrayList_t4079597318 * get_data_0() const { return ___data_0; }
	inline ArrayList_t4079597318 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t4079597318 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T3585650082_H
#ifndef STRINGDICTIONARY_T1447643785_H
#define STRINGDICTIONARY_T1447643785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t1447643785  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t826752006 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t1447643785, ___contents_0)); }
	inline Hashtable_t826752006 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t826752006 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t826752006 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T1447643785_H
#ifndef LISTDICTIONARY_T1600387944_H
#define LISTDICTIONARY_T1600387944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t1600387944  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t2953886644 * ___head_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ListDictionary_t1600387944, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t1600387944, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_head_2() { return static_cast<int32_t>(offsetof(ListDictionary_t1600387944, ___head_2)); }
	inline DictionaryNode_t2953886644 * get_head_2() const { return ___head_2; }
	inline DictionaryNode_t2953886644 ** get_address_of_head_2() { return &___head_2; }
	inline void set_head_2(DictionaryNode_t2953886644 * value)
	{
		___head_2 = value;
		Il2CppCodeGenWriteBarrier((&___head_2), value);
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t1600387944, ___comparer_3)); }
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
#endif // LISTDICTIONARY_T1600387944_H
#ifndef DICTIONARYNODECOLLECTIONENUMERATOR_T1405352316_H
#define DICTIONARYNODECOLLECTIONENUMERATOR_T1405352316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator
struct  DictionaryNodeCollectionEnumerator_t1405352316  : public RuntimeObject
{
public:
	// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::inner
	RuntimeObject* ___inner_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/DictionaryNodeCollection/DictionaryNodeCollectionEnumerator::isKeyList
	bool ___isKeyList_1;

public:
	inline static int32_t get_offset_of_inner_0() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t1405352316, ___inner_0)); }
	inline RuntimeObject* get_inner_0() const { return ___inner_0; }
	inline RuntimeObject** get_address_of_inner_0() { return &___inner_0; }
	inline void set_inner_0(RuntimeObject* value)
	{
		___inner_0 = value;
		Il2CppCodeGenWriteBarrier((&___inner_0), value);
	}

	inline static int32_t get_offset_of_isKeyList_1() { return static_cast<int32_t>(offsetof(DictionaryNodeCollectionEnumerator_t1405352316, ___isKeyList_1)); }
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
#endif // DICTIONARYNODECOLLECTIONENUMERATOR_T1405352316_H
#ifndef EXPANDABLEOBJECTCONVERTER_T1437468376_H
#define EXPANDABLEOBJECTCONVERTER_T1437468376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t1437468376  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T1437468376_H
#ifndef GUIDCONVERTER_T2197634021_H
#define GUIDCONVERTER_T2197634021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t2197634021  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T2197634021_H
#ifndef LISTBINDABLEATTRIBUTE_T3063351671_H
#define LISTBINDABLEATTRIBUTE_T3063351671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListBindableAttribute
struct  ListBindableAttribute_t3063351671  : public Attribute_t562250427
{
public:
	// System.Boolean System.ComponentModel.ListBindableAttribute::bindable
	bool ___bindable_3;

public:
	inline static int32_t get_offset_of_bindable_3() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3063351671, ___bindable_3)); }
	inline bool get_bindable_3() const { return ___bindable_3; }
	inline bool* get_address_of_bindable_3() { return &___bindable_3; }
	inline void set_bindable_3(bool value)
	{
		___bindable_3 = value;
	}
};

struct ListBindableAttribute_t3063351671_StaticFields
{
public:
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Default
	ListBindableAttribute_t3063351671 * ___Default_0;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::No
	ListBindableAttribute_t3063351671 * ___No_1;
	// System.ComponentModel.ListBindableAttribute System.ComponentModel.ListBindableAttribute::Yes
	ListBindableAttribute_t3063351671 * ___Yes_2;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3063351671_StaticFields, ___Default_0)); }
	inline ListBindableAttribute_t3063351671 * get_Default_0() const { return ___Default_0; }
	inline ListBindableAttribute_t3063351671 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ListBindableAttribute_t3063351671 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3063351671_StaticFields, ___No_1)); }
	inline ListBindableAttribute_t3063351671 * get_No_1() const { return ___No_1; }
	inline ListBindableAttribute_t3063351671 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ListBindableAttribute_t3063351671 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ListBindableAttribute_t3063351671_StaticFields, ___Yes_2)); }
	inline ListBindableAttribute_t3063351671 * get_Yes_2() const { return ___Yes_2; }
	inline ListBindableAttribute_t3063351671 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ListBindableAttribute_t3063351671 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTBINDABLEATTRIBUTE_T3063351671_H
#ifndef PROPERTYDESCRIPTOR_T3199636365_H
#define PROPERTYDESCRIPTOR_T3199636365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t3199636365  : public MemberDescriptor_t1633641753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T3199636365_H
#ifndef NULLABLECONVERTER_T389942785_H
#define NULLABLECONVERTER_T389942785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t389942785  : public TypeConverter_t2747148575
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_0;
	// System.Type System.ComponentModel.NullableConverter::underlyingType
	Type_t * ___underlyingType_1;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::underlyingTypeConverter
	TypeConverter_t2747148575 * ___underlyingTypeConverter_2;

public:
	inline static int32_t get_offset_of_nullableType_0() { return static_cast<int32_t>(offsetof(NullableConverter_t389942785, ___nullableType_0)); }
	inline Type_t * get_nullableType_0() const { return ___nullableType_0; }
	inline Type_t ** get_address_of_nullableType_0() { return &___nullableType_0; }
	inline void set_nullableType_0(Type_t * value)
	{
		___nullableType_0 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_0), value);
	}

	inline static int32_t get_offset_of_underlyingType_1() { return static_cast<int32_t>(offsetof(NullableConverter_t389942785, ___underlyingType_1)); }
	inline Type_t * get_underlyingType_1() const { return ___underlyingType_1; }
	inline Type_t ** get_address_of_underlyingType_1() { return &___underlyingType_1; }
	inline void set_underlyingType_1(Type_t * value)
	{
		___underlyingType_1 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingType_1), value);
	}

	inline static int32_t get_offset_of_underlyingTypeConverter_2() { return static_cast<int32_t>(offsetof(NullableConverter_t389942785, ___underlyingTypeConverter_2)); }
	inline TypeConverter_t2747148575 * get_underlyingTypeConverter_2() const { return ___underlyingTypeConverter_2; }
	inline TypeConverter_t2747148575 ** get_address_of_underlyingTypeConverter_2() { return &___underlyingTypeConverter_2; }
	inline void set_underlyingTypeConverter_2(TypeConverter_t2747148575 * value)
	{
		___underlyingTypeConverter_2 = value;
		Il2CppCodeGenWriteBarrier((&___underlyingTypeConverter_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T389942785_H
#ifndef PROPERTYCHANGEDEVENTARGS_T2760001126_H
#define PROPERTYCHANGEDEVENTARGS_T2760001126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t2760001126  : public EventArgs_t7372661
{
public:
	// System.String System.ComponentModel.PropertyChangedEventArgs::propertyName
	String_t* ___propertyName_1;

public:
	inline static int32_t get_offset_of_propertyName_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t2760001126, ___propertyName_1)); }
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
#endif // PROPERTYCHANGEDEVENTARGS_T2760001126_H
#ifndef READONLYATTRIBUTE_T1428409532_H
#define READONLYATTRIBUTE_T1428409532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t1428409532  : public Attribute_t562250427
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::read_only
	bool ___read_only_0;

public:
	inline static int32_t get_offset_of_read_only_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1428409532, ___read_only_0)); }
	inline bool get_read_only_0() const { return ___read_only_0; }
	inline bool* get_address_of_read_only_0() { return &___read_only_0; }
	inline void set_read_only_0(bool value)
	{
		___read_only_0 = value;
	}
};

struct ReadOnlyAttribute_t1428409532_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t1428409532 * ___No_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t1428409532 * ___Yes_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t1428409532 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1428409532_StaticFields, ___No_1)); }
	inline ReadOnlyAttribute_t1428409532 * get_No_1() const { return ___No_1; }
	inline ReadOnlyAttribute_t1428409532 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(ReadOnlyAttribute_t1428409532 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1428409532_StaticFields, ___Yes_2)); }
	inline ReadOnlyAttribute_t1428409532 * get_Yes_2() const { return ___Yes_2; }
	inline ReadOnlyAttribute_t1428409532 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(ReadOnlyAttribute_t1428409532 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t1428409532_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t1428409532 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t1428409532 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t1428409532 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T1428409532_H
#ifndef REFERENCECONVERTER_T1412184843_H
#define REFERENCECONVERTER_T1412184843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t1412184843  : public TypeConverter_t2747148575
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::reference_type
	Type_t * ___reference_type_0;

public:
	inline static int32_t get_offset_of_reference_type_0() { return static_cast<int32_t>(offsetof(ReferenceConverter_t1412184843, ___reference_type_0)); }
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
#endif // REFERENCECONVERTER_T1412184843_H
#ifndef STRINGCONVERTER_T4031842195_H
#define STRINGCONVERTER_T4031842195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t4031842195  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T4031842195_H
#ifndef TIMESPANCONVERTER_T221736443_H
#define TIMESPANCONVERTER_T221736443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t221736443  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T221736443_H
#ifndef TOOLBOXITEMATTRIBUTE_T4190304553_H
#define TOOLBOXITEMATTRIBUTE_T4190304553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ToolboxItemAttribute
struct  ToolboxItemAttribute_t4190304553  : public Attribute_t562250427
{
public:
	// System.Type System.ComponentModel.ToolboxItemAttribute::itemType
	Type_t * ___itemType_2;
	// System.String System.ComponentModel.ToolboxItemAttribute::itemTypeName
	String_t* ___itemTypeName_3;

public:
	inline static int32_t get_offset_of_itemType_2() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t4190304553, ___itemType_2)); }
	inline Type_t * get_itemType_2() const { return ___itemType_2; }
	inline Type_t ** get_address_of_itemType_2() { return &___itemType_2; }
	inline void set_itemType_2(Type_t * value)
	{
		___itemType_2 = value;
		Il2CppCodeGenWriteBarrier((&___itemType_2), value);
	}

	inline static int32_t get_offset_of_itemTypeName_3() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t4190304553, ___itemTypeName_3)); }
	inline String_t* get_itemTypeName_3() const { return ___itemTypeName_3; }
	inline String_t** get_address_of_itemTypeName_3() { return &___itemTypeName_3; }
	inline void set_itemTypeName_3(String_t* value)
	{
		___itemTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___itemTypeName_3), value);
	}
};

struct ToolboxItemAttribute_t4190304553_StaticFields
{
public:
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::Default
	ToolboxItemAttribute_t4190304553 * ___Default_0;
	// System.ComponentModel.ToolboxItemAttribute System.ComponentModel.ToolboxItemAttribute::None
	ToolboxItemAttribute_t4190304553 * ___None_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t4190304553_StaticFields, ___Default_0)); }
	inline ToolboxItemAttribute_t4190304553 * get_Default_0() const { return ___Default_0; }
	inline ToolboxItemAttribute_t4190304553 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(ToolboxItemAttribute_t4190304553 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(ToolboxItemAttribute_t4190304553_StaticFields, ___None_1)); }
	inline ToolboxItemAttribute_t4190304553 * get_None_1() const { return ___None_1; }
	inline ToolboxItemAttribute_t4190304553 ** get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(ToolboxItemAttribute_t4190304553 * value)
	{
		___None_1 = value;
		Il2CppCodeGenWriteBarrier((&___None_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLBOXITEMATTRIBUTE_T4190304553_H
#ifndef ENUMCONVERTER_T4222214814_H
#define ENUMCONVERTER_T4222214814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t4222214814  : public TypeConverter_t2747148575
{
public:
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_0;
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::stdValues
	StandardValuesCollection_t2828638324 * ___stdValues_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(EnumConverter_t4222214814, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_stdValues_1() { return static_cast<int32_t>(offsetof(EnumConverter_t4222214814, ___stdValues_1)); }
	inline StandardValuesCollection_t2828638324 * get_stdValues_1() const { return ___stdValues_1; }
	inline StandardValuesCollection_t2828638324 ** get_address_of_stdValues_1() { return &___stdValues_1; }
	inline void set_stdValues_1(StandardValuesCollection_t2828638324 * value)
	{
		___stdValues_1 = value;
		Il2CppCodeGenWriteBarrier((&___stdValues_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T4222214814_H
#ifndef ENUM_T921147632_H
#define ENUM_T921147632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t921147632  : public ValueType_t175624090
{
public:

public:
};

struct Enum_t921147632_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1174261403* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t921147632_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1174261403* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1174261403** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1174261403* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t921147632_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t921147632_marshaled_com
{
};
#endif // ENUM_T921147632_H
#ifndef MERGABLEPROPERTYATTRIBUTE_T72475022_H
#define MERGABLEPROPERTYATTRIBUTE_T72475022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MergablePropertyAttribute
struct  MergablePropertyAttribute_t72475022  : public Attribute_t562250427
{
public:
	// System.Boolean System.ComponentModel.MergablePropertyAttribute::mergable
	bool ___mergable_0;

public:
	inline static int32_t get_offset_of_mergable_0() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t72475022, ___mergable_0)); }
	inline bool get_mergable_0() const { return ___mergable_0; }
	inline bool* get_address_of_mergable_0() { return &___mergable_0; }
	inline void set_mergable_0(bool value)
	{
		___mergable_0 = value;
	}
};

struct MergablePropertyAttribute_t72475022_StaticFields
{
public:
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Default
	MergablePropertyAttribute_t72475022 * ___Default_1;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::No
	MergablePropertyAttribute_t72475022 * ___No_2;
	// System.ComponentModel.MergablePropertyAttribute System.ComponentModel.MergablePropertyAttribute::Yes
	MergablePropertyAttribute_t72475022 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t72475022_StaticFields, ___Default_1)); }
	inline MergablePropertyAttribute_t72475022 * get_Default_1() const { return ___Default_1; }
	inline MergablePropertyAttribute_t72475022 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(MergablePropertyAttribute_t72475022 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t72475022_StaticFields, ___No_2)); }
	inline MergablePropertyAttribute_t72475022 * get_No_2() const { return ___No_2; }
	inline MergablePropertyAttribute_t72475022 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(MergablePropertyAttribute_t72475022 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(MergablePropertyAttribute_t72475022_StaticFields, ___Yes_3)); }
	inline MergablePropertyAttribute_t72475022 * get_Yes_3() const { return ___Yes_3; }
	inline MergablePropertyAttribute_t72475022 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(MergablePropertyAttribute_t72475022 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGABLEPROPERTYATTRIBUTE_T72475022_H
#ifndef EDITORATTRIBUTE_T4056309733_H
#define EDITORATTRIBUTE_T4056309733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorAttribute
struct  EditorAttribute_t4056309733  : public Attribute_t562250427
{
public:
	// System.String System.ComponentModel.EditorAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.EditorAttribute::basename
	String_t* ___basename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(EditorAttribute_t4056309733, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basename_1() { return static_cast<int32_t>(offsetof(EditorAttribute_t4056309733, ___basename_1)); }
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
#endif // EDITORATTRIBUTE_T4056309733_H
#ifndef MONOTODOATTRIBUTE_T979342080_H
#define MONOTODOATTRIBUTE_T979342080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t979342080  : public Attribute_t562250427
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t979342080, ___comment_0)); }
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
#endif // MONOTODOATTRIBUTE_T979342080_H
#ifndef COMPONENTCOLLECTION_T1832600025_H
#define COMPONENTCOLLECTION_T1832600025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t1832600025  : public ReadOnlyCollectionBase_t2789748444
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T1832600025_H
#ifndef BOOLEANCONVERTER_T3652801788_H
#define BOOLEANCONVERTER_T3652801788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t3652801788  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T3652801788_H
#ifndef BROWSABLEATTRIBUTE_T1766545214_H
#define BROWSABLEATTRIBUTE_T1766545214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t1766545214  : public Attribute_t562250427
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_0;

public:
	inline static int32_t get_offset_of_browsable_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1766545214, ___browsable_0)); }
	inline bool get_browsable_0() const { return ___browsable_0; }
	inline bool* get_address_of_browsable_0() { return &___browsable_0; }
	inline void set_browsable_0(bool value)
	{
		___browsable_0 = value;
	}
};

struct BrowsableAttribute_t1766545214_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t1766545214 * ___Default_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t1766545214 * ___No_2;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t1766545214 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1766545214_StaticFields, ___Default_1)); }
	inline BrowsableAttribute_t1766545214 * get_Default_1() const { return ___Default_1; }
	inline BrowsableAttribute_t1766545214 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(BrowsableAttribute_t1766545214 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1766545214_StaticFields, ___No_2)); }
	inline BrowsableAttribute_t1766545214 * get_No_2() const { return ___No_2; }
	inline BrowsableAttribute_t1766545214 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(BrowsableAttribute_t1766545214 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t1766545214_StaticFields, ___Yes_3)); }
	inline BrowsableAttribute_t1766545214 * get_Yes_3() const { return ___Yes_3; }
	inline BrowsableAttribute_t1766545214 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(BrowsableAttribute_t1766545214 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T1766545214_H
#ifndef CATEGORYATTRIBUTE_T1795666869_H
#define CATEGORYATTRIBUTE_T1795666869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t1795666869  : public Attribute_t562250427
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1795666869, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1795666869, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t1795666869_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t1795666869 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1795666869_StaticFields, ___def_2)); }
	inline CategoryAttribute_t1795666869 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t1795666869 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t1795666869 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1795666869_StaticFields, ___lockobj_3)); }
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
#endif // CATEGORYATTRIBUTE_T1795666869_H
#ifndef CHARCONVERTER_T3928875489_H
#define CHARCONVERTER_T3928875489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t3928875489  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T3928875489_H
#ifndef COLLECTIONCONVERTER_T3839553565_H
#define COLLECTIONCONVERTER_T3839553565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t3839553565  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T3839553565_H
#ifndef COMPONENT_T3868821214_H
#define COMPONENT_T3868821214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t3868821214  : public MarshalByRefObject_t664427687
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t2653672671 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t3868821214, ___event_handlers_1)); }
	inline EventHandlerList_t2653672671 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t2653672671 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t2653672671 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t3868821214, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t3868821214, ___disposedEvent_3)); }
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
#endif // COMPONENT_T3868821214_H
#ifndef CULTUREINFOCONVERTER_T2960087103_H
#define CULTUREINFOCONVERTER_T2960087103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t2960087103  : public TypeConverter_t2747148575
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::_standardValues
	StandardValuesCollection_t2828638324 * ____standardValues_0;

public:
	inline static int32_t get_offset_of__standardValues_0() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t2960087103, ____standardValues_0)); }
	inline StandardValuesCollection_t2828638324 * get__standardValues_0() const { return ____standardValues_0; }
	inline StandardValuesCollection_t2828638324 ** get_address_of__standardValues_0() { return &____standardValues_0; }
	inline void set__standardValues_0(StandardValuesCollection_t2828638324 * value)
	{
		____standardValues_0 = value;
		Il2CppCodeGenWriteBarrier((&____standardValues_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T2960087103_H
#ifndef BASENUMBERCONVERTER_T220241699_H
#define BASENUMBERCONVERTER_T220241699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t220241699  : public TypeConverter_t2747148575
{
public:
	// System.Type System.ComponentModel.BaseNumberConverter::InnerType
	Type_t * ___InnerType_0;

public:
	inline static int32_t get_offset_of_InnerType_0() { return static_cast<int32_t>(offsetof(BaseNumberConverter_t220241699, ___InnerType_0)); }
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
#endif // BASENUMBERCONVERTER_T220241699_H
#ifndef DEFAULTEVENTATTRIBUTE_T2759635461_H
#define DEFAULTEVENTATTRIBUTE_T2759635461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t2759635461  : public Attribute_t562250427
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::eventName
	String_t* ___eventName_0;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t2759635461, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventName_0), value);
	}
};

struct DefaultEventAttribute_t2759635461_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t2759635461 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t2759635461_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t2759635461 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t2759635461 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t2759635461 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T2759635461_H
#ifndef DEFAULTPROPERTYATTRIBUTE_T3439475937_H
#define DEFAULTPROPERTYATTRIBUTE_T3439475937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultPropertyAttribute
struct  DefaultPropertyAttribute_t3439475937  : public Attribute_t562250427
{
public:
	// System.String System.ComponentModel.DefaultPropertyAttribute::property_name
	String_t* ___property_name_0;

public:
	inline static int32_t get_offset_of_property_name_0() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t3439475937, ___property_name_0)); }
	inline String_t* get_property_name_0() const { return ___property_name_0; }
	inline String_t** get_address_of_property_name_0() { return &___property_name_0; }
	inline void set_property_name_0(String_t* value)
	{
		___property_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___property_name_0), value);
	}
};

struct DefaultPropertyAttribute_t3439475937_StaticFields
{
public:
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_t3439475937 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultPropertyAttribute_t3439475937_StaticFields, ___Default_1)); }
	inline DefaultPropertyAttribute_t3439475937 * get_Default_1() const { return ___Default_1; }
	inline DefaultPropertyAttribute_t3439475937 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultPropertyAttribute_t3439475937 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROPERTYATTRIBUTE_T3439475937_H
#ifndef DEFAULTVALUEATTRIBUTE_T3687818882_H
#define DEFAULTVALUEATTRIBUTE_T3687818882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t3687818882  : public Attribute_t562250427
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::DefaultValue
	RuntimeObject * ___DefaultValue_0;

public:
	inline static int32_t get_offset_of_DefaultValue_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t3687818882, ___DefaultValue_0)); }
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
#endif // DEFAULTVALUEATTRIBUTE_T3687818882_H
#ifndef DATETIMECONVERTER_T2475588563_H
#define DATETIMECONVERTER_T2475588563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2475588563  : public TypeConverter_t2747148575
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2475588563_H
#ifndef NAMEVALUECOLLECTION_T2507949693_H
#define NAMEVALUECOLLECTION_T2507949693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t2507949693  : public NameObjectCollectionBase_t759708161
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAllKeys
	StringU5BU5D_t2633181040* ___cachedAllKeys_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::cachedAll
	StringU5BU5D_t2633181040* ___cachedAll_11;

public:
	inline static int32_t get_offset_of_cachedAllKeys_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t2507949693, ___cachedAllKeys_10)); }
	inline StringU5BU5D_t2633181040* get_cachedAllKeys_10() const { return ___cachedAllKeys_10; }
	inline StringU5BU5D_t2633181040** get_address_of_cachedAllKeys_10() { return &___cachedAllKeys_10; }
	inline void set_cachedAllKeys_10(StringU5BU5D_t2633181040* value)
	{
		___cachedAllKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAllKeys_10), value);
	}

	inline static int32_t get_offset_of_cachedAll_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t2507949693, ___cachedAll_11)); }
	inline StringU5BU5D_t2633181040* get_cachedAll_11() const { return ___cachedAll_11; }
	inline StringU5BU5D_t2633181040** get_address_of_cachedAll_11() { return &___cachedAll_11; }
	inline void set_cachedAll_11(StringU5BU5D_t2633181040* value)
	{
		___cachedAll_11 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAll_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T2507949693_H
#ifndef SYSTEMEXCEPTION_T214806148_H
#define SYSTEMEXCEPTION_T214806148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t214806148  : public Exception_t542961288
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T214806148_H
#ifndef DESIGNONLYATTRIBUTE_T3435472161_H
#define DESIGNONLYATTRIBUTE_T3435472161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignOnlyAttribute
struct  DesignOnlyAttribute_t3435472161  : public Attribute_t562250427
{
public:
	// System.Boolean System.ComponentModel.DesignOnlyAttribute::design_only
	bool ___design_only_0;

public:
	inline static int32_t get_offset_of_design_only_0() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3435472161, ___design_only_0)); }
	inline bool get_design_only_0() const { return ___design_only_0; }
	inline bool* get_address_of_design_only_0() { return &___design_only_0; }
	inline void set_design_only_0(bool value)
	{
		___design_only_0 = value;
	}
};

struct DesignOnlyAttribute_t3435472161_StaticFields
{
public:
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Default
	DesignOnlyAttribute_t3435472161 * ___Default_1;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::No
	DesignOnlyAttribute_t3435472161 * ___No_2;
	// System.ComponentModel.DesignOnlyAttribute System.ComponentModel.DesignOnlyAttribute::Yes
	DesignOnlyAttribute_t3435472161 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3435472161_StaticFields, ___Default_1)); }
	inline DesignOnlyAttribute_t3435472161 * get_Default_1() const { return ___Default_1; }
	inline DesignOnlyAttribute_t3435472161 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignOnlyAttribute_t3435472161 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3435472161_StaticFields, ___No_2)); }
	inline DesignOnlyAttribute_t3435472161 * get_No_2() const { return ___No_2; }
	inline DesignOnlyAttribute_t3435472161 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignOnlyAttribute_t3435472161 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignOnlyAttribute_t3435472161_StaticFields, ___Yes_3)); }
	inline DesignOnlyAttribute_t3435472161 * get_Yes_3() const { return ___Yes_3; }
	inline DesignOnlyAttribute_t3435472161 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignOnlyAttribute_t3435472161 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNONLYATTRIBUTE_T3435472161_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T2360818318_H
#define DESIGNERCATEGORYATTRIBUTE_T2360818318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t2360818318  : public Attribute_t562250427
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2360818318, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}
};

struct DesignerCategoryAttribute_t2360818318_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t2360818318 * ___Component_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t2360818318 * ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t2360818318 * ___Generic_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t2360818318 * ___Default_4;

public:
	inline static int32_t get_offset_of_Component_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2360818318_StaticFields, ___Component_1)); }
	inline DesignerCategoryAttribute_t2360818318 * get_Component_1() const { return ___Component_1; }
	inline DesignerCategoryAttribute_t2360818318 ** get_address_of_Component_1() { return &___Component_1; }
	inline void set_Component_1(DesignerCategoryAttribute_t2360818318 * value)
	{
		___Component_1 = value;
		Il2CppCodeGenWriteBarrier((&___Component_1), value);
	}

	inline static int32_t get_offset_of_Form_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2360818318_StaticFields, ___Form_2)); }
	inline DesignerCategoryAttribute_t2360818318 * get_Form_2() const { return ___Form_2; }
	inline DesignerCategoryAttribute_t2360818318 ** get_address_of_Form_2() { return &___Form_2; }
	inline void set_Form_2(DesignerCategoryAttribute_t2360818318 * value)
	{
		___Form_2 = value;
		Il2CppCodeGenWriteBarrier((&___Form_2), value);
	}

	inline static int32_t get_offset_of_Generic_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2360818318_StaticFields, ___Generic_3)); }
	inline DesignerCategoryAttribute_t2360818318 * get_Generic_3() const { return ___Generic_3; }
	inline DesignerCategoryAttribute_t2360818318 ** get_address_of_Generic_3() { return &___Generic_3; }
	inline void set_Generic_3(DesignerCategoryAttribute_t2360818318 * value)
	{
		___Generic_3 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_3), value);
	}

	inline static int32_t get_offset_of_Default_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t2360818318_StaticFields, ___Default_4)); }
	inline DesignerCategoryAttribute_t2360818318 * get_Default_4() const { return ___Default_4; }
	inline DesignerCategoryAttribute_t2360818318 ** get_address_of_Default_4() { return &___Default_4; }
	inline void set_Default_4(DesignerCategoryAttribute_t2360818318 * value)
	{
		___Default_4 = value;
		Il2CppCodeGenWriteBarrier((&___Default_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T2360818318_H
#ifndef DESIGNTIMEVISIBLEATTRIBUTE_T1651170685_H
#define DESIGNTIMEVISIBLEATTRIBUTE_T1651170685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignTimeVisibleAttribute
struct  DesignTimeVisibleAttribute_t1651170685  : public Attribute_t562250427
{
public:
	// System.Boolean System.ComponentModel.DesignTimeVisibleAttribute::visible
	bool ___visible_0;

public:
	inline static int32_t get_offset_of_visible_0() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1651170685, ___visible_0)); }
	inline bool get_visible_0() const { return ___visible_0; }
	inline bool* get_address_of_visible_0() { return &___visible_0; }
	inline void set_visible_0(bool value)
	{
		___visible_0 = value;
	}
};

struct DesignTimeVisibleAttribute_t1651170685_StaticFields
{
public:
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Default
	DesignTimeVisibleAttribute_t1651170685 * ___Default_1;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::No
	DesignTimeVisibleAttribute_t1651170685 * ___No_2;
	// System.ComponentModel.DesignTimeVisibleAttribute System.ComponentModel.DesignTimeVisibleAttribute::Yes
	DesignTimeVisibleAttribute_t1651170685 * ___Yes_3;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1651170685_StaticFields, ___Default_1)); }
	inline DesignTimeVisibleAttribute_t1651170685 * get_Default_1() const { return ___Default_1; }
	inline DesignTimeVisibleAttribute_t1651170685 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignTimeVisibleAttribute_t1651170685 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1651170685_StaticFields, ___No_2)); }
	inline DesignTimeVisibleAttribute_t1651170685 * get_No_2() const { return ___No_2; }
	inline DesignTimeVisibleAttribute_t1651170685 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(DesignTimeVisibleAttribute_t1651170685 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Yes_3() { return static_cast<int32_t>(offsetof(DesignTimeVisibleAttribute_t1651170685_StaticFields, ___Yes_3)); }
	inline DesignTimeVisibleAttribute_t1651170685 * get_Yes_3() const { return ___Yes_3; }
	inline DesignTimeVisibleAttribute_t1651170685 ** get_address_of_Yes_3() { return &___Yes_3; }
	inline void set_Yes_3(DesignTimeVisibleAttribute_t1651170685 * value)
	{
		___Yes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNTIMEVISIBLEATTRIBUTE_T1651170685_H
#ifndef DESIGNERATTRIBUTE_T1732003062_H
#define DESIGNERATTRIBUTE_T1732003062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t1732003062  : public Attribute_t562250427
{
public:
	// System.String System.ComponentModel.DesignerAttribute::name
	String_t* ___name_0;
	// System.String System.ComponentModel.DesignerAttribute::basetypename
	String_t* ___basetypename_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1732003062, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_basetypename_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t1732003062, ___basetypename_1)); }
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
#endif // DESIGNERATTRIBUTE_T1732003062_H
#ifndef DESCRIPTIONATTRIBUTE_T517947385_H
#define DESCRIPTIONATTRIBUTE_T517947385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t517947385  : public Attribute_t562250427
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t517947385, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t517947385_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t517947385 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t517947385_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t517947385 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t517947385 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t517947385 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T517947385_H
#ifndef LISTSORTDIRECTION_T1734928773_H
#define LISTSORTDIRECTION_T1734928773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ListSortDirection
struct  ListSortDirection_t1734928773 
{
public:
	// System.Int32 System.ComponentModel.ListSortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ListSortDirection_t1734928773, ___value___1)); }
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
#endif // LISTSORTDIRECTION_T1734928773_H
#ifndef EDITORBROWSABLESTATE_T59068453_H
#define EDITORBROWSABLESTATE_T59068453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t59068453 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t59068453, ___value___1)); }
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
#endif // EDITORBROWSABLESTATE_T59068453_H
#ifndef BYTECONVERTER_T210826406_H
#define BYTECONVERTER_T210826406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t210826406  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T210826406_H
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T4294924442_H
#define DESIGNERSERIALIZATIONVISIBILITY_T4294924442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t4294924442 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t4294924442, ___value___1)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T4294924442_H
#ifndef COLLECTIONCHANGEACTION_T1898751022_H
#define COLLECTIONCHANGEACTION_T1898751022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeAction
struct  CollectionChangeAction_t1898751022 
{
public:
	// System.Int32 System.ComponentModel.CollectionChangeAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollectionChangeAction_t1898751022, ___value___1)); }
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
#endif // COLLECTIONCHANGEACTION_T1898751022_H
#ifndef ARRAYCONVERTER_T1380591269_H
#define ARRAYCONVERTER_T1380591269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t1380591269  : public CollectionConverter_t3839553565
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T1380591269_H
#ifndef SINGLECONVERTER_T1058744255_H
#define SINGLECONVERTER_T1058744255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t1058744255  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T1058744255_H
#ifndef REFRESHPROPERTIES_T1575079855_H
#define REFRESHPROPERTIES_T1575079855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshProperties
struct  RefreshProperties_t1575079855 
{
public:
	// System.Int32 System.ComponentModel.RefreshProperties::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RefreshProperties_t1575079855, ___value___1)); }
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
#endif // REFRESHPROPERTIES_T1575079855_H
#ifndef ARGUMENTEXCEPTION_T948040017_H
#define ARGUMENTEXCEPTION_T948040017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t948040017  : public SystemException_t214806148
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t948040017, ___param_name_12)); }
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
#endif // ARGUMENTEXCEPTION_T948040017_H
#ifndef REFLECTIONPROPERTYDESCRIPTOR_T4021174277_H
#define REFLECTIONPROPERTYDESCRIPTOR_T4021174277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectionPropertyDescriptor
struct  ReflectionPropertyDescriptor_t4021174277  : public PropertyDescriptor_t3199636365
{
public:
	// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::_member
	PropertyInfo_t * ____member_4;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_componentType
	Type_t * ____componentType_5;
	// System.Type System.ComponentModel.ReflectionPropertyDescriptor::_propertyType
	Type_t * ____propertyType_6;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t4021174277, ____member_4)); }
	inline PropertyInfo_t * get__member_4() const { return ____member_4; }
	inline PropertyInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(PropertyInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}

	inline static int32_t get_offset_of__componentType_5() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t4021174277, ____componentType_5)); }
	inline Type_t * get__componentType_5() const { return ____componentType_5; }
	inline Type_t ** get_address_of__componentType_5() { return &____componentType_5; }
	inline void set__componentType_5(Type_t * value)
	{
		____componentType_5 = value;
		Il2CppCodeGenWriteBarrier((&____componentType_5), value);
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(ReflectionPropertyDescriptor_t4021174277, ____propertyType_6)); }
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
#endif // REFLECTIONPROPERTYDESCRIPTOR_T4021174277_H
#ifndef DOUBLECONVERTER_T990433346_H
#define DOUBLECONVERTER_T990433346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t990433346  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T990433346_H
#ifndef COMPONENTCONVERTER_T2630317808_H
#define COMPONENTCONVERTER_T2630317808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t2630317808  : public ReferenceConverter_t1412184843
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T2630317808_H
#ifndef INT16CONVERTER_T1670660175_H
#define INT16CONVERTER_T1670660175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t1670660175  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T1670660175_H
#ifndef DECIMALCONVERTER_T1688903830_H
#define DECIMALCONVERTER_T1688903830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1688903830  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1688903830_H
#ifndef INT32CONVERTER_T1776648863_H
#define INT32CONVERTER_T1776648863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t1776648863  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T1776648863_H
#ifndef INT64CONVERTER_T2793613635_H
#define INT64CONVERTER_T2793613635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t2793613635  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T2793613635_H
#ifndef SBYTECONVERTER_T3001304227_H
#define SBYTECONVERTER_T3001304227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t3001304227  : public BaseNumberConverter_t220241699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T3001304227_H
#ifndef ARRAYPROPERTYDESCRIPTOR_T1848631622_H
#define ARRAYPROPERTYDESCRIPTOR_T1848631622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct  ArrayPropertyDescriptor_t1848631622  : public PropertyDescriptor_t3199636365
{
public:
	// System.Int32 System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::index
	int32_t ___index_4;
	// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::array_type
	Type_t * ___array_type_5;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t1848631622, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_array_type_5() { return static_cast<int32_t>(offsetof(ArrayPropertyDescriptor_t1848631622, ___array_type_5)); }
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
#endif // ARRAYPROPERTYDESCRIPTOR_T1848631622_H
#ifndef EDITORBROWSABLEATTRIBUTE_T3434367499_H
#define EDITORBROWSABLEATTRIBUTE_T3434367499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t3434367499  : public Attribute_t562250427
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::state
	int32_t ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t3434367499, ___state_0)); }
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
#endif // EDITORBROWSABLEATTRIBUTE_T3434367499_H
#ifndef REFRESHPROPERTIESATTRIBUTE_T662778428_H
#define REFRESHPROPERTIESATTRIBUTE_T662778428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshPropertiesAttribute
struct  RefreshPropertiesAttribute_t662778428  : public Attribute_t562250427
{
public:
	// System.ComponentModel.RefreshProperties System.ComponentModel.RefreshPropertiesAttribute::refresh
	int32_t ___refresh_0;

public:
	inline static int32_t get_offset_of_refresh_0() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t662778428, ___refresh_0)); }
	inline int32_t get_refresh_0() const { return ___refresh_0; }
	inline int32_t* get_address_of_refresh_0() { return &___refresh_0; }
	inline void set_refresh_0(int32_t value)
	{
		___refresh_0 = value;
	}
};

struct RefreshPropertiesAttribute_t662778428_StaticFields
{
public:
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::All
	RefreshPropertiesAttribute_t662778428 * ___All_1;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Default
	RefreshPropertiesAttribute_t662778428 * ___Default_2;
	// System.ComponentModel.RefreshPropertiesAttribute System.ComponentModel.RefreshPropertiesAttribute::Repaint
	RefreshPropertiesAttribute_t662778428 * ___Repaint_3;

public:
	inline static int32_t get_offset_of_All_1() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t662778428_StaticFields, ___All_1)); }
	inline RefreshPropertiesAttribute_t662778428 * get_All_1() const { return ___All_1; }
	inline RefreshPropertiesAttribute_t662778428 ** get_address_of_All_1() { return &___All_1; }
	inline void set_All_1(RefreshPropertiesAttribute_t662778428 * value)
	{
		___All_1 = value;
		Il2CppCodeGenWriteBarrier((&___All_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t662778428_StaticFields, ___Default_2)); }
	inline RefreshPropertiesAttribute_t662778428 * get_Default_2() const { return ___Default_2; }
	inline RefreshPropertiesAttribute_t662778428 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(RefreshPropertiesAttribute_t662778428 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}

	inline static int32_t get_offset_of_Repaint_3() { return static_cast<int32_t>(offsetof(RefreshPropertiesAttribute_t662778428_StaticFields, ___Repaint_3)); }
	inline RefreshPropertiesAttribute_t662778428 * get_Repaint_3() const { return ___Repaint_3; }
	inline RefreshPropertiesAttribute_t662778428 ** get_address_of_Repaint_3() { return &___Repaint_3; }
	inline void set_Repaint_3(RefreshPropertiesAttribute_t662778428 * value)
	{
		___Repaint_3 = value;
		Il2CppCodeGenWriteBarrier((&___Repaint_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHPROPERTIESATTRIBUTE_T662778428_H
#ifndef INVALIDENUMARGUMENTEXCEPTION_T3511797171_H
#define INVALIDENUMARGUMENTEXCEPTION_T3511797171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InvalidEnumArgumentException
struct  InvalidEnumArgumentException_t3511797171  : public ArgumentException_t948040017
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDENUMARGUMENTEXCEPTION_T3511797171_H
#ifndef COLLECTIONCHANGEEVENTARGS_T2338911904_H
#define COLLECTIONCHANGEEVENTARGS_T2338911904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionChangeEventArgs
struct  CollectionChangeEventArgs_t2338911904  : public EventArgs_t7372661
{
public:
	// System.ComponentModel.CollectionChangeAction System.ComponentModel.CollectionChangeEventArgs::changeAction
	int32_t ___changeAction_1;
	// System.Object System.ComponentModel.CollectionChangeEventArgs::theElement
	RuntimeObject * ___theElement_2;

public:
	inline static int32_t get_offset_of_changeAction_1() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t2338911904, ___changeAction_1)); }
	inline int32_t get_changeAction_1() const { return ___changeAction_1; }
	inline int32_t* get_address_of_changeAction_1() { return &___changeAction_1; }
	inline void set_changeAction_1(int32_t value)
	{
		___changeAction_1 = value;
	}

	inline static int32_t get_offset_of_theElement_2() { return static_cast<int32_t>(offsetof(CollectionChangeEventArgs_t2338911904, ___theElement_2)); }
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
#endif // COLLECTIONCHANGEEVENTARGS_T2338911904_H
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3825410303_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3825410303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t3825410303  : public Attribute_t562250427
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_0;

public:
	inline static int32_t get_offset_of_visibility_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3825410303, ___visibility_0)); }
	inline int32_t get_visibility_0() const { return ___visibility_0; }
	inline int32_t* get_address_of_visibility_0() { return &___visibility_0; }
	inline void set_visibility_0(int32_t value)
	{
		___visibility_0 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t3825410303_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t3825410303 * ___Default_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t3825410303 * ___Content_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t3825410303 * ___Hidden_3;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t3825410303 * ___Visible_4;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3825410303_StaticFields, ___Default_1)); }
	inline DesignerSerializationVisibilityAttribute_t3825410303 * get_Default_1() const { return ___Default_1; }
	inline DesignerSerializationVisibilityAttribute_t3825410303 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DesignerSerializationVisibilityAttribute_t3825410303 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}

	inline static int32_t get_offset_of_Content_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3825410303_StaticFields, ___Content_2)); }
	inline DesignerSerializationVisibilityAttribute_t3825410303 * get_Content_2() const { return ___Content_2; }
	inline DesignerSerializationVisibilityAttribute_t3825410303 ** get_address_of_Content_2() { return &___Content_2; }
	inline void set_Content_2(DesignerSerializationVisibilityAttribute_t3825410303 * value)
	{
		___Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___Content_2), value);
	}

	inline static int32_t get_offset_of_Hidden_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3825410303_StaticFields, ___Hidden_3)); }
	inline DesignerSerializationVisibilityAttribute_t3825410303 * get_Hidden_3() const { return ___Hidden_3; }
	inline DesignerSerializationVisibilityAttribute_t3825410303 ** get_address_of_Hidden_3() { return &___Hidden_3; }
	inline void set_Hidden_3(DesignerSerializationVisibilityAttribute_t3825410303 * value)
	{
		___Hidden_3 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_3), value);
	}

	inline static int32_t get_offset_of_Visible_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t3825410303_StaticFields, ___Visible_4)); }
	inline DesignerSerializationVisibilityAttribute_t3825410303 * get_Visible_4() const { return ___Visible_4; }
	inline DesignerSerializationVisibilityAttribute_t3825410303 ** get_address_of_Visible_4() { return &___Visible_4; }
	inline void set_Visible_4(DesignerSerializationVisibilityAttribute_t3825410303 * value)
	{
		___Visible_4 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T3825410303_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1100 = { sizeof (MonoTODOAttribute_t979342080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1100[1] = 
{
	MonoTODOAttribute_t979342080::get_offset_of_comment_0(),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1108 = { sizeof (HybridDictionary_t3618023867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1108[3] = 
{
	HybridDictionary_t3618023867::get_offset_of_caseInsensitive_0(),
	HybridDictionary_t3618023867::get_offset_of_hashtable_1(),
	HybridDictionary_t3618023867::get_offset_of_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1109 = { sizeof (ListDictionary_t1600387944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1109[4] = 
{
	ListDictionary_t1600387944::get_offset_of_count_0(),
	ListDictionary_t1600387944::get_offset_of_version_1(),
	ListDictionary_t1600387944::get_offset_of_head_2(),
	ListDictionary_t1600387944::get_offset_of_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1110 = { sizeof (DictionaryNode_t2953886644), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1110[3] = 
{
	DictionaryNode_t2953886644::get_offset_of_key_0(),
	DictionaryNode_t2953886644::get_offset_of_value_1(),
	DictionaryNode_t2953886644::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1111 = { sizeof (DictionaryNodeEnumerator_t1402259964), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1111[4] = 
{
	DictionaryNodeEnumerator_t1402259964::get_offset_of_dict_0(),
	DictionaryNodeEnumerator_t1402259964::get_offset_of_isAtStart_1(),
	DictionaryNodeEnumerator_t1402259964::get_offset_of_current_2(),
	DictionaryNodeEnumerator_t1402259964::get_offset_of_version_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1112 = { sizeof (DictionaryNodeCollection_t3608384492), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1112[2] = 
{
	DictionaryNodeCollection_t3608384492::get_offset_of_dict_0(),
	DictionaryNodeCollection_t3608384492::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1113 = { sizeof (DictionaryNodeCollectionEnumerator_t1405352316), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1113[2] = 
{
	DictionaryNodeCollectionEnumerator_t1405352316::get_offset_of_inner_0(),
	DictionaryNodeCollectionEnumerator_t1405352316::get_offset_of_isKeyList_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1114 = { sizeof (NameObjectCollectionBase_t759708161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1114[10] = 
{
	NameObjectCollectionBase_t759708161::get_offset_of_m_ItemsContainer_0(),
	NameObjectCollectionBase_t759708161::get_offset_of_m_NullKeyItem_1(),
	NameObjectCollectionBase_t759708161::get_offset_of_m_ItemsArray_2(),
	NameObjectCollectionBase_t759708161::get_offset_of_m_hashprovider_3(),
	NameObjectCollectionBase_t759708161::get_offset_of_m_comparer_4(),
	NameObjectCollectionBase_t759708161::get_offset_of_m_defCapacity_5(),
	NameObjectCollectionBase_t759708161::get_offset_of_m_readonly_6(),
	NameObjectCollectionBase_t759708161::get_offset_of_infoCopy_7(),
	NameObjectCollectionBase_t759708161::get_offset_of_keyscoll_8(),
	NameObjectCollectionBase_t759708161::get_offset_of_equality_comparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1115 = { sizeof (_Item_t1315836901), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1115[2] = 
{
	_Item_t1315836901::get_offset_of_key_0(),
	_Item_t1315836901::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1116 = { sizeof (_KeysEnumerator_t3326083874), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1116[2] = 
{
	_KeysEnumerator_t3326083874::get_offset_of_m_collection_0(),
	_KeysEnumerator_t3326083874::get_offset_of_m_position_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1117 = { sizeof (KeysCollection_t3206097442), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1117[1] = 
{
	KeysCollection_t3206097442::get_offset_of_m_collection_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1118 = { sizeof (NameValueCollection_t2507949693), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1118[2] = 
{
	NameValueCollection_t2507949693::get_offset_of_cachedAllKeys_10(),
	NameValueCollection_t2507949693::get_offset_of_cachedAll_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1119 = { sizeof (StringCollection_t3585650082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1119[1] = 
{
	StringCollection_t3585650082::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1120 = { sizeof (StringDictionary_t1447643785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1120[1] = 
{
	StringDictionary_t1447643785::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1121 = { sizeof (StringEnumerator_t2355884342), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1121[1] = 
{
	StringEnumerator_t2355884342::get_offset_of_enumerable_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1122 = { sizeof (InstanceDescriptor_t2009398710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1122[3] = 
{
	InstanceDescriptor_t2009398710::get_offset_of_member_0(),
	InstanceDescriptor_t2009398710::get_offset_of_arguments_1(),
	InstanceDescriptor_t2009398710::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1123 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1124 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1125 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1126 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1127 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1128 = { sizeof (ArrayConverter_t1380591269), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1129 = { sizeof (ArrayPropertyDescriptor_t1848631622), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1129[2] = 
{
	ArrayPropertyDescriptor_t1848631622::get_offset_of_index_4(),
	ArrayPropertyDescriptor_t1848631622::get_offset_of_array_type_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1130 = { sizeof (AttributeCollection_t3836735504), -1, sizeof(AttributeCollection_t3836735504_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1130[2] = 
{
	AttributeCollection_t3836735504::get_offset_of_attrList_0(),
	AttributeCollection_t3836735504_StaticFields::get_offset_of_Empty_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1131 = { sizeof (BaseNumberConverter_t220241699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1131[1] = 
{
	BaseNumberConverter_t220241699::get_offset_of_InnerType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1132 = { sizeof (BooleanConverter_t3652801788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1133 = { sizeof (BrowsableAttribute_t1766545214), -1, sizeof(BrowsableAttribute_t1766545214_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1133[4] = 
{
	BrowsableAttribute_t1766545214::get_offset_of_browsable_0(),
	BrowsableAttribute_t1766545214_StaticFields::get_offset_of_Default_1(),
	BrowsableAttribute_t1766545214_StaticFields::get_offset_of_No_2(),
	BrowsableAttribute_t1766545214_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1134 = { sizeof (ByteConverter_t210826406), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1135 = { sizeof (CategoryAttribute_t1795666869), -1, sizeof(CategoryAttribute_t1795666869_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1135[4] = 
{
	CategoryAttribute_t1795666869::get_offset_of_category_0(),
	CategoryAttribute_t1795666869::get_offset_of_IsLocalized_1(),
	CategoryAttribute_t1795666869_StaticFields::get_offset_of_def_2(),
	CategoryAttribute_t1795666869_StaticFields::get_offset_of_lockobj_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1136 = { sizeof (CharConverter_t3928875489), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1137 = { sizeof (CollectionChangeAction_t1898751022)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1137[4] = 
{
	CollectionChangeAction_t1898751022::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1138 = { sizeof (CollectionChangeEventArgs_t2338911904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1138[2] = 
{
	CollectionChangeEventArgs_t2338911904::get_offset_of_changeAction_1(),
	CollectionChangeEventArgs_t2338911904::get_offset_of_theElement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1139 = { sizeof (CollectionConverter_t3839553565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1140 = { sizeof (Component_t3868821214), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1140[3] = 
{
	Component_t3868821214::get_offset_of_event_handlers_1(),
	Component_t3868821214::get_offset_of_mySite_2(),
	Component_t3868821214::get_offset_of_disposedEvent_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1141 = { sizeof (ComponentCollection_t1832600025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1142 = { sizeof (ComponentConverter_t2630317808), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1143 = { sizeof (CultureInfoConverter_t2960087103), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1143[1] = 
{
	CultureInfoConverter_t2960087103::get_offset_of__standardValues_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1144 = { sizeof (CultureInfoComparer_t192883438), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1145 = { sizeof (DateTimeConverter_t2475588563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1146 = { sizeof (DecimalConverter_t1688903830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1147 = { sizeof (DefaultEventAttribute_t2759635461), -1, sizeof(DefaultEventAttribute_t2759635461_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1147[2] = 
{
	DefaultEventAttribute_t2759635461::get_offset_of_eventName_0(),
	DefaultEventAttribute_t2759635461_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1148 = { sizeof (DefaultPropertyAttribute_t3439475937), -1, sizeof(DefaultPropertyAttribute_t3439475937_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1148[2] = 
{
	DefaultPropertyAttribute_t3439475937::get_offset_of_property_name_0(),
	DefaultPropertyAttribute_t3439475937_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1149 = { sizeof (DefaultValueAttribute_t3687818882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1149[1] = 
{
	DefaultValueAttribute_t3687818882::get_offset_of_DefaultValue_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1150 = { sizeof (DescriptionAttribute_t517947385), -1, sizeof(DescriptionAttribute_t517947385_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1150[2] = 
{
	DescriptionAttribute_t517947385::get_offset_of_desc_0(),
	DescriptionAttribute_t517947385_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1151 = { sizeof (DesignOnlyAttribute_t3435472161), -1, sizeof(DesignOnlyAttribute_t3435472161_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1151[4] = 
{
	DesignOnlyAttribute_t3435472161::get_offset_of_design_only_0(),
	DesignOnlyAttribute_t3435472161_StaticFields::get_offset_of_Default_1(),
	DesignOnlyAttribute_t3435472161_StaticFields::get_offset_of_No_2(),
	DesignOnlyAttribute_t3435472161_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1152 = { sizeof (DesignTimeVisibleAttribute_t1651170685), -1, sizeof(DesignTimeVisibleAttribute_t1651170685_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1152[4] = 
{
	DesignTimeVisibleAttribute_t1651170685::get_offset_of_visible_0(),
	DesignTimeVisibleAttribute_t1651170685_StaticFields::get_offset_of_Default_1(),
	DesignTimeVisibleAttribute_t1651170685_StaticFields::get_offset_of_No_2(),
	DesignTimeVisibleAttribute_t1651170685_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1153 = { sizeof (DesignerAttribute_t1732003062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1153[2] = 
{
	DesignerAttribute_t1732003062::get_offset_of_name_0(),
	DesignerAttribute_t1732003062::get_offset_of_basetypename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1154 = { sizeof (DesignerCategoryAttribute_t2360818318), -1, sizeof(DesignerCategoryAttribute_t2360818318_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1154[5] = 
{
	DesignerCategoryAttribute_t2360818318::get_offset_of_category_0(),
	DesignerCategoryAttribute_t2360818318_StaticFields::get_offset_of_Component_1(),
	DesignerCategoryAttribute_t2360818318_StaticFields::get_offset_of_Form_2(),
	DesignerCategoryAttribute_t2360818318_StaticFields::get_offset_of_Generic_3(),
	DesignerCategoryAttribute_t2360818318_StaticFields::get_offset_of_Default_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1155 = { sizeof (DesignerSerializationVisibility_t4294924442)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1155[4] = 
{
	DesignerSerializationVisibility_t4294924442::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1156 = { sizeof (DesignerSerializationVisibilityAttribute_t3825410303), -1, sizeof(DesignerSerializationVisibilityAttribute_t3825410303_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1156[5] = 
{
	DesignerSerializationVisibilityAttribute_t3825410303::get_offset_of_visibility_0(),
	DesignerSerializationVisibilityAttribute_t3825410303_StaticFields::get_offset_of_Default_1(),
	DesignerSerializationVisibilityAttribute_t3825410303_StaticFields::get_offset_of_Content_2(),
	DesignerSerializationVisibilityAttribute_t3825410303_StaticFields::get_offset_of_Hidden_3(),
	DesignerSerializationVisibilityAttribute_t3825410303_StaticFields::get_offset_of_Visible_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1157 = { sizeof (DoubleConverter_t990433346), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1158 = { sizeof (EditorAttribute_t4056309733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1158[2] = 
{
	EditorAttribute_t4056309733::get_offset_of_name_0(),
	EditorAttribute_t4056309733::get_offset_of_basename_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1159 = { sizeof (EditorBrowsableAttribute_t3434367499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1159[1] = 
{
	EditorBrowsableAttribute_t3434367499::get_offset_of_state_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1160 = { sizeof (EditorBrowsableState_t59068453)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1160[4] = 
{
	EditorBrowsableState_t59068453::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1161 = { sizeof (EnumConverter_t4222214814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1161[2] = 
{
	EnumConverter_t4222214814::get_offset_of_type_0(),
	EnumConverter_t4222214814::get_offset_of_stdValues_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1162 = { sizeof (EnumComparer_t3511327880), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1163 = { sizeof (ListEntry_t2412571684), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1163[3] = 
{
	ListEntry_t2412571684::get_offset_of_key_0(),
	ListEntry_t2412571684::get_offset_of_value_1(),
	ListEntry_t2412571684::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1164 = { sizeof (EventHandlerList_t2653672671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1164[2] = 
{
	EventHandlerList_t2653672671::get_offset_of_entries_0(),
	EventHandlerList_t2653672671::get_offset_of_null_entry_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1165 = { sizeof (ExpandableObjectConverter_t1437468376), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1166 = { sizeof (GuidConverter_t2197634021), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1167 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1168 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1169 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1170 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1171 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1172 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1173 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1174 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1175 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1176 = { sizeof (Int16Converter_t1670660175), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1177 = { sizeof (Int32Converter_t1776648863), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1178 = { sizeof (Int64Converter_t2793613635), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1179 = { sizeof (InvalidEnumArgumentException_t3511797171), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1180 = { sizeof (ListBindableAttribute_t3063351671), -1, sizeof(ListBindableAttribute_t3063351671_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1180[4] = 
{
	ListBindableAttribute_t3063351671_StaticFields::get_offset_of_Default_0(),
	ListBindableAttribute_t3063351671_StaticFields::get_offset_of_No_1(),
	ListBindableAttribute_t3063351671_StaticFields::get_offset_of_Yes_2(),
	ListBindableAttribute_t3063351671::get_offset_of_bindable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1181 = { sizeof (ListSortDirection_t1734928773)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1181[3] = 
{
	ListSortDirection_t1734928773::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1182 = { sizeof (MarshalByValueComponent_t2696619689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1182[3] = 
{
	MarshalByValueComponent_t2696619689::get_offset_of_eventList_0(),
	MarshalByValueComponent_t2696619689::get_offset_of_mySite_1(),
	MarshalByValueComponent_t2696619689::get_offset_of_disposedEvent_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1183 = { sizeof (MemberDescriptor_t1633641753), -1, sizeof(MemberDescriptor_t1633641753_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1183[4] = 
{
	MemberDescriptor_t1633641753::get_offset_of_name_0(),
	MemberDescriptor_t1633641753::get_offset_of_attrs_1(),
	MemberDescriptor_t1633641753::get_offset_of_attrCollection_2(),
	MemberDescriptor_t1633641753_StaticFields::get_offset_of_default_comparer_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1184 = { sizeof (MemberDescriptorComparer_t365568581), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1185 = { sizeof (MergablePropertyAttribute_t72475022), -1, sizeof(MergablePropertyAttribute_t72475022_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1185[4] = 
{
	MergablePropertyAttribute_t72475022::get_offset_of_mergable_0(),
	MergablePropertyAttribute_t72475022_StaticFields::get_offset_of_Default_1(),
	MergablePropertyAttribute_t72475022_StaticFields::get_offset_of_No_2(),
	MergablePropertyAttribute_t72475022_StaticFields::get_offset_of_Yes_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1186 = { sizeof (NullableConverter_t389942785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1186[3] = 
{
	NullableConverter_t389942785::get_offset_of_nullableType_0(),
	NullableConverter_t389942785::get_offset_of_underlyingType_1(),
	NullableConverter_t389942785::get_offset_of_underlyingTypeConverter_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1187 = { sizeof (PropertyChangedEventArgs_t2760001126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1187[1] = 
{
	PropertyChangedEventArgs_t2760001126::get_offset_of_propertyName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1188 = { sizeof (PropertyDescriptor_t3199636365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1189 = { sizeof (PropertyDescriptorCollection_t1742346747), -1, sizeof(PropertyDescriptorCollection_t1742346747_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1189[3] = 
{
	PropertyDescriptorCollection_t1742346747_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t1742346747::get_offset_of_properties_1(),
	PropertyDescriptorCollection_t1742346747::get_offset_of_readOnly_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1190 = { sizeof (ReadOnlyAttribute_t1428409532), -1, sizeof(ReadOnlyAttribute_t1428409532_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1190[4] = 
{
	ReadOnlyAttribute_t1428409532::get_offset_of_read_only_0(),
	ReadOnlyAttribute_t1428409532_StaticFields::get_offset_of_No_1(),
	ReadOnlyAttribute_t1428409532_StaticFields::get_offset_of_Yes_2(),
	ReadOnlyAttribute_t1428409532_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1191 = { sizeof (ReferenceConverter_t1412184843), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1191[1] = 
{
	ReferenceConverter_t1412184843::get_offset_of_reference_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1192 = { sizeof (ReflectionPropertyDescriptor_t4021174277), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1192[3] = 
{
	ReflectionPropertyDescriptor_t4021174277::get_offset_of__member_4(),
	ReflectionPropertyDescriptor_t4021174277::get_offset_of__componentType_5(),
	ReflectionPropertyDescriptor_t4021174277::get_offset_of__propertyType_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1193 = { sizeof (RefreshProperties_t1575079855)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1193[4] = 
{
	RefreshProperties_t1575079855::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1194 = { sizeof (RefreshPropertiesAttribute_t662778428), -1, sizeof(RefreshPropertiesAttribute_t662778428_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1194[4] = 
{
	RefreshPropertiesAttribute_t662778428::get_offset_of_refresh_0(),
	RefreshPropertiesAttribute_t662778428_StaticFields::get_offset_of_All_1(),
	RefreshPropertiesAttribute_t662778428_StaticFields::get_offset_of_Default_2(),
	RefreshPropertiesAttribute_t662778428_StaticFields::get_offset_of_Repaint_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1195 = { sizeof (SByteConverter_t3001304227), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1196 = { sizeof (SingleConverter_t1058744255), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1197 = { sizeof (StringConverter_t4031842195), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1198 = { sizeof (TimeSpanConverter_t221736443), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1199 = { sizeof (ToolboxItemAttribute_t4190304553), -1, sizeof(ToolboxItemAttribute_t4190304553_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1199[4] = 
{
	ToolboxItemAttribute_t4190304553_StaticFields::get_offset_of_Default_0(),
	ToolboxItemAttribute_t4190304553_StaticFields::get_offset_of_None_1(),
	ToolboxItemAttribute_t4190304553::get_offset_of_itemType_2(),
	ToolboxItemAttribute_t4190304553::get_offset_of_itemTypeName_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
