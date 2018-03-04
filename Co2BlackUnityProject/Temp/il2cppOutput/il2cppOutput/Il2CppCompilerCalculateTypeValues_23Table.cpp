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

// System.Data.DataTable
struct DataTable_t3635127758;
// System.Collections.ArrayList
struct ArrayList_t3867410345;
// System.Data.DataSet
struct DataSet_t1458640340;
// System.String
struct String_t;
// System.Data.UniqueConstraint
struct UniqueConstraint_t613650809;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t3475418834;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t3739124042;
// System.Data.PropertyCollection
struct PropertyCollection_t2915493498;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2977429132;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t3866233725;
// System.ComponentModel.ISite
struct ISite_t3082376888;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t552484783;
// System.Int32[]
struct Int32U5BU5D_t1664692557;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t600118631;
// System.Collections.Hashtable/HashValues
struct HashValues_t3391759617;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t3322010673;
// System.Collections.IComparer
struct IComparer_t2143127634;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t722839904;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t488308688;
// System.Collections.BitArray
struct BitArray_t3133760326;
// System.Type
struct Type_t;
// System.Data.DataColumn
struct DataColumn_t2659580843;
// System.IntPtr[]
struct IntPtrU5BU5D_t1175376876;
// System.Collections.IDictionary
struct IDictionary_t295350754;
// System.Data.Common.Index
struct Index_t818973190;
// System.Data.ConstraintCollection
struct ConstraintCollection_t3770521360;
// System.Collections.Stack
struct Stack_t4161021029;
// System.Data.DataRow[]
struct DataRowU5BU5D_t3812028374;
// System.Data.Common.Key
struct Key_t382600727;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t4118650224;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4085890488;
// System.Data.DataRow
struct DataRow_t452116239;
// System.Collections.Hashtable
struct Hashtable_t916193709;
// System.String[]
struct StringU5BU5D_t131720724;
// System.Object[]
struct ObjectU5BU5D_t3168447156;
// System.Byte[]
struct ByteU5BU5D_t965135465;
// System.Data.DataRelation
struct DataRelation_t109885884;
// System.Char[]
struct CharU5BU5D_t3978811185;
// System.UInt32[]
struct UInt32U5BU5D_t1303042751;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t2189401296;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t1613873256;
// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t1825994462;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t4261531764;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3865748893;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t1440087999;
// System.Data.Common.DataContainer
struct DataContainer_t1993749639;
// System.Data.IDbCommand
struct IDbCommand_t3131435540;
// System.Data.DataColumnCollection
struct DataColumnCollection_t1299614139;
// System.Globalization.CultureInfo
struct CultureInfo_t2266733137;
// System.Data.DataRelationCollection
struct DataRelationCollection_t1356305404;
// System.Data.DataRowCollection
struct DataRowCollection_t1036525945;
// System.Data.DataRowBuilder
struct DataRowBuilder_t3701569175;
// System.Data.Common.RecordCache
struct RecordCache_t886332558;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2032515041;
// System.Text.RegularExpressions.Regex
struct Regex_t3748304636;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t532961492;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t2506713557;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t3835313805;
// System.Data.DataTableCollection
struct DataTableCollection_t741403882;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t916807825;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t4064537649;




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
#ifndef DATAROWBUILDER_T3701569175_H
#define DATAROWBUILDER_T3701569175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t3701569175  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t3635127758 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t3701569175, ___table_0)); }
	inline DataTable_t3635127758 * get_table_0() const { return ___table_0; }
	inline DataTable_t3635127758 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t3635127758 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t3701569175, ____rowId_1)); }
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
#endif // DATAROWBUILDER_T3701569175_H
#ifndef DOUBLET_T1923023169_H
#define DOUBLET_T1923023169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Doublet
struct  Doublet_t1923023169  : public RuntimeObject
{
public:
	// System.Int32 System.Data.Doublet::count
	int32_t ___count_0;
	// System.Collections.ArrayList System.Data.Doublet::columnNames
	ArrayList_t3867410345 * ___columnNames_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Doublet_t1923023169, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_columnNames_1() { return static_cast<int32_t>(offsetof(Doublet_t1923023169, ___columnNames_1)); }
	inline ArrayList_t3867410345 * get_columnNames_1() const { return ___columnNames_1; }
	inline ArrayList_t3867410345 ** get_address_of_columnNames_1() { return &___columnNames_1; }
	inline void set_columnNames_1(ArrayList_t3867410345 * value)
	{
		___columnNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___columnNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLET_T1923023169_H
#ifndef DATARELATION_T109885884_H
#define DATARELATION_T109885884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t109885884  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t1458640340 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t613650809 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t3475418834 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t3739124042* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t3739124042* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t2915493498 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_10;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_11;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___dataSet_0)); }
	inline DataSet_t1458640340 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t1458640340 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t1458640340 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t613650809 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t613650809 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t613650809 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t3475418834 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t3475418834 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t3475418834 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t3739124042* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t3739124042** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t3739124042* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___childColumns_5)); }
	inline DataColumnU5BU5D_t3739124042* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t3739124042** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t3739124042* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ___extendedProperties_9)); }
	inline PropertyCollection_t2915493498 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t2915493498 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t2915493498 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__parentTableNameSpace_10() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ____parentTableNameSpace_10)); }
	inline String_t* get__parentTableNameSpace_10() const { return ____parentTableNameSpace_10; }
	inline String_t** get_address_of__parentTableNameSpace_10() { return &____parentTableNameSpace_10; }
	inline void set__parentTableNameSpace_10(String_t* value)
	{
		____parentTableNameSpace_10 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_10), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_11() { return static_cast<int32_t>(offsetof(DataRelation_t109885884, ____childTableNameSpace_11)); }
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
#endif // DATARELATION_T109885884_H
#ifndef DATAROW_T452116239_H
#define DATAROW_T452116239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t452116239  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t3635127758 * ____table_0;
	// System.Int32 System.Data.DataRow::_original
	int32_t ____original_1;
	// System.Int32 System.Data.DataRow::_current
	int32_t ____current_2;
	// System.Int32 System.Data.DataRow::_proposed
	int32_t ____proposed_3;
	// System.Collections.ArrayList System.Data.DataRow::_columnErrors
	ArrayList_t3867410345 * ____columnErrors_4;
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
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____table_0)); }
	inline DataTable_t3635127758 * get__table_0() const { return ____table_0; }
	inline DataTable_t3635127758 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t3635127758 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__original_1() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____original_1)); }
	inline int32_t get__original_1() const { return ____original_1; }
	inline int32_t* get_address_of__original_1() { return &____original_1; }
	inline void set__original_1(int32_t value)
	{
		____original_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____current_2)); }
	inline int32_t get__current_2() const { return ____current_2; }
	inline int32_t* get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(int32_t value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__proposed_3() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____proposed_3)); }
	inline int32_t get__proposed_3() const { return ____proposed_3; }
	inline int32_t* get_address_of__proposed_3() { return &____proposed_3; }
	inline void set__proposed_3(int32_t value)
	{
		____proposed_3 = value;
	}

	inline static int32_t get_offset_of__columnErrors_4() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____columnErrors_4)); }
	inline ArrayList_t3867410345 * get__columnErrors_4() const { return ____columnErrors_4; }
	inline ArrayList_t3867410345 ** get_address_of__columnErrors_4() { return &____columnErrors_4; }
	inline void set__columnErrors_4(ArrayList_t3867410345 * value)
	{
		____columnErrors_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnErrors_4), value);
	}

	inline static int32_t get_offset_of_rowError_5() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ___rowError_5)); }
	inline String_t* get_rowError_5() const { return ___rowError_5; }
	inline String_t** get_address_of_rowError_5() { return &___rowError_5; }
	inline void set_rowError_5(String_t* value)
	{
		___rowError_5 = value;
		Il2CppCodeGenWriteBarrier((&___rowError_5), value);
	}

	inline static int32_t get_offset_of_xmlRowID_6() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ___xmlRowID_6)); }
	inline int32_t get_xmlRowID_6() const { return ___xmlRowID_6; }
	inline int32_t* get_address_of_xmlRowID_6() { return &___xmlRowID_6; }
	inline void set_xmlRowID_6(int32_t value)
	{
		___xmlRowID_6 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolation_7() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____nullConstraintViolation_7)); }
	inline bool get__nullConstraintViolation_7() const { return ____nullConstraintViolation_7; }
	inline bool* get_address_of__nullConstraintViolation_7() { return &____nullConstraintViolation_7; }
	inline void set__nullConstraintViolation_7(bool value)
	{
		____nullConstraintViolation_7 = value;
	}

	inline static int32_t get_offset_of__nullConstraintMessage_8() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____nullConstraintMessage_8)); }
	inline String_t* get__nullConstraintMessage_8() const { return ____nullConstraintMessage_8; }
	inline String_t** get_address_of__nullConstraintMessage_8() { return &____nullConstraintMessage_8; }
	inline void set__nullConstraintMessage_8(String_t* value)
	{
		____nullConstraintMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&____nullConstraintMessage_8), value);
	}

	inline static int32_t get_offset_of__inChangingEvent_9() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____inChangingEvent_9)); }
	inline bool get__inChangingEvent_9() const { return ____inChangingEvent_9; }
	inline bool* get_address_of__inChangingEvent_9() { return &____inChangingEvent_9; }
	inline void set__inChangingEvent_9(bool value)
	{
		____inChangingEvent_9 = value;
	}

	inline static int32_t get_offset_of__rowId_10() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____rowId_10)); }
	inline int32_t get__rowId_10() const { return ____rowId_10; }
	inline int32_t* get_address_of__rowId_10() { return &____rowId_10; }
	inline void set__rowId_10(int32_t value)
	{
		____rowId_10 = value;
	}

	inline static int32_t get_offset_of__rowChanged_11() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____rowChanged_11)); }
	inline bool get__rowChanged_11() const { return ____rowChanged_11; }
	inline bool* get_address_of__rowChanged_11() { return &____rowChanged_11; }
	inline void set__rowChanged_11(bool value)
	{
		____rowChanged_11 = value;
	}

	inline static int32_t get_offset_of__inExpressionEvaluation_12() { return static_cast<int32_t>(offsetof(DataRow_t452116239, ____inExpressionEvaluation_12)); }
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
#endif // DATAROW_T452116239_H
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
#ifndef INTERNALDATACOLLECTIONBASE_T947607515_H
#define INTERNALDATACOLLECTIONBASE_T947607515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t947607515  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t3867410345 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t947607515, ___list_0)); }
	inline ArrayList_t3867410345 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3867410345 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3867410345 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t947607515, ___synchronized_1)); }
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
#endif // INTERNALDATACOLLECTIONBASE_T947607515_H
#ifndef MERGEMANAGER_T978249538_H
#define MERGEMANAGER_T978249538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeManager
struct  MergeManager_t978249538  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEMANAGER_T978249538_H
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
#ifndef HASHTABLE_T916193709_H
#define HASHTABLE_T916193709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t916193709  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t552484783* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t1664692557* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t600118631 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t3391759617 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t722839904 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___table_4)); }
	inline SlotU5BU5D_t552484783* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t552484783** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t552484783* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___hashes_5)); }
	inline Int32U5BU5D_t1664692557* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t1664692557** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t1664692557* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___hashKeys_7)); }
	inline HashKeys_t600118631 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t600118631 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t600118631 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___hashValues_8)); }
	inline HashValues_t3391759617 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t3391759617 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t3391759617 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___serializationInfo_11)); }
	inline SerializationInfo_t722839904 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t722839904 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t722839904 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t916193709, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t916193709_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t1664692557* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t916193709_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t1664692557* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t1664692557** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t1664692557* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T916193709_H
#ifndef DATACONTAINER_T1993749639_H
#define DATACONTAINER_T1993749639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataContainer
struct  DataContainer_t1993749639  : public RuntimeObject
{
public:
	// System.Collections.BitArray System.Data.Common.DataContainer::null_values
	BitArray_t3133760326 * ___null_values_0;
	// System.Type System.Data.Common.DataContainer::_type
	Type_t * ____type_1;
	// System.Data.DataColumn System.Data.Common.DataContainer::_column
	DataColumn_t2659580843 * ____column_2;

public:
	inline static int32_t get_offset_of_null_values_0() { return static_cast<int32_t>(offsetof(DataContainer_t1993749639, ___null_values_0)); }
	inline BitArray_t3133760326 * get_null_values_0() const { return ___null_values_0; }
	inline BitArray_t3133760326 ** get_address_of_null_values_0() { return &___null_values_0; }
	inline void set_null_values_0(BitArray_t3133760326 * value)
	{
		___null_values_0 = value;
		Il2CppCodeGenWriteBarrier((&___null_values_0), value);
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(DataContainer_t1993749639, ____type_1)); }
	inline Type_t * get__type_1() const { return ____type_1; }
	inline Type_t ** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(Type_t * value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__column_2() { return static_cast<int32_t>(offsetof(DataContainer_t1993749639, ____column_2)); }
	inline DataColumn_t2659580843 * get__column_2() const { return ____column_2; }
	inline DataColumn_t2659580843 ** get_address_of__column_2() { return &____column_2; }
	inline void set__column_2(DataColumn_t2659580843 * value)
	{
		____column_2 = value;
		Il2CppCodeGenWriteBarrier((&____column_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACONTAINER_T1993749639_H
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
#ifndef CONSTRAINT_T1574073444_H
#define CONSTRAINT_T1574073444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t1574073444  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t3866233725 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t2915493498 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t818973190 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t3770521360 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t1458640340 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t1574073444, ___events_1)); }
	inline EventHandlerList_t3866233725 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t3866233725 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t3866233725 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t1574073444, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t1574073444, ____properties_3)); }
	inline PropertyCollection_t2915493498 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t2915493498 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t2915493498 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t1574073444, ____index_4)); }
	inline Index_t818973190 * get__index_4() const { return ____index_4; }
	inline Index_t818973190 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t818973190 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t1574073444, ____constraintCollection_5)); }
	inline ConstraintCollection_t3770521360 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t3770521360 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t3770521360 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t1574073444, ___dataSet_6)); }
	inline DataSet_t1458640340 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t1458640340 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t1458640340 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t1574073444, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t1574073444_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t1574073444_StaticFields, ___beforeConstraintNameChange_0)); }
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
#endif // CONSTRAINT_T1574073444_H
#ifndef SQLXML_T1741509206_H
#define SQLXML_T1741509206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlXml
struct  SqlXml_t1741509206  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlXml::notNull
	bool ___notNull_0;
	// System.String System.Data.SqlTypes.SqlXml::xmlValue
	String_t* ___xmlValue_1;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlXml_t1741509206, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_xmlValue_1() { return static_cast<int32_t>(offsetof(SqlXml_t1741509206, ___xmlValue_1)); }
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
#endif // SQLXML_T1741509206_H
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
#ifndef DBPROVIDERFACTORY_T3913697870_H
#define DBPROVIDERFACTORY_T3913697870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_t3913697870  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPROVIDERFACTORY_T3913697870_H
#ifndef RECORDCACHE_T886332558_H
#define RECORDCACHE_T886332558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RecordCache
struct  RecordCache_t886332558  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t4161021029 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t3635127758 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t3812028374* ____rowsToRecords_4;

public:
	inline static int32_t get_offset_of__records_0() { return static_cast<int32_t>(offsetof(RecordCache_t886332558, ____records_0)); }
	inline Stack_t4161021029 * get__records_0() const { return ____records_0; }
	inline Stack_t4161021029 ** get_address_of__records_0() { return &____records_0; }
	inline void set__records_0(Stack_t4161021029 * value)
	{
		____records_0 = value;
		Il2CppCodeGenWriteBarrier((&____records_0), value);
	}

	inline static int32_t get_offset_of__nextFreeIndex_1() { return static_cast<int32_t>(offsetof(RecordCache_t886332558, ____nextFreeIndex_1)); }
	inline int32_t get__nextFreeIndex_1() const { return ____nextFreeIndex_1; }
	inline int32_t* get_address_of__nextFreeIndex_1() { return &____nextFreeIndex_1; }
	inline void set__nextFreeIndex_1(int32_t value)
	{
		____nextFreeIndex_1 = value;
	}

	inline static int32_t get_offset_of__currentCapacity_2() { return static_cast<int32_t>(offsetof(RecordCache_t886332558, ____currentCapacity_2)); }
	inline int32_t get__currentCapacity_2() const { return ____currentCapacity_2; }
	inline int32_t* get_address_of__currentCapacity_2() { return &____currentCapacity_2; }
	inline void set__currentCapacity_2(int32_t value)
	{
		____currentCapacity_2 = value;
	}

	inline static int32_t get_offset_of__table_3() { return static_cast<int32_t>(offsetof(RecordCache_t886332558, ____table_3)); }
	inline DataTable_t3635127758 * get__table_3() const { return ____table_3; }
	inline DataTable_t3635127758 ** get_address_of__table_3() { return &____table_3; }
	inline void set__table_3(DataTable_t3635127758 * value)
	{
		____table_3 = value;
		Il2CppCodeGenWriteBarrier((&____table_3), value);
	}

	inline static int32_t get_offset_of__rowsToRecords_4() { return static_cast<int32_t>(offsetof(RecordCache_t886332558, ____rowsToRecords_4)); }
	inline DataRowU5BU5D_t3812028374* get__rowsToRecords_4() const { return ____rowsToRecords_4; }
	inline DataRowU5BU5D_t3812028374** get_address_of__rowsToRecords_4() { return &____rowsToRecords_4; }
	inline void set__rowsToRecords_4(DataRowU5BU5D_t3812028374* value)
	{
		____rowsToRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____rowsToRecords_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCACHE_T886332558_H
#ifndef DBTYPES_T3344733689_H
#define DBTYPES_T3344733689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTypes
struct  DbTypes_t3344733689  : public RuntimeObject
{
public:

public:
};

struct DbTypes_t3344733689_StaticFields
{
public:
	// System.Type System.Data.Common.DbTypes::TypeOfBoolean
	Type_t * ___TypeOfBoolean_0;
	// System.Type System.Data.Common.DbTypes::TypeOfSByte
	Type_t * ___TypeOfSByte_1;
	// System.Type System.Data.Common.DbTypes::TypeOfChar
	Type_t * ___TypeOfChar_2;
	// System.Type System.Data.Common.DbTypes::TypeOfInt16
	Type_t * ___TypeOfInt16_3;
	// System.Type System.Data.Common.DbTypes::TypeOfInt32
	Type_t * ___TypeOfInt32_4;
	// System.Type System.Data.Common.DbTypes::TypeOfInt64
	Type_t * ___TypeOfInt64_5;
	// System.Type System.Data.Common.DbTypes::TypeOfByte
	Type_t * ___TypeOfByte_6;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt16
	Type_t * ___TypeOfUInt16_7;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt32
	Type_t * ___TypeOfUInt32_8;
	// System.Type System.Data.Common.DbTypes::TypeOfUInt64
	Type_t * ___TypeOfUInt64_9;
	// System.Type System.Data.Common.DbTypes::TypeOfDouble
	Type_t * ___TypeOfDouble_10;
	// System.Type System.Data.Common.DbTypes::TypeOfSingle
	Type_t * ___TypeOfSingle_11;
	// System.Type System.Data.Common.DbTypes::TypeOfDecimal
	Type_t * ___TypeOfDecimal_12;
	// System.Type System.Data.Common.DbTypes::TypeOfString
	Type_t * ___TypeOfString_13;
	// System.Type System.Data.Common.DbTypes::TypeOfDateTime
	Type_t * ___TypeOfDateTime_14;
	// System.Type System.Data.Common.DbTypes::TypeOfObject
	Type_t * ___TypeOfObject_15;
	// System.Type System.Data.Common.DbTypes::TypeOfGuid
	Type_t * ___TypeOfGuid_16;
	// System.Type System.Data.Common.DbTypes::TypeOfType
	Type_t * ___TypeOfType_17;
	// System.Type System.Data.Common.DbTypes::TypeOfByteArray
	Type_t * ___TypeOfByteArray_18;
	// System.Type System.Data.Common.DbTypes::TypeOfFloat
	Type_t * ___TypeOfFloat_19;
	// System.Type System.Data.Common.DbTypes::TypeOfTimespan
	Type_t * ___TypeOfTimespan_20;

public:
	inline static int32_t get_offset_of_TypeOfBoolean_0() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfBoolean_0)); }
	inline Type_t * get_TypeOfBoolean_0() const { return ___TypeOfBoolean_0; }
	inline Type_t ** get_address_of_TypeOfBoolean_0() { return &___TypeOfBoolean_0; }
	inline void set_TypeOfBoolean_0(Type_t * value)
	{
		___TypeOfBoolean_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfBoolean_0), value);
	}

	inline static int32_t get_offset_of_TypeOfSByte_1() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfSByte_1)); }
	inline Type_t * get_TypeOfSByte_1() const { return ___TypeOfSByte_1; }
	inline Type_t ** get_address_of_TypeOfSByte_1() { return &___TypeOfSByte_1; }
	inline void set_TypeOfSByte_1(Type_t * value)
	{
		___TypeOfSByte_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSByte_1), value);
	}

	inline static int32_t get_offset_of_TypeOfChar_2() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfChar_2)); }
	inline Type_t * get_TypeOfChar_2() const { return ___TypeOfChar_2; }
	inline Type_t ** get_address_of_TypeOfChar_2() { return &___TypeOfChar_2; }
	inline void set_TypeOfChar_2(Type_t * value)
	{
		___TypeOfChar_2 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfChar_2), value);
	}

	inline static int32_t get_offset_of_TypeOfInt16_3() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfInt16_3)); }
	inline Type_t * get_TypeOfInt16_3() const { return ___TypeOfInt16_3; }
	inline Type_t ** get_address_of_TypeOfInt16_3() { return &___TypeOfInt16_3; }
	inline void set_TypeOfInt16_3(Type_t * value)
	{
		___TypeOfInt16_3 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt16_3), value);
	}

	inline static int32_t get_offset_of_TypeOfInt32_4() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfInt32_4)); }
	inline Type_t * get_TypeOfInt32_4() const { return ___TypeOfInt32_4; }
	inline Type_t ** get_address_of_TypeOfInt32_4() { return &___TypeOfInt32_4; }
	inline void set_TypeOfInt32_4(Type_t * value)
	{
		___TypeOfInt32_4 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt32_4), value);
	}

	inline static int32_t get_offset_of_TypeOfInt64_5() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfInt64_5)); }
	inline Type_t * get_TypeOfInt64_5() const { return ___TypeOfInt64_5; }
	inline Type_t ** get_address_of_TypeOfInt64_5() { return &___TypeOfInt64_5; }
	inline void set_TypeOfInt64_5(Type_t * value)
	{
		___TypeOfInt64_5 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt64_5), value);
	}

	inline static int32_t get_offset_of_TypeOfByte_6() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfByte_6)); }
	inline Type_t * get_TypeOfByte_6() const { return ___TypeOfByte_6; }
	inline Type_t ** get_address_of_TypeOfByte_6() { return &___TypeOfByte_6; }
	inline void set_TypeOfByte_6(Type_t * value)
	{
		___TypeOfByte_6 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByte_6), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt16_7() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfUInt16_7)); }
	inline Type_t * get_TypeOfUInt16_7() const { return ___TypeOfUInt16_7; }
	inline Type_t ** get_address_of_TypeOfUInt16_7() { return &___TypeOfUInt16_7; }
	inline void set_TypeOfUInt16_7(Type_t * value)
	{
		___TypeOfUInt16_7 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt16_7), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt32_8() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfUInt32_8)); }
	inline Type_t * get_TypeOfUInt32_8() const { return ___TypeOfUInt32_8; }
	inline Type_t ** get_address_of_TypeOfUInt32_8() { return &___TypeOfUInt32_8; }
	inline void set_TypeOfUInt32_8(Type_t * value)
	{
		___TypeOfUInt32_8 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt32_8), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt64_9() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfUInt64_9)); }
	inline Type_t * get_TypeOfUInt64_9() const { return ___TypeOfUInt64_9; }
	inline Type_t ** get_address_of_TypeOfUInt64_9() { return &___TypeOfUInt64_9; }
	inline void set_TypeOfUInt64_9(Type_t * value)
	{
		___TypeOfUInt64_9 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt64_9), value);
	}

	inline static int32_t get_offset_of_TypeOfDouble_10() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfDouble_10)); }
	inline Type_t * get_TypeOfDouble_10() const { return ___TypeOfDouble_10; }
	inline Type_t ** get_address_of_TypeOfDouble_10() { return &___TypeOfDouble_10; }
	inline void set_TypeOfDouble_10(Type_t * value)
	{
		___TypeOfDouble_10 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDouble_10), value);
	}

	inline static int32_t get_offset_of_TypeOfSingle_11() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfSingle_11)); }
	inline Type_t * get_TypeOfSingle_11() const { return ___TypeOfSingle_11; }
	inline Type_t ** get_address_of_TypeOfSingle_11() { return &___TypeOfSingle_11; }
	inline void set_TypeOfSingle_11(Type_t * value)
	{
		___TypeOfSingle_11 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSingle_11), value);
	}

	inline static int32_t get_offset_of_TypeOfDecimal_12() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfDecimal_12)); }
	inline Type_t * get_TypeOfDecimal_12() const { return ___TypeOfDecimal_12; }
	inline Type_t ** get_address_of_TypeOfDecimal_12() { return &___TypeOfDecimal_12; }
	inline void set_TypeOfDecimal_12(Type_t * value)
	{
		___TypeOfDecimal_12 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDecimal_12), value);
	}

	inline static int32_t get_offset_of_TypeOfString_13() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfString_13)); }
	inline Type_t * get_TypeOfString_13() const { return ___TypeOfString_13; }
	inline Type_t ** get_address_of_TypeOfString_13() { return &___TypeOfString_13; }
	inline void set_TypeOfString_13(Type_t * value)
	{
		___TypeOfString_13 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfString_13), value);
	}

	inline static int32_t get_offset_of_TypeOfDateTime_14() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfDateTime_14)); }
	inline Type_t * get_TypeOfDateTime_14() const { return ___TypeOfDateTime_14; }
	inline Type_t ** get_address_of_TypeOfDateTime_14() { return &___TypeOfDateTime_14; }
	inline void set_TypeOfDateTime_14(Type_t * value)
	{
		___TypeOfDateTime_14 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDateTime_14), value);
	}

	inline static int32_t get_offset_of_TypeOfObject_15() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfObject_15)); }
	inline Type_t * get_TypeOfObject_15() const { return ___TypeOfObject_15; }
	inline Type_t ** get_address_of_TypeOfObject_15() { return &___TypeOfObject_15; }
	inline void set_TypeOfObject_15(Type_t * value)
	{
		___TypeOfObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfObject_15), value);
	}

	inline static int32_t get_offset_of_TypeOfGuid_16() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfGuid_16)); }
	inline Type_t * get_TypeOfGuid_16() const { return ___TypeOfGuid_16; }
	inline Type_t ** get_address_of_TypeOfGuid_16() { return &___TypeOfGuid_16; }
	inline void set_TypeOfGuid_16(Type_t * value)
	{
		___TypeOfGuid_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfGuid_16), value);
	}

	inline static int32_t get_offset_of_TypeOfType_17() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfType_17)); }
	inline Type_t * get_TypeOfType_17() const { return ___TypeOfType_17; }
	inline Type_t ** get_address_of_TypeOfType_17() { return &___TypeOfType_17; }
	inline void set_TypeOfType_17(Type_t * value)
	{
		___TypeOfType_17 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfType_17), value);
	}

	inline static int32_t get_offset_of_TypeOfByteArray_18() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfByteArray_18)); }
	inline Type_t * get_TypeOfByteArray_18() const { return ___TypeOfByteArray_18; }
	inline Type_t ** get_address_of_TypeOfByteArray_18() { return &___TypeOfByteArray_18; }
	inline void set_TypeOfByteArray_18(Type_t * value)
	{
		___TypeOfByteArray_18 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByteArray_18), value);
	}

	inline static int32_t get_offset_of_TypeOfFloat_19() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfFloat_19)); }
	inline Type_t * get_TypeOfFloat_19() const { return ___TypeOfFloat_19; }
	inline Type_t ** get_address_of_TypeOfFloat_19() { return &___TypeOfFloat_19; }
	inline void set_TypeOfFloat_19(Type_t * value)
	{
		___TypeOfFloat_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfFloat_19), value);
	}

	inline static int32_t get_offset_of_TypeOfTimespan_20() { return static_cast<int32_t>(offsetof(DbTypes_t3344733689_StaticFields, ___TypeOfTimespan_20)); }
	inline Type_t * get_TypeOfTimespan_20() const { return ___TypeOfTimespan_20; }
	inline Type_t ** get_address_of_TypeOfTimespan_20() { return &___TypeOfTimespan_20; }
	inline void set_TypeOfTimespan_20(Type_t * value)
	{
		___TypeOfTimespan_20 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfTimespan_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBTYPES_T3344733689_H
#ifndef INDEX_T818973190_H
#define INDEX_T818973190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Index
struct  Index_t818973190  : public RuntimeObject
{
public:
	// System.Int32[] System.Data.Common.Index::_array
	Int32U5BU5D_t1664692557* ____array_1;
	// System.Int32 System.Data.Common.Index::_size
	int32_t ____size_2;
	// System.Data.Common.Key System.Data.Common.Index::_key
	Key_t382600727 * ____key_3;
	// System.Int32 System.Data.Common.Index::_refCount
	int32_t ____refCount_4;
	// System.Boolean System.Data.Common.Index::know_have_duplicates
	bool ___know_have_duplicates_5;
	// System.Boolean System.Data.Common.Index::know_no_duplicates
	bool ___know_no_duplicates_6;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Index_t818973190, ____array_1)); }
	inline Int32U5BU5D_t1664692557* get__array_1() const { return ____array_1; }
	inline Int32U5BU5D_t1664692557** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(Int32U5BU5D_t1664692557* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Index_t818973190, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__key_3() { return static_cast<int32_t>(offsetof(Index_t818973190, ____key_3)); }
	inline Key_t382600727 * get__key_3() const { return ____key_3; }
	inline Key_t382600727 ** get_address_of__key_3() { return &____key_3; }
	inline void set__key_3(Key_t382600727 * value)
	{
		____key_3 = value;
		Il2CppCodeGenWriteBarrier((&____key_3), value);
	}

	inline static int32_t get_offset_of__refCount_4() { return static_cast<int32_t>(offsetof(Index_t818973190, ____refCount_4)); }
	inline int32_t get__refCount_4() const { return ____refCount_4; }
	inline int32_t* get_address_of__refCount_4() { return &____refCount_4; }
	inline void set__refCount_4(int32_t value)
	{
		____refCount_4 = value;
	}

	inline static int32_t get_offset_of_know_have_duplicates_5() { return static_cast<int32_t>(offsetof(Index_t818973190, ___know_have_duplicates_5)); }
	inline bool get_know_have_duplicates_5() const { return ___know_have_duplicates_5; }
	inline bool* get_address_of_know_have_duplicates_5() { return &___know_have_duplicates_5; }
	inline void set_know_have_duplicates_5(bool value)
	{
		___know_have_duplicates_5 = value;
	}

	inline static int32_t get_offset_of_know_no_duplicates_6() { return static_cast<int32_t>(offsetof(Index_t818973190, ___know_no_duplicates_6)); }
	inline bool get_know_no_duplicates_6() const { return ___know_no_duplicates_6; }
	inline bool* get_address_of_know_no_duplicates_6() { return &___know_no_duplicates_6; }
	inline void set_know_no_duplicates_6(bool value)
	{
		___know_no_duplicates_6 = value;
	}
};

struct Index_t818973190_StaticFields
{
public:
	// System.Int32[] System.Data.Common.Index::empty
	Int32U5BU5D_t1664692557* ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(Index_t818973190_StaticFields, ___empty_0)); }
	inline Int32U5BU5D_t1664692557* get_empty_0() const { return ___empty_0; }
	inline Int32U5BU5D_t1664692557** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(Int32U5BU5D_t1664692557* value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEX_T818973190_H
#ifndef CONSTRAINTCOLLECTION_T3770521360_H
#define CONSTRAINTCOLLECTION_T3770521360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t3770521360  : public InternalDataCollectionBase_t947607515
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t3635127758 * ___table_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t4118650224 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t3770521360, ___table_2)); }
	inline DataTable_t3635127758 * get_table_2() const { return ___table_2; }
	inline DataTable_t3635127758 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t3635127758 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t3770521360, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t4118650224 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t4118650224 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t4118650224 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T3770521360_H
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
	RandomNumberGenerator_t4085890488 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t4085890488 * ____fastRng_14;

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
	inline RandomNumberGenerator_t4085890488 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t4085890488 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t4085890488 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t4085890488 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t4085890488 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t4085890488 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DATACOLUMNCHANGEEVENTARGS_T3271616016_H
#define DATACOLUMNCHANGEEVENTARGS_T3271616016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t3271616016  : public EventArgs_t2356377238
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t2659580843 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t452116239 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	RuntimeObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3271616016, ____column_1)); }
	inline DataColumn_t2659580843 * get__column_1() const { return ____column_1; }
	inline DataColumn_t2659580843 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t2659580843 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier((&____column_1), value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3271616016, ____row_2)); }
	inline DataRow_t452116239 * get__row_2() const { return ____row_2; }
	inline DataRow_t452116239 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t452116239 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier((&____row_2), value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t3271616016, ____proposedValue_3)); }
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
#endif // DATACOLUMNCHANGEEVENTARGS_T3271616016_H
#ifndef DATACOLUMNCOLLECTION_T1299614139_H
#define DATACOLUMNCOLLECTION_T1299614139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t1299614139  : public InternalDataCollectionBase_t947607515
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t916193709 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t916193709 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t3867410345 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t3635127758 * ___parentTable_6;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t4118650224 * ___CollectionChanged_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t4118650224 * ___CollectionMetaDataChanged_10;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139, ___columnNameCount_2)); }
	inline Hashtable_t916193709 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t916193709 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t916193709 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139, ___columnFromName_3)); }
	inline Hashtable_t916193709 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t916193709 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t916193709 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139, ___autoIncrement_4)); }
	inline ArrayList_t3867410345 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t3867410345 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t3867410345 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139, ___parentTable_6)); }
	inline DataTable_t3635127758 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t3635127758 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t3635127758 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139, ___CollectionChanged_9)); }
	inline CollectionChangeEventHandler_t4118650224 * get_CollectionChanged_9() const { return ___CollectionChanged_9; }
	inline CollectionChangeEventHandler_t4118650224 ** get_address_of_CollectionChanged_9() { return &___CollectionChanged_9; }
	inline void set_CollectionChanged_9(CollectionChangeEventHandler_t4118650224 * value)
	{
		___CollectionChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_9), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139, ___CollectionMetaDataChanged_10)); }
	inline CollectionChangeEventHandler_t4118650224 * get_CollectionMetaDataChanged_10() const { return ___CollectionMetaDataChanged_10; }
	inline CollectionChangeEventHandler_t4118650224 ** get_address_of_CollectionMetaDataChanged_10() { return &___CollectionMetaDataChanged_10; }
	inline void set_CollectionMetaDataChanged_10(CollectionChangeEventHandler_t4118650224 * value)
	{
		___CollectionMetaDataChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_10), value);
	}
};

struct DataColumnCollection_t1299614139_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_7;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t131720724* ___TenColumns_8;

public:
	inline static int32_t get_offset_of_ColumnPrefix_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139_StaticFields, ___ColumnPrefix_7)); }
	inline String_t* get_ColumnPrefix_7() const { return ___ColumnPrefix_7; }
	inline String_t** get_address_of_ColumnPrefix_7() { return &___ColumnPrefix_7; }
	inline void set_ColumnPrefix_7(String_t* value)
	{
		___ColumnPrefix_7 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_7), value);
	}

	inline static int32_t get_offset_of_TenColumns_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t1299614139_StaticFields, ___TenColumns_8)); }
	inline StringU5BU5D_t131720724* get_TenColumns_8() const { return ___TenColumns_8; }
	inline StringU5BU5D_t131720724** get_address_of_TenColumns_8() { return &___TenColumns_8; }
	inline void set_TenColumns_8(StringU5BU5D_t131720724* value)
	{
		___TenColumns_8 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T1299614139_H
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
#ifndef DBPARAMETER_T2760051281_H
#define DBPARAMETER_T2760051281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t2760051281  : public MarshalByRefObject_t831623228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T2760051281_H
#ifndef OBJECTDATACONTAINER_T1336186559_H
#define OBJECTDATACONTAINER_T1336186559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.ObjectDataContainer
struct  ObjectDataContainer_t1336186559  : public DataContainer_t1993749639
{
public:
	// System.Object[] System.Data.Common.ObjectDataContainer::_values
	ObjectU5BU5D_t3168447156* ____values_3;

public:
	inline static int32_t get_offset_of__values_3() { return static_cast<int32_t>(offsetof(ObjectDataContainer_t1336186559, ____values_3)); }
	inline ObjectU5BU5D_t3168447156* get__values_3() const { return ____values_3; }
	inline ObjectU5BU5D_t3168447156** get_address_of__values_3() { return &____values_3; }
	inline void set__values_3(ObjectU5BU5D_t3168447156* value)
	{
		____values_3 = value;
		Il2CppCodeGenWriteBarrier((&____values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDATACONTAINER_T1336186559_H
#ifndef SQLBINARY_T1471720269_H
#define SQLBINARY_T1471720269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t1471720269 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t965135465* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t1471720269, ___value_0)); }
	inline ByteU5BU5D_t965135465* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t965135465** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t965135465* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t1471720269, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t1471720269_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t1471720269  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t1471720269_StaticFields, ___Null_2)); }
	inline SqlBinary_t1471720269  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t1471720269 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t1471720269  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t1471720269_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t1471720269_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBINARY_T1471720269_H
#ifndef DATAROWCOLLECTION_T1036525945_H
#define DATAROWCOLLECTION_T1036525945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t1036525945  : public InternalDataCollectionBase_t947607515
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t3635127758 * ___table_2;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t1036525945, ___table_2)); }
	inline DataTable_t3635127758 * get_table_2() const { return ___table_2; }
	inline DataTable_t3635127758 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t3635127758 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCOLLECTION_T1036525945_H
#ifndef PROPERTYCOLLECTION_T2915493498_H
#define PROPERTYCOLLECTION_T2915493498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.PropertyCollection
struct  PropertyCollection_t2915493498  : public Hashtable_t916193709
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCOLLECTION_T2915493498_H
#ifndef DBPARAMETERCOLLECTION_T2171227780_H
#define DBPARAMETERCOLLECTION_T2171227780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t2171227780  : public MarshalByRefObject_t831623228
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_T2171227780_H
#ifndef MERGEFAILEDEVENTARGS_T921577239_H
#define MERGEFAILEDEVENTARGS_T921577239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeFailedEventArgs
struct  MergeFailedEventArgs_t921577239  : public EventArgs_t2356377238
{
public:
	// System.Data.DataTable System.Data.MergeFailedEventArgs::data_table
	DataTable_t3635127758 * ___data_table_1;
	// System.String System.Data.MergeFailedEventArgs::conflict
	String_t* ___conflict_2;

public:
	inline static int32_t get_offset_of_data_table_1() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t921577239, ___data_table_1)); }
	inline DataTable_t3635127758 * get_data_table_1() const { return ___data_table_1; }
	inline DataTable_t3635127758 ** get_address_of_data_table_1() { return &___data_table_1; }
	inline void set_data_table_1(DataTable_t3635127758 * value)
	{
		___data_table_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_table_1), value);
	}

	inline static int32_t get_offset_of_conflict_2() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t921577239, ___conflict_2)); }
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
#endif // MERGEFAILEDEVENTARGS_T921577239_H
#ifndef DATATABLECOLLECTION_T741403882_H
#define DATATABLECOLLECTION_T741403882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t741403882  : public InternalDataCollectionBase_t947607515
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t1458640340 * ___dataSet_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t4118650224 * ___CollectionChanged_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t4118650224 * ___CollectionChanging_4;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t741403882, ___dataSet_2)); }
	inline DataSet_t1458640340 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t1458640340 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t1458640340 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t741403882, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t4118650224 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t4118650224 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t4118650224 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanging_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t741403882, ___CollectionChanging_4)); }
	inline CollectionChangeEventHandler_t4118650224 * get_CollectionChanging_4() const { return ___CollectionChanging_4; }
	inline CollectionChangeEventHandler_t4118650224 ** get_address_of_CollectionChanging_4() { return &___CollectionChanging_4; }
	inline void set_CollectionChanging_4(CollectionChangeEventHandler_t4118650224 * value)
	{
		___CollectionChanging_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanging_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLECOLLECTION_T741403882_H
#ifndef SQLBYTE_T1660025172_H
#define SQLBYTE_T1660025172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlByte
struct  SqlByte_t1660025172 
{
public:
	// System.Byte System.Data.SqlTypes.SqlByte::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlByte::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlByte_t1660025172, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlByte_t1660025172, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlByte_t1660025172_StaticFields
{
public:
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t1660025172  ___MaxValue_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t1660025172  ___MinValue_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t1660025172  ___Null_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t1660025172  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlByte_t1660025172_StaticFields, ___MaxValue_2)); }
	inline SqlByte_t1660025172  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlByte_t1660025172 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlByte_t1660025172  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlByte_t1660025172_StaticFields, ___MinValue_3)); }
	inline SqlByte_t1660025172  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlByte_t1660025172 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlByte_t1660025172  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlByte_t1660025172_StaticFields, ___Null_4)); }
	inline SqlByte_t1660025172  get_Null_4() const { return ___Null_4; }
	inline SqlByte_t1660025172 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlByte_t1660025172  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlByte_t1660025172_StaticFields, ___Zero_5)); }
	inline SqlByte_t1660025172  get_Zero_5() const { return ___Zero_5; }
	inline SqlByte_t1660025172 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlByte_t1660025172  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t1660025172_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t1660025172_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBYTE_T1660025172_H
#ifndef DATARELATIONCOLLECTION_T1356305404_H
#define DATARELATIONCOLLECTION_T1356305404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t1356305404  : public InternalDataCollectionBase_t947607515
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t109885884 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t4118650224 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t1356305404, ___inTransition_2)); }
	inline DataRelation_t109885884 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t109885884 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t109885884 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t1356305404, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t1356305404, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t4118650224 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t4118650224 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t4118650224 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T1356305404_H
#ifndef DECIMAL_T2189928058_H
#define DECIMAL_T2189928058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2189928058 
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
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t2189928058, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t2189928058, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t2189928058, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t2189928058, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t2189928058_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2189928058  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2189928058  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2189928058  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2189928058  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t2189928058  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2189928058  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2189928058_StaticFields, ___MinValue_0)); }
	inline Decimal_t2189928058  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2189928058 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2189928058  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2189928058_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2189928058  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2189928058 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2189928058  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2189928058_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2189928058  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2189928058 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2189928058  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2189928058_StaticFields, ___One_3)); }
	inline Decimal_t2189928058  get_One_3() const { return ___One_3; }
	inline Decimal_t2189928058 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2189928058  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t2189928058_StaticFields, ___Zero_4)); }
	inline Decimal_t2189928058  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t2189928058 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t2189928058  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t2189928058_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t2189928058  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t2189928058 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t2189928058  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2189928058_H
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
#ifndef TIMESPAN_T41303212_H
#define TIMESPAN_T41303212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t41303212 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t41303212, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t41303212_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t41303212  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t41303212  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t41303212  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t41303212_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t41303212  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t41303212 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t41303212  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t41303212_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t41303212  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t41303212 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t41303212  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t41303212_StaticFields, ___Zero_2)); }
	inline TimeSpan_t41303212  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t41303212 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t41303212  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T41303212_H
#ifndef SQLDECIMAL_T2491762523_H
#define SQLDECIMAL_T2491762523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDecimal
struct  SqlDecimal_t2491762523 
{
public:
	// System.Int32[] System.Data.SqlTypes.SqlDecimal::value
	Int32U5BU5D_t1664692557* ___value_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::precision
	uint8_t ___precision_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::scale
	uint8_t ___scale_2;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::positive
	bool ___positive_3;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::notNull
	bool ___notNull_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523, ___value_0)); }
	inline Int32U5BU5D_t1664692557* get_value_0() const { return ___value_0; }
	inline Int32U5BU5D_t1664692557** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Int32U5BU5D_t1664692557* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523, ___precision_1)); }
	inline uint8_t get_precision_1() const { return ___precision_1; }
	inline uint8_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(uint8_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523, ___scale_2)); }
	inline uint8_t get_scale_2() const { return ___scale_2; }
	inline uint8_t* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(uint8_t value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523, ___positive_3)); }
	inline bool get_positive_3() const { return ___positive_3; }
	inline bool* get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(bool value)
	{
		___positive_3 = value;
	}

	inline static int32_t get_offset_of_notNull_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523, ___notNull_4)); }
	inline bool get_notNull_4() const { return ___notNull_4; }
	inline bool* get_address_of_notNull_4() { return &___notNull_4; }
	inline void set_notNull_4(bool value)
	{
		___notNull_4 = value;
	}
};

struct SqlDecimal_t2491762523_StaticFields
{
public:
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::constantsDecadeInt32Factors
	UInt32U5BU5D_t1303042751* ___constantsDecadeInt32Factors_5;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_6;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_7;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t2491762523  ___MaxValue_8;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t2491762523  ___MinValue_9;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t2491762523  ___Null_10;

public:
	inline static int32_t get_offset_of_constantsDecadeInt32Factors_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523_StaticFields, ___constantsDecadeInt32Factors_5)); }
	inline UInt32U5BU5D_t1303042751* get_constantsDecadeInt32Factors_5() const { return ___constantsDecadeInt32Factors_5; }
	inline UInt32U5BU5D_t1303042751** get_address_of_constantsDecadeInt32Factors_5() { return &___constantsDecadeInt32Factors_5; }
	inline void set_constantsDecadeInt32Factors_5(UInt32U5BU5D_t1303042751* value)
	{
		___constantsDecadeInt32Factors_5 = value;
		Il2CppCodeGenWriteBarrier((&___constantsDecadeInt32Factors_5), value);
	}

	inline static int32_t get_offset_of_MaxPrecision_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523_StaticFields, ___MaxPrecision_6)); }
	inline uint8_t get_MaxPrecision_6() const { return ___MaxPrecision_6; }
	inline uint8_t* get_address_of_MaxPrecision_6() { return &___MaxPrecision_6; }
	inline void set_MaxPrecision_6(uint8_t value)
	{
		___MaxPrecision_6 = value;
	}

	inline static int32_t get_offset_of_MaxScale_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523_StaticFields, ___MaxScale_7)); }
	inline uint8_t get_MaxScale_7() const { return ___MaxScale_7; }
	inline uint8_t* get_address_of_MaxScale_7() { return &___MaxScale_7; }
	inline void set_MaxScale_7(uint8_t value)
	{
		___MaxScale_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523_StaticFields, ___MaxValue_8)); }
	inline SqlDecimal_t2491762523  get_MaxValue_8() const { return ___MaxValue_8; }
	inline SqlDecimal_t2491762523 * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(SqlDecimal_t2491762523  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523_StaticFields, ___MinValue_9)); }
	inline SqlDecimal_t2491762523  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlDecimal_t2491762523 * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlDecimal_t2491762523  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_Null_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t2491762523_StaticFields, ___Null_10)); }
	inline SqlDecimal_t2491762523  get_Null_10() const { return ___Null_10; }
	inline SqlDecimal_t2491762523 * get_address_of_Null_10() { return &___Null_10; }
	inline void set_Null_10(SqlDecimal_t2491762523  value)
	{
		___Null_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t2491762523_marshaled_pinvoke
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t2491762523_marshaled_com
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
#endif // SQLDECIMAL_T2491762523_H
#ifndef SQLDOUBLE_T1943456518_H
#define SQLDOUBLE_T1943456518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDouble
struct  SqlDouble_t1943456518 
{
public:
	// System.Double System.Data.SqlTypes.SqlDouble::value
	double ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDouble::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDouble_t1943456518, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDouble_t1943456518, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDouble_t1943456518_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t1943456518  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t1943456518  ___MinValue_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t1943456518  ___Null_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t1943456518  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDouble_t1943456518_StaticFields, ___MaxValue_2)); }
	inline SqlDouble_t1943456518  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDouble_t1943456518 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDouble_t1943456518  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDouble_t1943456518_StaticFields, ___MinValue_3)); }
	inline SqlDouble_t1943456518  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDouble_t1943456518 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDouble_t1943456518  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDouble_t1943456518_StaticFields, ___Null_4)); }
	inline SqlDouble_t1943456518  get_Null_4() const { return ___Null_4; }
	inline SqlDouble_t1943456518 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDouble_t1943456518  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlDouble_t1943456518_StaticFields, ___Zero_5)); }
	inline SqlDouble_t1943456518  get_Zero_5() const { return ___Zero_5; }
	inline SqlDouble_t1943456518 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlDouble_t1943456518  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t1943456518_marshaled_pinvoke
{
	double ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t1943456518_marshaled_com
{
	double ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDOUBLE_T1943456518_H
#ifndef SQLINT16_T1302670922_H
#define SQLINT16_T1302670922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt16
struct  SqlInt16_t1302670922 
{
public:
	// System.Int16 System.Data.SqlTypes.SqlInt16::value
	int16_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt16::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt16_t1302670922, ___value_0)); }
	inline int16_t get_value_0() const { return ___value_0; }
	inline int16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt16_t1302670922, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt16_t1302670922_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t1302670922  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t1302670922  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t1302670922  ___Null_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t1302670922  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt16_t1302670922_StaticFields, ___MaxValue_2)); }
	inline SqlInt16_t1302670922  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt16_t1302670922 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt16_t1302670922  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt16_t1302670922_StaticFields, ___MinValue_3)); }
	inline SqlInt16_t1302670922  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt16_t1302670922 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt16_t1302670922  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt16_t1302670922_StaticFields, ___Null_4)); }
	inline SqlInt16_t1302670922  get_Null_4() const { return ___Null_4; }
	inline SqlInt16_t1302670922 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt16_t1302670922  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt16_t1302670922_StaticFields, ___Zero_5)); }
	inline SqlInt16_t1302670922  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt16_t1302670922 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt16_t1302670922  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t1302670922_marshaled_pinvoke
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t1302670922_marshaled_com
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT16_T1302670922_H
#ifndef SQLINT32_T432116418_H
#define SQLINT32_T432116418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt32
struct  SqlInt32_t432116418 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt32::value
	int32_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt32::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt32_t432116418, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt32_t432116418, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt32_t432116418_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t432116418  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t432116418  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t432116418  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t432116418  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt32_t432116418_StaticFields, ___MaxValue_2)); }
	inline SqlInt32_t432116418  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt32_t432116418 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt32_t432116418  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt32_t432116418_StaticFields, ___MinValue_3)); }
	inline SqlInt32_t432116418  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt32_t432116418 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt32_t432116418  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t432116418_StaticFields, ___Null_4)); }
	inline SqlInt32_t432116418  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t432116418 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t432116418  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t432116418_StaticFields, ___Zero_5)); }
	inline SqlInt32_t432116418  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t432116418 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t432116418  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t432116418_marshaled_pinvoke
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t432116418_marshaled_com
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT32_T432116418_H
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
#ifndef SQLINT64_T3651778849_H
#define SQLINT64_T3651778849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt64
struct  SqlInt64_t3651778849 
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::value
	int64_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt64::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt64_t3651778849, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt64_t3651778849, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt64_t3651778849_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t3651778849  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t3651778849  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t3651778849  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t3651778849  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt64_t3651778849_StaticFields, ___MaxValue_2)); }
	inline SqlInt64_t3651778849  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt64_t3651778849 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt64_t3651778849  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt64_t3651778849_StaticFields, ___MinValue_3)); }
	inline SqlInt64_t3651778849  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt64_t3651778849 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt64_t3651778849  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_t3651778849_StaticFields, ___Null_4)); }
	inline SqlInt64_t3651778849  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_t3651778849 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_t3651778849  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_t3651778849_StaticFields, ___Zero_5)); }
	inline SqlInt64_t3651778849  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_t3651778849 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_t3651778849  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3651778849_marshaled_pinvoke
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t3651778849_marshaled_com
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT64_T3651778849_H
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
#ifndef DATATABLEMAPPING_T1989415203_H
#define DATATABLEMAPPING_T1989415203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMapping
struct  DataTableMapping_t1989415203  : public MarshalByRefObject_t831623228
{
public:
	// System.String System.Data.Common.DataTableMapping::sourceTable
	String_t* ___sourceTable_1;
	// System.String System.Data.Common.DataTableMapping::dataSetTable
	String_t* ___dataSetTable_2;
	// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::columnMappings
	DataColumnMappingCollection_t2189401296 * ___columnMappings_3;

public:
	inline static int32_t get_offset_of_sourceTable_1() { return static_cast<int32_t>(offsetof(DataTableMapping_t1989415203, ___sourceTable_1)); }
	inline String_t* get_sourceTable_1() const { return ___sourceTable_1; }
	inline String_t** get_address_of_sourceTable_1() { return &___sourceTable_1; }
	inline void set_sourceTable_1(String_t* value)
	{
		___sourceTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTable_1), value);
	}

	inline static int32_t get_offset_of_dataSetTable_2() { return static_cast<int32_t>(offsetof(DataTableMapping_t1989415203, ___dataSetTable_2)); }
	inline String_t* get_dataSetTable_2() const { return ___dataSetTable_2; }
	inline String_t** get_address_of_dataSetTable_2() { return &___dataSetTable_2; }
	inline void set_dataSetTable_2(String_t* value)
	{
		___dataSetTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTable_2), value);
	}

	inline static int32_t get_offset_of_columnMappings_3() { return static_cast<int32_t>(offsetof(DataTableMapping_t1989415203, ___columnMappings_3)); }
	inline DataColumnMappingCollection_t2189401296 * get_columnMappings_3() const { return ___columnMappings_3; }
	inline DataColumnMappingCollection_t2189401296 ** get_address_of_columnMappings_3() { return &___columnMappings_3; }
	inline void set_columnMappings_3(DataColumnMappingCollection_t2189401296 * value)
	{
		___columnMappings_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnMappings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPING_T1989415203_H
#ifndef DATATABLENEWROWEVENTARGS_T2838097722_H
#define DATATABLENEWROWEVENTARGS_T2838097722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableNewRowEventArgs
struct  DataTableNewRowEventArgs_t2838097722  : public EventArgs_t2356377238
{
public:
	// System.Data.DataRow System.Data.DataTableNewRowEventArgs::_row
	DataRow_t452116239 * ____row_1;

public:
	inline static int32_t get_offset_of__row_1() { return static_cast<int32_t>(offsetof(DataTableNewRowEventArgs_t2838097722, ____row_1)); }
	inline DataRow_t452116239 * get__row_1() const { return ____row_1; }
	inline DataRow_t452116239 ** get_address_of__row_1() { return &____row_1; }
	inline void set__row_1(DataRow_t452116239 * value)
	{
		____row_1 = value;
		Il2CppCodeGenWriteBarrier((&____row_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLENEWROWEVENTARGS_T2838097722_H
#ifndef DATATABLEMAPPINGCOLLECTION_T1825994462_H
#define DATATABLEMAPPINGCOLLECTION_T1825994462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMappingCollection
struct  DataTableMappingCollection_t1825994462  : public MarshalByRefObject_t831623228
{
public:
	// System.Collections.ArrayList System.Data.Common.DataTableMappingCollection::mappings
	ArrayList_t3867410345 * ___mappings_1;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::sourceTables
	Hashtable_t916193709 * ___sourceTables_2;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::dataSetTables
	Hashtable_t916193709 * ___dataSetTables_3;

public:
	inline static int32_t get_offset_of_mappings_1() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t1825994462, ___mappings_1)); }
	inline ArrayList_t3867410345 * get_mappings_1() const { return ___mappings_1; }
	inline ArrayList_t3867410345 ** get_address_of_mappings_1() { return &___mappings_1; }
	inline void set_mappings_1(ArrayList_t3867410345 * value)
	{
		___mappings_1 = value;
		Il2CppCodeGenWriteBarrier((&___mappings_1), value);
	}

	inline static int32_t get_offset_of_sourceTables_2() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t1825994462, ___sourceTables_2)); }
	inline Hashtable_t916193709 * get_sourceTables_2() const { return ___sourceTables_2; }
	inline Hashtable_t916193709 ** get_address_of_sourceTables_2() { return &___sourceTables_2; }
	inline void set_sourceTables_2(Hashtable_t916193709 * value)
	{
		___sourceTables_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTables_2), value);
	}

	inline static int32_t get_offset_of_dataSetTables_3() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t1825994462, ___dataSetTables_3)); }
	inline Hashtable_t916193709 * get_dataSetTables_3() const { return ___dataSetTables_3; }
	inline Hashtable_t916193709 ** get_address_of_dataSetTables_3() { return &___dataSetTables_3; }
	inline void set_dataSetTables_3(Hashtable_t916193709 * value)
	{
		___dataSetTables_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTables_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPINGCOLLECTION_T1825994462_H
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
#ifndef SQLBOOLEAN_T2944927557_H
#define SQLBOOLEAN_T2944927557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t2944927557 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t2944927557, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t2944927557, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t2944927557_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t2944927557  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t2944927557  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t2944927557  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t2944927557  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t2944927557  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t2944927557_StaticFields, ___False_2)); }
	inline SqlBoolean_t2944927557  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t2944927557 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t2944927557  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t2944927557_StaticFields, ___Null_3)); }
	inline SqlBoolean_t2944927557  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t2944927557 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t2944927557  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t2944927557_StaticFields, ___One_4)); }
	inline SqlBoolean_t2944927557  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t2944927557 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t2944927557  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t2944927557_StaticFields, ___True_5)); }
	inline SqlBoolean_t2944927557  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t2944927557 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t2944927557  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t2944927557_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t2944927557  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t2944927557 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t2944927557  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t2944927557_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t2944927557_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBOOLEAN_T2944927557_H
#ifndef SQLSINGLE_T4229738902_H
#define SQLSINGLE_T4229738902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlSingle
struct  SqlSingle_t4229738902 
{
public:
	// System.Single System.Data.SqlTypes.SqlSingle::value
	float ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlSingle::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlSingle_t4229738902, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlSingle_t4229738902, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlSingle_t4229738902_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t4229738902  ___MaxValue_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t4229738902  ___MinValue_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t4229738902  ___Null_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t4229738902  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlSingle_t4229738902_StaticFields, ___MaxValue_2)); }
	inline SqlSingle_t4229738902  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlSingle_t4229738902 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlSingle_t4229738902  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlSingle_t4229738902_StaticFields, ___MinValue_3)); }
	inline SqlSingle_t4229738902  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlSingle_t4229738902 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlSingle_t4229738902  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlSingle_t4229738902_StaticFields, ___Null_4)); }
	inline SqlSingle_t4229738902  get_Null_4() const { return ___Null_4; }
	inline SqlSingle_t4229738902 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlSingle_t4229738902  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlSingle_t4229738902_StaticFields, ___Zero_5)); }
	inline SqlSingle_t4229738902  get_Zero_5() const { return ___Zero_5; }
	inline SqlSingle_t4229738902 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlSingle_t4229738902  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t4229738902_marshaled_pinvoke
{
	float ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t4229738902_marshaled_com
{
	float ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLSINGLE_T4229738902_H
#ifndef SERIALIZATIONFORMAT_T3071083366_H
#define SERIALIZATIONFORMAT_T3071083366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SerializationFormat
struct  SerializationFormat_t3071083366 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationFormat_t3071083366, ___value___1)); }
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
#endif // SERIALIZATIONFORMAT_T3071083366_H
#ifndef DECIMALDATACONTAINER_T2162203914_H
#define DECIMALDATACONTAINER_T2162203914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DecimalDataContainer
struct  DecimalDataContainer_t2162203914  : public ObjectDataContainer_t1336186559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALDATACONTAINER_T2162203914_H
#ifndef DATETIMEKIND_T886692576_H
#define DATETIMEKIND_T886692576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t886692576 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t886692576, ___value___1)); }
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
#endif // DATETIMEKIND_T886692576_H
#ifndef MISSINGSCHEMAACTION_T3639249140_H
#define MISSINGSCHEMAACTION_T3639249140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingSchemaAction
struct  MissingSchemaAction_t3639249140 
{
public:
	// System.Int32 System.Data.MissingSchemaAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MissingSchemaAction_t3639249140, ___value___1)); }
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
#endif // MISSINGSCHEMAACTION_T3639249140_H
#ifndef PARAMETERDIRECTION_T367079481_H
#define PARAMETERDIRECTION_T367079481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ParameterDirection
struct  ParameterDirection_t367079481 
{
public:
	// System.Int32 System.Data.ParameterDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterDirection_t367079481, ___value___1)); }
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
#endif // PARAMETERDIRECTION_T367079481_H
#ifndef MAPPINGTYPE_T3106630495_H
#define MAPPINGTYPE_T3106630495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t3106630495 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t3106630495, ___value___1)); }
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
#endif // MAPPINGTYPE_T3106630495_H
#ifndef RELATIONSHIPCONVERTER_T3017912644_H
#define RELATIONSHIPCONVERTER_T3017912644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RelationshipConverter
struct  RelationshipConverter_t3017912644  : public ExpandableObjectConverter_t1805364312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIONSHIPCONVERTER_T3017912644_H
#ifndef DBCONNECTION_T3849521936_H
#define DBCONNECTION_T3849521936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_t3849521936  : public Component_t1401598189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_T3849521936_H
#ifndef RESDESCRIPTIONATTRIBUTE_T4014296389_H
#define RESDESCRIPTIONATTRIBUTE_T4014296389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ResDescriptionAttribute
struct  ResDescriptionAttribute_t4014296389  : public DescriptionAttribute_t3890337366
{
public:
	// System.String System.Data.ResDescriptionAttribute::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(ResDescriptionAttribute_t4014296389, ___description_2)); }
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
#endif // RESDESCRIPTIONATTRIBUTE_T4014296389_H
#ifndef DATAADAPTER_T2129656625_H
#define DATAADAPTER_T2129656625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t2129656625  : public Component_t1401598189
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t1825994462 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t2129656625, ___tableMappings_4)); }
	inline DataTableMappingCollection_t1825994462 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t1825994462 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t1825994462 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier((&___tableMappings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAADAPTER_T2129656625_H
#ifndef DBCOMMAND_T14897139_H
#define DBCOMMAND_T14897139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t14897139  : public Component_t1401598189
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T14897139_H
#ifndef STRINGDATACONTAINER_T600914167_H
#define STRINGDATACONTAINER_T600914167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.StringDataContainer
struct  StringDataContainer_t600914167  : public ObjectDataContainer_t1336186559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDATACONTAINER_T600914167_H
#ifndef RULE_T2884472758_H
#define RULE_T2884472758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Rule
struct  Rule_t2884472758 
{
public:
	// System.Int32 System.Data.Rule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Rule_t2884472758, ___value___1)); }
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
#endif // RULE_T2884472758_H
#ifndef DATETIMEDATACONTAINER_T2857809717_H
#define DATETIMEDATACONTAINER_T2857809717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DateTimeDataContainer
struct  DateTimeDataContainer_t2857809717  : public ObjectDataContainer_t1336186559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEDATACONTAINER_T2857809717_H
#ifndef STORAGESTATE_T2502329883_H
#define STORAGESTATE_T2502329883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.StorageState
struct  StorageState_t2502329883 
{
public:
	// System.Int32 System.Data.SqlTypes.StorageState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageState_t2502329883, ___value___1)); }
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
#endif // STORAGESTATE_T2502329883_H
#ifndef DATAEXCEPTION_T1004869275_H
#define DATAEXCEPTION_T1004869275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataException
struct  DataException_t1004869275  : public SystemException_t2446273261
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAEXCEPTION_T1004869275_H
#ifndef CONSTRAINTCONVERTER_T1210313141_H
#define CONSTRAINTCONVERTER_T1210313141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintConverter
struct  ConstraintConverter_t1210313141  : public ExpandableObjectConverter_t1805364312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCONVERTER_T1210313141_H
#ifndef DATASETRELATIONCOLLECTION_T342012314_H
#define DATASETRELATIONCOLLECTION_T342012314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t342012314  : public DataRelationCollection_t1356305404
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t1458640340 * ___dataSet_5;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t342012314, ___dataSet_5)); }
	inline DataSet_t1458640340 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t1458640340 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t1458640340 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETRELATIONCOLLECTION_T342012314_H
#ifndef DATATABLERELATIONCOLLECTION_T2416185790_H
#define DATATABLERELATIONCOLLECTION_T2416185790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t2416185790  : public DataRelationCollection_t1356305404
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t3635127758 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t2416185790, ___dataTable_5)); }
	inline DataTable_t3635127758 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t3635127758 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t3635127758 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLERELATIONCOLLECTION_T2416185790_H
#ifndef COMMANDTYPE_T2064015918_H
#define COMMANDTYPE_T2064015918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t2064015918 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t2064015918, ___value___1)); }
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
#endif // COMMANDTYPE_T2064015918_H
#ifndef DATAROWACTION_T1940243986_H
#define DATAROWACTION_T1940243986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_t1940243986 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowAction_t1940243986, ___value___1)); }
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
#endif // DATAROWACTION_T1940243986_H
#ifndef COLUMNTYPECONVERTER_T4106317843_H
#define COLUMNTYPECONVERTER_T4106317843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ColumnTypeConverter
struct  ColumnTypeConverter_t4106317843  : public ExpandableObjectConverter_t1805364312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNTYPECONVERTER_T4106317843_H
#ifndef ACCEPTREJECTRULE_T1791081808_H
#define ACCEPTREJECTRULE_T1791081808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t1791081808 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t1791081808, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T1791081808_H
#ifndef DATAROWSTATE_T960671972_H
#define DATAROWSTATE_T960671972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowState
struct  DataRowState_t960671972 
{
public:
	// System.Int32 System.Data.DataRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowState_t960671972, ___value___1)); }
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
#endif // DATAROWSTATE_T960671972_H
#ifndef DATAROWVERSION_T3285579255_H
#define DATAROWVERSION_T3285579255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowVersion
struct  DataRowVersion_t3285579255 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowVersion_t3285579255, ___value___1)); }
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
#endif // DATAROWVERSION_T3285579255_H
#ifndef DATACATEGORYATTRIBUTE_T3543178724_H
#define DATACATEGORYATTRIBUTE_T3543178724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataCategoryAttribute
struct  DataCategoryAttribute_t3543178724  : public CategoryAttribute_t1613873256
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACATEGORYATTRIBUTE_T3543178724_H
#ifndef DATASETDATETIME_T2383810211_H
#define DATASETDATETIME_T2383810211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t2383810211 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t2383810211, ___value___1)); }
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
#endif // DATASETDATETIME_T2383810211_H
#ifndef DATAVIEWROWSTATE_T3464108297_H
#define DATAVIEWROWSTATE_T3464108297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataViewRowState
struct  DataViewRowState_t3464108297 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataViewRowState_t3464108297, ___value___1)); }
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
#endif // DATAVIEWROWSTATE_T3464108297_H
#ifndef SQLMONEY_T885764003_H
#define SQLMONEY_T885764003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t885764003 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t2189928058  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t885764003, ___value_0)); }
	inline Decimal_t2189928058  get_value_0() const { return ___value_0; }
	inline Decimal_t2189928058 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t2189928058  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t885764003, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t885764003_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t885764003  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t885764003  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t885764003  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t885764003  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t4261531764 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t885764003_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t885764003  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t885764003 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t885764003  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t885764003_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t885764003  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t885764003 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t885764003  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t885764003_StaticFields, ___Null_4)); }
	inline SqlMoney_t885764003  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t885764003 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t885764003  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t885764003_StaticFields, ___Zero_5)); }
	inline SqlMoney_t885764003  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t885764003 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t885764003  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t885764003_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t4261531764 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t4261531764 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t4261531764 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier((&___MoneyFormat_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t885764003_marshaled_pinvoke
{
	Decimal_t2189928058  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t885764003_marshaled_com
{
	Decimal_t2189928058  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLMONEY_T885764003_H
#ifndef DEFAULTVALUETYPECONVERTER_T2463241837_H
#define DEFAULTVALUETYPECONVERTER_T2463241837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DefaultValueTypeConverter
struct  DefaultValueTypeConverter_t2463241837  : public ExpandableObjectConverter_t1805364312
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUETYPECONVERTER_T2463241837_H
#ifndef SQLGUID_T3219339948_H
#define SQLGUID_T3219339948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t3219339948 
{
public:
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlGuid_t3219339948, ___value_0)); }
	inline Guid_t  get_value_0() const { return ___value_0; }
	inline Guid_t * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Guid_t  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlGuid_t3219339948, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlGuid_t3219339948_StaticFields
{
public:
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t3219339948  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlGuid_t3219339948_StaticFields, ___Null_2)); }
	inline SqlGuid_t3219339948  get_Null_2() const { return ___Null_2; }
	inline SqlGuid_t3219339948 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlGuid_t3219339948  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t3219339948_marshaled_pinvoke
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t3219339948_marshaled_com
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLGUID_T3219339948_H
#ifndef SQLCOMPAREOPTIONS_T1470131883_H
#define SQLCOMPAREOPTIONS_T1470131883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlCompareOptions
struct  SqlCompareOptions_t1470131883 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SqlCompareOptions_t1470131883, ___value___1)); }
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
#endif // SQLCOMPAREOPTIONS_T1470131883_H
#ifndef SQLTYPEEXCEPTION_T2868840713_H
#define SQLTYPEEXCEPTION_T2868840713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTypeException
struct  SqlTypeException_t2868840713  : public SystemException_t2446273261
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTYPEEXCEPTION_T2868840713_H
#ifndef CONSTRAINTEXCEPTION_T3517661818_H
#define CONSTRAINTEXCEPTION_T3517661818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintException
struct  ConstraintException_t3517661818  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTEXCEPTION_T3517661818_H
#ifndef SQLTRUNCATEEXCEPTION_T958753277_H
#define SQLTRUNCATEEXCEPTION_T958753277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTruncateException
struct  SqlTruncateException_t958753277  : public SqlTypeException_t2868840713
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTRUNCATEEXCEPTION_T958753277_H
#ifndef SQLSTRING_T546319942_H
#define SQLSTRING_T546319942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlString
struct  SqlString_t546319942 
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
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlString_t546319942, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlString_t546319942, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t546319942, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_compareOptions_3() { return static_cast<int32_t>(offsetof(SqlString_t546319942, ___compareOptions_3)); }
	inline int32_t get_compareOptions_3() const { return ___compareOptions_3; }
	inline int32_t* get_address_of_compareOptions_3() { return &___compareOptions_3; }
	inline void set_compareOptions_3(int32_t value)
	{
		___compareOptions_3 = value;
	}
};

struct SqlString_t546319942_StaticFields
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
	SqlString_t546319942  ___Null_9;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlString::DecimalFormat
	NumberFormatInfo_t4261531764 * ___DecimalFormat_10;

public:
	inline static int32_t get_offset_of_BinarySort_4() { return static_cast<int32_t>(offsetof(SqlString_t546319942_StaticFields, ___BinarySort_4)); }
	inline int32_t get_BinarySort_4() const { return ___BinarySort_4; }
	inline int32_t* get_address_of_BinarySort_4() { return &___BinarySort_4; }
	inline void set_BinarySort_4(int32_t value)
	{
		___BinarySort_4 = value;
	}

	inline static int32_t get_offset_of_IgnoreCase_5() { return static_cast<int32_t>(offsetof(SqlString_t546319942_StaticFields, ___IgnoreCase_5)); }
	inline int32_t get_IgnoreCase_5() const { return ___IgnoreCase_5; }
	inline int32_t* get_address_of_IgnoreCase_5() { return &___IgnoreCase_5; }
	inline void set_IgnoreCase_5(int32_t value)
	{
		___IgnoreCase_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_6() { return static_cast<int32_t>(offsetof(SqlString_t546319942_StaticFields, ___IgnoreKanaType_6)); }
	inline int32_t get_IgnoreKanaType_6() const { return ___IgnoreKanaType_6; }
	inline int32_t* get_address_of_IgnoreKanaType_6() { return &___IgnoreKanaType_6; }
	inline void set_IgnoreKanaType_6(int32_t value)
	{
		___IgnoreKanaType_6 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_7() { return static_cast<int32_t>(offsetof(SqlString_t546319942_StaticFields, ___IgnoreNonSpace_7)); }
	inline int32_t get_IgnoreNonSpace_7() const { return ___IgnoreNonSpace_7; }
	inline int32_t* get_address_of_IgnoreNonSpace_7() { return &___IgnoreNonSpace_7; }
	inline void set_IgnoreNonSpace_7(int32_t value)
	{
		___IgnoreNonSpace_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t546319942_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_Null_9() { return static_cast<int32_t>(offsetof(SqlString_t546319942_StaticFields, ___Null_9)); }
	inline SqlString_t546319942  get_Null_9() const { return ___Null_9; }
	inline SqlString_t546319942 * get_address_of_Null_9() { return &___Null_9; }
	inline void set_Null_9(SqlString_t546319942  value)
	{
		___Null_9 = value;
	}

	inline static int32_t get_offset_of_DecimalFormat_10() { return static_cast<int32_t>(offsetof(SqlString_t546319942_StaticFields, ___DecimalFormat_10)); }
	inline NumberFormatInfo_t4261531764 * get_DecimalFormat_10() const { return ___DecimalFormat_10; }
	inline NumberFormatInfo_t4261531764 ** get_address_of_DecimalFormat_10() { return &___DecimalFormat_10; }
	inline void set_DecimalFormat_10(NumberFormatInfo_t4261531764 * value)
	{
		___DecimalFormat_10 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalFormat_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t546319942_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t546319942_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
#endif // SQLSTRING_T546319942_H
#ifndef SQLNULLVALUEEXCEPTION_T3857224136_H
#define SQLNULLVALUEEXCEPTION_T3857224136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlNullValueException
struct  SqlNullValueException_t3857224136  : public SqlTypeException_t2868840713
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLNULLVALUEEXCEPTION_T3857224136_H
#ifndef SQLCHARS_T3062070285_H
#define SQLCHARS_T3062070285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlChars
struct  SqlChars_t3062070285  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlChars::notNull
	bool ___notNull_0;
	// System.Char[] System.Data.SqlTypes.SqlChars::buffer
	CharU5BU5D_t3978811185* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlChars::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlChars_t3062070285, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlChars_t3062070285, ___buffer_1)); }
	inline CharU5BU5D_t3978811185* get_buffer_1() const { return ___buffer_1; }
	inline CharU5BU5D_t3978811185** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(CharU5BU5D_t3978811185* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlChars_t3062070285, ___storage_2)); }
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
#endif // SQLCHARS_T3062070285_H
#ifndef DATETIME_T2164202057_H
#define DATETIME_T2164202057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2164202057 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t41303212  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2164202057, ___ticks_0)); }
	inline TimeSpan_t41303212  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t41303212 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t41303212  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2164202057, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2164202057_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2164202057  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2164202057  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t131720724* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t131720724* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t131720724* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t131720724* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t131720724* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t131720724* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t131720724* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1664692557* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1664692557* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2164202057  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2164202057 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2164202057  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___MinValue_3)); }
	inline DateTime_t2164202057  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2164202057 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2164202057  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t131720724* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t131720724** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t131720724* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t131720724* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t131720724** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t131720724* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t131720724* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t131720724** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t131720724* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t131720724* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t131720724** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t131720724* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t131720724* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t131720724** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t131720724* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t131720724* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t131720724** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t131720724* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t131720724* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t131720724** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t131720724* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t1664692557* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t1664692557** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t1664692557* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t1664692557* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t1664692557** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t1664692557* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2164202057_StaticFields, ___last_now_14)); }
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
#endif // DATETIME_T2164202057_H
#ifndef DUPLICATENAMEEXCEPTION_T23106477_H
#define DUPLICATENAMEEXCEPTION_T23106477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DuplicateNameException
struct  DuplicateNameException_t23106477  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUPLICATENAMEEXCEPTION_T23106477_H
#ifndef KEY_T382600727_H
#define KEY_T382600727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Key
struct  Key_t382600727  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t3635127758 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t3739124042* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t3865748893* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	RuntimeObject* ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t452116239 * ____tmpRow_5;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Key_t382600727, ____table_0)); }
	inline DataTable_t3635127758 * get__table_0() const { return ____table_0; }
	inline DataTable_t3635127758 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t3635127758 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(Key_t382600727, ____columns_1)); }
	inline DataColumnU5BU5D_t3739124042* get__columns_1() const { return ____columns_1; }
	inline DataColumnU5BU5D_t3739124042** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnU5BU5D_t3739124042* value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((&____columns_1), value);
	}

	inline static int32_t get_offset_of__sortDirection_2() { return static_cast<int32_t>(offsetof(Key_t382600727, ____sortDirection_2)); }
	inline ListSortDirectionU5BU5D_t3865748893* get__sortDirection_2() const { return ____sortDirection_2; }
	inline ListSortDirectionU5BU5D_t3865748893** get_address_of__sortDirection_2() { return &____sortDirection_2; }
	inline void set__sortDirection_2(ListSortDirectionU5BU5D_t3865748893* value)
	{
		____sortDirection_2 = value;
		Il2CppCodeGenWriteBarrier((&____sortDirection_2), value);
	}

	inline static int32_t get_offset_of__rowStateFilter_3() { return static_cast<int32_t>(offsetof(Key_t382600727, ____rowStateFilter_3)); }
	inline int32_t get__rowStateFilter_3() const { return ____rowStateFilter_3; }
	inline int32_t* get_address_of__rowStateFilter_3() { return &____rowStateFilter_3; }
	inline void set__rowStateFilter_3(int32_t value)
	{
		____rowStateFilter_3 = value;
	}

	inline static int32_t get_offset_of__filter_4() { return static_cast<int32_t>(offsetof(Key_t382600727, ____filter_4)); }
	inline RuntimeObject* get__filter_4() const { return ____filter_4; }
	inline RuntimeObject** get_address_of__filter_4() { return &____filter_4; }
	inline void set__filter_4(RuntimeObject* value)
	{
		____filter_4 = value;
		Il2CppCodeGenWriteBarrier((&____filter_4), value);
	}

	inline static int32_t get_offset_of__tmpRow_5() { return static_cast<int32_t>(offsetof(Key_t382600727, ____tmpRow_5)); }
	inline DataRow_t452116239 * get__tmpRow_5() const { return ____tmpRow_5; }
	inline DataRow_t452116239 ** get_address_of__tmpRow_5() { return &____tmpRow_5; }
	inline void set__tmpRow_5(DataRow_t452116239 * value)
	{
		____tmpRow_5 = value;
		Il2CppCodeGenWriteBarrier((&____tmpRow_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T382600727_H
#ifndef DATACOLUMN_T2659580843_H
#define DATACOLUMN_T2659580843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t2659580843  : public MarshalByValueComponent_t4052398083
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t3866233725 * ____eventHandlers_3;
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
	PropertyCollection_t2915493498 * ____extendedProperties_16;
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
	DataTable_t3635127758 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t1993749639 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;

public:
	inline static int32_t get_offset_of__eventHandlers_3() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____eventHandlers_3)); }
	inline EventHandlerList_t3866233725 * get__eventHandlers_3() const { return ____eventHandlers_3; }
	inline EventHandlerList_t3866233725 ** get_address_of__eventHandlers_3() { return &____eventHandlers_3; }
	inline void set__eventHandlers_3(EventHandlerList_t3866233725 * value)
	{
		____eventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_3), value);
	}

	inline static int32_t get_offset_of__allowDBNull_5() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____allowDBNull_5)); }
	inline bool get__allowDBNull_5() const { return ____allowDBNull_5; }
	inline bool* get_address_of__allowDBNull_5() { return &____allowDBNull_5; }
	inline void set__allowDBNull_5(bool value)
	{
		____allowDBNull_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_6() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____autoIncrement_6)); }
	inline bool get__autoIncrement_6() const { return ____autoIncrement_6; }
	inline bool* get_address_of__autoIncrement_6() { return &____autoIncrement_6; }
	inline void set__autoIncrement_6(bool value)
	{
		____autoIncrement_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_7() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____autoIncrementSeed_7)); }
	inline int64_t get__autoIncrementSeed_7() const { return ____autoIncrementSeed_7; }
	inline int64_t* get_address_of__autoIncrementSeed_7() { return &____autoIncrementSeed_7; }
	inline void set__autoIncrementSeed_7(int64_t value)
	{
		____autoIncrementSeed_7 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_8() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____autoIncrementStep_8)); }
	inline int64_t get__autoIncrementStep_8() const { return ____autoIncrementStep_8; }
	inline int64_t* get_address_of__autoIncrementStep_8() { return &____autoIncrementStep_8; }
	inline void set__autoIncrementStep_8(int64_t value)
	{
		____autoIncrementStep_8 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_9() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____nextAutoIncrementValue_9)); }
	inline int64_t get__nextAutoIncrementValue_9() const { return ____nextAutoIncrementValue_9; }
	inline int64_t* get_address_of__nextAutoIncrementValue_9() { return &____nextAutoIncrementValue_9; }
	inline void set__nextAutoIncrementValue_9(int64_t value)
	{
		____nextAutoIncrementValue_9 = value;
	}

	inline static int32_t get_offset_of__caption_10() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____caption_10)); }
	inline String_t* get__caption_10() const { return ____caption_10; }
	inline String_t** get_address_of__caption_10() { return &____caption_10; }
	inline void set__caption_10(String_t* value)
	{
		____caption_10 = value;
		Il2CppCodeGenWriteBarrier((&____caption_10), value);
	}

	inline static int32_t get_offset_of__columnMapping_11() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____columnMapping_11)); }
	inline int32_t get__columnMapping_11() const { return ____columnMapping_11; }
	inline int32_t* get_address_of__columnMapping_11() { return &____columnMapping_11; }
	inline void set__columnMapping_11(int32_t value)
	{
		____columnMapping_11 = value;
	}

	inline static int32_t get_offset_of__columnName_12() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____columnName_12)); }
	inline String_t* get__columnName_12() const { return ____columnName_12; }
	inline String_t** get_address_of__columnName_12() { return &____columnName_12; }
	inline void set__columnName_12(String_t* value)
	{
		____columnName_12 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_12), value);
	}

	inline static int32_t get_offset_of__defaultValue_13() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____defaultValue_13)); }
	inline RuntimeObject * get__defaultValue_13() const { return ____defaultValue_13; }
	inline RuntimeObject ** get_address_of__defaultValue_13() { return &____defaultValue_13; }
	inline void set__defaultValue_13(RuntimeObject * value)
	{
		____defaultValue_13 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_13), value);
	}

	inline static int32_t get_offset_of__expression_14() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____expression_14)); }
	inline String_t* get__expression_14() const { return ____expression_14; }
	inline String_t** get_address_of__expression_14() { return &____expression_14; }
	inline void set__expression_14(String_t* value)
	{
		____expression_14 = value;
		Il2CppCodeGenWriteBarrier((&____expression_14), value);
	}

	inline static int32_t get_offset_of__compiledExpression_15() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____compiledExpression_15)); }
	inline RuntimeObject* get__compiledExpression_15() const { return ____compiledExpression_15; }
	inline RuntimeObject** get_address_of__compiledExpression_15() { return &____compiledExpression_15; }
	inline void set__compiledExpression_15(RuntimeObject* value)
	{
		____compiledExpression_15 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_15), value);
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____extendedProperties_16)); }
	inline PropertyCollection_t2915493498 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t2915493498 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t2915493498 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__maxLength_17() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____maxLength_17)); }
	inline int32_t get__maxLength_17() const { return ____maxLength_17; }
	inline int32_t* get_address_of__maxLength_17() { return &____maxLength_17; }
	inline void set__maxLength_17(int32_t value)
	{
		____maxLength_17 = value;
	}

	inline static int32_t get_offset_of__nameSpace_18() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____nameSpace_18)); }
	inline String_t* get__nameSpace_18() const { return ____nameSpace_18; }
	inline String_t** get_address_of__nameSpace_18() { return &____nameSpace_18; }
	inline void set__nameSpace_18(String_t* value)
	{
		____nameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_18), value);
	}

	inline static int32_t get_offset_of__ordinal_19() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____ordinal_19)); }
	inline int32_t get__ordinal_19() const { return ____ordinal_19; }
	inline int32_t* get_address_of__ordinal_19() { return &____ordinal_19; }
	inline void set__ordinal_19(int32_t value)
	{
		____ordinal_19 = value;
	}

	inline static int32_t get_offset_of__prefix_20() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____prefix_20)); }
	inline String_t* get__prefix_20() const { return ____prefix_20; }
	inline String_t** get_address_of__prefix_20() { return &____prefix_20; }
	inline void set__prefix_20(String_t* value)
	{
		____prefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_20), value);
	}

	inline static int32_t get_offset_of__readOnly_21() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____readOnly_21)); }
	inline bool get__readOnly_21() const { return ____readOnly_21; }
	inline bool* get_address_of__readOnly_21() { return &____readOnly_21; }
	inline void set__readOnly_21(bool value)
	{
		____readOnly_21 = value;
	}

	inline static int32_t get_offset_of__table_22() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____table_22)); }
	inline DataTable_t3635127758 * get__table_22() const { return ____table_22; }
	inline DataTable_t3635127758 ** get_address_of__table_22() { return &____table_22; }
	inline void set__table_22(DataTable_t3635127758 * value)
	{
		____table_22 = value;
		Il2CppCodeGenWriteBarrier((&____table_22), value);
	}

	inline static int32_t get_offset_of__unique_23() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____unique_23)); }
	inline bool get__unique_23() const { return ____unique_23; }
	inline bool* get_address_of__unique_23() { return &____unique_23; }
	inline void set__unique_23(bool value)
	{
		____unique_23 = value;
	}

	inline static int32_t get_offset_of__dataContainer_24() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____dataContainer_24)); }
	inline DataContainer_t1993749639 * get__dataContainer_24() const { return ____dataContainer_24; }
	inline DataContainer_t1993749639 ** get_address_of__dataContainer_24() { return &____dataContainer_24; }
	inline void set__dataContainer_24(DataContainer_t1993749639 * value)
	{
		____dataContainer_24 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_24), value);
	}

	inline static int32_t get_offset_of__datetimeMode_25() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843, ____datetimeMode_25)); }
	inline int32_t get__datetimeMode_25() const { return ____datetimeMode_25; }
	inline int32_t* get_address_of__datetimeMode_25() { return &____datetimeMode_25; }
	inline void set__datetimeMode_25(int32_t value)
	{
		____datetimeMode_25 = value;
	}
};

struct DataColumn_t2659580843_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_4;

public:
	inline static int32_t get_offset_of__propertyChangedKey_4() { return static_cast<int32_t>(offsetof(DataColumn_t2659580843_StaticFields, ____propertyChangedKey_4)); }
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
#endif // DATACOLUMN_T2659580843_H
#ifndef FOREIGNKEYCONSTRAINT_T3475418834_H
#define FOREIGNKEYCONSTRAINT_T3475418834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ForeignKeyConstraint
struct  ForeignKeyConstraint_t3475418834  : public Constraint_t1574073444
{
public:
	// System.Data.UniqueConstraint System.Data.ForeignKeyConstraint::_parentUniqueConstraint
	UniqueConstraint_t613650809 * ____parentUniqueConstraint_8;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_parentColumns
	DataColumnU5BU5D_t3739124042* ____parentColumns_9;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_childColumns
	DataColumnU5BU5D_t3739124042* ____childColumns_10;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_deleteRule
	int32_t ____deleteRule_11;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_updateRule
	int32_t ____updateRule_12;
	// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::_acceptRejectRule
	int32_t ____acceptRejectRule_13;

public:
	inline static int32_t get_offset_of__parentUniqueConstraint_8() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3475418834, ____parentUniqueConstraint_8)); }
	inline UniqueConstraint_t613650809 * get__parentUniqueConstraint_8() const { return ____parentUniqueConstraint_8; }
	inline UniqueConstraint_t613650809 ** get_address_of__parentUniqueConstraint_8() { return &____parentUniqueConstraint_8; }
	inline void set__parentUniqueConstraint_8(UniqueConstraint_t613650809 * value)
	{
		____parentUniqueConstraint_8 = value;
		Il2CppCodeGenWriteBarrier((&____parentUniqueConstraint_8), value);
	}

	inline static int32_t get_offset_of__parentColumns_9() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3475418834, ____parentColumns_9)); }
	inline DataColumnU5BU5D_t3739124042* get__parentColumns_9() const { return ____parentColumns_9; }
	inline DataColumnU5BU5D_t3739124042** get_address_of__parentColumns_9() { return &____parentColumns_9; }
	inline void set__parentColumns_9(DataColumnU5BU5D_t3739124042* value)
	{
		____parentColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumns_9), value);
	}

	inline static int32_t get_offset_of__childColumns_10() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3475418834, ____childColumns_10)); }
	inline DataColumnU5BU5D_t3739124042* get__childColumns_10() const { return ____childColumns_10; }
	inline DataColumnU5BU5D_t3739124042** get_address_of__childColumns_10() { return &____childColumns_10; }
	inline void set__childColumns_10(DataColumnU5BU5D_t3739124042* value)
	{
		____childColumns_10 = value;
		Il2CppCodeGenWriteBarrier((&____childColumns_10), value);
	}

	inline static int32_t get_offset_of__deleteRule_11() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3475418834, ____deleteRule_11)); }
	inline int32_t get__deleteRule_11() const { return ____deleteRule_11; }
	inline int32_t* get_address_of__deleteRule_11() { return &____deleteRule_11; }
	inline void set__deleteRule_11(int32_t value)
	{
		____deleteRule_11 = value;
	}

	inline static int32_t get_offset_of__updateRule_12() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3475418834, ____updateRule_12)); }
	inline int32_t get__updateRule_12() const { return ____updateRule_12; }
	inline int32_t* get_address_of__updateRule_12() { return &____updateRule_12; }
	inline void set__updateRule_12(int32_t value)
	{
		____updateRule_12 = value;
	}

	inline static int32_t get_offset_of__acceptRejectRule_13() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t3475418834, ____acceptRejectRule_13)); }
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
#endif // FOREIGNKEYCONSTRAINT_T3475418834_H
#ifndef INROWCHANGINGEVENTEXCEPTION_T3717543135_H
#define INROWCHANGINGEVENTEXCEPTION_T3717543135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InRowChangingEventException
struct  InRowChangingEventException_t3717543135  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INROWCHANGINGEVENTEXCEPTION_T3717543135_H
#ifndef INVALIDCONSTRAINTEXCEPTION_T1435306249_H
#define INVALIDCONSTRAINTEXCEPTION_T1435306249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidConstraintException
struct  InvalidConstraintException_t1435306249  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCONSTRAINTEXCEPTION_T1435306249_H
#ifndef INVALIDEXPRESSIONEXCEPTION_T2622611904_H
#define INVALIDEXPRESSIONEXCEPTION_T2622611904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidExpressionException
struct  InvalidExpressionException_t2622611904  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDEXPRESSIONEXCEPTION_T2622611904_H
#ifndef DBDATAADAPTER_T2831582930_H
#define DBDATAADAPTER_T2831582930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t2831582930  : public DataAdapter_t2129656625
{
public:
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_selectCommand
	RuntimeObject* ____selectCommand_5;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_updateCommand
	RuntimeObject* ____updateCommand_6;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_deleteCommand
	RuntimeObject* ____deleteCommand_7;
	// System.Data.IDbCommand System.Data.Common.DbDataAdapter::_insertCommand
	RuntimeObject* ____insertCommand_8;

public:
	inline static int32_t get_offset_of__selectCommand_5() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2831582930, ____selectCommand_5)); }
	inline RuntimeObject* get__selectCommand_5() const { return ____selectCommand_5; }
	inline RuntimeObject** get_address_of__selectCommand_5() { return &____selectCommand_5; }
	inline void set__selectCommand_5(RuntimeObject* value)
	{
		____selectCommand_5 = value;
		Il2CppCodeGenWriteBarrier((&____selectCommand_5), value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2831582930, ____updateCommand_6)); }
	inline RuntimeObject* get__updateCommand_6() const { return ____updateCommand_6; }
	inline RuntimeObject** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(RuntimeObject* value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((&____updateCommand_6), value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2831582930, ____deleteCommand_7)); }
	inline RuntimeObject* get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline RuntimeObject** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(RuntimeObject* value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((&____deleteCommand_7), value);
	}

	inline static int32_t get_offset_of__insertCommand_8() { return static_cast<int32_t>(offsetof(DbDataAdapter_t2831582930, ____insertCommand_8)); }
	inline RuntimeObject* get__insertCommand_8() const { return ____insertCommand_8; }
	inline RuntimeObject** get_address_of__insertCommand_8() { return &____insertCommand_8; }
	inline void set__insertCommand_8(RuntimeObject* value)
	{
		____insertCommand_8 = value;
		Il2CppCodeGenWriteBarrier((&____insertCommand_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBDATAADAPTER_T2831582930_H
#ifndef MISSINGPRIMARYKEYEXCEPTION_T3257925256_H
#define MISSINGPRIMARYKEYEXCEPTION_T3257925256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingPrimaryKeyException
struct  MissingPrimaryKeyException_t3257925256  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGPRIMARYKEYEXCEPTION_T3257925256_H
#ifndef DATATABLE_T3635127758_H
#define DATATABLE_T3635127758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t3635127758  : public MarshalByValueComponent_t4052398083
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t1458640340 * ___dataSet_3;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_4;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t1299614139 * ____columnCollection_5;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t3770521360 * ____constraintCollection_6;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_7;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t2915493498 * ____extendedProperties_8;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t2266733137 * ____locale_9;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_10;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t1356305404 * ____childRelations_12;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t1356305404 * ____parentRelations_13;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_14;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t613650809 * ____primaryKeyConstraint_15;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t1036525945 * ____rows_16;
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
	DataRowBuilder_t3701569175 * ____rowBuilder_22;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t3867410345 * ____indexes_23;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t886332558 * ____recordCache_24;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_25;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_26;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_27;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t2032515041 * ____propertyDescriptorsCache_28;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t3739124042* ____latestPrimaryKeyCols_31;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t3812028374* ___empty_rows_32;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_33;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_34;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t532961492 * ___ColumnChanged_35;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t532961492 * ___ColumnChanging_36;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t2506713557 * ___RowChanged_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t2506713557 * ___RowChanging_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t2506713557 * ___RowDeleted_39;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t2506713557 * ___RowDeleting_40;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t3835313805 * ___TableNewRow_41;

public:
	inline static int32_t get_offset_of_dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___dataSet_3)); }
	inline DataSet_t1458640340 * get_dataSet_3() const { return ___dataSet_3; }
	inline DataSet_t1458640340 ** get_address_of_dataSet_3() { return &___dataSet_3; }
	inline void set_dataSet_3(DataSet_t1458640340 * value)
	{
		___dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_3), value);
	}

	inline static int32_t get_offset_of__caseSensitive_4() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____caseSensitive_4)); }
	inline bool get__caseSensitive_4() const { return ____caseSensitive_4; }
	inline bool* get_address_of__caseSensitive_4() { return &____caseSensitive_4; }
	inline void set__caseSensitive_4(bool value)
	{
		____caseSensitive_4 = value;
	}

	inline static int32_t get_offset_of__columnCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____columnCollection_5)); }
	inline DataColumnCollection_t1299614139 * get__columnCollection_5() const { return ____columnCollection_5; }
	inline DataColumnCollection_t1299614139 ** get_address_of__columnCollection_5() { return &____columnCollection_5; }
	inline void set__columnCollection_5(DataColumnCollection_t1299614139 * value)
	{
		____columnCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____columnCollection_5), value);
	}

	inline static int32_t get_offset_of__constraintCollection_6() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____constraintCollection_6)); }
	inline ConstraintCollection_t3770521360 * get__constraintCollection_6() const { return ____constraintCollection_6; }
	inline ConstraintCollection_t3770521360 ** get_address_of__constraintCollection_6() { return &____constraintCollection_6; }
	inline void set__constraintCollection_6(ConstraintCollection_t3770521360 * value)
	{
		____constraintCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_6), value);
	}

	inline static int32_t get_offset_of__displayExpression_7() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____displayExpression_7)); }
	inline String_t* get__displayExpression_7() const { return ____displayExpression_7; }
	inline String_t** get_address_of__displayExpression_7() { return &____displayExpression_7; }
	inline void set__displayExpression_7(String_t* value)
	{
		____displayExpression_7 = value;
		Il2CppCodeGenWriteBarrier((&____displayExpression_7), value);
	}

	inline static int32_t get_offset_of__extendedProperties_8() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____extendedProperties_8)); }
	inline PropertyCollection_t2915493498 * get__extendedProperties_8() const { return ____extendedProperties_8; }
	inline PropertyCollection_t2915493498 ** get_address_of__extendedProperties_8() { return &____extendedProperties_8; }
	inline void set__extendedProperties_8(PropertyCollection_t2915493498 * value)
	{
		____extendedProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_8), value);
	}

	inline static int32_t get_offset_of__locale_9() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____locale_9)); }
	inline CultureInfo_t2266733137 * get__locale_9() const { return ____locale_9; }
	inline CultureInfo_t2266733137 ** get_address_of__locale_9() { return &____locale_9; }
	inline void set__locale_9(CultureInfo_t2266733137 * value)
	{
		____locale_9 = value;
		Il2CppCodeGenWriteBarrier((&____locale_9), value);
	}

	inline static int32_t get_offset_of__minimumCapacity_10() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____minimumCapacity_10)); }
	inline int32_t get__minimumCapacity_10() const { return ____minimumCapacity_10; }
	inline int32_t* get_address_of__minimumCapacity_10() { return &____minimumCapacity_10; }
	inline void set__minimumCapacity_10(int32_t value)
	{
		____minimumCapacity_10 = value;
	}

	inline static int32_t get_offset_of__nameSpace_11() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____nameSpace_11)); }
	inline String_t* get__nameSpace_11() const { return ____nameSpace_11; }
	inline String_t** get_address_of__nameSpace_11() { return &____nameSpace_11; }
	inline void set__nameSpace_11(String_t* value)
	{
		____nameSpace_11 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_11), value);
	}

	inline static int32_t get_offset_of__childRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____childRelations_12)); }
	inline DataRelationCollection_t1356305404 * get__childRelations_12() const { return ____childRelations_12; }
	inline DataRelationCollection_t1356305404 ** get_address_of__childRelations_12() { return &____childRelations_12; }
	inline void set__childRelations_12(DataRelationCollection_t1356305404 * value)
	{
		____childRelations_12 = value;
		Il2CppCodeGenWriteBarrier((&____childRelations_12), value);
	}

	inline static int32_t get_offset_of__parentRelations_13() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____parentRelations_13)); }
	inline DataRelationCollection_t1356305404 * get__parentRelations_13() const { return ____parentRelations_13; }
	inline DataRelationCollection_t1356305404 ** get_address_of__parentRelations_13() { return &____parentRelations_13; }
	inline void set__parentRelations_13(DataRelationCollection_t1356305404 * value)
	{
		____parentRelations_13 = value;
		Il2CppCodeGenWriteBarrier((&____parentRelations_13), value);
	}

	inline static int32_t get_offset_of__prefix_14() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____prefix_14)); }
	inline String_t* get__prefix_14() const { return ____prefix_14; }
	inline String_t** get_address_of__prefix_14() { return &____prefix_14; }
	inline void set__prefix_14(String_t* value)
	{
		____prefix_14 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_14), value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_15() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____primaryKeyConstraint_15)); }
	inline UniqueConstraint_t613650809 * get__primaryKeyConstraint_15() const { return ____primaryKeyConstraint_15; }
	inline UniqueConstraint_t613650809 ** get_address_of__primaryKeyConstraint_15() { return &____primaryKeyConstraint_15; }
	inline void set__primaryKeyConstraint_15(UniqueConstraint_t613650809 * value)
	{
		____primaryKeyConstraint_15 = value;
		Il2CppCodeGenWriteBarrier((&____primaryKeyConstraint_15), value);
	}

	inline static int32_t get_offset_of__rows_16() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____rows_16)); }
	inline DataRowCollection_t1036525945 * get__rows_16() const { return ____rows_16; }
	inline DataRowCollection_t1036525945 ** get_address_of__rows_16() { return &____rows_16; }
	inline void set__rows_16(DataRowCollection_t1036525945 * value)
	{
		____rows_16 = value;
		Il2CppCodeGenWriteBarrier((&____rows_16), value);
	}

	inline static int32_t get_offset_of__site_17() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____site_17)); }
	inline RuntimeObject* get__site_17() const { return ____site_17; }
	inline RuntimeObject** get_address_of__site_17() { return &____site_17; }
	inline void set__site_17(RuntimeObject* value)
	{
		____site_17 = value;
		Il2CppCodeGenWriteBarrier((&____site_17), value);
	}

	inline static int32_t get_offset_of__tableName_18() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____tableName_18)); }
	inline String_t* get__tableName_18() const { return ____tableName_18; }
	inline String_t** get_address_of__tableName_18() { return &____tableName_18; }
	inline void set__tableName_18(String_t* value)
	{
		____tableName_18 = value;
		Il2CppCodeGenWriteBarrier((&____tableName_18), value);
	}

	inline static int32_t get_offset_of__duringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____duringDataLoad_19)); }
	inline bool get__duringDataLoad_19() const { return ____duringDataLoad_19; }
	inline bool* get_address_of__duringDataLoad_19() { return &____duringDataLoad_19; }
	inline void set__duringDataLoad_19(bool value)
	{
		____duringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_20() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____nullConstraintViolationDuringDataLoad_20)); }
	inline bool get__nullConstraintViolationDuringDataLoad_20() const { return ____nullConstraintViolationDuringDataLoad_20; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_20() { return &____nullConstraintViolationDuringDataLoad_20; }
	inline void set__nullConstraintViolationDuringDataLoad_20(bool value)
	{
		____nullConstraintViolationDuringDataLoad_20 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_21() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___enforceConstraints_21)); }
	inline bool get_enforceConstraints_21() const { return ___enforceConstraints_21; }
	inline bool* get_address_of_enforceConstraints_21() { return &___enforceConstraints_21; }
	inline void set_enforceConstraints_21(bool value)
	{
		___enforceConstraints_21 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_22() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____rowBuilder_22)); }
	inline DataRowBuilder_t3701569175 * get__rowBuilder_22() const { return ____rowBuilder_22; }
	inline DataRowBuilder_t3701569175 ** get_address_of__rowBuilder_22() { return &____rowBuilder_22; }
	inline void set__rowBuilder_22(DataRowBuilder_t3701569175 * value)
	{
		____rowBuilder_22 = value;
		Il2CppCodeGenWriteBarrier((&____rowBuilder_22), value);
	}

	inline static int32_t get_offset_of__indexes_23() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____indexes_23)); }
	inline ArrayList_t3867410345 * get__indexes_23() const { return ____indexes_23; }
	inline ArrayList_t3867410345 ** get_address_of__indexes_23() { return &____indexes_23; }
	inline void set__indexes_23(ArrayList_t3867410345 * value)
	{
		____indexes_23 = value;
		Il2CppCodeGenWriteBarrier((&____indexes_23), value);
	}

	inline static int32_t get_offset_of__recordCache_24() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____recordCache_24)); }
	inline RecordCache_t886332558 * get__recordCache_24() const { return ____recordCache_24; }
	inline RecordCache_t886332558 ** get_address_of__recordCache_24() { return &____recordCache_24; }
	inline void set__recordCache_24(RecordCache_t886332558 * value)
	{
		____recordCache_24 = value;
		Il2CppCodeGenWriteBarrier((&____recordCache_24), value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_25() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____defaultValuesRowIndex_25)); }
	inline int32_t get__defaultValuesRowIndex_25() const { return ____defaultValuesRowIndex_25; }
	inline int32_t* get_address_of__defaultValuesRowIndex_25() { return &____defaultValuesRowIndex_25; }
	inline void set__defaultValuesRowIndex_25(int32_t value)
	{
		____defaultValuesRowIndex_25 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_26() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___fInitInProgress_26)); }
	inline bool get_fInitInProgress_26() const { return ___fInitInProgress_26; }
	inline bool* get_address_of_fInitInProgress_26() { return &___fInitInProgress_26; }
	inline void set_fInitInProgress_26(bool value)
	{
		___fInitInProgress_26 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_27() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____virginCaseSensitive_27)); }
	inline bool get__virginCaseSensitive_27() const { return ____virginCaseSensitive_27; }
	inline bool* get_address_of__virginCaseSensitive_27() { return &____virginCaseSensitive_27; }
	inline void set__virginCaseSensitive_27(bool value)
	{
		____virginCaseSensitive_27 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_28() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____propertyDescriptorsCache_28)); }
	inline PropertyDescriptorCollection_t2032515041 * get__propertyDescriptorsCache_28() const { return ____propertyDescriptorsCache_28; }
	inline PropertyDescriptorCollection_t2032515041 ** get_address_of__propertyDescriptorsCache_28() { return &____propertyDescriptorsCache_28; }
	inline void set__propertyDescriptorsCache_28(PropertyDescriptorCollection_t2032515041 * value)
	{
		____propertyDescriptorsCache_28 = value;
		Il2CppCodeGenWriteBarrier((&____propertyDescriptorsCache_28), value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_31() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ____latestPrimaryKeyCols_31)); }
	inline DataColumnU5BU5D_t3739124042* get__latestPrimaryKeyCols_31() const { return ____latestPrimaryKeyCols_31; }
	inline DataColumnU5BU5D_t3739124042** get_address_of__latestPrimaryKeyCols_31() { return &____latestPrimaryKeyCols_31; }
	inline void set__latestPrimaryKeyCols_31(DataColumnU5BU5D_t3739124042* value)
	{
		____latestPrimaryKeyCols_31 = value;
		Il2CppCodeGenWriteBarrier((&____latestPrimaryKeyCols_31), value);
	}

	inline static int32_t get_offset_of_empty_rows_32() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___empty_rows_32)); }
	inline DataRowU5BU5D_t3812028374* get_empty_rows_32() const { return ___empty_rows_32; }
	inline DataRowU5BU5D_t3812028374** get_address_of_empty_rows_32() { return &___empty_rows_32; }
	inline void set_empty_rows_32(DataRowU5BU5D_t3812028374* value)
	{
		___empty_rows_32 = value;
		Il2CppCodeGenWriteBarrier((&___empty_rows_32), value);
	}

	inline static int32_t get_offset_of_tableInitialized_33() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___tableInitialized_33)); }
	inline bool get_tableInitialized_33() const { return ___tableInitialized_33; }
	inline bool* get_address_of_tableInitialized_33() { return &___tableInitialized_33; }
	inline void set_tableInitialized_33(bool value)
	{
		___tableInitialized_33 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_34() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___remotingFormat_34)); }
	inline int32_t get_remotingFormat_34() const { return ___remotingFormat_34; }
	inline int32_t* get_address_of_remotingFormat_34() { return &___remotingFormat_34; }
	inline void set_remotingFormat_34(int32_t value)
	{
		___remotingFormat_34 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_35() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___ColumnChanged_35)); }
	inline DataColumnChangeEventHandler_t532961492 * get_ColumnChanged_35() const { return ___ColumnChanged_35; }
	inline DataColumnChangeEventHandler_t532961492 ** get_address_of_ColumnChanged_35() { return &___ColumnChanged_35; }
	inline void set_ColumnChanged_35(DataColumnChangeEventHandler_t532961492 * value)
	{
		___ColumnChanged_35 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanged_35), value);
	}

	inline static int32_t get_offset_of_ColumnChanging_36() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___ColumnChanging_36)); }
	inline DataColumnChangeEventHandler_t532961492 * get_ColumnChanging_36() const { return ___ColumnChanging_36; }
	inline DataColumnChangeEventHandler_t532961492 ** get_address_of_ColumnChanging_36() { return &___ColumnChanging_36; }
	inline void set_ColumnChanging_36(DataColumnChangeEventHandler_t532961492 * value)
	{
		___ColumnChanging_36 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanging_36), value);
	}

	inline static int32_t get_offset_of_RowChanged_37() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___RowChanged_37)); }
	inline DataRowChangeEventHandler_t2506713557 * get_RowChanged_37() const { return ___RowChanged_37; }
	inline DataRowChangeEventHandler_t2506713557 ** get_address_of_RowChanged_37() { return &___RowChanged_37; }
	inline void set_RowChanged_37(DataRowChangeEventHandler_t2506713557 * value)
	{
		___RowChanged_37 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanged_37), value);
	}

	inline static int32_t get_offset_of_RowChanging_38() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___RowChanging_38)); }
	inline DataRowChangeEventHandler_t2506713557 * get_RowChanging_38() const { return ___RowChanging_38; }
	inline DataRowChangeEventHandler_t2506713557 ** get_address_of_RowChanging_38() { return &___RowChanging_38; }
	inline void set_RowChanging_38(DataRowChangeEventHandler_t2506713557 * value)
	{
		___RowChanging_38 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanging_38), value);
	}

	inline static int32_t get_offset_of_RowDeleted_39() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___RowDeleted_39)); }
	inline DataRowChangeEventHandler_t2506713557 * get_RowDeleted_39() const { return ___RowDeleted_39; }
	inline DataRowChangeEventHandler_t2506713557 ** get_address_of_RowDeleted_39() { return &___RowDeleted_39; }
	inline void set_RowDeleted_39(DataRowChangeEventHandler_t2506713557 * value)
	{
		___RowDeleted_39 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleted_39), value);
	}

	inline static int32_t get_offset_of_RowDeleting_40() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___RowDeleting_40)); }
	inline DataRowChangeEventHandler_t2506713557 * get_RowDeleting_40() const { return ___RowDeleting_40; }
	inline DataRowChangeEventHandler_t2506713557 ** get_address_of_RowDeleting_40() { return &___RowDeleting_40; }
	inline void set_RowDeleting_40(DataRowChangeEventHandler_t2506713557 * value)
	{
		___RowDeleting_40 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleting_40), value);
	}

	inline static int32_t get_offset_of_TableNewRow_41() { return static_cast<int32_t>(offsetof(DataTable_t3635127758, ___TableNewRow_41)); }
	inline DataTableNewRowEventHandler_t3835313805 * get_TableNewRow_41() const { return ___TableNewRow_41; }
	inline DataTableNewRowEventHandler_t3835313805 ** get_address_of_TableNewRow_41() { return &___TableNewRow_41; }
	inline void set_TableNewRow_41(DataTableNewRowEventHandler_t3835313805 * value)
	{
		___TableNewRow_41 = value;
		Il2CppCodeGenWriteBarrier((&___TableNewRow_41), value);
	}
};

struct DataTable_t3635127758_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t3739124042* ____emptyColumnArray_29;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t3748304636 * ___SortRegex_30;

public:
	inline static int32_t get_offset_of__emptyColumnArray_29() { return static_cast<int32_t>(offsetof(DataTable_t3635127758_StaticFields, ____emptyColumnArray_29)); }
	inline DataColumnU5BU5D_t3739124042* get__emptyColumnArray_29() const { return ____emptyColumnArray_29; }
	inline DataColumnU5BU5D_t3739124042** get_address_of__emptyColumnArray_29() { return &____emptyColumnArray_29; }
	inline void set__emptyColumnArray_29(DataColumnU5BU5D_t3739124042* value)
	{
		____emptyColumnArray_29 = value;
		Il2CppCodeGenWriteBarrier((&____emptyColumnArray_29), value);
	}

	inline static int32_t get_offset_of_SortRegex_30() { return static_cast<int32_t>(offsetof(DataTable_t3635127758_StaticFields, ___SortRegex_30)); }
	inline Regex_t3748304636 * get_SortRegex_30() const { return ___SortRegex_30; }
	inline Regex_t3748304636 ** get_address_of_SortRegex_30() { return &___SortRegex_30; }
	inline void set_SortRegex_30(Regex_t3748304636 * value)
	{
		___SortRegex_30 = value;
		Il2CppCodeGenWriteBarrier((&___SortRegex_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLE_T3635127758_H
#ifndef NONULLALLOWEDEXCEPTION_T3039475757_H
#define NONULLALLOWEDEXCEPTION_T3039475757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.NoNullAllowedException
struct  NoNullAllowedException_t3039475757  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONULLALLOWEDEXCEPTION_T3039475757_H
#ifndef READONLYEXCEPTION_T1117029564_H
#define READONLYEXCEPTION_T1117029564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ReadOnlyException
struct  ReadOnlyException_t1117029564  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYEXCEPTION_T1117029564_H
#ifndef DATAROWCHANGEEVENTARGS_T2382929576_H
#define DATAROWCHANGEEVENTARGS_T2382929576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t2382929576  : public EventArgs_t2356377238
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t452116239 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2382929576, ___row_1)); }
	inline DataRow_t452116239 * get_row_1() const { return ___row_1; }
	inline DataRow_t452116239 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t452116239 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier((&___row_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2382929576, ___action_2)); }
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
#endif // DATAROWCHANGEEVENTARGS_T2382929576_H
#ifndef ROWNOTINTABLEEXCEPTION_T4193906891_H
#define ROWNOTINTABLEEXCEPTION_T4193906891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RowNotInTableException
struct  RowNotInTableException_t4193906891  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROWNOTINTABLEEXCEPTION_T4193906891_H
#ifndef DELETEDROWINACCESSIBLEEXCEPTION_T2215296380_H
#define DELETEDROWINACCESSIBLEEXCEPTION_T2215296380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DeletedRowInaccessibleException
struct  DeletedRowInaccessibleException_t2215296380  : public DataException_t1004869275
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEDROWINACCESSIBLEEXCEPTION_T2215296380_H
#ifndef DATASET_T1458640340_H
#define DATASET_T1458640340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSet
struct  DataSet_t1458640340  : public MarshalByValueComponent_t4052398083
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
	DataTableCollection_t741403882 * ___tableCollection_8;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t1356305404 * ___relationCollection_9;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t2915493498 * ___properties_10;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t2266733137 * ___locale_11;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t916807825 * ___tableAdapterSchemaInfo_12;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_13;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_14;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t4064537649 * ___MergeFailed_15;

public:
	inline static int32_t get_offset_of_dataSetName_3() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___dataSetName_3)); }
	inline String_t* get_dataSetName_3() const { return ___dataSetName_3; }
	inline String_t** get_address_of_dataSetName_3() { return &___dataSetName_3; }
	inline void set_dataSetName_3(String_t* value)
	{
		___dataSetName_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetName_3), value);
	}

	inline static int32_t get_offset_of__namespace_4() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ____namespace_4)); }
	inline String_t* get__namespace_4() const { return ____namespace_4; }
	inline String_t** get_address_of__namespace_4() { return &____namespace_4; }
	inline void set__namespace_4(String_t* value)
	{
		____namespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_4), value);
	}

	inline static int32_t get_offset_of_prefix_5() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___prefix_5)); }
	inline String_t* get_prefix_5() const { return ___prefix_5; }
	inline String_t** get_address_of_prefix_5() { return &___prefix_5; }
	inline void set_prefix_5(String_t* value)
	{
		___prefix_5 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_5), value);
	}

	inline static int32_t get_offset_of_caseSensitive_6() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___caseSensitive_6)); }
	inline bool get_caseSensitive_6() const { return ___caseSensitive_6; }
	inline bool* get_address_of_caseSensitive_6() { return &___caseSensitive_6; }
	inline void set_caseSensitive_6(bool value)
	{
		___caseSensitive_6 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_7() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___enforceConstraints_7)); }
	inline bool get_enforceConstraints_7() const { return ___enforceConstraints_7; }
	inline bool* get_address_of_enforceConstraints_7() { return &___enforceConstraints_7; }
	inline void set_enforceConstraints_7(bool value)
	{
		___enforceConstraints_7 = value;
	}

	inline static int32_t get_offset_of_tableCollection_8() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___tableCollection_8)); }
	inline DataTableCollection_t741403882 * get_tableCollection_8() const { return ___tableCollection_8; }
	inline DataTableCollection_t741403882 ** get_address_of_tableCollection_8() { return &___tableCollection_8; }
	inline void set_tableCollection_8(DataTableCollection_t741403882 * value)
	{
		___tableCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&___tableCollection_8), value);
	}

	inline static int32_t get_offset_of_relationCollection_9() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___relationCollection_9)); }
	inline DataRelationCollection_t1356305404 * get_relationCollection_9() const { return ___relationCollection_9; }
	inline DataRelationCollection_t1356305404 ** get_address_of_relationCollection_9() { return &___relationCollection_9; }
	inline void set_relationCollection_9(DataRelationCollection_t1356305404 * value)
	{
		___relationCollection_9 = value;
		Il2CppCodeGenWriteBarrier((&___relationCollection_9), value);
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___properties_10)); }
	inline PropertyCollection_t2915493498 * get_properties_10() const { return ___properties_10; }
	inline PropertyCollection_t2915493498 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(PropertyCollection_t2915493498 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier((&___properties_10), value);
	}

	inline static int32_t get_offset_of_locale_11() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___locale_11)); }
	inline CultureInfo_t2266733137 * get_locale_11() const { return ___locale_11; }
	inline CultureInfo_t2266733137 ** get_address_of_locale_11() { return &___locale_11; }
	inline void set_locale_11(CultureInfo_t2266733137 * value)
	{
		___locale_11 = value;
		Il2CppCodeGenWriteBarrier((&___locale_11), value);
	}

	inline static int32_t get_offset_of_tableAdapterSchemaInfo_12() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___tableAdapterSchemaInfo_12)); }
	inline TableAdapterSchemaInfo_t916807825 * get_tableAdapterSchemaInfo_12() const { return ___tableAdapterSchemaInfo_12; }
	inline TableAdapterSchemaInfo_t916807825 ** get_address_of_tableAdapterSchemaInfo_12() { return &___tableAdapterSchemaInfo_12; }
	inline void set_tableAdapterSchemaInfo_12(TableAdapterSchemaInfo_t916807825 * value)
	{
		___tableAdapterSchemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___tableAdapterSchemaInfo_12), value);
	}

	inline static int32_t get_offset_of_dataSetInitialized_13() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___dataSetInitialized_13)); }
	inline bool get_dataSetInitialized_13() const { return ___dataSetInitialized_13; }
	inline bool* get_address_of_dataSetInitialized_13() { return &___dataSetInitialized_13; }
	inline void set_dataSetInitialized_13(bool value)
	{
		___dataSetInitialized_13 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_14() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___remotingFormat_14)); }
	inline int32_t get_remotingFormat_14() const { return ___remotingFormat_14; }
	inline int32_t* get_address_of_remotingFormat_14() { return &___remotingFormat_14; }
	inline void set_remotingFormat_14(int32_t value)
	{
		___remotingFormat_14 = value;
	}

	inline static int32_t get_offset_of_MergeFailed_15() { return static_cast<int32_t>(offsetof(DataSet_t1458640340, ___MergeFailed_15)); }
	inline MergeFailedEventHandler_t4064537649 * get_MergeFailed_15() const { return ___MergeFailed_15; }
	inline MergeFailedEventHandler_t4064537649 ** get_address_of_MergeFailed_15() { return &___MergeFailed_15; }
	inline void set_MergeFailed_15(MergeFailedEventHandler_t4064537649 * value)
	{
		___MergeFailed_15 = value;
		Il2CppCodeGenWriteBarrier((&___MergeFailed_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T1458640340_H
#ifndef SQLBYTES_T1917157883_H
#define SQLBYTES_T1917157883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBytes
struct  SqlBytes_t1917157883  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlBytes::notNull
	bool ___notNull_0;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::buffer
	ByteU5BU5D_t965135465* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlBytes::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlBytes_t1917157883, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlBytes_t1917157883, ___buffer_1)); }
	inline ByteU5BU5D_t965135465* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t965135465** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t965135465* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlBytes_t1917157883, ___storage_2)); }
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
#endif // SQLBYTES_T1917157883_H
#ifndef SQLDATETIME_T3917702499_H
#define SQLDATETIME_T3917702499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDateTime
struct  SqlDateTime_t3917702499 
{
public:
	// System.DateTime System.Data.SqlTypes.SqlDateTime::value
	DateTime_t2164202057  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDateTime::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499, ___value_0)); }
	inline DateTime_t2164202057  get_value_0() const { return ___value_0; }
	inline DateTime_t2164202057 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t2164202057  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDateTime_t3917702499_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t3917702499  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t3917702499  ___MinValue_3;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t3917702499  ___Null_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_7;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::zero_day
	DateTime_t2164202057  ___zero_day_8;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499_StaticFields, ___MaxValue_2)); }
	inline SqlDateTime_t3917702499  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDateTime_t3917702499 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDateTime_t3917702499  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499_StaticFields, ___MinValue_3)); }
	inline SqlDateTime_t3917702499  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDateTime_t3917702499 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDateTime_t3917702499  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499_StaticFields, ___Null_4)); }
	inline SqlDateTime_t3917702499  get_Null_4() const { return ___Null_4; }
	inline SqlDateTime_t3917702499 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDateTime_t3917702499  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499_StaticFields, ___SQLTicksPerHour_5)); }
	inline int32_t get_SQLTicksPerHour_5() const { return ___SQLTicksPerHour_5; }
	inline int32_t* get_address_of_SQLTicksPerHour_5() { return &___SQLTicksPerHour_5; }
	inline void set_SQLTicksPerHour_5(int32_t value)
	{
		___SQLTicksPerHour_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499_StaticFields, ___SQLTicksPerMinute_6)); }
	inline int32_t get_SQLTicksPerMinute_6() const { return ___SQLTicksPerMinute_6; }
	inline int32_t* get_address_of_SQLTicksPerMinute_6() { return &___SQLTicksPerMinute_6; }
	inline void set_SQLTicksPerMinute_6(int32_t value)
	{
		___SQLTicksPerMinute_6 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499_StaticFields, ___SQLTicksPerSecond_7)); }
	inline int32_t get_SQLTicksPerSecond_7() const { return ___SQLTicksPerSecond_7; }
	inline int32_t* get_address_of_SQLTicksPerSecond_7() { return &___SQLTicksPerSecond_7; }
	inline void set_SQLTicksPerSecond_7(int32_t value)
	{
		___SQLTicksPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_zero_day_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t3917702499_StaticFields, ___zero_day_8)); }
	inline DateTime_t2164202057  get_zero_day_8() const { return ___zero_day_8; }
	inline DateTime_t2164202057 * get_address_of_zero_day_8() { return &___zero_day_8; }
	inline void set_zero_day_8(DateTime_t2164202057  value)
	{
		___zero_day_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t3917702499_marshaled_pinvoke
{
	DateTime_t2164202057  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t3917702499_marshaled_com
{
	DateTime_t2164202057  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDATETIME_T3917702499_H
#ifndef EVALUATEEXCEPTION_T830592416_H
#define EVALUATEEXCEPTION_T830592416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.EvaluateException
struct  EvaluateException_t830592416  : public InvalidExpressionException_t2622611904
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVALUATEEXCEPTION_T830592416_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (DateTimeDataContainer_t2857809717), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (DecimalDataContainer_t2162203914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (StringDataContainer_t600914167), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (DataTableMapping_t1989415203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2303[3] = 
{
	DataTableMapping_t1989415203::get_offset_of_sourceTable_1(),
	DataTableMapping_t1989415203::get_offset_of_dataSetTable_2(),
	DataTableMapping_t1989415203::get_offset_of_columnMappings_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (DataTableMappingCollection_t1825994462), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[3] = 
{
	DataTableMappingCollection_t1825994462::get_offset_of_mappings_1(),
	DataTableMappingCollection_t1825994462::get_offset_of_sourceTables_2(),
	DataTableMappingCollection_t1825994462::get_offset_of_dataSetTables_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (DbCommand_t14897139), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (DbConnection_t3849521936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (DbDataAdapter_t2831582930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2307[4] = 
{
	DbDataAdapter_t2831582930::get_offset_of__selectCommand_5(),
	DbDataAdapter_t2831582930::get_offset_of__updateCommand_6(),
	DbDataAdapter_t2831582930::get_offset_of__deleteCommand_7(),
	DbDataAdapter_t2831582930::get_offset_of__insertCommand_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (DbParameter_t2760051281), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (DbParameterCollection_t2171227780), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (DbProviderFactory_t3913697870), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (DbTypes_t3344733689), -1, sizeof(DbTypes_t3344733689_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2311[21] = 
{
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfBoolean_0(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfSByte_1(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfChar_2(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfInt16_3(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfInt32_4(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfInt64_5(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfByte_6(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfUInt16_7(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfUInt32_8(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfUInt64_9(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfDouble_10(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfSingle_11(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfDecimal_12(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfString_13(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfDateTime_14(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfObject_15(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfGuid_16(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfType_17(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfByteArray_18(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfFloat_19(),
	DbTypes_t3344733689_StaticFields::get_offset_of_TypeOfTimespan_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { sizeof (Index_t818973190), -1, sizeof(Index_t818973190_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2312[7] = 
{
	Index_t818973190_StaticFields::get_offset_of_empty_0(),
	Index_t818973190::get_offset_of__array_1(),
	Index_t818973190::get_offset_of__size_2(),
	Index_t818973190::get_offset_of__key_3(),
	Index_t818973190::get_offset_of__refCount_4(),
	Index_t818973190::get_offset_of_know_have_duplicates_5(),
	Index_t818973190::get_offset_of_know_no_duplicates_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (Key_t382600727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2313[6] = 
{
	Key_t382600727::get_offset_of__table_0(),
	Key_t382600727::get_offset_of__columns_1(),
	Key_t382600727::get_offset_of__sortDirection_2(),
	Key_t382600727::get_offset_of__rowStateFilter_3(),
	Key_t382600727::get_offset_of__filter_4(),
	Key_t382600727::get_offset_of__tmpRow_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (RecordCache_t886332558), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2314[5] = 
{
	RecordCache_t886332558::get_offset_of__records_0(),
	RecordCache_t886332558::get_offset_of__nextFreeIndex_1(),
	RecordCache_t886332558::get_offset_of__currentCapacity_2(),
	RecordCache_t886332558::get_offset_of__table_3(),
	RecordCache_t886332558::get_offset_of__rowsToRecords_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (SqlBinary_t1471720269)+ sizeof (RuntimeObject), sizeof(SqlBinary_t1471720269_marshaled_pinvoke), sizeof(SqlBinary_t1471720269_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2316[3] = 
{
	SqlBinary_t1471720269::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t1471720269::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t1471720269_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (SqlBoolean_t2944927557)+ sizeof (RuntimeObject), sizeof(SqlBoolean_t2944927557_marshaled_pinvoke), sizeof(SqlBoolean_t2944927557_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2317[7] = 
{
	SqlBoolean_t2944927557::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t2944927557::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t2944927557_StaticFields::get_offset_of_False_2(),
	SqlBoolean_t2944927557_StaticFields::get_offset_of_Null_3(),
	SqlBoolean_t2944927557_StaticFields::get_offset_of_One_4(),
	SqlBoolean_t2944927557_StaticFields::get_offset_of_True_5(),
	SqlBoolean_t2944927557_StaticFields::get_offset_of_Zero_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (SqlByte_t1660025172)+ sizeof (RuntimeObject), sizeof(SqlByte_t1660025172_marshaled_pinvoke), sizeof(SqlByte_t1660025172_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2318[6] = 
{
	SqlByte_t1660025172::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t1660025172::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t1660025172_StaticFields::get_offset_of_MaxValue_2(),
	SqlByte_t1660025172_StaticFields::get_offset_of_MinValue_3(),
	SqlByte_t1660025172_StaticFields::get_offset_of_Null_4(),
	SqlByte_t1660025172_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (SqlBytes_t1917157883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2319[3] = 
{
	SqlBytes_t1917157883::get_offset_of_notNull_0(),
	SqlBytes_t1917157883::get_offset_of_buffer_1(),
	SqlBytes_t1917157883::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (SqlChars_t3062070285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2320[3] = 
{
	SqlChars_t3062070285::get_offset_of_notNull_0(),
	SqlChars_t3062070285::get_offset_of_buffer_1(),
	SqlChars_t3062070285::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (SqlCompareOptions_t1470131883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2321[7] = 
{
	SqlCompareOptions_t1470131883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (SqlDateTime_t3917702499)+ sizeof (RuntimeObject), -1, sizeof(SqlDateTime_t3917702499_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2322[9] = 
{
	SqlDateTime_t3917702499::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t3917702499::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t3917702499_StaticFields::get_offset_of_MaxValue_2(),
	SqlDateTime_t3917702499_StaticFields::get_offset_of_MinValue_3(),
	SqlDateTime_t3917702499_StaticFields::get_offset_of_Null_4(),
	SqlDateTime_t3917702499_StaticFields::get_offset_of_SQLTicksPerHour_5(),
	SqlDateTime_t3917702499_StaticFields::get_offset_of_SQLTicksPerMinute_6(),
	SqlDateTime_t3917702499_StaticFields::get_offset_of_SQLTicksPerSecond_7(),
	SqlDateTime_t3917702499_StaticFields::get_offset_of_zero_day_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (SqlDecimal_t2491762523)+ sizeof (RuntimeObject), sizeof(SqlDecimal_t2491762523_marshaled_pinvoke), sizeof(SqlDecimal_t2491762523_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2323[11] = 
{
	SqlDecimal_t2491762523::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2491762523::get_offset_of_precision_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2491762523::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2491762523::get_offset_of_positive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2491762523::get_offset_of_notNull_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2491762523_StaticFields::get_offset_of_constantsDecadeInt32Factors_5(),
	SqlDecimal_t2491762523_StaticFields::get_offset_of_MaxPrecision_6(),
	SqlDecimal_t2491762523_StaticFields::get_offset_of_MaxScale_7(),
	SqlDecimal_t2491762523_StaticFields::get_offset_of_MaxValue_8(),
	SqlDecimal_t2491762523_StaticFields::get_offset_of_MinValue_9(),
	SqlDecimal_t2491762523_StaticFields::get_offset_of_Null_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (SqlDouble_t1943456518)+ sizeof (RuntimeObject), sizeof(SqlDouble_t1943456518_marshaled_pinvoke), sizeof(SqlDouble_t1943456518_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2324[6] = 
{
	SqlDouble_t1943456518::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t1943456518::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t1943456518_StaticFields::get_offset_of_MaxValue_2(),
	SqlDouble_t1943456518_StaticFields::get_offset_of_MinValue_3(),
	SqlDouble_t1943456518_StaticFields::get_offset_of_Null_4(),
	SqlDouble_t1943456518_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (SqlGuid_t3219339948)+ sizeof (RuntimeObject), sizeof(SqlGuid_t3219339948_marshaled_pinvoke), sizeof(SqlGuid_t3219339948_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2325[3] = 
{
	SqlGuid_t3219339948::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t3219339948::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t3219339948_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (SqlInt16_t1302670922)+ sizeof (RuntimeObject), sizeof(SqlInt16_t1302670922_marshaled_pinvoke), sizeof(SqlInt16_t1302670922_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2326[6] = 
{
	SqlInt16_t1302670922::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t1302670922::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t1302670922_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt16_t1302670922_StaticFields::get_offset_of_MinValue_3(),
	SqlInt16_t1302670922_StaticFields::get_offset_of_Null_4(),
	SqlInt16_t1302670922_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (SqlInt32_t432116418)+ sizeof (RuntimeObject), sizeof(SqlInt32_t432116418_marshaled_pinvoke), sizeof(SqlInt32_t432116418_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2327[6] = 
{
	SqlInt32_t432116418::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t432116418::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t432116418_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt32_t432116418_StaticFields::get_offset_of_MinValue_3(),
	SqlInt32_t432116418_StaticFields::get_offset_of_Null_4(),
	SqlInt32_t432116418_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (SqlInt64_t3651778849)+ sizeof (RuntimeObject), sizeof(SqlInt64_t3651778849_marshaled_pinvoke), sizeof(SqlInt64_t3651778849_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2328[6] = 
{
	SqlInt64_t3651778849::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3651778849::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t3651778849_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt64_t3651778849_StaticFields::get_offset_of_MinValue_3(),
	SqlInt64_t3651778849_StaticFields::get_offset_of_Null_4(),
	SqlInt64_t3651778849_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (SqlMoney_t885764003)+ sizeof (RuntimeObject), sizeof(SqlMoney_t885764003_marshaled_pinvoke), sizeof(SqlMoney_t885764003_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2329[7] = 
{
	SqlMoney_t885764003::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t885764003::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t885764003_StaticFields::get_offset_of_MaxValue_2(),
	SqlMoney_t885764003_StaticFields::get_offset_of_MinValue_3(),
	SqlMoney_t885764003_StaticFields::get_offset_of_Null_4(),
	SqlMoney_t885764003_StaticFields::get_offset_of_Zero_5(),
	SqlMoney_t885764003_StaticFields::get_offset_of_MoneyFormat_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (SqlNullValueException_t3857224136), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (SqlSingle_t4229738902)+ sizeof (RuntimeObject), sizeof(SqlSingle_t4229738902_marshaled_pinvoke), sizeof(SqlSingle_t4229738902_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2331[6] = 
{
	SqlSingle_t4229738902::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t4229738902::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t4229738902_StaticFields::get_offset_of_MaxValue_2(),
	SqlSingle_t4229738902_StaticFields::get_offset_of_MinValue_3(),
	SqlSingle_t4229738902_StaticFields::get_offset_of_Null_4(),
	SqlSingle_t4229738902_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (SqlString_t546319942)+ sizeof (RuntimeObject), sizeof(SqlString_t546319942_marshaled_pinvoke), sizeof(SqlString_t546319942_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2332[11] = 
{
	SqlString_t546319942::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t546319942::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t546319942::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t546319942::get_offset_of_compareOptions_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t546319942_StaticFields::get_offset_of_BinarySort_4(),
	SqlString_t546319942_StaticFields::get_offset_of_IgnoreCase_5(),
	SqlString_t546319942_StaticFields::get_offset_of_IgnoreKanaType_6(),
	SqlString_t546319942_StaticFields::get_offset_of_IgnoreNonSpace_7(),
	SqlString_t546319942_StaticFields::get_offset_of_IgnoreWidth_8(),
	SqlString_t546319942_StaticFields::get_offset_of_Null_9(),
	SqlString_t546319942_StaticFields::get_offset_of_DecimalFormat_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (SqlTruncateException_t958753277), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (SqlTypeException_t2868840713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (SqlXml_t1741509206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2335[2] = 
{
	SqlXml_t1741509206::get_offset_of_notNull_0(),
	SqlXml_t1741509206::get_offset_of_xmlValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (StorageState_t2502329883)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2336[4] = 
{
	StorageState_t2502329883::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (AcceptRejectRule_t1791081808)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2337[3] = 
{
	AcceptRejectRule_t1791081808::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (ColumnTypeConverter_t4106317843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { sizeof (CommandType_t2064015918)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2339[4] = 
{
	CommandType_t2064015918::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (Constraint_t1574073444), -1, sizeof(Constraint_t1574073444_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2340[8] = 
{
	Constraint_t1574073444_StaticFields::get_offset_of_beforeConstraintNameChange_0(),
	Constraint_t1574073444::get_offset_of_events_1(),
	Constraint_t1574073444::get_offset_of__constraintName_2(),
	Constraint_t1574073444::get_offset_of__properties_3(),
	Constraint_t1574073444::get_offset_of__index_4(),
	Constraint_t1574073444::get_offset_of__constraintCollection_5(),
	Constraint_t1574073444::get_offset_of_dataSet_6(),
	Constraint_t1574073444::get_offset_of_initInProgress_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (ConstraintCollection_t3770521360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2341[2] = 
{
	ConstraintCollection_t3770521360::get_offset_of_table_2(),
	ConstraintCollection_t3770521360::get_offset_of_CollectionChanged_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (ConstraintConverter_t1210313141), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (ConstraintException_t3517661818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (DataCategoryAttribute_t3543178724), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (DataColumn_t2659580843), -1, sizeof(DataColumn_t2659580843_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2345[23] = 
{
	DataColumn_t2659580843::get_offset_of__eventHandlers_3(),
	DataColumn_t2659580843_StaticFields::get_offset_of__propertyChangedKey_4(),
	DataColumn_t2659580843::get_offset_of__allowDBNull_5(),
	DataColumn_t2659580843::get_offset_of__autoIncrement_6(),
	DataColumn_t2659580843::get_offset_of__autoIncrementSeed_7(),
	DataColumn_t2659580843::get_offset_of__autoIncrementStep_8(),
	DataColumn_t2659580843::get_offset_of__nextAutoIncrementValue_9(),
	DataColumn_t2659580843::get_offset_of__caption_10(),
	DataColumn_t2659580843::get_offset_of__columnMapping_11(),
	DataColumn_t2659580843::get_offset_of__columnName_12(),
	DataColumn_t2659580843::get_offset_of__defaultValue_13(),
	DataColumn_t2659580843::get_offset_of__expression_14(),
	DataColumn_t2659580843::get_offset_of__compiledExpression_15(),
	DataColumn_t2659580843::get_offset_of__extendedProperties_16(),
	DataColumn_t2659580843::get_offset_of__maxLength_17(),
	DataColumn_t2659580843::get_offset_of__nameSpace_18(),
	DataColumn_t2659580843::get_offset_of__ordinal_19(),
	DataColumn_t2659580843::get_offset_of__prefix_20(),
	DataColumn_t2659580843::get_offset_of__readOnly_21(),
	DataColumn_t2659580843::get_offset_of__table_22(),
	DataColumn_t2659580843::get_offset_of__unique_23(),
	DataColumn_t2659580843::get_offset_of__dataContainer_24(),
	DataColumn_t2659580843::get_offset_of__datetimeMode_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (DataColumnChangeEventArgs_t3271616016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2346[3] = 
{
	DataColumnChangeEventArgs_t3271616016::get_offset_of__column_1(),
	DataColumnChangeEventArgs_t3271616016::get_offset_of__row_2(),
	DataColumnChangeEventArgs_t3271616016::get_offset_of__proposedValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (Doublet_t1923023169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2347[2] = 
{
	Doublet_t1923023169::get_offset_of_count_0(),
	Doublet_t1923023169::get_offset_of_columnNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (DataColumnCollection_t1299614139), -1, sizeof(DataColumnCollection_t1299614139_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2348[9] = 
{
	DataColumnCollection_t1299614139::get_offset_of_columnNameCount_2(),
	DataColumnCollection_t1299614139::get_offset_of_columnFromName_3(),
	DataColumnCollection_t1299614139::get_offset_of_autoIncrement_4(),
	DataColumnCollection_t1299614139::get_offset_of_defaultColumnIndex_5(),
	DataColumnCollection_t1299614139::get_offset_of_parentTable_6(),
	DataColumnCollection_t1299614139_StaticFields::get_offset_of_ColumnPrefix_7(),
	DataColumnCollection_t1299614139_StaticFields::get_offset_of_TenColumns_8(),
	DataColumnCollection_t1299614139::get_offset_of_CollectionChanged_9(),
	DataColumnCollection_t1299614139::get_offset_of_CollectionMetaDataChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (DataException_t1004869275), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (DataRelation_t109885884), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2350[12] = 
{
	DataRelation_t109885884::get_offset_of_dataSet_0(),
	DataRelation_t109885884::get_offset_of_relationName_1(),
	DataRelation_t109885884::get_offset_of_parentKeyConstraint_2(),
	DataRelation_t109885884::get_offset_of_childKeyConstraint_3(),
	DataRelation_t109885884::get_offset_of_parentColumns_4(),
	DataRelation_t109885884::get_offset_of_childColumns_5(),
	DataRelation_t109885884::get_offset_of_nested_6(),
	DataRelation_t109885884::get_offset_of_createConstraints_7(),
	DataRelation_t109885884::get_offset_of_initFinished_8(),
	DataRelation_t109885884::get_offset_of_extendedProperties_9(),
	DataRelation_t109885884::get_offset_of__parentTableNameSpace_10(),
	DataRelation_t109885884::get_offset_of__childTableNameSpace_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (DataRelationCollection_t1356305404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2351[3] = 
{
	DataRelationCollection_t1356305404::get_offset_of_inTransition_2(),
	DataRelationCollection_t1356305404::get_offset_of_index_3(),
	DataRelationCollection_t1356305404::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (DataSetRelationCollection_t342012314), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2352[1] = 
{
	DataSetRelationCollection_t342012314::get_offset_of_dataSet_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { sizeof (DataTableRelationCollection_t2416185790), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2353[1] = 
{
	DataTableRelationCollection_t2416185790::get_offset_of_dataTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { sizeof (DataRow_t452116239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2354[13] = 
{
	DataRow_t452116239::get_offset_of__table_0(),
	DataRow_t452116239::get_offset_of__original_1(),
	DataRow_t452116239::get_offset_of__current_2(),
	DataRow_t452116239::get_offset_of__proposed_3(),
	DataRow_t452116239::get_offset_of__columnErrors_4(),
	DataRow_t452116239::get_offset_of_rowError_5(),
	DataRow_t452116239::get_offset_of_xmlRowID_6(),
	DataRow_t452116239::get_offset_of__nullConstraintViolation_7(),
	DataRow_t452116239::get_offset_of__nullConstraintMessage_8(),
	DataRow_t452116239::get_offset_of__inChangingEvent_9(),
	DataRow_t452116239::get_offset_of__rowId_10(),
	DataRow_t452116239::get_offset_of__rowChanged_11(),
	DataRow_t452116239::get_offset_of__inExpressionEvaluation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { sizeof (DataRowAction_t1940243986)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2355[9] = 
{
	DataRowAction_t1940243986::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { sizeof (DataRowBuilder_t3701569175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2356[2] = 
{
	DataRowBuilder_t3701569175::get_offset_of_table_0(),
	DataRowBuilder_t3701569175::get_offset_of__rowId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { sizeof (DataRowChangeEventArgs_t2382929576), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2357[2] = 
{
	DataRowChangeEventArgs_t2382929576::get_offset_of_row_1(),
	DataRowChangeEventArgs_t2382929576::get_offset_of_action_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { sizeof (DataRowCollection_t1036525945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2358[1] = 
{
	DataRowCollection_t1036525945::get_offset_of_table_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { sizeof (DataRowState_t960671972)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2359[6] = 
{
	DataRowState_t960671972::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { sizeof (DataRowVersion_t3285579255)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2360[5] = 
{
	DataRowVersion_t3285579255::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { sizeof (DataSet_t1458640340), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2361[13] = 
{
	DataSet_t1458640340::get_offset_of_dataSetName_3(),
	DataSet_t1458640340::get_offset_of__namespace_4(),
	DataSet_t1458640340::get_offset_of_prefix_5(),
	DataSet_t1458640340::get_offset_of_caseSensitive_6(),
	DataSet_t1458640340::get_offset_of_enforceConstraints_7(),
	DataSet_t1458640340::get_offset_of_tableCollection_8(),
	DataSet_t1458640340::get_offset_of_relationCollection_9(),
	DataSet_t1458640340::get_offset_of_properties_10(),
	DataSet_t1458640340::get_offset_of_locale_11(),
	DataSet_t1458640340::get_offset_of_tableAdapterSchemaInfo_12(),
	DataSet_t1458640340::get_offset_of_dataSetInitialized_13(),
	DataSet_t1458640340::get_offset_of_remotingFormat_14(),
	DataSet_t1458640340::get_offset_of_MergeFailed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { sizeof (DataSetDateTime_t2383810211)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2362[5] = 
{
	DataSetDateTime_t2383810211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { sizeof (DataTable_t3635127758), -1, sizeof(DataTable_t3635127758_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2363[39] = 
{
	DataTable_t3635127758::get_offset_of_dataSet_3(),
	DataTable_t3635127758::get_offset_of__caseSensitive_4(),
	DataTable_t3635127758::get_offset_of__columnCollection_5(),
	DataTable_t3635127758::get_offset_of__constraintCollection_6(),
	DataTable_t3635127758::get_offset_of__displayExpression_7(),
	DataTable_t3635127758::get_offset_of__extendedProperties_8(),
	DataTable_t3635127758::get_offset_of__locale_9(),
	DataTable_t3635127758::get_offset_of__minimumCapacity_10(),
	DataTable_t3635127758::get_offset_of__nameSpace_11(),
	DataTable_t3635127758::get_offset_of__childRelations_12(),
	DataTable_t3635127758::get_offset_of__parentRelations_13(),
	DataTable_t3635127758::get_offset_of__prefix_14(),
	DataTable_t3635127758::get_offset_of__primaryKeyConstraint_15(),
	DataTable_t3635127758::get_offset_of__rows_16(),
	DataTable_t3635127758::get_offset_of__site_17(),
	DataTable_t3635127758::get_offset_of__tableName_18(),
	DataTable_t3635127758::get_offset_of__duringDataLoad_19(),
	DataTable_t3635127758::get_offset_of__nullConstraintViolationDuringDataLoad_20(),
	DataTable_t3635127758::get_offset_of_enforceConstraints_21(),
	DataTable_t3635127758::get_offset_of__rowBuilder_22(),
	DataTable_t3635127758::get_offset_of__indexes_23(),
	DataTable_t3635127758::get_offset_of__recordCache_24(),
	DataTable_t3635127758::get_offset_of__defaultValuesRowIndex_25(),
	DataTable_t3635127758::get_offset_of_fInitInProgress_26(),
	DataTable_t3635127758::get_offset_of__virginCaseSensitive_27(),
	DataTable_t3635127758::get_offset_of__propertyDescriptorsCache_28(),
	DataTable_t3635127758_StaticFields::get_offset_of__emptyColumnArray_29(),
	DataTable_t3635127758_StaticFields::get_offset_of_SortRegex_30(),
	DataTable_t3635127758::get_offset_of__latestPrimaryKeyCols_31(),
	DataTable_t3635127758::get_offset_of_empty_rows_32(),
	DataTable_t3635127758::get_offset_of_tableInitialized_33(),
	DataTable_t3635127758::get_offset_of_remotingFormat_34(),
	DataTable_t3635127758::get_offset_of_ColumnChanged_35(),
	DataTable_t3635127758::get_offset_of_ColumnChanging_36(),
	DataTable_t3635127758::get_offset_of_RowChanged_37(),
	DataTable_t3635127758::get_offset_of_RowChanging_38(),
	DataTable_t3635127758::get_offset_of_RowDeleted_39(),
	DataTable_t3635127758::get_offset_of_RowDeleting_40(),
	DataTable_t3635127758::get_offset_of_TableNewRow_41(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { sizeof (DataTableCollection_t741403882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2364[3] = 
{
	DataTableCollection_t741403882::get_offset_of_dataSet_2(),
	DataTableCollection_t741403882::get_offset_of_CollectionChanged_3(),
	DataTableCollection_t741403882::get_offset_of_CollectionChanging_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { sizeof (DataTableNewRowEventArgs_t2838097722), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2365[1] = 
{
	DataTableNewRowEventArgs_t2838097722::get_offset_of__row_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { sizeof (DataViewRowState_t3464108297)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2366[9] = 
{
	DataViewRowState_t3464108297::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { sizeof (DefaultValueTypeConverter_t2463241837), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { sizeof (DeletedRowInaccessibleException_t2215296380), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { sizeof (DuplicateNameException_t23106477), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { sizeof (EvaluateException_t830592416), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { sizeof (ForeignKeyConstraint_t3475418834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2371[6] = 
{
	ForeignKeyConstraint_t3475418834::get_offset_of__parentUniqueConstraint_8(),
	ForeignKeyConstraint_t3475418834::get_offset_of__parentColumns_9(),
	ForeignKeyConstraint_t3475418834::get_offset_of__childColumns_10(),
	ForeignKeyConstraint_t3475418834::get_offset_of__deleteRule_11(),
	ForeignKeyConstraint_t3475418834::get_offset_of__updateRule_12(),
	ForeignKeyConstraint_t3475418834::get_offset_of__acceptRejectRule_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (InRowChangingEventException_t3717543135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { sizeof (InternalDataCollectionBase_t947607515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2384[2] = 
{
	InternalDataCollectionBase_t947607515::get_offset_of_list_0(),
	InternalDataCollectionBase_t947607515::get_offset_of_synchronized_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (InvalidConstraintException_t1435306249), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (InvalidExpressionException_t2622611904), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (MappingType_t3106630495)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2387[5] = 
{
	MappingType_t3106630495::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (MergeFailedEventArgs_t921577239), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2388[2] = 
{
	MergeFailedEventArgs_t921577239::get_offset_of_data_table_1(),
	MergeFailedEventArgs_t921577239::get_offset_of_conflict_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (MergeManager_t978249538), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (MissingPrimaryKeyException_t3257925256), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (MissingSchemaAction_t3639249140)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2391[5] = 
{
	MissingSchemaAction_t3639249140::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { sizeof (NoNullAllowedException_t3039475757), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (ParameterDirection_t367079481)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2393[5] = 
{
	ParameterDirection_t367079481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { sizeof (PropertyCollection_t2915493498), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (ReadOnlyException_t1117029564), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (RelationshipConverter_t3017912644), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (ResDescriptionAttribute_t4014296389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2397[1] = 
{
	ResDescriptionAttribute_t4014296389::get_offset_of_description_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (RowNotInTableException_t4193906891), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (Rule_t2884472758)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2399[5] = 
{
	Rule_t2884472758::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
