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

// System.Data.DataSet
struct DataSet_t91008811;
// System.String
struct String_t;
// System.Data.UniqueConstraint
struct UniqueConstraint_t2657169234;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3269346217;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t1143729861;
// System.Data.PropertyCollection
struct PropertyCollection_t399284420;
// System.Collections.ArrayList
struct ArrayList_t3308431662;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3835807538;
// System.Data.Common.Index
struct Index_t3657482687;
// System.Data.ConstraintCollection
struct ConstraintCollection_t599906311;
// System.Data.Common.DbCommand
struct DbCommand_t387545947;
// System.Data.DbSourceMethodInfo[]
struct DbSourceMethodInfoU5BU5D_t2218709909;
// System.Data.Common.DbProviderFactory
struct DbProviderFactory_t2206052852;
// System.Data.Common.DbDataAdapter
struct DbDataAdapter_t2467069893;
// System.Data.Common.DbConnection
struct DbConnection_t3217054343;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t1897146544;
// System.Data.DataTable
struct DataTable_t449011362;
// System.Data.DataColumn
struct DataColumn_t957173132;
// System.Data.TableMappingCollection
struct TableMappingCollection_t3730895761;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2335056595;
// System.Int32[]
struct Int32U5BU5D_t1044167045;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t672072564;
// System.Collections.Hashtable/HashValues
struct HashValues_t2786363628;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t2301083369;
// System.Collections.IComparer
struct IComparer_t1088521239;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1760672207;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2802524078;
// System.IntPtr[]
struct IntPtrU5BU5D_t646942624;
// System.Collections.IDictionary
struct IDictionary_t1400260140;
// System.ComponentModel.ISite
struct ISite_t2550847952;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t2278084688;
// System.Data.DataRow
struct DataRow_t1390955693;
// System.Char[]
struct CharU5BU5D_t252931387;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t1237907172;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3437738950;
// System.Byte[]
struct ByteU5BU5D_t170112886;
// System.Collections.Hashtable
struct Hashtable_t2762605430;
// System.String[]
struct StringU5BU5D_t2494872526;
// System.Data.DataRelation
struct DataRelation_t706411233;
// System.UInt32[]
struct UInt32U5BU5D_t2658612099;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t2841623346;
// System.Data.DataTableCollection
struct DataTableCollection_t42359719;
// System.Data.DataRelationCollection
struct DataRelationCollection_t4020009385;
// System.Globalization.CultureInfo
struct CultureInfo_t4119262167;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t846969719;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t3907879112;
// System.Data.DataColumnCollection
struct DataColumnCollection_t2775216988;
// System.Data.DataRowCollection
struct DataRowCollection_t3811941752;
// System.Data.DataRowBuilder
struct DataRowBuilder_t4106443462;
// System.Data.Common.RecordCache
struct RecordCache_t497324693;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t4218863425;
// System.Text.RegularExpressions.Regex
struct Regex_t3887491295;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3123778048;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t3538683144;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t3933482857;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t2332398076;
// System.Xml.XmlReader
struct XmlReader_t4152822220;
// System.Xml.XmlDocument
struct XmlDocument_t694818971;
// System.Data.RelationStructureCollection
struct RelationStructureCollection_t2789991864;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t1915669516;
// System.Data.Common.DataContainer
struct DataContainer_t2052367421;




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
#ifndef ATTRIBUTE_T1393872340_H
#define ATTRIBUTE_T1393872340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1393872340  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1393872340_H
#ifndef DATARELATION_T706411233_H
#define DATARELATION_T706411233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t706411233  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t91008811 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t2657169234 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t3269346217 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t1143729861* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t1143729861* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t399284420 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_10;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_11;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___dataSet_0)); }
	inline DataSet_t91008811 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t91008811 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t91008811 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t2657169234 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t2657169234 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t2657169234 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t3269346217 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t3269346217 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t3269346217 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t1143729861* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t1143729861** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t1143729861* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___childColumns_5)); }
	inline DataColumnU5BU5D_t1143729861* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t1143729861** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t1143729861* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ___extendedProperties_9)); }
	inline PropertyCollection_t399284420 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t399284420 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t399284420 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__parentTableNameSpace_10() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ____parentTableNameSpace_10)); }
	inline String_t* get__parentTableNameSpace_10() const { return ____parentTableNameSpace_10; }
	inline String_t** get_address_of__parentTableNameSpace_10() { return &____parentTableNameSpace_10; }
	inline void set__parentTableNameSpace_10(String_t* value)
	{
		____parentTableNameSpace_10 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_10), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_11() { return static_cast<int32_t>(offsetof(DataRelation_t706411233, ____childTableNameSpace_11)); }
	inline String_t* get__childTableNameSpace_11() const { return ____childTableNameSpace_11; }
	inline String_t** get_address_of__childTableNameSpace_11() { return &____childTableNameSpace_11; }
	inline void set__childTableNameSpace_11(String_t* value)
	{
		____childTableNameSpace_11 = value;
		Il2CppCodeGenWriteBarrier((&____childTableNameSpace_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATION_T706411233_H
#ifndef DOUBLET_T1265341067_H
#define DOUBLET_T1265341067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Doublet
struct  Doublet_t1265341067  : public RuntimeObject
{
public:
	// System.Int32 System.Data.Doublet::count
	int32_t ___count_0;
	// System.Collections.ArrayList System.Data.Doublet::columnNames
	ArrayList_t3308431662 * ___columnNames_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Doublet_t1265341067, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_columnNames_1() { return static_cast<int32_t>(offsetof(Doublet_t1265341067, ___columnNames_1)); }
	inline ArrayList_t3308431662 * get_columnNames_1() const { return ___columnNames_1; }
	inline ArrayList_t3308431662 ** get_address_of_columnNames_1() { return &___columnNames_1; }
	inline void set_columnNames_1(ArrayList_t3308431662 * value)
	{
		___columnNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___columnNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLET_T1265341067_H
#ifndef TYPECONVERTER_T3465284711_H
#define TYPECONVERTER_T3465284711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t3465284711  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T3465284711_H
#ifndef INTERNALDATACOLLECTIONBASE_T3608078533_H
#define INTERNALDATACOLLECTIONBASE_T3608078533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t3608078533  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t3308431662 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t3608078533, ___list_0)); }
	inline ArrayList_t3308431662 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3308431662 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3308431662 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t3608078533, ___synchronized_1)); }
	inline bool get_synchronized_1() const { return ___synchronized_1; }
	inline bool* get_address_of_synchronized_1() { return &___synchronized_1; }
	inline void set_synchronized_1(bool value)
	{
		___synchronized_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATACOLLECTIONBASE_T3608078533_H
#ifndef MERGEMANAGER_T2926618243_H
#define MERGEMANAGER_T2926618243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeManager
struct  MergeManager_t2926618243  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEMANAGER_T2926618243_H
#ifndef CONSTRAINT_T2350992279_H
#define CONSTRAINT_T2350992279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t2350992279  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t3835807538 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t399284420 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t3657482687 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t599906311 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t91008811 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t2350992279, ___events_1)); }
	inline EventHandlerList_t3835807538 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t3835807538 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t3835807538 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t2350992279, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t2350992279, ____properties_3)); }
	inline PropertyCollection_t399284420 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t399284420 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t399284420 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t2350992279, ____index_4)); }
	inline Index_t3657482687 * get__index_4() const { return ____index_4; }
	inline Index_t3657482687 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t3657482687 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t2350992279, ____constraintCollection_5)); }
	inline ConstraintCollection_t599906311 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t599906311 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t599906311 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t2350992279, ___dataSet_6)); }
	inline DataSet_t91008811 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t91008811 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t91008811 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t2350992279, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t2350992279_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t2350992279_StaticFields, ___beforeConstraintNameChange_0)); }
	inline RuntimeObject * get_beforeConstraintNameChange_0() const { return ___beforeConstraintNameChange_0; }
	inline RuntimeObject ** get_address_of_beforeConstraintNameChange_0() { return &___beforeConstraintNameChange_0; }
	inline void set_beforeConstraintNameChange_0(RuntimeObject * value)
	{
		___beforeConstraintNameChange_0 = value;
		Il2CppCodeGenWriteBarrier((&___beforeConstraintNameChange_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINT_T2350992279_H
#ifndef DBCOMMANDINFO_T2547368927_H
#define DBCOMMANDINFO_T2547368927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DbCommandInfo
struct  DbCommandInfo_t2547368927  : public RuntimeObject
{
public:
	// System.Data.Common.DbCommand System.Data.DbCommandInfo::Command
	DbCommand_t387545947 * ___Command_0;
	// System.Data.DbSourceMethodInfo[] System.Data.DbCommandInfo::Methods
	DbSourceMethodInfoU5BU5D_t2218709909* ___Methods_1;

public:
	inline static int32_t get_offset_of_Command_0() { return static_cast<int32_t>(offsetof(DbCommandInfo_t2547368927, ___Command_0)); }
	inline DbCommand_t387545947 * get_Command_0() const { return ___Command_0; }
	inline DbCommand_t387545947 ** get_address_of_Command_0() { return &___Command_0; }
	inline void set_Command_0(DbCommand_t387545947 * value)
	{
		___Command_0 = value;
		Il2CppCodeGenWriteBarrier((&___Command_0), value);
	}

	inline static int32_t get_offset_of_Methods_1() { return static_cast<int32_t>(offsetof(DbCommandInfo_t2547368927, ___Methods_1)); }
	inline DbSourceMethodInfoU5BU5D_t2218709909* get_Methods_1() const { return ___Methods_1; }
	inline DbSourceMethodInfoU5BU5D_t2218709909** get_address_of_Methods_1() { return &___Methods_1; }
	inline void set_Methods_1(DbSourceMethodInfoU5BU5D_t2218709909* value)
	{
		___Methods_1 = value;
		Il2CppCodeGenWriteBarrier((&___Methods_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMANDINFO_T2547368927_H
#ifndef TABLEADAPTERSCHEMAINFO_T846969719_H
#define TABLEADAPTERSCHEMAINFO_T846969719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableAdapterSchemaInfo
struct  TableAdapterSchemaInfo_t846969719  : public RuntimeObject
{
public:
	// System.Data.Common.DbProviderFactory System.Data.TableAdapterSchemaInfo::Provider
	DbProviderFactory_t2206052852 * ___Provider_0;
	// System.Data.Common.DbDataAdapter System.Data.TableAdapterSchemaInfo::Adapter
	DbDataAdapter_t2467069893 * ___Adapter_1;
	// System.Data.Common.DbConnection System.Data.TableAdapterSchemaInfo::Connection
	DbConnection_t3217054343 * ___Connection_2;
	// System.String System.Data.TableAdapterSchemaInfo::ConnectionString
	String_t* ___ConnectionString_3;
	// System.String System.Data.TableAdapterSchemaInfo::BaseClass
	String_t* ___BaseClass_4;
	// System.String System.Data.TableAdapterSchemaInfo::Name
	String_t* ___Name_5;
	// System.Boolean System.Data.TableAdapterSchemaInfo::ShortCommands
	bool ___ShortCommands_6;
	// System.Collections.ArrayList System.Data.TableAdapterSchemaInfo::Commands
	ArrayList_t3308431662 * ___Commands_7;

public:
	inline static int32_t get_offset_of_Provider_0() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___Provider_0)); }
	inline DbProviderFactory_t2206052852 * get_Provider_0() const { return ___Provider_0; }
	inline DbProviderFactory_t2206052852 ** get_address_of_Provider_0() { return &___Provider_0; }
	inline void set_Provider_0(DbProviderFactory_t2206052852 * value)
	{
		___Provider_0 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_0), value);
	}

	inline static int32_t get_offset_of_Adapter_1() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___Adapter_1)); }
	inline DbDataAdapter_t2467069893 * get_Adapter_1() const { return ___Adapter_1; }
	inline DbDataAdapter_t2467069893 ** get_address_of_Adapter_1() { return &___Adapter_1; }
	inline void set_Adapter_1(DbDataAdapter_t2467069893 * value)
	{
		___Adapter_1 = value;
		Il2CppCodeGenWriteBarrier((&___Adapter_1), value);
	}

	inline static int32_t get_offset_of_Connection_2() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___Connection_2)); }
	inline DbConnection_t3217054343 * get_Connection_2() const { return ___Connection_2; }
	inline DbConnection_t3217054343 ** get_address_of_Connection_2() { return &___Connection_2; }
	inline void set_Connection_2(DbConnection_t3217054343 * value)
	{
		___Connection_2 = value;
		Il2CppCodeGenWriteBarrier((&___Connection_2), value);
	}

	inline static int32_t get_offset_of_ConnectionString_3() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___ConnectionString_3)); }
	inline String_t* get_ConnectionString_3() const { return ___ConnectionString_3; }
	inline String_t** get_address_of_ConnectionString_3() { return &___ConnectionString_3; }
	inline void set_ConnectionString_3(String_t* value)
	{
		___ConnectionString_3 = value;
		Il2CppCodeGenWriteBarrier((&___ConnectionString_3), value);
	}

	inline static int32_t get_offset_of_BaseClass_4() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___BaseClass_4)); }
	inline String_t* get_BaseClass_4() const { return ___BaseClass_4; }
	inline String_t** get_address_of_BaseClass_4() { return &___BaseClass_4; }
	inline void set_BaseClass_4(String_t* value)
	{
		___BaseClass_4 = value;
		Il2CppCodeGenWriteBarrier((&___BaseClass_4), value);
	}

	inline static int32_t get_offset_of_Name_5() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___Name_5)); }
	inline String_t* get_Name_5() const { return ___Name_5; }
	inline String_t** get_address_of_Name_5() { return &___Name_5; }
	inline void set_Name_5(String_t* value)
	{
		___Name_5 = value;
		Il2CppCodeGenWriteBarrier((&___Name_5), value);
	}

	inline static int32_t get_offset_of_ShortCommands_6() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___ShortCommands_6)); }
	inline bool get_ShortCommands_6() const { return ___ShortCommands_6; }
	inline bool* get_address_of_ShortCommands_6() { return &___ShortCommands_6; }
	inline void set_ShortCommands_6(bool value)
	{
		___ShortCommands_6 = value;
	}

	inline static int32_t get_offset_of_Commands_7() { return static_cast<int32_t>(offsetof(TableAdapterSchemaInfo_t846969719, ___Commands_7)); }
	inline ArrayList_t3308431662 * get_Commands_7() const { return ___Commands_7; }
	inline ArrayList_t3308431662 ** get_address_of_Commands_7() { return &___Commands_7; }
	inline void set_Commands_7(ArrayList_t3308431662 * value)
	{
		___Commands_7 = value;
		Il2CppCodeGenWriteBarrier((&___Commands_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEADAPTERSCHEMAINFO_T846969719_H
#ifndef XMLCONSTANTS_T2144422761_H
#define XMLCONSTANTS_T2144422761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlConstants
struct  XmlConstants_t2144422761  : public RuntimeObject
{
public:

public:
};

struct XmlConstants_t2144422761_StaticFields
{
public:
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnString
	XmlQualifiedName_t1897146544 * ___QnString_0;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnShort
	XmlQualifiedName_t1897146544 * ___QnShort_1;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnInt
	XmlQualifiedName_t1897146544 * ___QnInt_2;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnLong
	XmlQualifiedName_t1897146544 * ___QnLong_3;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnBoolean
	XmlQualifiedName_t1897146544 * ___QnBoolean_4;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedByte
	XmlQualifiedName_t1897146544 * ___QnUnsignedByte_5;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnChar
	XmlQualifiedName_t1897146544 * ___QnChar_6;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDateTime
	XmlQualifiedName_t1897146544 * ___QnDateTime_7;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDecimal
	XmlQualifiedName_t1897146544 * ___QnDecimal_8;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDouble
	XmlQualifiedName_t1897146544 * ___QnDouble_9;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnSbyte
	XmlQualifiedName_t1897146544 * ___QnSbyte_10;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnFloat
	XmlQualifiedName_t1897146544 * ___QnFloat_11;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnDuration
	XmlQualifiedName_t1897146544 * ___QnDuration_12;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedShort
	XmlQualifiedName_t1897146544 * ___QnUnsignedShort_13;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedInt
	XmlQualifiedName_t1897146544 * ___QnUnsignedInt_14;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUnsignedLong
	XmlQualifiedName_t1897146544 * ___QnUnsignedLong_15;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnUri
	XmlQualifiedName_t1897146544 * ___QnUri_16;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnBase64Binary
	XmlQualifiedName_t1897146544 * ___QnBase64Binary_17;
	// System.Xml.XmlQualifiedName System.Data.XmlConstants::QnXmlQualifiedName
	XmlQualifiedName_t1897146544 * ___QnXmlQualifiedName_18;

public:
	inline static int32_t get_offset_of_QnString_0() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnString_0)); }
	inline XmlQualifiedName_t1897146544 * get_QnString_0() const { return ___QnString_0; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnString_0() { return &___QnString_0; }
	inline void set_QnString_0(XmlQualifiedName_t1897146544 * value)
	{
		___QnString_0 = value;
		Il2CppCodeGenWriteBarrier((&___QnString_0), value);
	}

	inline static int32_t get_offset_of_QnShort_1() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnShort_1)); }
	inline XmlQualifiedName_t1897146544 * get_QnShort_1() const { return ___QnShort_1; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnShort_1() { return &___QnShort_1; }
	inline void set_QnShort_1(XmlQualifiedName_t1897146544 * value)
	{
		___QnShort_1 = value;
		Il2CppCodeGenWriteBarrier((&___QnShort_1), value);
	}

	inline static int32_t get_offset_of_QnInt_2() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnInt_2)); }
	inline XmlQualifiedName_t1897146544 * get_QnInt_2() const { return ___QnInt_2; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnInt_2() { return &___QnInt_2; }
	inline void set_QnInt_2(XmlQualifiedName_t1897146544 * value)
	{
		___QnInt_2 = value;
		Il2CppCodeGenWriteBarrier((&___QnInt_2), value);
	}

	inline static int32_t get_offset_of_QnLong_3() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnLong_3)); }
	inline XmlQualifiedName_t1897146544 * get_QnLong_3() const { return ___QnLong_3; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnLong_3() { return &___QnLong_3; }
	inline void set_QnLong_3(XmlQualifiedName_t1897146544 * value)
	{
		___QnLong_3 = value;
		Il2CppCodeGenWriteBarrier((&___QnLong_3), value);
	}

	inline static int32_t get_offset_of_QnBoolean_4() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnBoolean_4)); }
	inline XmlQualifiedName_t1897146544 * get_QnBoolean_4() const { return ___QnBoolean_4; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnBoolean_4() { return &___QnBoolean_4; }
	inline void set_QnBoolean_4(XmlQualifiedName_t1897146544 * value)
	{
		___QnBoolean_4 = value;
		Il2CppCodeGenWriteBarrier((&___QnBoolean_4), value);
	}

	inline static int32_t get_offset_of_QnUnsignedByte_5() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnUnsignedByte_5)); }
	inline XmlQualifiedName_t1897146544 * get_QnUnsignedByte_5() const { return ___QnUnsignedByte_5; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnUnsignedByte_5() { return &___QnUnsignedByte_5; }
	inline void set_QnUnsignedByte_5(XmlQualifiedName_t1897146544 * value)
	{
		___QnUnsignedByte_5 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedByte_5), value);
	}

	inline static int32_t get_offset_of_QnChar_6() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnChar_6)); }
	inline XmlQualifiedName_t1897146544 * get_QnChar_6() const { return ___QnChar_6; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnChar_6() { return &___QnChar_6; }
	inline void set_QnChar_6(XmlQualifiedName_t1897146544 * value)
	{
		___QnChar_6 = value;
		Il2CppCodeGenWriteBarrier((&___QnChar_6), value);
	}

	inline static int32_t get_offset_of_QnDateTime_7() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnDateTime_7)); }
	inline XmlQualifiedName_t1897146544 * get_QnDateTime_7() const { return ___QnDateTime_7; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnDateTime_7() { return &___QnDateTime_7; }
	inline void set_QnDateTime_7(XmlQualifiedName_t1897146544 * value)
	{
		___QnDateTime_7 = value;
		Il2CppCodeGenWriteBarrier((&___QnDateTime_7), value);
	}

	inline static int32_t get_offset_of_QnDecimal_8() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnDecimal_8)); }
	inline XmlQualifiedName_t1897146544 * get_QnDecimal_8() const { return ___QnDecimal_8; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnDecimal_8() { return &___QnDecimal_8; }
	inline void set_QnDecimal_8(XmlQualifiedName_t1897146544 * value)
	{
		___QnDecimal_8 = value;
		Il2CppCodeGenWriteBarrier((&___QnDecimal_8), value);
	}

	inline static int32_t get_offset_of_QnDouble_9() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnDouble_9)); }
	inline XmlQualifiedName_t1897146544 * get_QnDouble_9() const { return ___QnDouble_9; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnDouble_9() { return &___QnDouble_9; }
	inline void set_QnDouble_9(XmlQualifiedName_t1897146544 * value)
	{
		___QnDouble_9 = value;
		Il2CppCodeGenWriteBarrier((&___QnDouble_9), value);
	}

	inline static int32_t get_offset_of_QnSbyte_10() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnSbyte_10)); }
	inline XmlQualifiedName_t1897146544 * get_QnSbyte_10() const { return ___QnSbyte_10; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnSbyte_10() { return &___QnSbyte_10; }
	inline void set_QnSbyte_10(XmlQualifiedName_t1897146544 * value)
	{
		___QnSbyte_10 = value;
		Il2CppCodeGenWriteBarrier((&___QnSbyte_10), value);
	}

	inline static int32_t get_offset_of_QnFloat_11() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnFloat_11)); }
	inline XmlQualifiedName_t1897146544 * get_QnFloat_11() const { return ___QnFloat_11; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnFloat_11() { return &___QnFloat_11; }
	inline void set_QnFloat_11(XmlQualifiedName_t1897146544 * value)
	{
		___QnFloat_11 = value;
		Il2CppCodeGenWriteBarrier((&___QnFloat_11), value);
	}

	inline static int32_t get_offset_of_QnDuration_12() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnDuration_12)); }
	inline XmlQualifiedName_t1897146544 * get_QnDuration_12() const { return ___QnDuration_12; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnDuration_12() { return &___QnDuration_12; }
	inline void set_QnDuration_12(XmlQualifiedName_t1897146544 * value)
	{
		___QnDuration_12 = value;
		Il2CppCodeGenWriteBarrier((&___QnDuration_12), value);
	}

	inline static int32_t get_offset_of_QnUnsignedShort_13() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnUnsignedShort_13)); }
	inline XmlQualifiedName_t1897146544 * get_QnUnsignedShort_13() const { return ___QnUnsignedShort_13; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnUnsignedShort_13() { return &___QnUnsignedShort_13; }
	inline void set_QnUnsignedShort_13(XmlQualifiedName_t1897146544 * value)
	{
		___QnUnsignedShort_13 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedShort_13), value);
	}

	inline static int32_t get_offset_of_QnUnsignedInt_14() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnUnsignedInt_14)); }
	inline XmlQualifiedName_t1897146544 * get_QnUnsignedInt_14() const { return ___QnUnsignedInt_14; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnUnsignedInt_14() { return &___QnUnsignedInt_14; }
	inline void set_QnUnsignedInt_14(XmlQualifiedName_t1897146544 * value)
	{
		___QnUnsignedInt_14 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedInt_14), value);
	}

	inline static int32_t get_offset_of_QnUnsignedLong_15() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnUnsignedLong_15)); }
	inline XmlQualifiedName_t1897146544 * get_QnUnsignedLong_15() const { return ___QnUnsignedLong_15; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnUnsignedLong_15() { return &___QnUnsignedLong_15; }
	inline void set_QnUnsignedLong_15(XmlQualifiedName_t1897146544 * value)
	{
		___QnUnsignedLong_15 = value;
		Il2CppCodeGenWriteBarrier((&___QnUnsignedLong_15), value);
	}

	inline static int32_t get_offset_of_QnUri_16() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnUri_16)); }
	inline XmlQualifiedName_t1897146544 * get_QnUri_16() const { return ___QnUri_16; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnUri_16() { return &___QnUri_16; }
	inline void set_QnUri_16(XmlQualifiedName_t1897146544 * value)
	{
		___QnUri_16 = value;
		Il2CppCodeGenWriteBarrier((&___QnUri_16), value);
	}

	inline static int32_t get_offset_of_QnBase64Binary_17() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnBase64Binary_17)); }
	inline XmlQualifiedName_t1897146544 * get_QnBase64Binary_17() const { return ___QnBase64Binary_17; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnBase64Binary_17() { return &___QnBase64Binary_17; }
	inline void set_QnBase64Binary_17(XmlQualifiedName_t1897146544 * value)
	{
		___QnBase64Binary_17 = value;
		Il2CppCodeGenWriteBarrier((&___QnBase64Binary_17), value);
	}

	inline static int32_t get_offset_of_QnXmlQualifiedName_18() { return static_cast<int32_t>(offsetof(XmlConstants_t2144422761_StaticFields, ___QnXmlQualifiedName_18)); }
	inline XmlQualifiedName_t1897146544 * get_QnXmlQualifiedName_18() const { return ___QnXmlQualifiedName_18; }
	inline XmlQualifiedName_t1897146544 ** get_address_of_QnXmlQualifiedName_18() { return &___QnXmlQualifiedName_18; }
	inline void set_QnXmlQualifiedName_18(XmlQualifiedName_t1897146544 * value)
	{
		___QnXmlQualifiedName_18 = value;
		Il2CppCodeGenWriteBarrier((&___QnXmlQualifiedName_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCONSTANTS_T2144422761_H
#ifndef SQLXML_T2510389144_H
#define SQLXML_T2510389144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlXml
struct  SqlXml_t2510389144  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlXml::notNull
	bool ___notNull_0;
	// System.String System.Data.SqlTypes.SqlXml::xmlValue
	String_t* ___xmlValue_1;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlXml_t2510389144, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_xmlValue_1() { return static_cast<int32_t>(offsetof(SqlXml_t2510389144, ___xmlValue_1)); }
	inline String_t* get_xmlValue_1() const { return ___xmlValue_1; }
	inline String_t** get_address_of_xmlValue_1() { return &___xmlValue_1; }
	inline void set_xmlValue_1(String_t* value)
	{
		___xmlValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLXML_T2510389144_H
#ifndef DATAROWBUILDER_T4106443462_H
#define DATAROWBUILDER_T4106443462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t4106443462  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t449011362 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t4106443462, ___table_0)); }
	inline DataTable_t449011362 * get_table_0() const { return ___table_0; }
	inline DataTable_t449011362 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t449011362 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t4106443462, ____rowId_1)); }
	inline int32_t get__rowId_1() const { return ____rowId_1; }
	inline int32_t* get_address_of__rowId_1() { return &____rowId_1; }
	inline void set__rowId_1(int32_t value)
	{
		____rowId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWBUILDER_T4106443462_H
#ifndef TABLEMAPPING_T327902309_H
#define TABLEMAPPING_T327902309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableMapping
struct  TableMapping_t327902309  : public RuntimeObject
{
public:
	// System.Boolean System.Data.TableMapping::existsInDataSet
	bool ___existsInDataSet_0;
	// System.Data.DataTable System.Data.TableMapping::Table
	DataTable_t449011362 * ___Table_1;
	// System.Collections.ArrayList System.Data.TableMapping::Elements
	ArrayList_t3308431662 * ___Elements_2;
	// System.Collections.ArrayList System.Data.TableMapping::Attributes
	ArrayList_t3308431662 * ___Attributes_3;
	// System.Data.DataColumn System.Data.TableMapping::SimpleContent
	DataColumn_t957173132 * ___SimpleContent_4;
	// System.Data.DataColumn System.Data.TableMapping::PrimaryKey
	DataColumn_t957173132 * ___PrimaryKey_5;
	// System.Data.DataColumn System.Data.TableMapping::ReferenceKey
	DataColumn_t957173132 * ___ReferenceKey_6;
	// System.Int32 System.Data.TableMapping::lastElementIndex
	int32_t ___lastElementIndex_7;
	// System.Data.TableMapping System.Data.TableMapping::ParentTable
	TableMapping_t327902309 * ___ParentTable_8;
	// System.Data.TableMappingCollection System.Data.TableMapping::ChildTables
	TableMappingCollection_t3730895761 * ___ChildTables_9;

public:
	inline static int32_t get_offset_of_existsInDataSet_0() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___existsInDataSet_0)); }
	inline bool get_existsInDataSet_0() const { return ___existsInDataSet_0; }
	inline bool* get_address_of_existsInDataSet_0() { return &___existsInDataSet_0; }
	inline void set_existsInDataSet_0(bool value)
	{
		___existsInDataSet_0 = value;
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___Table_1)); }
	inline DataTable_t449011362 * get_Table_1() const { return ___Table_1; }
	inline DataTable_t449011362 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(DataTable_t449011362 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_Elements_2() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___Elements_2)); }
	inline ArrayList_t3308431662 * get_Elements_2() const { return ___Elements_2; }
	inline ArrayList_t3308431662 ** get_address_of_Elements_2() { return &___Elements_2; }
	inline void set_Elements_2(ArrayList_t3308431662 * value)
	{
		___Elements_2 = value;
		Il2CppCodeGenWriteBarrier((&___Elements_2), value);
	}

	inline static int32_t get_offset_of_Attributes_3() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___Attributes_3)); }
	inline ArrayList_t3308431662 * get_Attributes_3() const { return ___Attributes_3; }
	inline ArrayList_t3308431662 ** get_address_of_Attributes_3() { return &___Attributes_3; }
	inline void set_Attributes_3(ArrayList_t3308431662 * value)
	{
		___Attributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_3), value);
	}

	inline static int32_t get_offset_of_SimpleContent_4() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___SimpleContent_4)); }
	inline DataColumn_t957173132 * get_SimpleContent_4() const { return ___SimpleContent_4; }
	inline DataColumn_t957173132 ** get_address_of_SimpleContent_4() { return &___SimpleContent_4; }
	inline void set_SimpleContent_4(DataColumn_t957173132 * value)
	{
		___SimpleContent_4 = value;
		Il2CppCodeGenWriteBarrier((&___SimpleContent_4), value);
	}

	inline static int32_t get_offset_of_PrimaryKey_5() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___PrimaryKey_5)); }
	inline DataColumn_t957173132 * get_PrimaryKey_5() const { return ___PrimaryKey_5; }
	inline DataColumn_t957173132 ** get_address_of_PrimaryKey_5() { return &___PrimaryKey_5; }
	inline void set_PrimaryKey_5(DataColumn_t957173132 * value)
	{
		___PrimaryKey_5 = value;
		Il2CppCodeGenWriteBarrier((&___PrimaryKey_5), value);
	}

	inline static int32_t get_offset_of_ReferenceKey_6() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___ReferenceKey_6)); }
	inline DataColumn_t957173132 * get_ReferenceKey_6() const { return ___ReferenceKey_6; }
	inline DataColumn_t957173132 ** get_address_of_ReferenceKey_6() { return &___ReferenceKey_6; }
	inline void set_ReferenceKey_6(DataColumn_t957173132 * value)
	{
		___ReferenceKey_6 = value;
		Il2CppCodeGenWriteBarrier((&___ReferenceKey_6), value);
	}

	inline static int32_t get_offset_of_lastElementIndex_7() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___lastElementIndex_7)); }
	inline int32_t get_lastElementIndex_7() const { return ___lastElementIndex_7; }
	inline int32_t* get_address_of_lastElementIndex_7() { return &___lastElementIndex_7; }
	inline void set_lastElementIndex_7(int32_t value)
	{
		___lastElementIndex_7 = value;
	}

	inline static int32_t get_offset_of_ParentTable_8() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___ParentTable_8)); }
	inline TableMapping_t327902309 * get_ParentTable_8() const { return ___ParentTable_8; }
	inline TableMapping_t327902309 ** get_address_of_ParentTable_8() { return &___ParentTable_8; }
	inline void set_ParentTable_8(TableMapping_t327902309 * value)
	{
		___ParentTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParentTable_8), value);
	}

	inline static int32_t get_offset_of_ChildTables_9() { return static_cast<int32_t>(offsetof(TableMapping_t327902309, ___ChildTables_9)); }
	inline TableMappingCollection_t3730895761 * get_ChildTables_9() const { return ___ChildTables_9; }
	inline TableMappingCollection_t3730895761 ** get_address_of_ChildTables_9() { return &___ChildTables_9; }
	inline void set_ChildTables_9(TableMappingCollection_t3730895761 * value)
	{
		___ChildTables_9 = value;
		Il2CppCodeGenWriteBarrier((&___ChildTables_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEMAPPING_T327902309_H
#ifndef XMLDATALOADER_T3198285916_H
#define XMLDATALOADER_T3198285916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataLoader
struct  XmlDataLoader_t3198285916  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDATALOADER_T3198285916_H
#ifndef DATAROW_T1390955693_H
#define DATAROW_T1390955693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t1390955693  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t449011362 * ____table_0;
	// System.Int32 System.Data.DataRow::_original
	int32_t ____original_1;
	// System.Int32 System.Data.DataRow::_current
	int32_t ____current_2;
	// System.Int32 System.Data.DataRow::_proposed
	int32_t ____proposed_3;
	// System.Collections.ArrayList System.Data.DataRow::_columnErrors
	ArrayList_t3308431662 * ____columnErrors_4;
	// System.String System.Data.DataRow::rowError
	String_t* ___rowError_5;
	// System.Int32 System.Data.DataRow::xmlRowID
	int32_t ___xmlRowID_6;
	// System.Boolean System.Data.DataRow::_nullConstraintViolation
	bool ____nullConstraintViolation_7;
	// System.String System.Data.DataRow::_nullConstraintMessage
	String_t* ____nullConstraintMessage_8;
	// System.Boolean System.Data.DataRow::_inChangingEvent
	bool ____inChangingEvent_9;
	// System.Int32 System.Data.DataRow::_rowId
	int32_t ____rowId_10;
	// System.Boolean System.Data.DataRow::_rowChanged
	bool ____rowChanged_11;
	// System.Boolean System.Data.DataRow::_inExpressionEvaluation
	bool ____inExpressionEvaluation_12;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____table_0)); }
	inline DataTable_t449011362 * get__table_0() const { return ____table_0; }
	inline DataTable_t449011362 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t449011362 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__original_1() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____original_1)); }
	inline int32_t get__original_1() const { return ____original_1; }
	inline int32_t* get_address_of__original_1() { return &____original_1; }
	inline void set__original_1(int32_t value)
	{
		____original_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____current_2)); }
	inline int32_t get__current_2() const { return ____current_2; }
	inline int32_t* get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(int32_t value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__proposed_3() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____proposed_3)); }
	inline int32_t get__proposed_3() const { return ____proposed_3; }
	inline int32_t* get_address_of__proposed_3() { return &____proposed_3; }
	inline void set__proposed_3(int32_t value)
	{
		____proposed_3 = value;
	}

	inline static int32_t get_offset_of__columnErrors_4() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____columnErrors_4)); }
	inline ArrayList_t3308431662 * get__columnErrors_4() const { return ____columnErrors_4; }
	inline ArrayList_t3308431662 ** get_address_of__columnErrors_4() { return &____columnErrors_4; }
	inline void set__columnErrors_4(ArrayList_t3308431662 * value)
	{
		____columnErrors_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnErrors_4), value);
	}

	inline static int32_t get_offset_of_rowError_5() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ___rowError_5)); }
	inline String_t* get_rowError_5() const { return ___rowError_5; }
	inline String_t** get_address_of_rowError_5() { return &___rowError_5; }
	inline void set_rowError_5(String_t* value)
	{
		___rowError_5 = value;
		Il2CppCodeGenWriteBarrier((&___rowError_5), value);
	}

	inline static int32_t get_offset_of_xmlRowID_6() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ___xmlRowID_6)); }
	inline int32_t get_xmlRowID_6() const { return ___xmlRowID_6; }
	inline int32_t* get_address_of_xmlRowID_6() { return &___xmlRowID_6; }
	inline void set_xmlRowID_6(int32_t value)
	{
		___xmlRowID_6 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolation_7() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____nullConstraintViolation_7)); }
	inline bool get__nullConstraintViolation_7() const { return ____nullConstraintViolation_7; }
	inline bool* get_address_of__nullConstraintViolation_7() { return &____nullConstraintViolation_7; }
	inline void set__nullConstraintViolation_7(bool value)
	{
		____nullConstraintViolation_7 = value;
	}

	inline static int32_t get_offset_of__nullConstraintMessage_8() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____nullConstraintMessage_8)); }
	inline String_t* get__nullConstraintMessage_8() const { return ____nullConstraintMessage_8; }
	inline String_t** get_address_of__nullConstraintMessage_8() { return &____nullConstraintMessage_8; }
	inline void set__nullConstraintMessage_8(String_t* value)
	{
		____nullConstraintMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&____nullConstraintMessage_8), value);
	}

	inline static int32_t get_offset_of__inChangingEvent_9() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____inChangingEvent_9)); }
	inline bool get__inChangingEvent_9() const { return ____inChangingEvent_9; }
	inline bool* get_address_of__inChangingEvent_9() { return &____inChangingEvent_9; }
	inline void set__inChangingEvent_9(bool value)
	{
		____inChangingEvent_9 = value;
	}

	inline static int32_t get_offset_of__rowId_10() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____rowId_10)); }
	inline int32_t get__rowId_10() const { return ____rowId_10; }
	inline int32_t* get_address_of__rowId_10() { return &____rowId_10; }
	inline void set__rowId_10(int32_t value)
	{
		____rowId_10 = value;
	}

	inline static int32_t get_offset_of__rowChanged_11() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____rowChanged_11)); }
	inline bool get__rowChanged_11() const { return ____rowChanged_11; }
	inline bool* get_address_of__rowChanged_11() { return &____rowChanged_11; }
	inline void set__rowChanged_11(bool value)
	{
		____rowChanged_11 = value;
	}

	inline static int32_t get_offset_of__inExpressionEvaluation_12() { return static_cast<int32_t>(offsetof(DataRow_t1390955693, ____inExpressionEvaluation_12)); }
	inline bool get__inExpressionEvaluation_12() const { return ____inExpressionEvaluation_12; }
	inline bool* get_address_of__inExpressionEvaluation_12() { return &____inExpressionEvaluation_12; }
	inline void set__inExpressionEvaluation_12(bool value)
	{
		____inExpressionEvaluation_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROW_T1390955693_H
#ifndef HASHTABLE_T2762605430_H
#define HASHTABLE_T2762605430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t2762605430  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2335056595* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t1044167045* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t672072564 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t2786363628 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t1760672207 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___table_4)); }
	inline SlotU5BU5D_t2335056595* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2335056595** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2335056595* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___hashes_5)); }
	inline Int32U5BU5D_t1044167045* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t1044167045** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t1044167045* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___hashKeys_7)); }
	inline HashKeys_t672072564 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t672072564 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t672072564 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___hashValues_8)); }
	inline HashValues_t2786363628 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t2786363628 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t2786363628 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___serializationInfo_11)); }
	inline SerializationInfo_t1760672207 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t1760672207 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t1760672207 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t2762605430_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t1044167045* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t2762605430_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t1044167045* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t1044167045** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t1044167045* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T2762605430_H
#ifndef EXCEPTION_T2727587739_H
#define EXCEPTION_T2727587739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2727587739  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t646942624* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2727587739 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t646942624* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t646942624** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t646942624* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___inner_exception_1)); }
	inline Exception_t2727587739 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2727587739 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2727587739 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2727587739, ____data_10)); }
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
#endif // EXCEPTION_T2727587739_H
#ifndef COLLECTIONBASE_T2472532452_H
#define COLLECTIONBASE_T2472532452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2472532452  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t3308431662 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2472532452, ___list_0)); }
	inline ArrayList_t3308431662 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3308431662 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3308431662 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2472532452_H
#ifndef MARSHALBYVALUECOMPONENT_T1599592632_H
#define MARSHALBYVALUECOMPONENT_T1599592632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t1599592632  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t3835807538 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1599592632, ___eventList_0)); }
	inline EventHandlerList_t3835807538 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t3835807538 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t3835807538 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1599592632, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t1599592632, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T1599592632_H
#ifndef EVENTARGS_T2299726504_H
#define EVENTARGS_T2299726504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t2299726504  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t2299726504_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t2299726504 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t2299726504_StaticFields, ___Empty_0)); }
	inline EventArgs_t2299726504 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t2299726504 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t2299726504 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T2299726504_H
#ifndef VALUETYPE_T142872507_H
#define VALUETYPE_T142872507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t142872507  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t142872507_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t142872507_marshaled_com
{
};
#endif // VALUETYPE_T142872507_H
#ifndef DATAROWCOLLECTION_T3811941752_H
#define DATAROWCOLLECTION_T3811941752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t3811941752  : public InternalDataCollectionBase_t3608078533
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t449011362 * ___table_2;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t3811941752, ___table_2)); }
	inline DataTable_t449011362 * get_table_2() const { return ___table_2; }
	inline DataTable_t449011362 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t449011362 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCOLLECTION_T3811941752_H
#ifndef DATATABLECOLLECTION_T42359719_H
#define DATATABLECOLLECTION_T42359719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t42359719  : public InternalDataCollectionBase_t3608078533
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t91008811 * ___dataSet_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t2278084688 * ___CollectionChanged_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t2278084688 * ___CollectionChanging_4;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t42359719, ___dataSet_2)); }
	inline DataSet_t91008811 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t91008811 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t91008811 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t42359719, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2278084688 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2278084688 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2278084688 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanging_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t42359719, ___CollectionChanging_4)); }
	inline CollectionChangeEventHandler_t2278084688 * get_CollectionChanging_4() const { return ___CollectionChanging_4; }
	inline CollectionChangeEventHandler_t2278084688 ** get_address_of_CollectionChanging_4() { return &___CollectionChanging_4; }
	inline void set_CollectionChanging_4(CollectionChangeEventHandler_t2278084688 * value)
	{
		___CollectionChanging_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanging_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLECOLLECTION_T42359719_H
#ifndef TIMESPAN_T2430496075_H
#define TIMESPAN_T2430496075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t2430496075 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t2430496075, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t2430496075_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t2430496075  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t2430496075  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t2430496075  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t2430496075_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t2430496075  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t2430496075 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t2430496075  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t2430496075_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t2430496075  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t2430496075 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t2430496075  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t2430496075_StaticFields, ___Zero_2)); }
	inline TimeSpan_t2430496075  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t2430496075 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t2430496075  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T2430496075_H
#ifndef DATATABLENEWROWEVENTARGS_T1133950125_H
#define DATATABLENEWROWEVENTARGS_T1133950125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableNewRowEventArgs
struct  DataTableNewRowEventArgs_t1133950125  : public EventArgs_t2299726504
{
public:
	// System.Data.DataRow System.Data.DataTableNewRowEventArgs::_row
	DataRow_t1390955693 * ____row_1;

public:
	inline static int32_t get_offset_of__row_1() { return static_cast<int32_t>(offsetof(DataTableNewRowEventArgs_t1133950125, ____row_1)); }
	inline DataRow_t1390955693 * get__row_1() const { return ____row_1; }
	inline DataRow_t1390955693 ** get_address_of__row_1() { return &____row_1; }
	inline void set__row_1(DataRow_t1390955693 * value)
	{
		____row_1 = value;
		Il2CppCodeGenWriteBarrier((&____row_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLENEWROWEVENTARGS_T1133950125_H
#ifndef DESCRIPTIONATTRIBUTE_T4142648123_H
#define DESCRIPTIONATTRIBUTE_T4142648123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t4142648123  : public Attribute_t1393872340
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t4142648123, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t4142648123_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t4142648123 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t4142648123_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t4142648123 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t4142648123 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t4142648123 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T4142648123_H
#ifndef ENUM_T960719525_H
#define ENUM_T960719525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t960719525  : public ValueType_t142872507
{
public:

public:
};

struct Enum_t960719525_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t252931387* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t960719525_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t252931387* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t252931387** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t252931387* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t960719525_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t960719525_marshaled_com
{
};
#endif // ENUM_T960719525_H
#ifndef PROPERTYCOLLECTION_T399284420_H
#define PROPERTYCOLLECTION_T399284420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.PropertyCollection
struct  PropertyCollection_t399284420  : public Hashtable_t2762605430
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCOLLECTION_T399284420_H
#ifndef CATEGORYATTRIBUTE_T1237907172_H
#define CATEGORYATTRIBUTE_T1237907172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t1237907172  : public Attribute_t1393872340
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1237907172, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1237907172, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t1237907172_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t1237907172 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1237907172_StaticFields, ___def_2)); }
	inline CategoryAttribute_t1237907172 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t1237907172 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t1237907172 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t1237907172_StaticFields, ___lockobj_3)); }
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
#endif // CATEGORYATTRIBUTE_T1237907172_H
#ifndef UNIQUECONSTRAINT_T2657169234_H
#define UNIQUECONSTRAINT_T2657169234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.UniqueConstraint
struct  UniqueConstraint_t2657169234  : public Constraint_t2350992279
{
public:
	// System.Boolean System.Data.UniqueConstraint::_isPrimaryKey
	bool ____isPrimaryKey_8;
	// System.Boolean System.Data.UniqueConstraint::_belongsToCollection
	bool ____belongsToCollection_9;
	// System.Data.DataTable System.Data.UniqueConstraint::_dataTable
	DataTable_t449011362 * ____dataTable_10;
	// System.Data.DataColumn[] System.Data.UniqueConstraint::_dataColumns
	DataColumnU5BU5D_t1143729861* ____dataColumns_11;
	// System.Data.ForeignKeyConstraint System.Data.UniqueConstraint::_childConstraint
	ForeignKeyConstraint_t3269346217 * ____childConstraint_12;

public:
	inline static int32_t get_offset_of__isPrimaryKey_8() { return static_cast<int32_t>(offsetof(UniqueConstraint_t2657169234, ____isPrimaryKey_8)); }
	inline bool get__isPrimaryKey_8() const { return ____isPrimaryKey_8; }
	inline bool* get_address_of__isPrimaryKey_8() { return &____isPrimaryKey_8; }
	inline void set__isPrimaryKey_8(bool value)
	{
		____isPrimaryKey_8 = value;
	}

	inline static int32_t get_offset_of__belongsToCollection_9() { return static_cast<int32_t>(offsetof(UniqueConstraint_t2657169234, ____belongsToCollection_9)); }
	inline bool get__belongsToCollection_9() const { return ____belongsToCollection_9; }
	inline bool* get_address_of__belongsToCollection_9() { return &____belongsToCollection_9; }
	inline void set__belongsToCollection_9(bool value)
	{
		____belongsToCollection_9 = value;
	}

	inline static int32_t get_offset_of__dataTable_10() { return static_cast<int32_t>(offsetof(UniqueConstraint_t2657169234, ____dataTable_10)); }
	inline DataTable_t449011362 * get__dataTable_10() const { return ____dataTable_10; }
	inline DataTable_t449011362 ** get_address_of__dataTable_10() { return &____dataTable_10; }
	inline void set__dataTable_10(DataTable_t449011362 * value)
	{
		____dataTable_10 = value;
		Il2CppCodeGenWriteBarrier((&____dataTable_10), value);
	}

	inline static int32_t get_offset_of__dataColumns_11() { return static_cast<int32_t>(offsetof(UniqueConstraint_t2657169234, ____dataColumns_11)); }
	inline DataColumnU5BU5D_t1143729861* get__dataColumns_11() const { return ____dataColumns_11; }
	inline DataColumnU5BU5D_t1143729861** get_address_of__dataColumns_11() { return &____dataColumns_11; }
	inline void set__dataColumns_11(DataColumnU5BU5D_t1143729861* value)
	{
		____dataColumns_11 = value;
		Il2CppCodeGenWriteBarrier((&____dataColumns_11), value);
	}

	inline static int32_t get_offset_of__childConstraint_12() { return static_cast<int32_t>(offsetof(UniqueConstraint_t2657169234, ____childConstraint_12)); }
	inline ForeignKeyConstraint_t3269346217 * get__childConstraint_12() const { return ____childConstraint_12; }
	inline ForeignKeyConstraint_t3269346217 ** get_address_of__childConstraint_12() { return &____childConstraint_12; }
	inline void set__childConstraint_12(ForeignKeyConstraint_t3269346217 * value)
	{
		____childConstraint_12 = value;
		Il2CppCodeGenWriteBarrier((&____childConstraint_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIQUECONSTRAINT_T2657169234_H
#ifndef EXPANDABLEOBJECTCONVERTER_T99442669_H
#define EXPANDABLEOBJECTCONVERTER_T99442669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t99442669  : public TypeConverter_t3465284711
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T99442669_H
#ifndef SYSTEMEXCEPTION_T2679040214_H
#define SYSTEMEXCEPTION_T2679040214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2679040214  : public Exception_t2727587739
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2679040214_H
#ifndef DECIMAL_T2530742846_H
#define DECIMAL_T2530742846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2530742846 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_6;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_7;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_8;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_9;

public:
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t2530742846, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t2530742846, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t2530742846, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t2530742846, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t2530742846_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2530742846  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2530742846  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2530742846  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2530742846  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2530742846  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2530742846  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2530742846_StaticFields, ___MinValue_0)); }
	inline Decimal_t2530742846  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2530742846 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2530742846  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2530742846_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2530742846  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2530742846 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2530742846  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2530742846_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2530742846  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2530742846 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2530742846  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2530742846_StaticFields, ___One_3)); }
	inline Decimal_t2530742846  get_One_3() const { return ___One_3; }
	inline Decimal_t2530742846 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2530742846  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2530742846_StaticFields, ___Zero_4)); }
	inline Decimal_t2530742846  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2530742846 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2530742846  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t2530742846_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t2530742846  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t2530742846 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t2530742846  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2530742846_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t3437738950 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t3437738950 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t3437738950 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t3437738950 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t3437738950 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t3437738950 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t3437738950 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t3437738950 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef MERGEFAILEDEVENTARGS_T1034458439_H
#define MERGEFAILEDEVENTARGS_T1034458439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeFailedEventArgs
struct  MergeFailedEventArgs_t1034458439  : public EventArgs_t2299726504
{
public:
	// System.Data.DataTable System.Data.MergeFailedEventArgs::data_table
	DataTable_t449011362 * ___data_table_1;
	// System.String System.Data.MergeFailedEventArgs::conflict
	String_t* ___conflict_2;

public:
	inline static int32_t get_offset_of_data_table_1() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t1034458439, ___data_table_1)); }
	inline DataTable_t449011362 * get_data_table_1() const { return ___data_table_1; }
	inline DataTable_t449011362 ** get_address_of_data_table_1() { return &___data_table_1; }
	inline void set_data_table_1(DataTable_t449011362 * value)
	{
		___data_table_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_table_1), value);
	}

	inline static int32_t get_offset_of_conflict_2() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t1034458439, ___conflict_2)); }
	inline String_t* get_conflict_2() const { return ___conflict_2; }
	inline String_t** get_address_of_conflict_2() { return &___conflict_2; }
	inline void set_conflict_2(String_t* value)
	{
		___conflict_2 = value;
		Il2CppCodeGenWriteBarrier((&___conflict_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEFAILEDEVENTARGS_T1034458439_H
#ifndef TABLEMAPPINGCOLLECTION_T3730895761_H
#define TABLEMAPPINGCOLLECTION_T3730895761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.TableMappingCollection
struct  TableMappingCollection_t3730895761  : public CollectionBase_t2472532452
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TABLEMAPPINGCOLLECTION_T3730895761_H
#ifndef SQLBINARY_T3038483636_H
#define SQLBINARY_T3038483636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t3038483636 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t170112886* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t3038483636, ___value_0)); }
	inline ByteU5BU5D_t170112886* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t170112886** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t170112886* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t3038483636, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t3038483636_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t3038483636  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t3038483636_StaticFields, ___Null_2)); }
	inline SqlBinary_t3038483636  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t3038483636 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t3038483636  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t3038483636_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t3038483636_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBINARY_T3038483636_H
#ifndef SQLINT64_T2912832556_H
#define SQLINT64_T2912832556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt64
struct  SqlInt64_t2912832556 
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::value
	int64_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt64::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt64_t2912832556, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt64_t2912832556, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt64_t2912832556_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t2912832556  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t2912832556  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t2912832556  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t2912832556  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt64_t2912832556_StaticFields, ___MaxValue_2)); }
	inline SqlInt64_t2912832556  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt64_t2912832556 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt64_t2912832556  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt64_t2912832556_StaticFields, ___MinValue_3)); }
	inline SqlInt64_t2912832556  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt64_t2912832556 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt64_t2912832556  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_t2912832556_StaticFields, ___Null_4)); }
	inline SqlInt64_t2912832556  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_t2912832556 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_t2912832556  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_t2912832556_StaticFields, ___Zero_5)); }
	inline SqlInt64_t2912832556  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_t2912832556 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_t2912832556  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t2912832556_marshaled_pinvoke
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t2912832556_marshaled_com
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT64_T2912832556_H
#ifndef SQLSINGLE_T388847217_H
#define SQLSINGLE_T388847217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlSingle
struct  SqlSingle_t388847217 
{
public:
	// System.Single System.Data.SqlTypes.SqlSingle::value
	float ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlSingle::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlSingle_t388847217, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlSingle_t388847217, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlSingle_t388847217_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t388847217  ___MaxValue_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t388847217  ___MinValue_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t388847217  ___Null_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t388847217  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlSingle_t388847217_StaticFields, ___MaxValue_2)); }
	inline SqlSingle_t388847217  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlSingle_t388847217 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlSingle_t388847217  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlSingle_t388847217_StaticFields, ___MinValue_3)); }
	inline SqlSingle_t388847217  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlSingle_t388847217 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlSingle_t388847217  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlSingle_t388847217_StaticFields, ___Null_4)); }
	inline SqlSingle_t388847217  get_Null_4() const { return ___Null_4; }
	inline SqlSingle_t388847217 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlSingle_t388847217  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlSingle_t388847217_StaticFields, ___Zero_5)); }
	inline SqlSingle_t388847217  get_Zero_5() const { return ___Zero_5; }
	inline SqlSingle_t388847217 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlSingle_t388847217  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t388847217_marshaled_pinvoke
{
	float ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t388847217_marshaled_com
{
	float ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLSINGLE_T388847217_H
#ifndef SQLINT32_T3132311696_H
#define SQLINT32_T3132311696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt32
struct  SqlInt32_t3132311696 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt32::value
	int32_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt32::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt32_t3132311696, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt32_t3132311696, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt32_t3132311696_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t3132311696  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t3132311696  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t3132311696  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t3132311696  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt32_t3132311696_StaticFields, ___MaxValue_2)); }
	inline SqlInt32_t3132311696  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt32_t3132311696 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt32_t3132311696  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt32_t3132311696_StaticFields, ___MinValue_3)); }
	inline SqlInt32_t3132311696  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt32_t3132311696 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt32_t3132311696  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t3132311696_StaticFields, ___Null_4)); }
	inline SqlInt32_t3132311696  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t3132311696 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t3132311696  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t3132311696_StaticFields, ___Zero_5)); }
	inline SqlInt32_t3132311696  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t3132311696 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t3132311696  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t3132311696_marshaled_pinvoke
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t3132311696_marshaled_com
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT32_T3132311696_H
#ifndef SQLINT16_T1992672179_H
#define SQLINT16_T1992672179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt16
struct  SqlInt16_t1992672179 
{
public:
	// System.Int16 System.Data.SqlTypes.SqlInt16::value
	int16_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt16::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt16_t1992672179, ___value_0)); }
	inline int16_t get_value_0() const { return ___value_0; }
	inline int16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt16_t1992672179, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt16_t1992672179_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t1992672179  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t1992672179  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t1992672179  ___Null_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t1992672179  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt16_t1992672179_StaticFields, ___MaxValue_2)); }
	inline SqlInt16_t1992672179  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt16_t1992672179 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt16_t1992672179  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt16_t1992672179_StaticFields, ___MinValue_3)); }
	inline SqlInt16_t1992672179  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt16_t1992672179 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt16_t1992672179  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt16_t1992672179_StaticFields, ___Null_4)); }
	inline SqlInt16_t1992672179  get_Null_4() const { return ___Null_4; }
	inline SqlInt16_t1992672179 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt16_t1992672179  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt16_t1992672179_StaticFields, ___Zero_5)); }
	inline SqlInt16_t1992672179  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt16_t1992672179 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt16_t1992672179  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t1992672179_marshaled_pinvoke
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t1992672179_marshaled_com
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT16_T1992672179_H
#ifndef DATACOLUMNCHANGEEVENTARGS_T502805829_H
#define DATACOLUMNCHANGEEVENTARGS_T502805829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t502805829  : public EventArgs_t2299726504
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t957173132 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t1390955693 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	RuntimeObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t502805829, ____column_1)); }
	inline DataColumn_t957173132 * get__column_1() const { return ____column_1; }
	inline DataColumn_t957173132 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t957173132 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier((&____column_1), value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t502805829, ____row_2)); }
	inline DataRow_t1390955693 * get__row_2() const { return ____row_2; }
	inline DataRow_t1390955693 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t1390955693 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier((&____row_2), value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t502805829, ____proposedValue_3)); }
	inline RuntimeObject * get__proposedValue_3() const { return ____proposedValue_3; }
	inline RuntimeObject ** get_address_of__proposedValue_3() { return &____proposedValue_3; }
	inline void set__proposedValue_3(RuntimeObject * value)
	{
		____proposedValue_3 = value;
		Il2CppCodeGenWriteBarrier((&____proposedValue_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCHANGEEVENTARGS_T502805829_H
#ifndef DATACOLUMNCOLLECTION_T2775216988_H
#define DATACOLUMNCOLLECTION_T2775216988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t2775216988  : public InternalDataCollectionBase_t3608078533
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t2762605430 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t2762605430 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t3308431662 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t449011362 * ___parentTable_6;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t2278084688 * ___CollectionChanged_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t2278084688 * ___CollectionMetaDataChanged_10;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988, ___columnNameCount_2)); }
	inline Hashtable_t2762605430 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t2762605430 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t2762605430 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988, ___columnFromName_3)); }
	inline Hashtable_t2762605430 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t2762605430 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t2762605430 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988, ___autoIncrement_4)); }
	inline ArrayList_t3308431662 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t3308431662 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t3308431662 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988, ___parentTable_6)); }
	inline DataTable_t449011362 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t449011362 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t449011362 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988, ___CollectionChanged_9)); }
	inline CollectionChangeEventHandler_t2278084688 * get_CollectionChanged_9() const { return ___CollectionChanged_9; }
	inline CollectionChangeEventHandler_t2278084688 ** get_address_of_CollectionChanged_9() { return &___CollectionChanged_9; }
	inline void set_CollectionChanged_9(CollectionChangeEventHandler_t2278084688 * value)
	{
		___CollectionChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_9), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988, ___CollectionMetaDataChanged_10)); }
	inline CollectionChangeEventHandler_t2278084688 * get_CollectionMetaDataChanged_10() const { return ___CollectionMetaDataChanged_10; }
	inline CollectionChangeEventHandler_t2278084688 ** get_address_of_CollectionMetaDataChanged_10() { return &___CollectionMetaDataChanged_10; }
	inline void set_CollectionMetaDataChanged_10(CollectionChangeEventHandler_t2278084688 * value)
	{
		___CollectionMetaDataChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_10), value);
	}
};

struct DataColumnCollection_t2775216988_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_7;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t2494872526* ___TenColumns_8;

public:
	inline static int32_t get_offset_of_ColumnPrefix_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988_StaticFields, ___ColumnPrefix_7)); }
	inline String_t* get_ColumnPrefix_7() const { return ___ColumnPrefix_7; }
	inline String_t** get_address_of_ColumnPrefix_7() { return &___ColumnPrefix_7; }
	inline void set_ColumnPrefix_7(String_t* value)
	{
		___ColumnPrefix_7 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_7), value);
	}

	inline static int32_t get_offset_of_TenColumns_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t2775216988_StaticFields, ___TenColumns_8)); }
	inline StringU5BU5D_t2494872526* get_TenColumns_8() const { return ___TenColumns_8; }
	inline StringU5BU5D_t2494872526** get_address_of_TenColumns_8() { return &___TenColumns_8; }
	inline void set_TenColumns_8(StringU5BU5D_t2494872526* value)
	{
		___TenColumns_8 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T2775216988_H
#ifndef SQLDOUBLE_T2874270298_H
#define SQLDOUBLE_T2874270298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDouble
struct  SqlDouble_t2874270298 
{
public:
	// System.Double System.Data.SqlTypes.SqlDouble::value
	double ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDouble::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDouble_t2874270298, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDouble_t2874270298, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDouble_t2874270298_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t2874270298  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t2874270298  ___MinValue_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t2874270298  ___Null_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t2874270298  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDouble_t2874270298_StaticFields, ___MaxValue_2)); }
	inline SqlDouble_t2874270298  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDouble_t2874270298 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDouble_t2874270298  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDouble_t2874270298_StaticFields, ___MinValue_3)); }
	inline SqlDouble_t2874270298  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDouble_t2874270298 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDouble_t2874270298  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDouble_t2874270298_StaticFields, ___Null_4)); }
	inline SqlDouble_t2874270298  get_Null_4() const { return ___Null_4; }
	inline SqlDouble_t2874270298 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDouble_t2874270298  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlDouble_t2874270298_StaticFields, ___Zero_5)); }
	inline SqlDouble_t2874270298  get_Zero_5() const { return ___Zero_5; }
	inline SqlDouble_t2874270298 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlDouble_t2874270298  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t2874270298_marshaled_pinvoke
{
	double ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t2874270298_marshaled_com
{
	double ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDOUBLE_T2874270298_H
#ifndef CONSTRAINTCOLLECTION_T599906311_H
#define CONSTRAINTCOLLECTION_T599906311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t599906311  : public InternalDataCollectionBase_t3608078533
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t449011362 * ___table_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t2278084688 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t599906311, ___table_2)); }
	inline DataTable_t449011362 * get_table_2() const { return ___table_2; }
	inline DataTable_t449011362 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t449011362 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t599906311, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2278084688 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2278084688 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2278084688 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T599906311_H
#ifndef SQLBYTE_T821761706_H
#define SQLBYTE_T821761706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlByte
struct  SqlByte_t821761706 
{
public:
	// System.Byte System.Data.SqlTypes.SqlByte::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlByte::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlByte_t821761706, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlByte_t821761706, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlByte_t821761706_StaticFields
{
public:
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t821761706  ___MaxValue_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t821761706  ___MinValue_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t821761706  ___Null_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t821761706  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlByte_t821761706_StaticFields, ___MaxValue_2)); }
	inline SqlByte_t821761706  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlByte_t821761706 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlByte_t821761706  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlByte_t821761706_StaticFields, ___MinValue_3)); }
	inline SqlByte_t821761706  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlByte_t821761706 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlByte_t821761706  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlByte_t821761706_StaticFields, ___Null_4)); }
	inline SqlByte_t821761706  get_Null_4() const { return ___Null_4; }
	inline SqlByte_t821761706 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlByte_t821761706  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlByte_t821761706_StaticFields, ___Zero_5)); }
	inline SqlByte_t821761706  get_Zero_5() const { return ___Zero_5; }
	inline SqlByte_t821761706 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlByte_t821761706  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t821761706_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t821761706_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBYTE_T821761706_H
#ifndef DATARELATIONCOLLECTION_T4020009385_H
#define DATARELATIONCOLLECTION_T4020009385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t4020009385  : public InternalDataCollectionBase_t3608078533
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t706411233 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t2278084688 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t4020009385, ___inTransition_2)); }
	inline DataRelation_t706411233 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t706411233 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t706411233 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t4020009385, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t4020009385, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t2278084688 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t2278084688 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t2278084688 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T4020009385_H
#ifndef SQLBOOLEAN_T4209841444_H
#define SQLBOOLEAN_T4209841444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t4209841444 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t4209841444, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t4209841444, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t4209841444_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t4209841444  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t4209841444  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t4209841444  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t4209841444  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t4209841444  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t4209841444_StaticFields, ___False_2)); }
	inline SqlBoolean_t4209841444  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t4209841444 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t4209841444  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t4209841444_StaticFields, ___Null_3)); }
	inline SqlBoolean_t4209841444  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t4209841444 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t4209841444  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t4209841444_StaticFields, ___One_4)); }
	inline SqlBoolean_t4209841444  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t4209841444 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t4209841444  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t4209841444_StaticFields, ___True_5)); }
	inline SqlBoolean_t4209841444  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t4209841444 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t4209841444  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t4209841444_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t4209841444  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t4209841444 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t4209841444  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t4209841444_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t4209841444_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBOOLEAN_T4209841444_H
#ifndef SQLDECIMAL_T1752179856_H
#define SQLDECIMAL_T1752179856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDecimal
struct  SqlDecimal_t1752179856 
{
public:
	// System.Int32[] System.Data.SqlTypes.SqlDecimal::value
	Int32U5BU5D_t1044167045* ___value_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::precision
	uint8_t ___precision_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::scale
	uint8_t ___scale_2;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::positive
	bool ___positive_3;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::notNull
	bool ___notNull_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856, ___value_0)); }
	inline Int32U5BU5D_t1044167045* get_value_0() const { return ___value_0; }
	inline Int32U5BU5D_t1044167045** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Int32U5BU5D_t1044167045* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856, ___precision_1)); }
	inline uint8_t get_precision_1() const { return ___precision_1; }
	inline uint8_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(uint8_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856, ___scale_2)); }
	inline uint8_t get_scale_2() const { return ___scale_2; }
	inline uint8_t* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(uint8_t value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856, ___positive_3)); }
	inline bool get_positive_3() const { return ___positive_3; }
	inline bool* get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(bool value)
	{
		___positive_3 = value;
	}

	inline static int32_t get_offset_of_notNull_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856, ___notNull_4)); }
	inline bool get_notNull_4() const { return ___notNull_4; }
	inline bool* get_address_of_notNull_4() { return &___notNull_4; }
	inline void set_notNull_4(bool value)
	{
		___notNull_4 = value;
	}
};

struct SqlDecimal_t1752179856_StaticFields
{
public:
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::constantsDecadeInt32Factors
	UInt32U5BU5D_t2658612099* ___constantsDecadeInt32Factors_5;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_6;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_7;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t1752179856  ___MaxValue_8;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t1752179856  ___MinValue_9;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t1752179856  ___Null_10;

public:
	inline static int32_t get_offset_of_constantsDecadeInt32Factors_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856_StaticFields, ___constantsDecadeInt32Factors_5)); }
	inline UInt32U5BU5D_t2658612099* get_constantsDecadeInt32Factors_5() const { return ___constantsDecadeInt32Factors_5; }
	inline UInt32U5BU5D_t2658612099** get_address_of_constantsDecadeInt32Factors_5() { return &___constantsDecadeInt32Factors_5; }
	inline void set_constantsDecadeInt32Factors_5(UInt32U5BU5D_t2658612099* value)
	{
		___constantsDecadeInt32Factors_5 = value;
		Il2CppCodeGenWriteBarrier((&___constantsDecadeInt32Factors_5), value);
	}

	inline static int32_t get_offset_of_MaxPrecision_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856_StaticFields, ___MaxPrecision_6)); }
	inline uint8_t get_MaxPrecision_6() const { return ___MaxPrecision_6; }
	inline uint8_t* get_address_of_MaxPrecision_6() { return &___MaxPrecision_6; }
	inline void set_MaxPrecision_6(uint8_t value)
	{
		___MaxPrecision_6 = value;
	}

	inline static int32_t get_offset_of_MaxScale_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856_StaticFields, ___MaxScale_7)); }
	inline uint8_t get_MaxScale_7() const { return ___MaxScale_7; }
	inline uint8_t* get_address_of_MaxScale_7() { return &___MaxScale_7; }
	inline void set_MaxScale_7(uint8_t value)
	{
		___MaxScale_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856_StaticFields, ___MaxValue_8)); }
	inline SqlDecimal_t1752179856  get_MaxValue_8() const { return ___MaxValue_8; }
	inline SqlDecimal_t1752179856 * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(SqlDecimal_t1752179856  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856_StaticFields, ___MinValue_9)); }
	inline SqlDecimal_t1752179856  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlDecimal_t1752179856 * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlDecimal_t1752179856  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_Null_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t1752179856_StaticFields, ___Null_10)); }
	inline SqlDecimal_t1752179856  get_Null_10() const { return ___Null_10; }
	inline SqlDecimal_t1752179856 * get_address_of_Null_10() { return &___Null_10; }
	inline void set_Null_10(SqlDecimal_t1752179856  value)
	{
		___Null_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t1752179856_marshaled_pinvoke
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t1752179856_marshaled_com
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
#endif // SQLDECIMAL_T1752179856_H
#ifndef SQLCOMPAREOPTIONS_T3488089144_H
#define SQLCOMPAREOPTIONS_T3488089144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlCompareOptions
struct  SqlCompareOptions_t3488089144 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SqlCompareOptions_t3488089144, ___value___1)); }
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
#endif // SQLCOMPAREOPTIONS_T3488089144_H
#ifndef RESDESCRIPTIONATTRIBUTE_T1967942339_H
#define RESDESCRIPTIONATTRIBUTE_T1967942339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ResDescriptionAttribute
struct  ResDescriptionAttribute_t1967942339  : public DescriptionAttribute_t4142648123
{
public:
	// System.String System.Data.ResDescriptionAttribute::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(ResDescriptionAttribute_t1967942339, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESDESCRIPTIONATTRIBUTE_T1967942339_H
#ifndef RULE_T3648980026_H
#define RULE_T3648980026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Rule
struct  Rule_t3648980026 
{
public:
	// System.Int32 System.Data.Rule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Rule_t3648980026, ___value___1)); }
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
#endif // RULE_T3648980026_H
#ifndef DATATABLERELATIONCOLLECTION_T1476257321_H
#define DATATABLERELATIONCOLLECTION_T1476257321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t1476257321  : public DataRelationCollection_t4020009385
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t449011362 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t1476257321, ___dataTable_5)); }
	inline DataTable_t449011362 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t449011362 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t449011362 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLERELATIONCOLLECTION_T1476257321_H
#ifndef SERIALIZATIONFORMAT_T3642900996_H
#define SERIALIZATIONFORMAT_T3642900996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SerializationFormat
struct  SerializationFormat_t3642900996 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationFormat_t3642900996, ___value___1)); }
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
#endif // SERIALIZATIONFORMAT_T3642900996_H
#ifndef GENERATEMETHODSTYPE_T1388337402_H
#define GENERATEMETHODSTYPE_T1388337402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.GenerateMethodsType
struct  GenerateMethodsType_t1388337402 
{
public:
	// System.Int32 System.Data.GenerateMethodsType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GenerateMethodsType_t1388337402, ___value___1)); }
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
#endif // GENERATEMETHODSTYPE_T1388337402_H
#ifndef COMMANDTYPE_T117715995_H
#define COMMANDTYPE_T117715995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t117715995 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t117715995, ___value___1)); }
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
#endif // COMMANDTYPE_T117715995_H
#ifndef COLUMNTYPECONVERTER_T2308527720_H
#define COLUMNTYPECONVERTER_T2308527720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ColumnTypeConverter
struct  ColumnTypeConverter_t2308527720  : public ExpandableObjectConverter_t99442669
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNTYPECONVERTER_T2308527720_H
#ifndef ELEMENTMAPPINGTYPE_T3158962931_H
#define ELEMENTMAPPINGTYPE_T3158962931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ElementMappingType
struct  ElementMappingType_t3158962931 
{
public:
	// System.Int32 System.Data.ElementMappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ElementMappingType_t3158962931, ___value___1)); }
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
#endif // ELEMENTMAPPINGTYPE_T3158962931_H
#ifndef STORAGESTATE_T3409949074_H
#define STORAGESTATE_T3409949074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.StorageState
struct  StorageState_t3409949074 
{
public:
	// System.Int32 System.Data.SqlTypes.StorageState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageState_t3409949074, ___value___1)); }
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
#endif // STORAGESTATE_T3409949074_H
#ifndef SQLTYPEEXCEPTION_T743199660_H
#define SQLTYPEEXCEPTION_T743199660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTypeException
struct  SqlTypeException_t743199660  : public SystemException_t2679040214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTYPEEXCEPTION_T743199660_H
#ifndef SQLMONEY_T1959388897_H
#define SQLMONEY_T1959388897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t1959388897 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t2530742846  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t1959388897, ___value_0)); }
	inline Decimal_t2530742846  get_value_0() const { return ___value_0; }
	inline Decimal_t2530742846 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t2530742846  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t1959388897, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t1959388897_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t1959388897  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t1959388897  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t1959388897  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t1959388897  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t2841623346 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t1959388897_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t1959388897  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t1959388897 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t1959388897  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t1959388897_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t1959388897  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t1959388897 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t1959388897  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t1959388897_StaticFields, ___Null_4)); }
	inline SqlMoney_t1959388897  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t1959388897 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t1959388897  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t1959388897_StaticFields, ___Zero_5)); }
	inline SqlMoney_t1959388897  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t1959388897 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t1959388897  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t1959388897_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t2841623346 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t2841623346 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t2841623346 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier((&___MoneyFormat_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1959388897_marshaled_pinvoke
{
	Decimal_t2530742846  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t1959388897_marshaled_com
{
	Decimal_t2530742846  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLMONEY_T1959388897_H
#ifndef RELATIONSHIPCONVERTER_T4223497100_H
#define RELATIONSHIPCONVERTER_T4223497100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RelationshipConverter
struct  RelationshipConverter_t4223497100  : public ExpandableObjectConverter_t99442669
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIONSHIPCONVERTER_T4223497100_H
#ifndef DATETIMEKIND_T10430361_H
#define DATETIMEKIND_T10430361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t10430361 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t10430361, ___value___1)); }
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
#endif // DATETIMEKIND_T10430361_H
#ifndef XMLREADMODE_T1542528176_H
#define XMLREADMODE_T1542528176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlReadMode
struct  XmlReadMode_t1542528176 
{
public:
	// System.Int32 System.Data.XmlReadMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlReadMode_t1542528176, ___value___1)); }
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
#endif // XMLREADMODE_T1542528176_H
#ifndef SQLGUID_T643999581_H
#define SQLGUID_T643999581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t643999581 
{
public:
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlGuid_t643999581, ___value_0)); }
	inline Guid_t  get_value_0() const { return ___value_0; }
	inline Guid_t * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Guid_t  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlGuid_t643999581, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlGuid_t643999581_StaticFields
{
public:
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t643999581  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlGuid_t643999581_StaticFields, ___Null_2)); }
	inline SqlGuid_t643999581  get_Null_2() const { return ___Null_2; }
	inline SqlGuid_t643999581 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlGuid_t643999581  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t643999581_marshaled_pinvoke
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t643999581_marshaled_com
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLGUID_T643999581_H
#ifndef ACCEPTREJECTRULE_T2438305795_H
#define ACCEPTREJECTRULE_T2438305795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t2438305795 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t2438305795, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T2438305795_H
#ifndef DATASETRELATIONCOLLECTION_T1636012951_H
#define DATASETRELATIONCOLLECTION_T1636012951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t1636012951  : public DataRelationCollection_t4020009385
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t91008811 * ___dataSet_5;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t1636012951, ___dataSet_5)); }
	inline DataSet_t91008811 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t91008811 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t91008811 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETRELATIONCOLLECTION_T1636012951_H
#ifndef SCHEMASERIALIZATIONMODE_T502335717_H
#define SCHEMASERIALIZATIONMODE_T502335717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SchemaSerializationMode
struct  SchemaSerializationMode_t502335717 
{
public:
	// System.Int32 System.Data.SchemaSerializationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SchemaSerializationMode_t502335717, ___value___1)); }
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
#endif // SCHEMASERIALIZATIONMODE_T502335717_H
#ifndef PARAMETERDIRECTION_T1574919100_H
#define PARAMETERDIRECTION_T1574919100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ParameterDirection
struct  ParameterDirection_t1574919100 
{
public:
	// System.Int32 System.Data.ParameterDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterDirection_t1574919100, ___value___1)); }
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
#endif // PARAMETERDIRECTION_T1574919100_H
#ifndef DEFAULTVALUETYPECONVERTER_T4156915221_H
#define DEFAULTVALUETYPECONVERTER_T4156915221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DefaultValueTypeConverter
struct  DefaultValueTypeConverter_t4156915221  : public ExpandableObjectConverter_t99442669
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUETYPECONVERTER_T4156915221_H
#ifndef DATAVIEWROWSTATE_T3715539662_H
#define DATAVIEWROWSTATE_T3715539662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataViewRowState
struct  DataViewRowState_t3715539662 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataViewRowState_t3715539662, ___value___1)); }
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
#endif // DATAVIEWROWSTATE_T3715539662_H
#ifndef DATACATEGORYATTRIBUTE_T2499415235_H
#define DATACATEGORYATTRIBUTE_T2499415235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataCategoryAttribute
struct  DataCategoryAttribute_t2499415235  : public CategoryAttribute_t1237907172
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACATEGORYATTRIBUTE_T2499415235_H
#ifndef DATASETDATETIME_T4129918198_H
#define DATASETDATETIME_T4129918198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t4129918198 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t4129918198, ___value___1)); }
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
#endif // DATASETDATETIME_T4129918198_H
#ifndef MAPPINGTYPE_T2057803425_H
#define MAPPINGTYPE_T2057803425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t2057803425 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t2057803425, ___value___1)); }
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
#endif // MAPPINGTYPE_T2057803425_H
#ifndef DATAROWVERSION_T2992543944_H
#define DATAROWVERSION_T2992543944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowVersion
struct  DataRowVersion_t2992543944 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowVersion_t2992543944, ___value___1)); }
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
#endif // DATAROWVERSION_T2992543944_H
#ifndef CONSTRAINTCONVERTER_T1251974767_H
#define CONSTRAINTCONVERTER_T1251974767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintConverter
struct  ConstraintConverter_t1251974767  : public ExpandableObjectConverter_t99442669
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCONVERTER_T1251974767_H
#ifndef DATAEXCEPTION_T3803926864_H
#define DATAEXCEPTION_T3803926864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataException
struct  DataException_t3803926864  : public SystemException_t2679040214
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAEXCEPTION_T3803926864_H
#ifndef MISSINGSCHEMAACTION_T3861377777_H
#define MISSINGSCHEMAACTION_T3861377777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingSchemaAction
struct  MissingSchemaAction_t3861377777 
{
public:
	// System.Int32 System.Data.MissingSchemaAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MissingSchemaAction_t3861377777, ___value___1)); }
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
#endif // MISSINGSCHEMAACTION_T3861377777_H
#ifndef DATAROWACTION_T272915745_H
#define DATAROWACTION_T272915745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_t272915745 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowAction_t272915745, ___value___1)); }
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
#endif // DATAROWACTION_T272915745_H
#ifndef DATAROWSTATE_T3809275726_H
#define DATAROWSTATE_T3809275726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowState
struct  DataRowState_t3809275726 
{
public:
	// System.Int32 System.Data.DataRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowState_t3809275726, ___value___1)); }
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
#endif // DATAROWSTATE_T3809275726_H
#ifndef SQLBYTES_T767536462_H
#define SQLBYTES_T767536462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBytes
struct  SqlBytes_t767536462  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlBytes::notNull
	bool ___notNull_0;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::buffer
	ByteU5BU5D_t170112886* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlBytes::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlBytes_t767536462, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlBytes_t767536462, ___buffer_1)); }
	inline ByteU5BU5D_t170112886* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t170112886** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t170112886* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlBytes_t767536462, ___storage_2)); }
	inline int32_t get_storage_2() const { return ___storage_2; }
	inline int32_t* get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(int32_t value)
	{
		___storage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLBYTES_T767536462_H
#ifndef SQLCHARS_T4201940976_H
#define SQLCHARS_T4201940976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlChars
struct  SqlChars_t4201940976  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlChars::notNull
	bool ___notNull_0;
	// System.Char[] System.Data.SqlTypes.SqlChars::buffer
	CharU5BU5D_t252931387* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlChars::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlChars_t4201940976, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlChars_t4201940976, ___buffer_1)); }
	inline CharU5BU5D_t252931387* get_buffer_1() const { return ___buffer_1; }
	inline CharU5BU5D_t252931387** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(CharU5BU5D_t252931387* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlChars_t4201940976, ___storage_2)); }
	inline int32_t get_storage_2() const { return ___storage_2; }
	inline int32_t* get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(int32_t value)
	{
		___storage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLCHARS_T4201940976_H
#ifndef DUPLICATENAMEEXCEPTION_T2065368580_H
#define DUPLICATENAMEEXCEPTION_T2065368580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DuplicateNameException
struct  DuplicateNameException_t2065368580  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUPLICATENAMEEXCEPTION_T2065368580_H
#ifndef DATASET_T91008811_H
#define DATASET_T91008811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSet
struct  DataSet_t91008811  : public MarshalByValueComponent_t1599592632
{
public:
	// System.String System.Data.DataSet::dataSetName
	String_t* ___dataSetName_3;
	// System.String System.Data.DataSet::_namespace
	String_t* ____namespace_4;
	// System.String System.Data.DataSet::prefix
	String_t* ___prefix_5;
	// System.Boolean System.Data.DataSet::caseSensitive
	bool ___caseSensitive_6;
	// System.Boolean System.Data.DataSet::enforceConstraints
	bool ___enforceConstraints_7;
	// System.Data.DataTableCollection System.Data.DataSet::tableCollection
	DataTableCollection_t42359719 * ___tableCollection_8;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t4020009385 * ___relationCollection_9;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t399284420 * ___properties_10;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t4119262167 * ___locale_11;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t846969719 * ___tableAdapterSchemaInfo_12;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_13;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_14;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t3907879112 * ___MergeFailed_15;

public:
	inline static int32_t get_offset_of_dataSetName_3() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___dataSetName_3)); }
	inline String_t* get_dataSetName_3() const { return ___dataSetName_3; }
	inline String_t** get_address_of_dataSetName_3() { return &___dataSetName_3; }
	inline void set_dataSetName_3(String_t* value)
	{
		___dataSetName_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetName_3), value);
	}

	inline static int32_t get_offset_of__namespace_4() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ____namespace_4)); }
	inline String_t* get__namespace_4() const { return ____namespace_4; }
	inline String_t** get_address_of__namespace_4() { return &____namespace_4; }
	inline void set__namespace_4(String_t* value)
	{
		____namespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_4), value);
	}

	inline static int32_t get_offset_of_prefix_5() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___prefix_5)); }
	inline String_t* get_prefix_5() const { return ___prefix_5; }
	inline String_t** get_address_of_prefix_5() { return &___prefix_5; }
	inline void set_prefix_5(String_t* value)
	{
		___prefix_5 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_5), value);
	}

	inline static int32_t get_offset_of_caseSensitive_6() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___caseSensitive_6)); }
	inline bool get_caseSensitive_6() const { return ___caseSensitive_6; }
	inline bool* get_address_of_caseSensitive_6() { return &___caseSensitive_6; }
	inline void set_caseSensitive_6(bool value)
	{
		___caseSensitive_6 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_7() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___enforceConstraints_7)); }
	inline bool get_enforceConstraints_7() const { return ___enforceConstraints_7; }
	inline bool* get_address_of_enforceConstraints_7() { return &___enforceConstraints_7; }
	inline void set_enforceConstraints_7(bool value)
	{
		___enforceConstraints_7 = value;
	}

	inline static int32_t get_offset_of_tableCollection_8() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___tableCollection_8)); }
	inline DataTableCollection_t42359719 * get_tableCollection_8() const { return ___tableCollection_8; }
	inline DataTableCollection_t42359719 ** get_address_of_tableCollection_8() { return &___tableCollection_8; }
	inline void set_tableCollection_8(DataTableCollection_t42359719 * value)
	{
		___tableCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&___tableCollection_8), value);
	}

	inline static int32_t get_offset_of_relationCollection_9() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___relationCollection_9)); }
	inline DataRelationCollection_t4020009385 * get_relationCollection_9() const { return ___relationCollection_9; }
	inline DataRelationCollection_t4020009385 ** get_address_of_relationCollection_9() { return &___relationCollection_9; }
	inline void set_relationCollection_9(DataRelationCollection_t4020009385 * value)
	{
		___relationCollection_9 = value;
		Il2CppCodeGenWriteBarrier((&___relationCollection_9), value);
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___properties_10)); }
	inline PropertyCollection_t399284420 * get_properties_10() const { return ___properties_10; }
	inline PropertyCollection_t399284420 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(PropertyCollection_t399284420 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier((&___properties_10), value);
	}

	inline static int32_t get_offset_of_locale_11() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___locale_11)); }
	inline CultureInfo_t4119262167 * get_locale_11() const { return ___locale_11; }
	inline CultureInfo_t4119262167 ** get_address_of_locale_11() { return &___locale_11; }
	inline void set_locale_11(CultureInfo_t4119262167 * value)
	{
		___locale_11 = value;
		Il2CppCodeGenWriteBarrier((&___locale_11), value);
	}

	inline static int32_t get_offset_of_tableAdapterSchemaInfo_12() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___tableAdapterSchemaInfo_12)); }
	inline TableAdapterSchemaInfo_t846969719 * get_tableAdapterSchemaInfo_12() const { return ___tableAdapterSchemaInfo_12; }
	inline TableAdapterSchemaInfo_t846969719 ** get_address_of_tableAdapterSchemaInfo_12() { return &___tableAdapterSchemaInfo_12; }
	inline void set_tableAdapterSchemaInfo_12(TableAdapterSchemaInfo_t846969719 * value)
	{
		___tableAdapterSchemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___tableAdapterSchemaInfo_12), value);
	}

	inline static int32_t get_offset_of_dataSetInitialized_13() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___dataSetInitialized_13)); }
	inline bool get_dataSetInitialized_13() const { return ___dataSetInitialized_13; }
	inline bool* get_address_of_dataSetInitialized_13() { return &___dataSetInitialized_13; }
	inline void set_dataSetInitialized_13(bool value)
	{
		___dataSetInitialized_13 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_14() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___remotingFormat_14)); }
	inline int32_t get_remotingFormat_14() const { return ___remotingFormat_14; }
	inline int32_t* get_address_of_remotingFormat_14() { return &___remotingFormat_14; }
	inline void set_remotingFormat_14(int32_t value)
	{
		___remotingFormat_14 = value;
	}

	inline static int32_t get_offset_of_MergeFailed_15() { return static_cast<int32_t>(offsetof(DataSet_t91008811, ___MergeFailed_15)); }
	inline MergeFailedEventHandler_t3907879112 * get_MergeFailed_15() const { return ___MergeFailed_15; }
	inline MergeFailedEventHandler_t3907879112 ** get_address_of_MergeFailed_15() { return &___MergeFailed_15; }
	inline void set_MergeFailed_15(MergeFailedEventHandler_t3907879112 * value)
	{
		___MergeFailed_15 = value;
		Il2CppCodeGenWriteBarrier((&___MergeFailed_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T91008811_H
#ifndef DATATABLE_T449011362_H
#define DATATABLE_T449011362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t449011362  : public MarshalByValueComponent_t1599592632
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t91008811 * ___dataSet_3;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_4;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t2775216988 * ____columnCollection_5;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t599906311 * ____constraintCollection_6;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_7;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t399284420 * ____extendedProperties_8;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t4119262167 * ____locale_9;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_10;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t4020009385 * ____childRelations_12;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t4020009385 * ____parentRelations_13;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_14;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t2657169234 * ____primaryKeyConstraint_15;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t3811941752 * ____rows_16;
	// System.ComponentModel.ISite System.Data.DataTable::_site
	RuntimeObject* ____site_17;
	// System.String System.Data.DataTable::_tableName
	String_t* ____tableName_18;
	// System.Boolean System.Data.DataTable::_duringDataLoad
	bool ____duringDataLoad_19;
	// System.Boolean System.Data.DataTable::_nullConstraintViolationDuringDataLoad
	bool ____nullConstraintViolationDuringDataLoad_20;
	// System.Boolean System.Data.DataTable::enforceConstraints
	bool ___enforceConstraints_21;
	// System.Data.DataRowBuilder System.Data.DataTable::_rowBuilder
	DataRowBuilder_t4106443462 * ____rowBuilder_22;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t3308431662 * ____indexes_23;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t497324693 * ____recordCache_24;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_25;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_26;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_27;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t4218863425 * ____propertyDescriptorsCache_28;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t1143729861* ____latestPrimaryKeyCols_31;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t3123778048* ___empty_rows_32;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_33;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_34;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t3538683144 * ___ColumnChanged_35;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t3538683144 * ___ColumnChanging_36;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t3933482857 * ___RowChanged_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t3933482857 * ___RowChanging_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t3933482857 * ___RowDeleted_39;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t3933482857 * ___RowDeleting_40;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t2332398076 * ___TableNewRow_41;

public:
	inline static int32_t get_offset_of_dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___dataSet_3)); }
	inline DataSet_t91008811 * get_dataSet_3() const { return ___dataSet_3; }
	inline DataSet_t91008811 ** get_address_of_dataSet_3() { return &___dataSet_3; }
	inline void set_dataSet_3(DataSet_t91008811 * value)
	{
		___dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_3), value);
	}

	inline static int32_t get_offset_of__caseSensitive_4() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____caseSensitive_4)); }
	inline bool get__caseSensitive_4() const { return ____caseSensitive_4; }
	inline bool* get_address_of__caseSensitive_4() { return &____caseSensitive_4; }
	inline void set__caseSensitive_4(bool value)
	{
		____caseSensitive_4 = value;
	}

	inline static int32_t get_offset_of__columnCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____columnCollection_5)); }
	inline DataColumnCollection_t2775216988 * get__columnCollection_5() const { return ____columnCollection_5; }
	inline DataColumnCollection_t2775216988 ** get_address_of__columnCollection_5() { return &____columnCollection_5; }
	inline void set__columnCollection_5(DataColumnCollection_t2775216988 * value)
	{
		____columnCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____columnCollection_5), value);
	}

	inline static int32_t get_offset_of__constraintCollection_6() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____constraintCollection_6)); }
	inline ConstraintCollection_t599906311 * get__constraintCollection_6() const { return ____constraintCollection_6; }
	inline ConstraintCollection_t599906311 ** get_address_of__constraintCollection_6() { return &____constraintCollection_6; }
	inline void set__constraintCollection_6(ConstraintCollection_t599906311 * value)
	{
		____constraintCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_6), value);
	}

	inline static int32_t get_offset_of__displayExpression_7() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____displayExpression_7)); }
	inline String_t* get__displayExpression_7() const { return ____displayExpression_7; }
	inline String_t** get_address_of__displayExpression_7() { return &____displayExpression_7; }
	inline void set__displayExpression_7(String_t* value)
	{
		____displayExpression_7 = value;
		Il2CppCodeGenWriteBarrier((&____displayExpression_7), value);
	}

	inline static int32_t get_offset_of__extendedProperties_8() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____extendedProperties_8)); }
	inline PropertyCollection_t399284420 * get__extendedProperties_8() const { return ____extendedProperties_8; }
	inline PropertyCollection_t399284420 ** get_address_of__extendedProperties_8() { return &____extendedProperties_8; }
	inline void set__extendedProperties_8(PropertyCollection_t399284420 * value)
	{
		____extendedProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_8), value);
	}

	inline static int32_t get_offset_of__locale_9() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____locale_9)); }
	inline CultureInfo_t4119262167 * get__locale_9() const { return ____locale_9; }
	inline CultureInfo_t4119262167 ** get_address_of__locale_9() { return &____locale_9; }
	inline void set__locale_9(CultureInfo_t4119262167 * value)
	{
		____locale_9 = value;
		Il2CppCodeGenWriteBarrier((&____locale_9), value);
	}

	inline static int32_t get_offset_of__minimumCapacity_10() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____minimumCapacity_10)); }
	inline int32_t get__minimumCapacity_10() const { return ____minimumCapacity_10; }
	inline int32_t* get_address_of__minimumCapacity_10() { return &____minimumCapacity_10; }
	inline void set__minimumCapacity_10(int32_t value)
	{
		____minimumCapacity_10 = value;
	}

	inline static int32_t get_offset_of__nameSpace_11() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____nameSpace_11)); }
	inline String_t* get__nameSpace_11() const { return ____nameSpace_11; }
	inline String_t** get_address_of__nameSpace_11() { return &____nameSpace_11; }
	inline void set__nameSpace_11(String_t* value)
	{
		____nameSpace_11 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_11), value);
	}

	inline static int32_t get_offset_of__childRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____childRelations_12)); }
	inline DataRelationCollection_t4020009385 * get__childRelations_12() const { return ____childRelations_12; }
	inline DataRelationCollection_t4020009385 ** get_address_of__childRelations_12() { return &____childRelations_12; }
	inline void set__childRelations_12(DataRelationCollection_t4020009385 * value)
	{
		____childRelations_12 = value;
		Il2CppCodeGenWriteBarrier((&____childRelations_12), value);
	}

	inline static int32_t get_offset_of__parentRelations_13() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____parentRelations_13)); }
	inline DataRelationCollection_t4020009385 * get__parentRelations_13() const { return ____parentRelations_13; }
	inline DataRelationCollection_t4020009385 ** get_address_of__parentRelations_13() { return &____parentRelations_13; }
	inline void set__parentRelations_13(DataRelationCollection_t4020009385 * value)
	{
		____parentRelations_13 = value;
		Il2CppCodeGenWriteBarrier((&____parentRelations_13), value);
	}

	inline static int32_t get_offset_of__prefix_14() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____prefix_14)); }
	inline String_t* get__prefix_14() const { return ____prefix_14; }
	inline String_t** get_address_of__prefix_14() { return &____prefix_14; }
	inline void set__prefix_14(String_t* value)
	{
		____prefix_14 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_14), value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_15() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____primaryKeyConstraint_15)); }
	inline UniqueConstraint_t2657169234 * get__primaryKeyConstraint_15() const { return ____primaryKeyConstraint_15; }
	inline UniqueConstraint_t2657169234 ** get_address_of__primaryKeyConstraint_15() { return &____primaryKeyConstraint_15; }
	inline void set__primaryKeyConstraint_15(UniqueConstraint_t2657169234 * value)
	{
		____primaryKeyConstraint_15 = value;
		Il2CppCodeGenWriteBarrier((&____primaryKeyConstraint_15), value);
	}

	inline static int32_t get_offset_of__rows_16() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____rows_16)); }
	inline DataRowCollection_t3811941752 * get__rows_16() const { return ____rows_16; }
	inline DataRowCollection_t3811941752 ** get_address_of__rows_16() { return &____rows_16; }
	inline void set__rows_16(DataRowCollection_t3811941752 * value)
	{
		____rows_16 = value;
		Il2CppCodeGenWriteBarrier((&____rows_16), value);
	}

	inline static int32_t get_offset_of__site_17() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____site_17)); }
	inline RuntimeObject* get__site_17() const { return ____site_17; }
	inline RuntimeObject** get_address_of__site_17() { return &____site_17; }
	inline void set__site_17(RuntimeObject* value)
	{
		____site_17 = value;
		Il2CppCodeGenWriteBarrier((&____site_17), value);
	}

	inline static int32_t get_offset_of__tableName_18() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____tableName_18)); }
	inline String_t* get__tableName_18() const { return ____tableName_18; }
	inline String_t** get_address_of__tableName_18() { return &____tableName_18; }
	inline void set__tableName_18(String_t* value)
	{
		____tableName_18 = value;
		Il2CppCodeGenWriteBarrier((&____tableName_18), value);
	}

	inline static int32_t get_offset_of__duringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____duringDataLoad_19)); }
	inline bool get__duringDataLoad_19() const { return ____duringDataLoad_19; }
	inline bool* get_address_of__duringDataLoad_19() { return &____duringDataLoad_19; }
	inline void set__duringDataLoad_19(bool value)
	{
		____duringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_20() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____nullConstraintViolationDuringDataLoad_20)); }
	inline bool get__nullConstraintViolationDuringDataLoad_20() const { return ____nullConstraintViolationDuringDataLoad_20; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_20() { return &____nullConstraintViolationDuringDataLoad_20; }
	inline void set__nullConstraintViolationDuringDataLoad_20(bool value)
	{
		____nullConstraintViolationDuringDataLoad_20 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_21() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___enforceConstraints_21)); }
	inline bool get_enforceConstraints_21() const { return ___enforceConstraints_21; }
	inline bool* get_address_of_enforceConstraints_21() { return &___enforceConstraints_21; }
	inline void set_enforceConstraints_21(bool value)
	{
		___enforceConstraints_21 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_22() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____rowBuilder_22)); }
	inline DataRowBuilder_t4106443462 * get__rowBuilder_22() const { return ____rowBuilder_22; }
	inline DataRowBuilder_t4106443462 ** get_address_of__rowBuilder_22() { return &____rowBuilder_22; }
	inline void set__rowBuilder_22(DataRowBuilder_t4106443462 * value)
	{
		____rowBuilder_22 = value;
		Il2CppCodeGenWriteBarrier((&____rowBuilder_22), value);
	}

	inline static int32_t get_offset_of__indexes_23() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____indexes_23)); }
	inline ArrayList_t3308431662 * get__indexes_23() const { return ____indexes_23; }
	inline ArrayList_t3308431662 ** get_address_of__indexes_23() { return &____indexes_23; }
	inline void set__indexes_23(ArrayList_t3308431662 * value)
	{
		____indexes_23 = value;
		Il2CppCodeGenWriteBarrier((&____indexes_23), value);
	}

	inline static int32_t get_offset_of__recordCache_24() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____recordCache_24)); }
	inline RecordCache_t497324693 * get__recordCache_24() const { return ____recordCache_24; }
	inline RecordCache_t497324693 ** get_address_of__recordCache_24() { return &____recordCache_24; }
	inline void set__recordCache_24(RecordCache_t497324693 * value)
	{
		____recordCache_24 = value;
		Il2CppCodeGenWriteBarrier((&____recordCache_24), value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_25() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____defaultValuesRowIndex_25)); }
	inline int32_t get__defaultValuesRowIndex_25() const { return ____defaultValuesRowIndex_25; }
	inline int32_t* get_address_of__defaultValuesRowIndex_25() { return &____defaultValuesRowIndex_25; }
	inline void set__defaultValuesRowIndex_25(int32_t value)
	{
		____defaultValuesRowIndex_25 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_26() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___fInitInProgress_26)); }
	inline bool get_fInitInProgress_26() const { return ___fInitInProgress_26; }
	inline bool* get_address_of_fInitInProgress_26() { return &___fInitInProgress_26; }
	inline void set_fInitInProgress_26(bool value)
	{
		___fInitInProgress_26 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_27() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____virginCaseSensitive_27)); }
	inline bool get__virginCaseSensitive_27() const { return ____virginCaseSensitive_27; }
	inline bool* get_address_of__virginCaseSensitive_27() { return &____virginCaseSensitive_27; }
	inline void set__virginCaseSensitive_27(bool value)
	{
		____virginCaseSensitive_27 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_28() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____propertyDescriptorsCache_28)); }
	inline PropertyDescriptorCollection_t4218863425 * get__propertyDescriptorsCache_28() const { return ____propertyDescriptorsCache_28; }
	inline PropertyDescriptorCollection_t4218863425 ** get_address_of__propertyDescriptorsCache_28() { return &____propertyDescriptorsCache_28; }
	inline void set__propertyDescriptorsCache_28(PropertyDescriptorCollection_t4218863425 * value)
	{
		____propertyDescriptorsCache_28 = value;
		Il2CppCodeGenWriteBarrier((&____propertyDescriptorsCache_28), value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_31() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ____latestPrimaryKeyCols_31)); }
	inline DataColumnU5BU5D_t1143729861* get__latestPrimaryKeyCols_31() const { return ____latestPrimaryKeyCols_31; }
	inline DataColumnU5BU5D_t1143729861** get_address_of__latestPrimaryKeyCols_31() { return &____latestPrimaryKeyCols_31; }
	inline void set__latestPrimaryKeyCols_31(DataColumnU5BU5D_t1143729861* value)
	{
		____latestPrimaryKeyCols_31 = value;
		Il2CppCodeGenWriteBarrier((&____latestPrimaryKeyCols_31), value);
	}

	inline static int32_t get_offset_of_empty_rows_32() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___empty_rows_32)); }
	inline DataRowU5BU5D_t3123778048* get_empty_rows_32() const { return ___empty_rows_32; }
	inline DataRowU5BU5D_t3123778048** get_address_of_empty_rows_32() { return &___empty_rows_32; }
	inline void set_empty_rows_32(DataRowU5BU5D_t3123778048* value)
	{
		___empty_rows_32 = value;
		Il2CppCodeGenWriteBarrier((&___empty_rows_32), value);
	}

	inline static int32_t get_offset_of_tableInitialized_33() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___tableInitialized_33)); }
	inline bool get_tableInitialized_33() const { return ___tableInitialized_33; }
	inline bool* get_address_of_tableInitialized_33() { return &___tableInitialized_33; }
	inline void set_tableInitialized_33(bool value)
	{
		___tableInitialized_33 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_34() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___remotingFormat_34)); }
	inline int32_t get_remotingFormat_34() const { return ___remotingFormat_34; }
	inline int32_t* get_address_of_remotingFormat_34() { return &___remotingFormat_34; }
	inline void set_remotingFormat_34(int32_t value)
	{
		___remotingFormat_34 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_35() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___ColumnChanged_35)); }
	inline DataColumnChangeEventHandler_t3538683144 * get_ColumnChanged_35() const { return ___ColumnChanged_35; }
	inline DataColumnChangeEventHandler_t3538683144 ** get_address_of_ColumnChanged_35() { return &___ColumnChanged_35; }
	inline void set_ColumnChanged_35(DataColumnChangeEventHandler_t3538683144 * value)
	{
		___ColumnChanged_35 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanged_35), value);
	}

	inline static int32_t get_offset_of_ColumnChanging_36() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___ColumnChanging_36)); }
	inline DataColumnChangeEventHandler_t3538683144 * get_ColumnChanging_36() const { return ___ColumnChanging_36; }
	inline DataColumnChangeEventHandler_t3538683144 ** get_address_of_ColumnChanging_36() { return &___ColumnChanging_36; }
	inline void set_ColumnChanging_36(DataColumnChangeEventHandler_t3538683144 * value)
	{
		___ColumnChanging_36 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanging_36), value);
	}

	inline static int32_t get_offset_of_RowChanged_37() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___RowChanged_37)); }
	inline DataRowChangeEventHandler_t3933482857 * get_RowChanged_37() const { return ___RowChanged_37; }
	inline DataRowChangeEventHandler_t3933482857 ** get_address_of_RowChanged_37() { return &___RowChanged_37; }
	inline void set_RowChanged_37(DataRowChangeEventHandler_t3933482857 * value)
	{
		___RowChanged_37 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanged_37), value);
	}

	inline static int32_t get_offset_of_RowChanging_38() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___RowChanging_38)); }
	inline DataRowChangeEventHandler_t3933482857 * get_RowChanging_38() const { return ___RowChanging_38; }
	inline DataRowChangeEventHandler_t3933482857 ** get_address_of_RowChanging_38() { return &___RowChanging_38; }
	inline void set_RowChanging_38(DataRowChangeEventHandler_t3933482857 * value)
	{
		___RowChanging_38 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanging_38), value);
	}

	inline static int32_t get_offset_of_RowDeleted_39() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___RowDeleted_39)); }
	inline DataRowChangeEventHandler_t3933482857 * get_RowDeleted_39() const { return ___RowDeleted_39; }
	inline DataRowChangeEventHandler_t3933482857 ** get_address_of_RowDeleted_39() { return &___RowDeleted_39; }
	inline void set_RowDeleted_39(DataRowChangeEventHandler_t3933482857 * value)
	{
		___RowDeleted_39 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleted_39), value);
	}

	inline static int32_t get_offset_of_RowDeleting_40() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___RowDeleting_40)); }
	inline DataRowChangeEventHandler_t3933482857 * get_RowDeleting_40() const { return ___RowDeleting_40; }
	inline DataRowChangeEventHandler_t3933482857 ** get_address_of_RowDeleting_40() { return &___RowDeleting_40; }
	inline void set_RowDeleting_40(DataRowChangeEventHandler_t3933482857 * value)
	{
		___RowDeleting_40 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleting_40), value);
	}

	inline static int32_t get_offset_of_TableNewRow_41() { return static_cast<int32_t>(offsetof(DataTable_t449011362, ___TableNewRow_41)); }
	inline DataTableNewRowEventHandler_t2332398076 * get_TableNewRow_41() const { return ___TableNewRow_41; }
	inline DataTableNewRowEventHandler_t2332398076 ** get_address_of_TableNewRow_41() { return &___TableNewRow_41; }
	inline void set_TableNewRow_41(DataTableNewRowEventHandler_t2332398076 * value)
	{
		___TableNewRow_41 = value;
		Il2CppCodeGenWriteBarrier((&___TableNewRow_41), value);
	}
};

struct DataTable_t449011362_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t1143729861* ____emptyColumnArray_29;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t3887491295 * ___SortRegex_30;

public:
	inline static int32_t get_offset_of__emptyColumnArray_29() { return static_cast<int32_t>(offsetof(DataTable_t449011362_StaticFields, ____emptyColumnArray_29)); }
	inline DataColumnU5BU5D_t1143729861* get__emptyColumnArray_29() const { return ____emptyColumnArray_29; }
	inline DataColumnU5BU5D_t1143729861** get_address_of__emptyColumnArray_29() { return &____emptyColumnArray_29; }
	inline void set__emptyColumnArray_29(DataColumnU5BU5D_t1143729861* value)
	{
		____emptyColumnArray_29 = value;
		Il2CppCodeGenWriteBarrier((&____emptyColumnArray_29), value);
	}

	inline static int32_t get_offset_of_SortRegex_30() { return static_cast<int32_t>(offsetof(DataTable_t449011362_StaticFields, ___SortRegex_30)); }
	inline Regex_t3887491295 * get_SortRegex_30() const { return ___SortRegex_30; }
	inline Regex_t3887491295 ** get_address_of_SortRegex_30() { return &___SortRegex_30; }
	inline void set_SortRegex_30(Regex_t3887491295 * value)
	{
		___SortRegex_30 = value;
		Il2CppCodeGenWriteBarrier((&___SortRegex_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLE_T449011362_H
#ifndef DATAROWCHANGEEVENTARGS_T1812145703_H
#define DATAROWCHANGEEVENTARGS_T1812145703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t1812145703  : public EventArgs_t2299726504
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t1390955693 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1812145703, ___row_1)); }
	inline DataRow_t1390955693 * get_row_1() const { return ___row_1; }
	inline DataRow_t1390955693 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t1390955693 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier((&___row_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t1812145703, ___action_2)); }
	inline int32_t get_action_2() const { return ___action_2; }
	inline int32_t* get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(int32_t value)
	{
		___action_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCHANGEEVENTARGS_T1812145703_H
#ifndef DELETEDROWINACCESSIBLEEXCEPTION_T4257085694_H
#define DELETEDROWINACCESSIBLEEXCEPTION_T4257085694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DeletedRowInaccessibleException
struct  DeletedRowInaccessibleException_t4257085694  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEDROWINACCESSIBLEEXCEPTION_T4257085694_H
#ifndef DATETIME_T3515883708_H
#define DATETIME_T3515883708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3515883708 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t2430496075  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3515883708, ___ticks_0)); }
	inline TimeSpan_t2430496075  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t2430496075 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t2430496075  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3515883708, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3515883708_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3515883708  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3515883708  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t2494872526* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t2494872526* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t2494872526* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t2494872526* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t2494872526* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t2494872526* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t2494872526* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1044167045* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1044167045* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3515883708  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3515883708 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3515883708  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___MinValue_3)); }
	inline DateTime_t3515883708  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3515883708 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3515883708  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t2494872526* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t2494872526** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t2494872526* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t2494872526* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t2494872526** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t2494872526* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t2494872526* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t2494872526** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t2494872526* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t2494872526* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t2494872526** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t2494872526* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t2494872526* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t2494872526** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t2494872526* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t2494872526* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t2494872526** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t2494872526* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t2494872526* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t2494872526** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t2494872526* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1044167045* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1044167045** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1044167045* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1044167045* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1044167045** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1044167045* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3515883708_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3515883708_H
#ifndef SQLNULLVALUEEXCEPTION_T2717134940_H
#define SQLNULLVALUEEXCEPTION_T2717134940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlNullValueException
struct  SqlNullValueException_t2717134940  : public SqlTypeException_t743199660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLNULLVALUEEXCEPTION_T2717134940_H
#ifndef XMLDATAREADER_T3544630636_H
#define XMLDATAREADER_T3544630636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataReader
struct  XmlDataReader_t3544630636  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.XmlDataReader::dataset
	DataSet_t91008811 * ___dataset_0;
	// System.Xml.XmlReader System.Data.XmlDataReader::reader
	XmlReader_t4152822220 * ___reader_1;
	// System.Data.XmlReadMode System.Data.XmlDataReader::mode
	int32_t ___mode_2;

public:
	inline static int32_t get_offset_of_dataset_0() { return static_cast<int32_t>(offsetof(XmlDataReader_t3544630636, ___dataset_0)); }
	inline DataSet_t91008811 * get_dataset_0() const { return ___dataset_0; }
	inline DataSet_t91008811 ** get_address_of_dataset_0() { return &___dataset_0; }
	inline void set_dataset_0(DataSet_t91008811 * value)
	{
		___dataset_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataset_0), value);
	}

	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(XmlDataReader_t3544630636, ___reader_1)); }
	inline XmlReader_t4152822220 * get_reader_1() const { return ___reader_1; }
	inline XmlReader_t4152822220 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(XmlReader_t4152822220 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier((&___reader_1), value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(XmlDataReader_t3544630636, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDATAREADER_T3544630636_H
#ifndef READONLYEXCEPTION_T530545303_H
#define READONLYEXCEPTION_T530545303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ReadOnlyException
struct  ReadOnlyException_t530545303  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYEXCEPTION_T530545303_H
#ifndef SQLSTRING_T2783039750_H
#define SQLSTRING_T2783039750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlString
struct  SqlString_t2783039750 
{
public:
	// System.String System.Data.SqlTypes.SqlString::value
	String_t* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlString::notNull
	bool ___notNull_1;
	// System.Int32 System.Data.SqlTypes.SqlString::lcid
	int32_t ___lcid_2;
	// System.Data.SqlTypes.SqlCompareOptions System.Data.SqlTypes.SqlString::compareOptions
	int32_t ___compareOptions_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlString_t2783039750, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlString_t2783039750, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t2783039750, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_compareOptions_3() { return static_cast<int32_t>(offsetof(SqlString_t2783039750, ___compareOptions_3)); }
	inline int32_t get_compareOptions_3() const { return ___compareOptions_3; }
	inline int32_t* get_address_of_compareOptions_3() { return &___compareOptions_3; }
	inline void set_compareOptions_3(int32_t value)
	{
		___compareOptions_3 = value;
	}
};

struct SqlString_t2783039750_StaticFields
{
public:
	// System.Int32 System.Data.SqlTypes.SqlString::BinarySort
	int32_t ___BinarySort_4;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreCase
	int32_t ___IgnoreCase_5;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreKanaType
	int32_t ___IgnoreKanaType_6;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreNonSpace
	int32_t ___IgnoreNonSpace_7;
	// System.Int32 System.Data.SqlTypes.SqlString::IgnoreWidth
	int32_t ___IgnoreWidth_8;
	// System.Data.SqlTypes.SqlString System.Data.SqlTypes.SqlString::Null
	SqlString_t2783039750  ___Null_9;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlString::DecimalFormat
	NumberFormatInfo_t2841623346 * ___DecimalFormat_10;

public:
	inline static int32_t get_offset_of_BinarySort_4() { return static_cast<int32_t>(offsetof(SqlString_t2783039750_StaticFields, ___BinarySort_4)); }
	inline int32_t get_BinarySort_4() const { return ___BinarySort_4; }
	inline int32_t* get_address_of_BinarySort_4() { return &___BinarySort_4; }
	inline void set_BinarySort_4(int32_t value)
	{
		___BinarySort_4 = value;
	}

	inline static int32_t get_offset_of_IgnoreCase_5() { return static_cast<int32_t>(offsetof(SqlString_t2783039750_StaticFields, ___IgnoreCase_5)); }
	inline int32_t get_IgnoreCase_5() const { return ___IgnoreCase_5; }
	inline int32_t* get_address_of_IgnoreCase_5() { return &___IgnoreCase_5; }
	inline void set_IgnoreCase_5(int32_t value)
	{
		___IgnoreCase_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_6() { return static_cast<int32_t>(offsetof(SqlString_t2783039750_StaticFields, ___IgnoreKanaType_6)); }
	inline int32_t get_IgnoreKanaType_6() const { return ___IgnoreKanaType_6; }
	inline int32_t* get_address_of_IgnoreKanaType_6() { return &___IgnoreKanaType_6; }
	inline void set_IgnoreKanaType_6(int32_t value)
	{
		___IgnoreKanaType_6 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_7() { return static_cast<int32_t>(offsetof(SqlString_t2783039750_StaticFields, ___IgnoreNonSpace_7)); }
	inline int32_t get_IgnoreNonSpace_7() const { return ___IgnoreNonSpace_7; }
	inline int32_t* get_address_of_IgnoreNonSpace_7() { return &___IgnoreNonSpace_7; }
	inline void set_IgnoreNonSpace_7(int32_t value)
	{
		___IgnoreNonSpace_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t2783039750_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_Null_9() { return static_cast<int32_t>(offsetof(SqlString_t2783039750_StaticFields, ___Null_9)); }
	inline SqlString_t2783039750  get_Null_9() const { return ___Null_9; }
	inline SqlString_t2783039750 * get_address_of_Null_9() { return &___Null_9; }
	inline void set_Null_9(SqlString_t2783039750  value)
	{
		___Null_9 = value;
	}

	inline static int32_t get_offset_of_DecimalFormat_10() { return static_cast<int32_t>(offsetof(SqlString_t2783039750_StaticFields, ___DecimalFormat_10)); }
	inline NumberFormatInfo_t2841623346 * get_DecimalFormat_10() const { return ___DecimalFormat_10; }
	inline NumberFormatInfo_t2841623346 ** get_address_of_DecimalFormat_10() { return &___DecimalFormat_10; }
	inline void set_DecimalFormat_10(NumberFormatInfo_t2841623346 * value)
	{
		___DecimalFormat_10 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalFormat_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t2783039750_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t2783039750_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
#endif // SQLSTRING_T2783039750_H
#ifndef XMLDATAINFERENCELOADER_T1546655224_H
#define XMLDATAINFERENCELOADER_T1546655224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.XmlDataInferenceLoader
struct  XmlDataInferenceLoader_t1546655224  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.XmlDataInferenceLoader::dataset
	DataSet_t91008811 * ___dataset_0;
	// System.Xml.XmlDocument System.Data.XmlDataInferenceLoader::document
	XmlDocument_t694818971 * ___document_1;
	// System.Data.XmlReadMode System.Data.XmlDataInferenceLoader::mode
	int32_t ___mode_2;
	// System.Collections.ArrayList System.Data.XmlDataInferenceLoader::ignoredNamespaces
	ArrayList_t3308431662 * ___ignoredNamespaces_3;
	// System.Data.TableMappingCollection System.Data.XmlDataInferenceLoader::tables
	TableMappingCollection_t3730895761 * ___tables_4;
	// System.Data.RelationStructureCollection System.Data.XmlDataInferenceLoader::relations
	RelationStructureCollection_t2789991864 * ___relations_5;

public:
	inline static int32_t get_offset_of_dataset_0() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1546655224, ___dataset_0)); }
	inline DataSet_t91008811 * get_dataset_0() const { return ___dataset_0; }
	inline DataSet_t91008811 ** get_address_of_dataset_0() { return &___dataset_0; }
	inline void set_dataset_0(DataSet_t91008811 * value)
	{
		___dataset_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataset_0), value);
	}

	inline static int32_t get_offset_of_document_1() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1546655224, ___document_1)); }
	inline XmlDocument_t694818971 * get_document_1() const { return ___document_1; }
	inline XmlDocument_t694818971 ** get_address_of_document_1() { return &___document_1; }
	inline void set_document_1(XmlDocument_t694818971 * value)
	{
		___document_1 = value;
		Il2CppCodeGenWriteBarrier((&___document_1), value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1546655224, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_ignoredNamespaces_3() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1546655224, ___ignoredNamespaces_3)); }
	inline ArrayList_t3308431662 * get_ignoredNamespaces_3() const { return ___ignoredNamespaces_3; }
	inline ArrayList_t3308431662 ** get_address_of_ignoredNamespaces_3() { return &___ignoredNamespaces_3; }
	inline void set_ignoredNamespaces_3(ArrayList_t3308431662 * value)
	{
		___ignoredNamespaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___ignoredNamespaces_3), value);
	}

	inline static int32_t get_offset_of_tables_4() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1546655224, ___tables_4)); }
	inline TableMappingCollection_t3730895761 * get_tables_4() const { return ___tables_4; }
	inline TableMappingCollection_t3730895761 ** get_address_of_tables_4() { return &___tables_4; }
	inline void set_tables_4(TableMappingCollection_t3730895761 * value)
	{
		___tables_4 = value;
		Il2CppCodeGenWriteBarrier((&___tables_4), value);
	}

	inline static int32_t get_offset_of_relations_5() { return static_cast<int32_t>(offsetof(XmlDataInferenceLoader_t1546655224, ___relations_5)); }
	inline RelationStructureCollection_t2789991864 * get_relations_5() const { return ___relations_5; }
	inline RelationStructureCollection_t2789991864 ** get_address_of_relations_5() { return &___relations_5; }
	inline void set_relations_5(RelationStructureCollection_t2789991864 * value)
	{
		___relations_5 = value;
		Il2CppCodeGenWriteBarrier((&___relations_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDATAINFERENCELOADER_T1546655224_H
#ifndef SQLTRUNCATEEXCEPTION_T1361369648_H
#define SQLTRUNCATEEXCEPTION_T1361369648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTruncateException
struct  SqlTruncateException_t1361369648  : public SqlTypeException_t743199660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTRUNCATEEXCEPTION_T1361369648_H
#ifndef FOREIGNKEYCONSTRAINT_T3269346217_H
#define FOREIGNKEYCONSTRAINT_T3269346217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ForeignKeyConstraint
struct  ForeignKeyConstraint_t3269346217  : public Constraint_t2350992279
{
public:
	// System.Data.UniqueConstraint System.Data.ForeignKeyConstraint::_parentUniqueConstraint
	UniqueConstraint_t2657169234 * ____parentUniqueConstraint_8;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_parentColumns
	DataColumnU5BU5D_t1143729861* ____parentColumns_9;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_childColumns
	DataColumnU5BU5D_t1143729861* ____childColumns_10;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_deleteRule
	int32_t ____deleteRule_11;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_updateRule
	int32_t ____updateRule_12;
	// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::_acceptRejectRule
	int32_t ____acceptRejectRule_13;

public:
	inline static int32_t get_offset_of__parentUniqueConstraint_8() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3269346217, ____parentUniqueConstraint_8)); }
	inline UniqueConstraint_t2657169234 * get__parentUniqueConstraint_8() const { return ____parentUniqueConstraint_8; }
	inline UniqueConstraint_t2657169234 ** get_address_of__parentUniqueConstraint_8() { return &____parentUniqueConstraint_8; }
	inline void set__parentUniqueConstraint_8(UniqueConstraint_t2657169234 * value)
	{
		____parentUniqueConstraint_8 = value;
		Il2CppCodeGenWriteBarrier((&____parentUniqueConstraint_8), value);
	}

	inline static int32_t get_offset_of__parentColumns_9() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3269346217, ____parentColumns_9)); }
	inline DataColumnU5BU5D_t1143729861* get__parentColumns_9() const { return ____parentColumns_9; }
	inline DataColumnU5BU5D_t1143729861** get_address_of__parentColumns_9() { return &____parentColumns_9; }
	inline void set__parentColumns_9(DataColumnU5BU5D_t1143729861* value)
	{
		____parentColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumns_9), value);
	}

	inline static int32_t get_offset_of__childColumns_10() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3269346217, ____childColumns_10)); }
	inline DataColumnU5BU5D_t1143729861* get__childColumns_10() const { return ____childColumns_10; }
	inline DataColumnU5BU5D_t1143729861** get_address_of__childColumns_10() { return &____childColumns_10; }
	inline void set__childColumns_10(DataColumnU5BU5D_t1143729861* value)
	{
		____childColumns_10 = value;
		Il2CppCodeGenWriteBarrier((&____childColumns_10), value);
	}

	inline static int32_t get_offset_of__deleteRule_11() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3269346217, ____deleteRule_11)); }
	inline int32_t get__deleteRule_11() const { return ____deleteRule_11; }
	inline int32_t* get_address_of__deleteRule_11() { return &____deleteRule_11; }
	inline void set__deleteRule_11(int32_t value)
	{
		____deleteRule_11 = value;
	}

	inline static int32_t get_offset_of__updateRule_12() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3269346217, ____updateRule_12)); }
	inline int32_t get__updateRule_12() const { return ____updateRule_12; }
	inline int32_t* get_address_of__updateRule_12() { return &____updateRule_12; }
	inline void set__updateRule_12(int32_t value)
	{
		____updateRule_12 = value;
	}

	inline static int32_t get_offset_of__acceptRejectRule_13() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3269346217, ____acceptRejectRule_13)); }
	inline int32_t get__acceptRejectRule_13() const { return ____acceptRejectRule_13; }
	inline int32_t* get_address_of__acceptRejectRule_13() { return &____acceptRejectRule_13; }
	inline void set__acceptRejectRule_13(int32_t value)
	{
		____acceptRejectRule_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOREIGNKEYCONSTRAINT_T3269346217_H
#ifndef INROWCHANGINGEVENTEXCEPTION_T1975531473_H
#define INROWCHANGINGEVENTEXCEPTION_T1975531473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InRowChangingEventException
struct  InRowChangingEventException_t1975531473  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INROWCHANGINGEVENTEXCEPTION_T1975531473_H
#ifndef VERSIONNOTFOUNDEXCEPTION_T2167093788_H
#define VERSIONNOTFOUNDEXCEPTION_T2167093788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.VersionNotFoundException
struct  VersionNotFoundException_t2167093788  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSIONNOTFOUNDEXCEPTION_T2167093788_H
#ifndef INVALIDCONSTRAINTEXCEPTION_T2567671478_H
#define INVALIDCONSTRAINTEXCEPTION_T2567671478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidConstraintException
struct  InvalidConstraintException_t2567671478  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCONSTRAINTEXCEPTION_T2567671478_H
#ifndef DATACOLUMN_T957173132_H
#define DATACOLUMN_T957173132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t957173132  : public MarshalByValueComponent_t1599592632
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t3835807538 * ____eventHandlers_3;
	// System.Boolean System.Data.DataColumn::_allowDBNull
	bool ____allowDBNull_5;
	// System.Boolean System.Data.DataColumn::_autoIncrement
	bool ____autoIncrement_6;
	// System.Int64 System.Data.DataColumn::_autoIncrementSeed
	int64_t ____autoIncrementSeed_7;
	// System.Int64 System.Data.DataColumn::_autoIncrementStep
	int64_t ____autoIncrementStep_8;
	// System.Int64 System.Data.DataColumn::_nextAutoIncrementValue
	int64_t ____nextAutoIncrementValue_9;
	// System.String System.Data.DataColumn::_caption
	String_t* ____caption_10;
	// System.Data.MappingType System.Data.DataColumn::_columnMapping
	int32_t ____columnMapping_11;
	// System.String System.Data.DataColumn::_columnName
	String_t* ____columnName_12;
	// System.Object System.Data.DataColumn::_defaultValue
	RuntimeObject * ____defaultValue_13;
	// System.String System.Data.DataColumn::_expression
	String_t* ____expression_14;
	// Mono.Data.SqlExpressions.IExpression System.Data.DataColumn::_compiledExpression
	RuntimeObject* ____compiledExpression_15;
	// System.Data.PropertyCollection System.Data.DataColumn::_extendedProperties
	PropertyCollection_t399284420 * ____extendedProperties_16;
	// System.Int32 System.Data.DataColumn::_maxLength
	int32_t ____maxLength_17;
	// System.String System.Data.DataColumn::_nameSpace
	String_t* ____nameSpace_18;
	// System.Int32 System.Data.DataColumn::_ordinal
	int32_t ____ordinal_19;
	// System.String System.Data.DataColumn::_prefix
	String_t* ____prefix_20;
	// System.Boolean System.Data.DataColumn::_readOnly
	bool ____readOnly_21;
	// System.Data.DataTable System.Data.DataColumn::_table
	DataTable_t449011362 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t2052367421 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;

public:
	inline static int32_t get_offset_of__eventHandlers_3() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____eventHandlers_3)); }
	inline EventHandlerList_t3835807538 * get__eventHandlers_3() const { return ____eventHandlers_3; }
	inline EventHandlerList_t3835807538 ** get_address_of__eventHandlers_3() { return &____eventHandlers_3; }
	inline void set__eventHandlers_3(EventHandlerList_t3835807538 * value)
	{
		____eventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_3), value);
	}

	inline static int32_t get_offset_of__allowDBNull_5() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____allowDBNull_5)); }
	inline bool get__allowDBNull_5() const { return ____allowDBNull_5; }
	inline bool* get_address_of__allowDBNull_5() { return &____allowDBNull_5; }
	inline void set__allowDBNull_5(bool value)
	{
		____allowDBNull_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_6() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____autoIncrement_6)); }
	inline bool get__autoIncrement_6() const { return ____autoIncrement_6; }
	inline bool* get_address_of__autoIncrement_6() { return &____autoIncrement_6; }
	inline void set__autoIncrement_6(bool value)
	{
		____autoIncrement_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_7() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____autoIncrementSeed_7)); }
	inline int64_t get__autoIncrementSeed_7() const { return ____autoIncrementSeed_7; }
	inline int64_t* get_address_of__autoIncrementSeed_7() { return &____autoIncrementSeed_7; }
	inline void set__autoIncrementSeed_7(int64_t value)
	{
		____autoIncrementSeed_7 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_8() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____autoIncrementStep_8)); }
	inline int64_t get__autoIncrementStep_8() const { return ____autoIncrementStep_8; }
	inline int64_t* get_address_of__autoIncrementStep_8() { return &____autoIncrementStep_8; }
	inline void set__autoIncrementStep_8(int64_t value)
	{
		____autoIncrementStep_8 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_9() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____nextAutoIncrementValue_9)); }
	inline int64_t get__nextAutoIncrementValue_9() const { return ____nextAutoIncrementValue_9; }
	inline int64_t* get_address_of__nextAutoIncrementValue_9() { return &____nextAutoIncrementValue_9; }
	inline void set__nextAutoIncrementValue_9(int64_t value)
	{
		____nextAutoIncrementValue_9 = value;
	}

	inline static int32_t get_offset_of__caption_10() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____caption_10)); }
	inline String_t* get__caption_10() const { return ____caption_10; }
	inline String_t** get_address_of__caption_10() { return &____caption_10; }
	inline void set__caption_10(String_t* value)
	{
		____caption_10 = value;
		Il2CppCodeGenWriteBarrier((&____caption_10), value);
	}

	inline static int32_t get_offset_of__columnMapping_11() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____columnMapping_11)); }
	inline int32_t get__columnMapping_11() const { return ____columnMapping_11; }
	inline int32_t* get_address_of__columnMapping_11() { return &____columnMapping_11; }
	inline void set__columnMapping_11(int32_t value)
	{
		____columnMapping_11 = value;
	}

	inline static int32_t get_offset_of__columnName_12() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____columnName_12)); }
	inline String_t* get__columnName_12() const { return ____columnName_12; }
	inline String_t** get_address_of__columnName_12() { return &____columnName_12; }
	inline void set__columnName_12(String_t* value)
	{
		____columnName_12 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_12), value);
	}

	inline static int32_t get_offset_of__defaultValue_13() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____defaultValue_13)); }
	inline RuntimeObject * get__defaultValue_13() const { return ____defaultValue_13; }
	inline RuntimeObject ** get_address_of__defaultValue_13() { return &____defaultValue_13; }
	inline void set__defaultValue_13(RuntimeObject * value)
	{
		____defaultValue_13 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_13), value);
	}

	inline static int32_t get_offset_of__expression_14() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____expression_14)); }
	inline String_t* get__expression_14() const { return ____expression_14; }
	inline String_t** get_address_of__expression_14() { return &____expression_14; }
	inline void set__expression_14(String_t* value)
	{
		____expression_14 = value;
		Il2CppCodeGenWriteBarrier((&____expression_14), value);
	}

	inline static int32_t get_offset_of__compiledExpression_15() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____compiledExpression_15)); }
	inline RuntimeObject* get__compiledExpression_15() const { return ____compiledExpression_15; }
	inline RuntimeObject** get_address_of__compiledExpression_15() { return &____compiledExpression_15; }
	inline void set__compiledExpression_15(RuntimeObject* value)
	{
		____compiledExpression_15 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_15), value);
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____extendedProperties_16)); }
	inline PropertyCollection_t399284420 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t399284420 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t399284420 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__maxLength_17() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____maxLength_17)); }
	inline int32_t get__maxLength_17() const { return ____maxLength_17; }
	inline int32_t* get_address_of__maxLength_17() { return &____maxLength_17; }
	inline void set__maxLength_17(int32_t value)
	{
		____maxLength_17 = value;
	}

	inline static int32_t get_offset_of__nameSpace_18() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____nameSpace_18)); }
	inline String_t* get__nameSpace_18() const { return ____nameSpace_18; }
	inline String_t** get_address_of__nameSpace_18() { return &____nameSpace_18; }
	inline void set__nameSpace_18(String_t* value)
	{
		____nameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_18), value);
	}

	inline static int32_t get_offset_of__ordinal_19() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____ordinal_19)); }
	inline int32_t get__ordinal_19() const { return ____ordinal_19; }
	inline int32_t* get_address_of__ordinal_19() { return &____ordinal_19; }
	inline void set__ordinal_19(int32_t value)
	{
		____ordinal_19 = value;
	}

	inline static int32_t get_offset_of__prefix_20() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____prefix_20)); }
	inline String_t* get__prefix_20() const { return ____prefix_20; }
	inline String_t** get_address_of__prefix_20() { return &____prefix_20; }
	inline void set__prefix_20(String_t* value)
	{
		____prefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_20), value);
	}

	inline static int32_t get_offset_of__readOnly_21() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____readOnly_21)); }
	inline bool get__readOnly_21() const { return ____readOnly_21; }
	inline bool* get_address_of__readOnly_21() { return &____readOnly_21; }
	inline void set__readOnly_21(bool value)
	{
		____readOnly_21 = value;
	}

	inline static int32_t get_offset_of__table_22() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____table_22)); }
	inline DataTable_t449011362 * get__table_22() const { return ____table_22; }
	inline DataTable_t449011362 ** get_address_of__table_22() { return &____table_22; }
	inline void set__table_22(DataTable_t449011362 * value)
	{
		____table_22 = value;
		Il2CppCodeGenWriteBarrier((&____table_22), value);
	}

	inline static int32_t get_offset_of__unique_23() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____unique_23)); }
	inline bool get__unique_23() const { return ____unique_23; }
	inline bool* get_address_of__unique_23() { return &____unique_23; }
	inline void set__unique_23(bool value)
	{
		____unique_23 = value;
	}

	inline static int32_t get_offset_of__dataContainer_24() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____dataContainer_24)); }
	inline DataContainer_t2052367421 * get__dataContainer_24() const { return ____dataContainer_24; }
	inline DataContainer_t2052367421 ** get_address_of__dataContainer_24() { return &____dataContainer_24; }
	inline void set__dataContainer_24(DataContainer_t2052367421 * value)
	{
		____dataContainer_24 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_24), value);
	}

	inline static int32_t get_offset_of__datetimeMode_25() { return static_cast<int32_t>(offsetof(DataColumn_t957173132, ____datetimeMode_25)); }
	inline int32_t get__datetimeMode_25() const { return ____datetimeMode_25; }
	inline int32_t* get_address_of__datetimeMode_25() { return &____datetimeMode_25; }
	inline void set__datetimeMode_25(int32_t value)
	{
		____datetimeMode_25 = value;
	}
};

struct DataColumn_t957173132_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_4;

public:
	inline static int32_t get_offset_of__propertyChangedKey_4() { return static_cast<int32_t>(offsetof(DataColumn_t957173132_StaticFields, ____propertyChangedKey_4)); }
	inline RuntimeObject * get__propertyChangedKey_4() const { return ____propertyChangedKey_4; }
	inline RuntimeObject ** get_address_of__propertyChangedKey_4() { return &____propertyChangedKey_4; }
	inline void set__propertyChangedKey_4(RuntimeObject * value)
	{
		____propertyChangedKey_4 = value;
		Il2CppCodeGenWriteBarrier((&____propertyChangedKey_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMN_T957173132_H
#ifndef INVALIDEXPRESSIONEXCEPTION_T558899007_H
#define INVALIDEXPRESSIONEXCEPTION_T558899007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidExpressionException
struct  InvalidExpressionException_t558899007  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDEXPRESSIONEXCEPTION_T558899007_H
#ifndef DBSOURCEMETHODINFO_T3074477308_H
#define DBSOURCEMETHODINFO_T3074477308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DbSourceMethodInfo
struct  DbSourceMethodInfo_t3074477308  : public RuntimeObject
{
public:
	// System.Data.GenerateMethodsType System.Data.DbSourceMethodInfo::MethodType
	int32_t ___MethodType_0;
	// System.String System.Data.DbSourceMethodInfo::Name
	String_t* ___Name_1;
	// System.String System.Data.DbSourceMethodInfo::Modifier
	String_t* ___Modifier_2;
	// System.String System.Data.DbSourceMethodInfo::QueryType
	String_t* ___QueryType_3;
	// System.String System.Data.DbSourceMethodInfo::ScalarCallRetval
	String_t* ___ScalarCallRetval_4;

public:
	inline static int32_t get_offset_of_MethodType_0() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t3074477308, ___MethodType_0)); }
	inline int32_t get_MethodType_0() const { return ___MethodType_0; }
	inline int32_t* get_address_of_MethodType_0() { return &___MethodType_0; }
	inline void set_MethodType_0(int32_t value)
	{
		___MethodType_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t3074477308, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___Name_1), value);
	}

	inline static int32_t get_offset_of_Modifier_2() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t3074477308, ___Modifier_2)); }
	inline String_t* get_Modifier_2() const { return ___Modifier_2; }
	inline String_t** get_address_of_Modifier_2() { return &___Modifier_2; }
	inline void set_Modifier_2(String_t* value)
	{
		___Modifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___Modifier_2), value);
	}

	inline static int32_t get_offset_of_QueryType_3() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t3074477308, ___QueryType_3)); }
	inline String_t* get_QueryType_3() const { return ___QueryType_3; }
	inline String_t** get_address_of_QueryType_3() { return &___QueryType_3; }
	inline void set_QueryType_3(String_t* value)
	{
		___QueryType_3 = value;
		Il2CppCodeGenWriteBarrier((&___QueryType_3), value);
	}

	inline static int32_t get_offset_of_ScalarCallRetval_4() { return static_cast<int32_t>(offsetof(DbSourceMethodInfo_t3074477308, ___ScalarCallRetval_4)); }
	inline String_t* get_ScalarCallRetval_4() const { return ___ScalarCallRetval_4; }
	inline String_t** get_address_of_ScalarCallRetval_4() { return &___ScalarCallRetval_4; }
	inline void set_ScalarCallRetval_4(String_t* value)
	{
		___ScalarCallRetval_4 = value;
		Il2CppCodeGenWriteBarrier((&___ScalarCallRetval_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBSOURCEMETHODINFO_T3074477308_H
#ifndef CONSTRAINTEXCEPTION_T3902198548_H
#define CONSTRAINTEXCEPTION_T3902198548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintException
struct  ConstraintException_t3902198548  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTEXCEPTION_T3902198548_H
#ifndef NONULLALLOWEDEXCEPTION_T3019923420_H
#define NONULLALLOWEDEXCEPTION_T3019923420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.NoNullAllowedException
struct  NoNullAllowedException_t3019923420  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONULLALLOWEDEXCEPTION_T3019923420_H
#ifndef MISSINGPRIMARYKEYEXCEPTION_T3806063904_H
#define MISSINGPRIMARYKEYEXCEPTION_T3806063904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingPrimaryKeyException
struct  MissingPrimaryKeyException_t3806063904  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGPRIMARYKEYEXCEPTION_T3806063904_H
#ifndef ROWNOTINTABLEEXCEPTION_T3274479628_H
#define ROWNOTINTABLEEXCEPTION_T3274479628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RowNotInTableException
struct  RowNotInTableException_t3274479628  : public DataException_t3803926864
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROWNOTINTABLEEXCEPTION_T3274479628_H
#ifndef SQLDATETIME_T1569186689_H
#define SQLDATETIME_T1569186689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDateTime
struct  SqlDateTime_t1569186689 
{
public:
	// System.DateTime System.Data.SqlTypes.SqlDateTime::value
	DateTime_t3515883708  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDateTime::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689, ___value_0)); }
	inline DateTime_t3515883708  get_value_0() const { return ___value_0; }
	inline DateTime_t3515883708 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3515883708  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDateTime_t1569186689_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t1569186689  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t1569186689  ___MinValue_3;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t1569186689  ___Null_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_7;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::zero_day
	DateTime_t3515883708  ___zero_day_8;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689_StaticFields, ___MaxValue_2)); }
	inline SqlDateTime_t1569186689  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDateTime_t1569186689 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDateTime_t1569186689  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689_StaticFields, ___MinValue_3)); }
	inline SqlDateTime_t1569186689  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDateTime_t1569186689 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDateTime_t1569186689  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689_StaticFields, ___Null_4)); }
	inline SqlDateTime_t1569186689  get_Null_4() const { return ___Null_4; }
	inline SqlDateTime_t1569186689 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDateTime_t1569186689  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689_StaticFields, ___SQLTicksPerHour_5)); }
	inline int32_t get_SQLTicksPerHour_5() const { return ___SQLTicksPerHour_5; }
	inline int32_t* get_address_of_SQLTicksPerHour_5() { return &___SQLTicksPerHour_5; }
	inline void set_SQLTicksPerHour_5(int32_t value)
	{
		___SQLTicksPerHour_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689_StaticFields, ___SQLTicksPerMinute_6)); }
	inline int32_t get_SQLTicksPerMinute_6() const { return ___SQLTicksPerMinute_6; }
	inline int32_t* get_address_of_SQLTicksPerMinute_6() { return &___SQLTicksPerMinute_6; }
	inline void set_SQLTicksPerMinute_6(int32_t value)
	{
		___SQLTicksPerMinute_6 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689_StaticFields, ___SQLTicksPerSecond_7)); }
	inline int32_t get_SQLTicksPerSecond_7() const { return ___SQLTicksPerSecond_7; }
	inline int32_t* get_address_of_SQLTicksPerSecond_7() { return &___SQLTicksPerSecond_7; }
	inline void set_SQLTicksPerSecond_7(int32_t value)
	{
		___SQLTicksPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_zero_day_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t1569186689_StaticFields, ___zero_day_8)); }
	inline DateTime_t3515883708  get_zero_day_8() const { return ___zero_day_8; }
	inline DateTime_t3515883708 * get_address_of_zero_day_8() { return &___zero_day_8; }
	inline void set_zero_day_8(DateTime_t3515883708  value)
	{
		___zero_day_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t1569186689_marshaled_pinvoke
{
	DateTime_t3515883708  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t1569186689_marshaled_com
{
	DateTime_t3515883708  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDATETIME_T1569186689_H
#ifndef SYNTAXERROREXCEPTION_T4140287829_H
#define SYNTAXERROREXCEPTION_T4140287829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SyntaxErrorException
struct  SyntaxErrorException_t4140287829  : public InvalidExpressionException_t558899007
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNTAXERROREXCEPTION_T4140287829_H
#ifndef EVALUATEEXCEPTION_T503813857_H
#define EVALUATEEXCEPTION_T503813857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.EvaluateException
struct  EvaluateException_t503813857  : public InvalidExpressionException_t558899007
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVALUATEEXCEPTION_T503813857_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (SqlBinary_t3038483636)+ sizeof (RuntimeObject), sizeof(SqlBinary_t3038483636_marshaled_pinvoke), sizeof(SqlBinary_t3038483636_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2300[3] = 
{
	SqlBinary_t3038483636::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t3038483636::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t3038483636_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (SqlBoolean_t4209841444)+ sizeof (RuntimeObject), sizeof(SqlBoolean_t4209841444_marshaled_pinvoke), sizeof(SqlBoolean_t4209841444_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2301[7] = 
{
	SqlBoolean_t4209841444::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t4209841444::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t4209841444_StaticFields::get_offset_of_False_2(),
	SqlBoolean_t4209841444_StaticFields::get_offset_of_Null_3(),
	SqlBoolean_t4209841444_StaticFields::get_offset_of_One_4(),
	SqlBoolean_t4209841444_StaticFields::get_offset_of_True_5(),
	SqlBoolean_t4209841444_StaticFields::get_offset_of_Zero_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (SqlByte_t821761706)+ sizeof (RuntimeObject), sizeof(SqlByte_t821761706_marshaled_pinvoke), sizeof(SqlByte_t821761706_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2302[6] = 
{
	SqlByte_t821761706::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t821761706::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t821761706_StaticFields::get_offset_of_MaxValue_2(),
	SqlByte_t821761706_StaticFields::get_offset_of_MinValue_3(),
	SqlByte_t821761706_StaticFields::get_offset_of_Null_4(),
	SqlByte_t821761706_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (SqlBytes_t767536462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[3] = 
{
	SqlBytes_t767536462::get_offset_of_notNull_0(),
	SqlBytes_t767536462::get_offset_of_buffer_1(),
	SqlBytes_t767536462::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (SqlChars_t4201940976), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[3] = 
{
	SqlChars_t4201940976::get_offset_of_notNull_0(),
	SqlChars_t4201940976::get_offset_of_buffer_1(),
	SqlChars_t4201940976::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (SqlCompareOptions_t3488089144)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2305[7] = 
{
	SqlCompareOptions_t3488089144::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (SqlDateTime_t1569186689)+ sizeof (RuntimeObject), -1, sizeof(SqlDateTime_t1569186689_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2306[9] = 
{
	SqlDateTime_t1569186689::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t1569186689::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t1569186689_StaticFields::get_offset_of_MaxValue_2(),
	SqlDateTime_t1569186689_StaticFields::get_offset_of_MinValue_3(),
	SqlDateTime_t1569186689_StaticFields::get_offset_of_Null_4(),
	SqlDateTime_t1569186689_StaticFields::get_offset_of_SQLTicksPerHour_5(),
	SqlDateTime_t1569186689_StaticFields::get_offset_of_SQLTicksPerMinute_6(),
	SqlDateTime_t1569186689_StaticFields::get_offset_of_SQLTicksPerSecond_7(),
	SqlDateTime_t1569186689_StaticFields::get_offset_of_zero_day_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (SqlDecimal_t1752179856)+ sizeof (RuntimeObject), sizeof(SqlDecimal_t1752179856_marshaled_pinvoke), sizeof(SqlDecimal_t1752179856_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2307[11] = 
{
	SqlDecimal_t1752179856::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1752179856::get_offset_of_precision_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1752179856::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1752179856::get_offset_of_positive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1752179856::get_offset_of_notNull_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t1752179856_StaticFields::get_offset_of_constantsDecadeInt32Factors_5(),
	SqlDecimal_t1752179856_StaticFields::get_offset_of_MaxPrecision_6(),
	SqlDecimal_t1752179856_StaticFields::get_offset_of_MaxScale_7(),
	SqlDecimal_t1752179856_StaticFields::get_offset_of_MaxValue_8(),
	SqlDecimal_t1752179856_StaticFields::get_offset_of_MinValue_9(),
	SqlDecimal_t1752179856_StaticFields::get_offset_of_Null_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (SqlDouble_t2874270298)+ sizeof (RuntimeObject), sizeof(SqlDouble_t2874270298_marshaled_pinvoke), sizeof(SqlDouble_t2874270298_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2308[6] = 
{
	SqlDouble_t2874270298::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t2874270298::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t2874270298_StaticFields::get_offset_of_MaxValue_2(),
	SqlDouble_t2874270298_StaticFields::get_offset_of_MinValue_3(),
	SqlDouble_t2874270298_StaticFields::get_offset_of_Null_4(),
	SqlDouble_t2874270298_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (SqlGuid_t643999581)+ sizeof (RuntimeObject), sizeof(SqlGuid_t643999581_marshaled_pinvoke), sizeof(SqlGuid_t643999581_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2309[3] = 
{
	SqlGuid_t643999581::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t643999581::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t643999581_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (SqlInt16_t1992672179)+ sizeof (RuntimeObject), sizeof(SqlInt16_t1992672179_marshaled_pinvoke), sizeof(SqlInt16_t1992672179_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2310[6] = 
{
	SqlInt16_t1992672179::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t1992672179::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t1992672179_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt16_t1992672179_StaticFields::get_offset_of_MinValue_3(),
	SqlInt16_t1992672179_StaticFields::get_offset_of_Null_4(),
	SqlInt16_t1992672179_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (SqlInt32_t3132311696)+ sizeof (RuntimeObject), sizeof(SqlInt32_t3132311696_marshaled_pinvoke), sizeof(SqlInt32_t3132311696_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2311[6] = 
{
	SqlInt32_t3132311696::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t3132311696::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t3132311696_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt32_t3132311696_StaticFields::get_offset_of_MinValue_3(),
	SqlInt32_t3132311696_StaticFields::get_offset_of_Null_4(),
	SqlInt32_t3132311696_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (SqlInt64_t2912832556)+ sizeof (RuntimeObject), sizeof(SqlInt64_t2912832556_marshaled_pinvoke), sizeof(SqlInt64_t2912832556_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2312[6] = 
{
	SqlInt64_t2912832556::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t2912832556::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t2912832556_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt64_t2912832556_StaticFields::get_offset_of_MinValue_3(),
	SqlInt64_t2912832556_StaticFields::get_offset_of_Null_4(),
	SqlInt64_t2912832556_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (SqlMoney_t1959388897)+ sizeof (RuntimeObject), sizeof(SqlMoney_t1959388897_marshaled_pinvoke), sizeof(SqlMoney_t1959388897_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2313[7] = 
{
	SqlMoney_t1959388897::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t1959388897::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t1959388897_StaticFields::get_offset_of_MaxValue_2(),
	SqlMoney_t1959388897_StaticFields::get_offset_of_MinValue_3(),
	SqlMoney_t1959388897_StaticFields::get_offset_of_Null_4(),
	SqlMoney_t1959388897_StaticFields::get_offset_of_Zero_5(),
	SqlMoney_t1959388897_StaticFields::get_offset_of_MoneyFormat_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (SqlNullValueException_t2717134940), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (SqlSingle_t388847217)+ sizeof (RuntimeObject), sizeof(SqlSingle_t388847217_marshaled_pinvoke), sizeof(SqlSingle_t388847217_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2315[6] = 
{
	SqlSingle_t388847217::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t388847217::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t388847217_StaticFields::get_offset_of_MaxValue_2(),
	SqlSingle_t388847217_StaticFields::get_offset_of_MinValue_3(),
	SqlSingle_t388847217_StaticFields::get_offset_of_Null_4(),
	SqlSingle_t388847217_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (SqlString_t2783039750)+ sizeof (RuntimeObject), sizeof(SqlString_t2783039750_marshaled_pinvoke), sizeof(SqlString_t2783039750_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2316[11] = 
{
	SqlString_t2783039750::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2783039750::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2783039750::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2783039750::get_offset_of_compareOptions_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t2783039750_StaticFields::get_offset_of_BinarySort_4(),
	SqlString_t2783039750_StaticFields::get_offset_of_IgnoreCase_5(),
	SqlString_t2783039750_StaticFields::get_offset_of_IgnoreKanaType_6(),
	SqlString_t2783039750_StaticFields::get_offset_of_IgnoreNonSpace_7(),
	SqlString_t2783039750_StaticFields::get_offset_of_IgnoreWidth_8(),
	SqlString_t2783039750_StaticFields::get_offset_of_Null_9(),
	SqlString_t2783039750_StaticFields::get_offset_of_DecimalFormat_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (SqlTruncateException_t1361369648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (SqlTypeException_t743199660), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (SqlXml_t2510389144), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2319[2] = 
{
	SqlXml_t2510389144::get_offset_of_notNull_0(),
	SqlXml_t2510389144::get_offset_of_xmlValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (StorageState_t3409949074)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2320[4] = 
{
	StorageState_t3409949074::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (AcceptRejectRule_t2438305795)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2321[3] = 
{
	AcceptRejectRule_t2438305795::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (ColumnTypeConverter_t2308527720), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (CommandType_t117715995)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2323[4] = 
{
	CommandType_t117715995::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (Constraint_t2350992279), -1, sizeof(Constraint_t2350992279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2324[8] = 
{
	Constraint_t2350992279_StaticFields::get_offset_of_beforeConstraintNameChange_0(),
	Constraint_t2350992279::get_offset_of_events_1(),
	Constraint_t2350992279::get_offset_of__constraintName_2(),
	Constraint_t2350992279::get_offset_of__properties_3(),
	Constraint_t2350992279::get_offset_of__index_4(),
	Constraint_t2350992279::get_offset_of__constraintCollection_5(),
	Constraint_t2350992279::get_offset_of_dataSet_6(),
	Constraint_t2350992279::get_offset_of_initInProgress_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (ConstraintCollection_t599906311), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2325[2] = 
{
	ConstraintCollection_t599906311::get_offset_of_table_2(),
	ConstraintCollection_t599906311::get_offset_of_CollectionChanged_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (ConstraintConverter_t1251974767), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (ConstraintException_t3902198548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (DataCategoryAttribute_t2499415235), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (DataColumn_t957173132), -1, sizeof(DataColumn_t957173132_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2329[23] = 
{
	DataColumn_t957173132::get_offset_of__eventHandlers_3(),
	DataColumn_t957173132_StaticFields::get_offset_of__propertyChangedKey_4(),
	DataColumn_t957173132::get_offset_of__allowDBNull_5(),
	DataColumn_t957173132::get_offset_of__autoIncrement_6(),
	DataColumn_t957173132::get_offset_of__autoIncrementSeed_7(),
	DataColumn_t957173132::get_offset_of__autoIncrementStep_8(),
	DataColumn_t957173132::get_offset_of__nextAutoIncrementValue_9(),
	DataColumn_t957173132::get_offset_of__caption_10(),
	DataColumn_t957173132::get_offset_of__columnMapping_11(),
	DataColumn_t957173132::get_offset_of__columnName_12(),
	DataColumn_t957173132::get_offset_of__defaultValue_13(),
	DataColumn_t957173132::get_offset_of__expression_14(),
	DataColumn_t957173132::get_offset_of__compiledExpression_15(),
	DataColumn_t957173132::get_offset_of__extendedProperties_16(),
	DataColumn_t957173132::get_offset_of__maxLength_17(),
	DataColumn_t957173132::get_offset_of__nameSpace_18(),
	DataColumn_t957173132::get_offset_of__ordinal_19(),
	DataColumn_t957173132::get_offset_of__prefix_20(),
	DataColumn_t957173132::get_offset_of__readOnly_21(),
	DataColumn_t957173132::get_offset_of__table_22(),
	DataColumn_t957173132::get_offset_of__unique_23(),
	DataColumn_t957173132::get_offset_of__dataContainer_24(),
	DataColumn_t957173132::get_offset_of__datetimeMode_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (DataColumnChangeEventArgs_t502805829), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2330[3] = 
{
	DataColumnChangeEventArgs_t502805829::get_offset_of__column_1(),
	DataColumnChangeEventArgs_t502805829::get_offset_of__row_2(),
	DataColumnChangeEventArgs_t502805829::get_offset_of__proposedValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (Doublet_t1265341067), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2331[2] = 
{
	Doublet_t1265341067::get_offset_of_count_0(),
	Doublet_t1265341067::get_offset_of_columnNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (DataColumnCollection_t2775216988), -1, sizeof(DataColumnCollection_t2775216988_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2332[9] = 
{
	DataColumnCollection_t2775216988::get_offset_of_columnNameCount_2(),
	DataColumnCollection_t2775216988::get_offset_of_columnFromName_3(),
	DataColumnCollection_t2775216988::get_offset_of_autoIncrement_4(),
	DataColumnCollection_t2775216988::get_offset_of_defaultColumnIndex_5(),
	DataColumnCollection_t2775216988::get_offset_of_parentTable_6(),
	DataColumnCollection_t2775216988_StaticFields::get_offset_of_ColumnPrefix_7(),
	DataColumnCollection_t2775216988_StaticFields::get_offset_of_TenColumns_8(),
	DataColumnCollection_t2775216988::get_offset_of_CollectionChanged_9(),
	DataColumnCollection_t2775216988::get_offset_of_CollectionMetaDataChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (DataException_t3803926864), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (DataRelation_t706411233), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2334[12] = 
{
	DataRelation_t706411233::get_offset_of_dataSet_0(),
	DataRelation_t706411233::get_offset_of_relationName_1(),
	DataRelation_t706411233::get_offset_of_parentKeyConstraint_2(),
	DataRelation_t706411233::get_offset_of_childKeyConstraint_3(),
	DataRelation_t706411233::get_offset_of_parentColumns_4(),
	DataRelation_t706411233::get_offset_of_childColumns_5(),
	DataRelation_t706411233::get_offset_of_nested_6(),
	DataRelation_t706411233::get_offset_of_createConstraints_7(),
	DataRelation_t706411233::get_offset_of_initFinished_8(),
	DataRelation_t706411233::get_offset_of_extendedProperties_9(),
	DataRelation_t706411233::get_offset_of__parentTableNameSpace_10(),
	DataRelation_t706411233::get_offset_of__childTableNameSpace_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (DataRelationCollection_t4020009385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2335[3] = 
{
	DataRelationCollection_t4020009385::get_offset_of_inTransition_2(),
	DataRelationCollection_t4020009385::get_offset_of_index_3(),
	DataRelationCollection_t4020009385::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (DataSetRelationCollection_t1636012951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2336[1] = 
{
	DataSetRelationCollection_t1636012951::get_offset_of_dataSet_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (DataTableRelationCollection_t1476257321), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2337[1] = 
{
	DataTableRelationCollection_t1476257321::get_offset_of_dataTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (DataRow_t1390955693), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2338[13] = 
{
	DataRow_t1390955693::get_offset_of__table_0(),
	DataRow_t1390955693::get_offset_of__original_1(),
	DataRow_t1390955693::get_offset_of__current_2(),
	DataRow_t1390955693::get_offset_of__proposed_3(),
	DataRow_t1390955693::get_offset_of__columnErrors_4(),
	DataRow_t1390955693::get_offset_of_rowError_5(),
	DataRow_t1390955693::get_offset_of_xmlRowID_6(),
	DataRow_t1390955693::get_offset_of__nullConstraintViolation_7(),
	DataRow_t1390955693::get_offset_of__nullConstraintMessage_8(),
	DataRow_t1390955693::get_offset_of__inChangingEvent_9(),
	DataRow_t1390955693::get_offset_of__rowId_10(),
	DataRow_t1390955693::get_offset_of__rowChanged_11(),
	DataRow_t1390955693::get_offset_of__inExpressionEvaluation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { sizeof (DataRowAction_t272915745)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2339[9] = 
{
	DataRowAction_t272915745::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (DataRowBuilder_t4106443462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2340[2] = 
{
	DataRowBuilder_t4106443462::get_offset_of_table_0(),
	DataRowBuilder_t4106443462::get_offset_of__rowId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (DataRowChangeEventArgs_t1812145703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2341[2] = 
{
	DataRowChangeEventArgs_t1812145703::get_offset_of_row_1(),
	DataRowChangeEventArgs_t1812145703::get_offset_of_action_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (DataRowCollection_t3811941752), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2342[1] = 
{
	DataRowCollection_t3811941752::get_offset_of_table_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (DataRowState_t3809275726)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2343[6] = 
{
	DataRowState_t3809275726::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (DataRowVersion_t2992543944)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2344[5] = 
{
	DataRowVersion_t2992543944::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (DataSet_t91008811), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2345[13] = 
{
	DataSet_t91008811::get_offset_of_dataSetName_3(),
	DataSet_t91008811::get_offset_of__namespace_4(),
	DataSet_t91008811::get_offset_of_prefix_5(),
	DataSet_t91008811::get_offset_of_caseSensitive_6(),
	DataSet_t91008811::get_offset_of_enforceConstraints_7(),
	DataSet_t91008811::get_offset_of_tableCollection_8(),
	DataSet_t91008811::get_offset_of_relationCollection_9(),
	DataSet_t91008811::get_offset_of_properties_10(),
	DataSet_t91008811::get_offset_of_locale_11(),
	DataSet_t91008811::get_offset_of_tableAdapterSchemaInfo_12(),
	DataSet_t91008811::get_offset_of_dataSetInitialized_13(),
	DataSet_t91008811::get_offset_of_remotingFormat_14(),
	DataSet_t91008811::get_offset_of_MergeFailed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (DataSetDateTime_t4129918198)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2346[5] = 
{
	DataSetDateTime_t4129918198::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (DataTable_t449011362), -1, sizeof(DataTable_t449011362_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2347[39] = 
{
	DataTable_t449011362::get_offset_of_dataSet_3(),
	DataTable_t449011362::get_offset_of__caseSensitive_4(),
	DataTable_t449011362::get_offset_of__columnCollection_5(),
	DataTable_t449011362::get_offset_of__constraintCollection_6(),
	DataTable_t449011362::get_offset_of__displayExpression_7(),
	DataTable_t449011362::get_offset_of__extendedProperties_8(),
	DataTable_t449011362::get_offset_of__locale_9(),
	DataTable_t449011362::get_offset_of__minimumCapacity_10(),
	DataTable_t449011362::get_offset_of__nameSpace_11(),
	DataTable_t449011362::get_offset_of__childRelations_12(),
	DataTable_t449011362::get_offset_of__parentRelations_13(),
	DataTable_t449011362::get_offset_of__prefix_14(),
	DataTable_t449011362::get_offset_of__primaryKeyConstraint_15(),
	DataTable_t449011362::get_offset_of__rows_16(),
	DataTable_t449011362::get_offset_of__site_17(),
	DataTable_t449011362::get_offset_of__tableName_18(),
	DataTable_t449011362::get_offset_of__duringDataLoad_19(),
	DataTable_t449011362::get_offset_of__nullConstraintViolationDuringDataLoad_20(),
	DataTable_t449011362::get_offset_of_enforceConstraints_21(),
	DataTable_t449011362::get_offset_of__rowBuilder_22(),
	DataTable_t449011362::get_offset_of__indexes_23(),
	DataTable_t449011362::get_offset_of__recordCache_24(),
	DataTable_t449011362::get_offset_of__defaultValuesRowIndex_25(),
	DataTable_t449011362::get_offset_of_fInitInProgress_26(),
	DataTable_t449011362::get_offset_of__virginCaseSensitive_27(),
	DataTable_t449011362::get_offset_of__propertyDescriptorsCache_28(),
	DataTable_t449011362_StaticFields::get_offset_of__emptyColumnArray_29(),
	DataTable_t449011362_StaticFields::get_offset_of_SortRegex_30(),
	DataTable_t449011362::get_offset_of__latestPrimaryKeyCols_31(),
	DataTable_t449011362::get_offset_of_empty_rows_32(),
	DataTable_t449011362::get_offset_of_tableInitialized_33(),
	DataTable_t449011362::get_offset_of_remotingFormat_34(),
	DataTable_t449011362::get_offset_of_ColumnChanged_35(),
	DataTable_t449011362::get_offset_of_ColumnChanging_36(),
	DataTable_t449011362::get_offset_of_RowChanged_37(),
	DataTable_t449011362::get_offset_of_RowChanging_38(),
	DataTable_t449011362::get_offset_of_RowDeleted_39(),
	DataTable_t449011362::get_offset_of_RowDeleting_40(),
	DataTable_t449011362::get_offset_of_TableNewRow_41(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (DataTableCollection_t42359719), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2348[3] = 
{
	DataTableCollection_t42359719::get_offset_of_dataSet_2(),
	DataTableCollection_t42359719::get_offset_of_CollectionChanged_3(),
	DataTableCollection_t42359719::get_offset_of_CollectionChanging_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (DataTableNewRowEventArgs_t1133950125), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2349[1] = 
{
	DataTableNewRowEventArgs_t1133950125::get_offset_of__row_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (DataViewRowState_t3715539662)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2350[9] = 
{
	DataViewRowState_t3715539662::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (DefaultValueTypeConverter_t4156915221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (DeletedRowInaccessibleException_t4257085694), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { sizeof (DuplicateNameException_t2065368580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { sizeof (EvaluateException_t503813857), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { sizeof (ForeignKeyConstraint_t3269346217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2355[6] = 
{
	ForeignKeyConstraint_t3269346217::get_offset_of__parentUniqueConstraint_8(),
	ForeignKeyConstraint_t3269346217::get_offset_of__parentColumns_9(),
	ForeignKeyConstraint_t3269346217::get_offset_of__childColumns_10(),
	ForeignKeyConstraint_t3269346217::get_offset_of__deleteRule_11(),
	ForeignKeyConstraint_t3269346217::get_offset_of__updateRule_12(),
	ForeignKeyConstraint_t3269346217::get_offset_of__acceptRejectRule_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { sizeof (InRowChangingEventException_t1975531473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { sizeof (InternalDataCollectionBase_t3608078533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2368[2] = 
{
	InternalDataCollectionBase_t3608078533::get_offset_of_list_0(),
	InternalDataCollectionBase_t3608078533::get_offset_of_synchronized_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { sizeof (InvalidConstraintException_t2567671478), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { sizeof (InvalidExpressionException_t558899007), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { sizeof (MappingType_t2057803425)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2371[5] = 
{
	MappingType_t2057803425::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { sizeof (MergeFailedEventArgs_t1034458439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2372[2] = 
{
	MergeFailedEventArgs_t1034458439::get_offset_of_data_table_1(),
	MergeFailedEventArgs_t1034458439::get_offset_of_conflict_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { sizeof (MergeManager_t2926618243), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { sizeof (MissingPrimaryKeyException_t3806063904), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { sizeof (MissingSchemaAction_t3861377777)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2375[5] = 
{
	MissingSchemaAction_t3861377777::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { sizeof (NoNullAllowedException_t3019923420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { sizeof (ParameterDirection_t1574919100)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2377[5] = 
{
	ParameterDirection_t1574919100::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { sizeof (PropertyCollection_t399284420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { sizeof (ReadOnlyException_t530545303), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { sizeof (RelationshipConverter_t4223497100), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { sizeof (ResDescriptionAttribute_t1967942339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2381[1] = 
{
	ResDescriptionAttribute_t1967942339::get_offset_of_description_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { sizeof (RowNotInTableException_t3274479628), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (Rule_t3648980026)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2383[5] = 
{
	Rule_t3648980026::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { sizeof (SchemaSerializationMode_t502335717)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2384[3] = 
{
	SchemaSerializationMode_t502335717::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (SerializationFormat_t3642900996)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2385[3] = 
{
	SerializationFormat_t3642900996::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (SyntaxErrorException_t4140287829), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (GenerateMethodsType_t1388337402)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2387[5] = 
{
	GenerateMethodsType_t1388337402::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (DbSourceMethodInfo_t3074477308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2388[5] = 
{
	DbSourceMethodInfo_t3074477308::get_offset_of_MethodType_0(),
	DbSourceMethodInfo_t3074477308::get_offset_of_Name_1(),
	DbSourceMethodInfo_t3074477308::get_offset_of_Modifier_2(),
	DbSourceMethodInfo_t3074477308::get_offset_of_QueryType_3(),
	DbSourceMethodInfo_t3074477308::get_offset_of_ScalarCallRetval_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (DbCommandInfo_t2547368927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2389[2] = 
{
	DbCommandInfo_t2547368927::get_offset_of_Command_0(),
	DbCommandInfo_t2547368927::get_offset_of_Methods_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (TableAdapterSchemaInfo_t846969719), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2390[8] = 
{
	TableAdapterSchemaInfo_t846969719::get_offset_of_Provider_0(),
	TableAdapterSchemaInfo_t846969719::get_offset_of_Adapter_1(),
	TableAdapterSchemaInfo_t846969719::get_offset_of_Connection_2(),
	TableAdapterSchemaInfo_t846969719::get_offset_of_ConnectionString_3(),
	TableAdapterSchemaInfo_t846969719::get_offset_of_BaseClass_4(),
	TableAdapterSchemaInfo_t846969719::get_offset_of_Name_5(),
	TableAdapterSchemaInfo_t846969719::get_offset_of_ShortCommands_6(),
	TableAdapterSchemaInfo_t846969719::get_offset_of_Commands_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (UniqueConstraint_t2657169234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2391[5] = 
{
	UniqueConstraint_t2657169234::get_offset_of__isPrimaryKey_8(),
	UniqueConstraint_t2657169234::get_offset_of__belongsToCollection_9(),
	UniqueConstraint_t2657169234::get_offset_of__dataTable_10(),
	UniqueConstraint_t2657169234::get_offset_of__dataColumns_11(),
	UniqueConstraint_t2657169234::get_offset_of__childConstraint_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { sizeof (VersionNotFoundException_t2167093788), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (XmlConstants_t2144422761), -1, sizeof(XmlConstants_t2144422761_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2393[19] = 
{
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnString_0(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnShort_1(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnInt_2(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnLong_3(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnBoolean_4(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnUnsignedByte_5(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnChar_6(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnDateTime_7(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnDecimal_8(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnDouble_9(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnSbyte_10(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnFloat_11(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnDuration_12(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnUnsignedShort_13(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnUnsignedInt_14(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnUnsignedLong_15(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnUri_16(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnBase64Binary_17(),
	XmlConstants_t2144422761_StaticFields::get_offset_of_QnXmlQualifiedName_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { sizeof (ElementMappingType_t3158962931)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2394[4] = 
{
	ElementMappingType_t3158962931::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (TableMappingCollection_t3730895761), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (TableMapping_t327902309), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2396[10] = 
{
	TableMapping_t327902309::get_offset_of_existsInDataSet_0(),
	TableMapping_t327902309::get_offset_of_Table_1(),
	TableMapping_t327902309::get_offset_of_Elements_2(),
	TableMapping_t327902309::get_offset_of_Attributes_3(),
	TableMapping_t327902309::get_offset_of_SimpleContent_4(),
	TableMapping_t327902309::get_offset_of_PrimaryKey_5(),
	TableMapping_t327902309::get_offset_of_ReferenceKey_6(),
	TableMapping_t327902309::get_offset_of_lastElementIndex_7(),
	TableMapping_t327902309::get_offset_of_ParentTable_8(),
	TableMapping_t327902309::get_offset_of_ChildTables_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (XmlDataInferenceLoader_t1546655224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2397[6] = 
{
	XmlDataInferenceLoader_t1546655224::get_offset_of_dataset_0(),
	XmlDataInferenceLoader_t1546655224::get_offset_of_document_1(),
	XmlDataInferenceLoader_t1546655224::get_offset_of_mode_2(),
	XmlDataInferenceLoader_t1546655224::get_offset_of_ignoredNamespaces_3(),
	XmlDataInferenceLoader_t1546655224::get_offset_of_tables_4(),
	XmlDataInferenceLoader_t1546655224::get_offset_of_relations_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (XmlDataLoader_t3198285916), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (XmlDataReader_t3544630636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2399[3] = 
{
	XmlDataReader_t3544630636::get_offset_of_dataset_0(),
	XmlDataReader_t3544630636::get_offset_of_reader_1(),
	XmlDataReader_t3544630636::get_offset_of_mode_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
