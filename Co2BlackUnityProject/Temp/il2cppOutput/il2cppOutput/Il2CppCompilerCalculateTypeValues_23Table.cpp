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

// System.Collections.ArrayList
struct ArrayList_t2374174184;
// System.Data.DataSet
struct DataSet_t3917940959;
// System.String
struct String_t;
// System.Data.UniqueConstraint
struct UniqueConstraint_t2722223588;
// System.Data.ForeignKeyConstraint
struct ForeignKeyConstraint_t164289483;
// System.Data.DataColumn[]
struct DataColumnU5BU5D_t300694153;
// System.Data.PropertyCollection
struct PropertyCollection_t2338443888;
// System.Data.DataTable
struct DataTable_t3557248419;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2297319672;
// System.IntPtr[]
struct IntPtrU5BU5D_t2189504134;
// System.Collections.IDictionary
struct IDictionary_t2876497541;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t1926823902;
// System.Int32[]
struct Int32U5BU5D_t3459058900;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1111602190;
// System.Collections.Hashtable/HashValues
struct HashValues_t3840417363;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t890908582;
// System.Collections.IComparer
struct IComparer_t3427524123;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3701172772;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t389935904;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t814000345;
// System.ComponentModel.ISite
struct ISite_t3426292867;
// System.Collections.Stack
struct Stack_t1822568221;
// System.Data.DataRow[]
struct DataRowU5BU5D_t2197358595;
// System.Type
struct Type_t;
// System.Data.Common.Key
struct Key_t2901176986;
// System.Data.Common.Index
struct Index_t1374197991;
// System.Data.ConstraintCollection
struct ConstraintCollection_t1629304036;
// System.Data.DataColumn
struct DataColumn_t1291436568;
// System.Data.DataRow
struct DataRow_t793422502;
// System.ComponentModel.CategoryAttribute
struct CategoryAttribute_t880074458;
// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t2881381690;
// System.Char[]
struct CharU5BU5D_t4171157588;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2085603257;
// System.Data.DataRelation
struct DataRelation_t3258539283;
// System.Collections.Hashtable
struct Hashtable_t2902679355;
// System.String[]
struct StringU5BU5D_t2114809087;
// System.Byte[]
struct ByteU5BU5D_t2677048370;
// System.UInt32[]
struct UInt32U5BU5D_t3253494211;
// System.Data.Common.DataColumnMappingCollection
struct DataColumnMappingCollection_t3620046051;
// System.Data.Common.DataTableMappingCollection
struct DataTableMappingCollection_t2798561756;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t582963377;
// System.Data.IDbCommand
struct IDbCommand_t1334647488;
// Mono.Data.SqlExpressions.IExpression
struct IExpression_t819286168;
// System.Data.Common.DataContainer
struct DataContainer_t101689242;
// System.ComponentModel.ListSortDirection[]
struct ListSortDirectionU5BU5D_t3592076989;
// System.Data.DataColumnCollection
struct DataColumnCollection_t3329180304;
// System.Globalization.CultureInfo
struct CultureInfo_t1377571235;
// System.Data.DataRelationCollection
struct DataRelationCollection_t213541485;
// System.Data.DataRowCollection
struct DataRowCollection_t3150816660;
// System.Data.DataRowBuilder
struct DataRowBuilder_t2079591726;
// System.Data.Common.RecordCache
struct RecordCache_t3670191456;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t855881775;
// System.Text.RegularExpressions.Regex
struct Regex_t335305106;
// System.Data.DataColumnChangeEventHandler
struct DataColumnChangeEventHandler_t1255671457;
// System.Data.DataRowChangeEventHandler
struct DataRowChangeEventHandler_t1799537135;
// System.Data.DataTableNewRowEventHandler
struct DataTableNewRowEventHandler_t900785158;
// System.Data.DataTableCollection
struct DataTableCollection_t568115666;
// System.Data.TableAdapterSchemaInfo
struct TableAdapterSchemaInfo_t988754123;
// System.Data.MergeFailedEventHandler
struct MergeFailedEventHandler_t3708603694;




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
#ifndef DOUBLET_T387857851_H
#define DOUBLET_T387857851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Doublet
struct  Doublet_t387857851  : public RuntimeObject
{
public:
	// System.Int32 System.Data.Doublet::count
	int32_t ___count_0;
	// System.Collections.ArrayList System.Data.Doublet::columnNames
	ArrayList_t2374174184 * ___columnNames_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Doublet_t387857851, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_columnNames_1() { return static_cast<int32_t>(offsetof(Doublet_t387857851, ___columnNames_1)); }
	inline ArrayList_t2374174184 * get_columnNames_1() const { return ___columnNames_1; }
	inline ArrayList_t2374174184 ** get_address_of_columnNames_1() { return &___columnNames_1; }
	inline void set_columnNames_1(ArrayList_t2374174184 * value)
	{
		___columnNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___columnNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLET_T387857851_H
#ifndef DATARELATION_T3258539283_H
#define DATARELATION_T3258539283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelation
struct  DataRelation_t3258539283  : public RuntimeObject
{
public:
	// System.Data.DataSet System.Data.DataRelation::dataSet
	DataSet_t3917940959 * ___dataSet_0;
	// System.String System.Data.DataRelation::relationName
	String_t* ___relationName_1;
	// System.Data.UniqueConstraint System.Data.DataRelation::parentKeyConstraint
	UniqueConstraint_t2722223588 * ___parentKeyConstraint_2;
	// System.Data.ForeignKeyConstraint System.Data.DataRelation::childKeyConstraint
	ForeignKeyConstraint_t164289483 * ___childKeyConstraint_3;
	// System.Data.DataColumn[] System.Data.DataRelation::parentColumns
	DataColumnU5BU5D_t300694153* ___parentColumns_4;
	// System.Data.DataColumn[] System.Data.DataRelation::childColumns
	DataColumnU5BU5D_t300694153* ___childColumns_5;
	// System.Boolean System.Data.DataRelation::nested
	bool ___nested_6;
	// System.Boolean System.Data.DataRelation::createConstraints
	bool ___createConstraints_7;
	// System.Boolean System.Data.DataRelation::initFinished
	bool ___initFinished_8;
	// System.Data.PropertyCollection System.Data.DataRelation::extendedProperties
	PropertyCollection_t2338443888 * ___extendedProperties_9;
	// System.String System.Data.DataRelation::_parentTableNameSpace
	String_t* ____parentTableNameSpace_10;
	// System.String System.Data.DataRelation::_childTableNameSpace
	String_t* ____childTableNameSpace_11;

public:
	inline static int32_t get_offset_of_dataSet_0() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___dataSet_0)); }
	inline DataSet_t3917940959 * get_dataSet_0() const { return ___dataSet_0; }
	inline DataSet_t3917940959 ** get_address_of_dataSet_0() { return &___dataSet_0; }
	inline void set_dataSet_0(DataSet_t3917940959 * value)
	{
		___dataSet_0 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_0), value);
	}

	inline static int32_t get_offset_of_relationName_1() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___relationName_1)); }
	inline String_t* get_relationName_1() const { return ___relationName_1; }
	inline String_t** get_address_of_relationName_1() { return &___relationName_1; }
	inline void set_relationName_1(String_t* value)
	{
		___relationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___relationName_1), value);
	}

	inline static int32_t get_offset_of_parentKeyConstraint_2() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___parentKeyConstraint_2)); }
	inline UniqueConstraint_t2722223588 * get_parentKeyConstraint_2() const { return ___parentKeyConstraint_2; }
	inline UniqueConstraint_t2722223588 ** get_address_of_parentKeyConstraint_2() { return &___parentKeyConstraint_2; }
	inline void set_parentKeyConstraint_2(UniqueConstraint_t2722223588 * value)
	{
		___parentKeyConstraint_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentKeyConstraint_2), value);
	}

	inline static int32_t get_offset_of_childKeyConstraint_3() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___childKeyConstraint_3)); }
	inline ForeignKeyConstraint_t164289483 * get_childKeyConstraint_3() const { return ___childKeyConstraint_3; }
	inline ForeignKeyConstraint_t164289483 ** get_address_of_childKeyConstraint_3() { return &___childKeyConstraint_3; }
	inline void set_childKeyConstraint_3(ForeignKeyConstraint_t164289483 * value)
	{
		___childKeyConstraint_3 = value;
		Il2CppCodeGenWriteBarrier((&___childKeyConstraint_3), value);
	}

	inline static int32_t get_offset_of_parentColumns_4() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___parentColumns_4)); }
	inline DataColumnU5BU5D_t300694153* get_parentColumns_4() const { return ___parentColumns_4; }
	inline DataColumnU5BU5D_t300694153** get_address_of_parentColumns_4() { return &___parentColumns_4; }
	inline void set_parentColumns_4(DataColumnU5BU5D_t300694153* value)
	{
		___parentColumns_4 = value;
		Il2CppCodeGenWriteBarrier((&___parentColumns_4), value);
	}

	inline static int32_t get_offset_of_childColumns_5() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___childColumns_5)); }
	inline DataColumnU5BU5D_t300694153* get_childColumns_5() const { return ___childColumns_5; }
	inline DataColumnU5BU5D_t300694153** get_address_of_childColumns_5() { return &___childColumns_5; }
	inline void set_childColumns_5(DataColumnU5BU5D_t300694153* value)
	{
		___childColumns_5 = value;
		Il2CppCodeGenWriteBarrier((&___childColumns_5), value);
	}

	inline static int32_t get_offset_of_nested_6() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___nested_6)); }
	inline bool get_nested_6() const { return ___nested_6; }
	inline bool* get_address_of_nested_6() { return &___nested_6; }
	inline void set_nested_6(bool value)
	{
		___nested_6 = value;
	}

	inline static int32_t get_offset_of_createConstraints_7() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___createConstraints_7)); }
	inline bool get_createConstraints_7() const { return ___createConstraints_7; }
	inline bool* get_address_of_createConstraints_7() { return &___createConstraints_7; }
	inline void set_createConstraints_7(bool value)
	{
		___createConstraints_7 = value;
	}

	inline static int32_t get_offset_of_initFinished_8() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___initFinished_8)); }
	inline bool get_initFinished_8() const { return ___initFinished_8; }
	inline bool* get_address_of_initFinished_8() { return &___initFinished_8; }
	inline void set_initFinished_8(bool value)
	{
		___initFinished_8 = value;
	}

	inline static int32_t get_offset_of_extendedProperties_9() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ___extendedProperties_9)); }
	inline PropertyCollection_t2338443888 * get_extendedProperties_9() const { return ___extendedProperties_9; }
	inline PropertyCollection_t2338443888 ** get_address_of_extendedProperties_9() { return &___extendedProperties_9; }
	inline void set_extendedProperties_9(PropertyCollection_t2338443888 * value)
	{
		___extendedProperties_9 = value;
		Il2CppCodeGenWriteBarrier((&___extendedProperties_9), value);
	}

	inline static int32_t get_offset_of__parentTableNameSpace_10() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ____parentTableNameSpace_10)); }
	inline String_t* get__parentTableNameSpace_10() const { return ____parentTableNameSpace_10; }
	inline String_t** get_address_of__parentTableNameSpace_10() { return &____parentTableNameSpace_10; }
	inline void set__parentTableNameSpace_10(String_t* value)
	{
		____parentTableNameSpace_10 = value;
		Il2CppCodeGenWriteBarrier((&____parentTableNameSpace_10), value);
	}

	inline static int32_t get_offset_of__childTableNameSpace_11() { return static_cast<int32_t>(offsetof(DataRelation_t3258539283, ____childTableNameSpace_11)); }
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
#endif // DATARELATION_T3258539283_H
#ifndef SQLXML_T2130775032_H
#define SQLXML_T2130775032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlXml
struct  SqlXml_t2130775032  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlXml::notNull
	bool ___notNull_0;
	// System.String System.Data.SqlTypes.SqlXml::xmlValue
	String_t* ___xmlValue_1;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlXml_t2130775032, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_xmlValue_1() { return static_cast<int32_t>(offsetof(SqlXml_t2130775032, ___xmlValue_1)); }
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
#endif // SQLXML_T2130775032_H
#ifndef DATAROW_T793422502_H
#define DATAROW_T793422502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRow
struct  DataRow_t793422502  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRow::_table
	DataTable_t3557248419 * ____table_0;
	// System.Int32 System.Data.DataRow::_original
	int32_t ____original_1;
	// System.Int32 System.Data.DataRow::_current
	int32_t ____current_2;
	// System.Int32 System.Data.DataRow::_proposed
	int32_t ____proposed_3;
	// System.Collections.ArrayList System.Data.DataRow::_columnErrors
	ArrayList_t2374174184 * ____columnErrors_4;
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
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____table_0)); }
	inline DataTable_t3557248419 * get__table_0() const { return ____table_0; }
	inline DataTable_t3557248419 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t3557248419 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__original_1() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____original_1)); }
	inline int32_t get__original_1() const { return ____original_1; }
	inline int32_t* get_address_of__original_1() { return &____original_1; }
	inline void set__original_1(int32_t value)
	{
		____original_1 = value;
	}

	inline static int32_t get_offset_of__current_2() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____current_2)); }
	inline int32_t get__current_2() const { return ____current_2; }
	inline int32_t* get_address_of__current_2() { return &____current_2; }
	inline void set__current_2(int32_t value)
	{
		____current_2 = value;
	}

	inline static int32_t get_offset_of__proposed_3() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____proposed_3)); }
	inline int32_t get__proposed_3() const { return ____proposed_3; }
	inline int32_t* get_address_of__proposed_3() { return &____proposed_3; }
	inline void set__proposed_3(int32_t value)
	{
		____proposed_3 = value;
	}

	inline static int32_t get_offset_of__columnErrors_4() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____columnErrors_4)); }
	inline ArrayList_t2374174184 * get__columnErrors_4() const { return ____columnErrors_4; }
	inline ArrayList_t2374174184 ** get_address_of__columnErrors_4() { return &____columnErrors_4; }
	inline void set__columnErrors_4(ArrayList_t2374174184 * value)
	{
		____columnErrors_4 = value;
		Il2CppCodeGenWriteBarrier((&____columnErrors_4), value);
	}

	inline static int32_t get_offset_of_rowError_5() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ___rowError_5)); }
	inline String_t* get_rowError_5() const { return ___rowError_5; }
	inline String_t** get_address_of_rowError_5() { return &___rowError_5; }
	inline void set_rowError_5(String_t* value)
	{
		___rowError_5 = value;
		Il2CppCodeGenWriteBarrier((&___rowError_5), value);
	}

	inline static int32_t get_offset_of_xmlRowID_6() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ___xmlRowID_6)); }
	inline int32_t get_xmlRowID_6() const { return ___xmlRowID_6; }
	inline int32_t* get_address_of_xmlRowID_6() { return &___xmlRowID_6; }
	inline void set_xmlRowID_6(int32_t value)
	{
		___xmlRowID_6 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolation_7() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____nullConstraintViolation_7)); }
	inline bool get__nullConstraintViolation_7() const { return ____nullConstraintViolation_7; }
	inline bool* get_address_of__nullConstraintViolation_7() { return &____nullConstraintViolation_7; }
	inline void set__nullConstraintViolation_7(bool value)
	{
		____nullConstraintViolation_7 = value;
	}

	inline static int32_t get_offset_of__nullConstraintMessage_8() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____nullConstraintMessage_8)); }
	inline String_t* get__nullConstraintMessage_8() const { return ____nullConstraintMessage_8; }
	inline String_t** get_address_of__nullConstraintMessage_8() { return &____nullConstraintMessage_8; }
	inline void set__nullConstraintMessage_8(String_t* value)
	{
		____nullConstraintMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&____nullConstraintMessage_8), value);
	}

	inline static int32_t get_offset_of__inChangingEvent_9() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____inChangingEvent_9)); }
	inline bool get__inChangingEvent_9() const { return ____inChangingEvent_9; }
	inline bool* get_address_of__inChangingEvent_9() { return &____inChangingEvent_9; }
	inline void set__inChangingEvent_9(bool value)
	{
		____inChangingEvent_9 = value;
	}

	inline static int32_t get_offset_of__rowId_10() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____rowId_10)); }
	inline int32_t get__rowId_10() const { return ____rowId_10; }
	inline int32_t* get_address_of__rowId_10() { return &____rowId_10; }
	inline void set__rowId_10(int32_t value)
	{
		____rowId_10 = value;
	}

	inline static int32_t get_offset_of__rowChanged_11() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____rowChanged_11)); }
	inline bool get__rowChanged_11() const { return ____rowChanged_11; }
	inline bool* get_address_of__rowChanged_11() { return &____rowChanged_11; }
	inline void set__rowChanged_11(bool value)
	{
		____rowChanged_11 = value;
	}

	inline static int32_t get_offset_of__inExpressionEvaluation_12() { return static_cast<int32_t>(offsetof(DataRow_t793422502, ____inExpressionEvaluation_12)); }
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
#endif // DATAROW_T793422502_H
#ifndef DATAROWBUILDER_T2079591726_H
#define DATAROWBUILDER_T2079591726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowBuilder
struct  DataRowBuilder_t2079591726  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.DataRowBuilder::table
	DataTable_t3557248419 * ___table_0;
	// System.Int32 System.Data.DataRowBuilder::_rowId
	int32_t ____rowId_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(DataRowBuilder_t2079591726, ___table_0)); }
	inline DataTable_t3557248419 * get_table_0() const { return ___table_0; }
	inline DataTable_t3557248419 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(DataTable_t3557248419 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of__rowId_1() { return static_cast<int32_t>(offsetof(DataRowBuilder_t2079591726, ____rowId_1)); }
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
#endif // DATAROWBUILDER_T2079591726_H
#ifndef TYPECONVERTER_T3402060652_H
#define TYPECONVERTER_T3402060652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t3402060652  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T3402060652_H
#ifndef INTERNALDATACOLLECTIONBASE_T697251732_H
#define INTERNALDATACOLLECTIONBASE_T697251732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InternalDataCollectionBase
struct  InternalDataCollectionBase_t697251732  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Data.InternalDataCollectionBase::list
	ArrayList_t2374174184 * ___list_0;
	// System.Boolean System.Data.InternalDataCollectionBase::synchronized
	bool ___synchronized_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t697251732, ___list_0)); }
	inline ArrayList_t2374174184 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2374174184 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2374174184 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_synchronized_1() { return static_cast<int32_t>(offsetof(InternalDataCollectionBase_t697251732, ___synchronized_1)); }
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
#endif // INTERNALDATACOLLECTIONBASE_T697251732_H
#ifndef MERGEMANAGER_T3170053755_H
#define MERGEMANAGER_T3170053755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeManager
struct  MergeManager_t3170053755  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEMANAGER_T3170053755_H
#ifndef MARSHALBYREFOBJECT_T3719727093_H
#define MARSHALBYREFOBJECT_T3719727093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t3719727093  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2297319672 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t3719727093, ____identity_0)); }
	inline ServerIdentity_t2297319672 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2297319672 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2297319672 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T3719727093_H
#ifndef VALUETYPE_T1221137822_H
#define VALUETYPE_T1221137822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1221137822  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1221137822_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1221137822_marshaled_com
{
};
#endif // VALUETYPE_T1221137822_H
#ifndef ATTRIBUTE_T463658151_H
#define ATTRIBUTE_T463658151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t463658151  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T463658151_H
#ifndef DBPROVIDERFACTORY_T3470316299_H
#define DBPROVIDERFACTORY_T3470316299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbProviderFactory
struct  DbProviderFactory_t3470316299  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPROVIDERFACTORY_T3470316299_H
#ifndef EXCEPTION_T1855349159_H
#define EXCEPTION_T1855349159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1855349159  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2189504134* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1855349159 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2189504134* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2189504134** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2189504134* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___inner_exception_1)); }
	inline Exception_t1855349159 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1855349159 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1855349159 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1855349159, ____data_10)); }
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
#endif // EXCEPTION_T1855349159_H
#ifndef HASHTABLE_T2902679355_H
#define HASHTABLE_T2902679355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t2902679355  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t1926823902* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t3459058900* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1111602190 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t3840417363 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t3701172772 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___table_4)); }
	inline SlotU5BU5D_t1926823902* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t1926823902** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t1926823902* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___hashes_5)); }
	inline Int32U5BU5D_t3459058900* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t3459058900** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t3459058900* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___hashKeys_7)); }
	inline HashKeys_t1111602190 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1111602190 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1111602190 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___hashValues_8)); }
	inline HashValues_t3840417363 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t3840417363 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t3840417363 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___serializationInfo_11)); }
	inline SerializationInfo_t3701172772 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t3701172772 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t3701172772 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t2902679355_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t3459058900* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t2902679355_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t3459058900* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t3459058900** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t3459058900* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T2902679355_H
#ifndef EVENTARGS_T761006049_H
#define EVENTARGS_T761006049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t761006049  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t761006049_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t761006049 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t761006049_StaticFields, ___Empty_0)); }
	inline EventArgs_t761006049 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t761006049 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t761006049 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T761006049_H
#ifndef MARSHALBYVALUECOMPONENT_T3415908616_H
#define MARSHALBYVALUECOMPONENT_T3415908616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MarshalByValueComponent
struct  MarshalByValueComponent_t3415908616  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.MarshalByValueComponent::eventList
	EventHandlerList_t814000345 * ___eventList_0;
	// System.ComponentModel.ISite System.ComponentModel.MarshalByValueComponent::mySite
	RuntimeObject* ___mySite_1;
	// System.Object System.ComponentModel.MarshalByValueComponent::disposedEvent
	RuntimeObject * ___disposedEvent_2;

public:
	inline static int32_t get_offset_of_eventList_0() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3415908616, ___eventList_0)); }
	inline EventHandlerList_t814000345 * get_eventList_0() const { return ___eventList_0; }
	inline EventHandlerList_t814000345 ** get_address_of_eventList_0() { return &___eventList_0; }
	inline void set_eventList_0(EventHandlerList_t814000345 * value)
	{
		___eventList_0 = value;
		Il2CppCodeGenWriteBarrier((&___eventList_0), value);
	}

	inline static int32_t get_offset_of_mySite_1() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3415908616, ___mySite_1)); }
	inline RuntimeObject* get_mySite_1() const { return ___mySite_1; }
	inline RuntimeObject** get_address_of_mySite_1() { return &___mySite_1; }
	inline void set_mySite_1(RuntimeObject* value)
	{
		___mySite_1 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_1), value);
	}

	inline static int32_t get_offset_of_disposedEvent_2() { return static_cast<int32_t>(offsetof(MarshalByValueComponent_t3415908616, ___disposedEvent_2)); }
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
#endif // MARSHALBYVALUECOMPONENT_T3415908616_H
#ifndef RECORDCACHE_T3670191456_H
#define RECORDCACHE_T3670191456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.RecordCache
struct  RecordCache_t3670191456  : public RuntimeObject
{
public:
	// System.Collections.Stack System.Data.Common.RecordCache::_records
	Stack_t1822568221 * ____records_0;
	// System.Int32 System.Data.Common.RecordCache::_nextFreeIndex
	int32_t ____nextFreeIndex_1;
	// System.Int32 System.Data.Common.RecordCache::_currentCapacity
	int32_t ____currentCapacity_2;
	// System.Data.DataTable System.Data.Common.RecordCache::_table
	DataTable_t3557248419 * ____table_3;
	// System.Data.DataRow[] System.Data.Common.RecordCache::_rowsToRecords
	DataRowU5BU5D_t2197358595* ____rowsToRecords_4;

public:
	inline static int32_t get_offset_of__records_0() { return static_cast<int32_t>(offsetof(RecordCache_t3670191456, ____records_0)); }
	inline Stack_t1822568221 * get__records_0() const { return ____records_0; }
	inline Stack_t1822568221 ** get_address_of__records_0() { return &____records_0; }
	inline void set__records_0(Stack_t1822568221 * value)
	{
		____records_0 = value;
		Il2CppCodeGenWriteBarrier((&____records_0), value);
	}

	inline static int32_t get_offset_of__nextFreeIndex_1() { return static_cast<int32_t>(offsetof(RecordCache_t3670191456, ____nextFreeIndex_1)); }
	inline int32_t get__nextFreeIndex_1() const { return ____nextFreeIndex_1; }
	inline int32_t* get_address_of__nextFreeIndex_1() { return &____nextFreeIndex_1; }
	inline void set__nextFreeIndex_1(int32_t value)
	{
		____nextFreeIndex_1 = value;
	}

	inline static int32_t get_offset_of__currentCapacity_2() { return static_cast<int32_t>(offsetof(RecordCache_t3670191456, ____currentCapacity_2)); }
	inline int32_t get__currentCapacity_2() const { return ____currentCapacity_2; }
	inline int32_t* get_address_of__currentCapacity_2() { return &____currentCapacity_2; }
	inline void set__currentCapacity_2(int32_t value)
	{
		____currentCapacity_2 = value;
	}

	inline static int32_t get_offset_of__table_3() { return static_cast<int32_t>(offsetof(RecordCache_t3670191456, ____table_3)); }
	inline DataTable_t3557248419 * get__table_3() const { return ____table_3; }
	inline DataTable_t3557248419 ** get_address_of__table_3() { return &____table_3; }
	inline void set__table_3(DataTable_t3557248419 * value)
	{
		____table_3 = value;
		Il2CppCodeGenWriteBarrier((&____table_3), value);
	}

	inline static int32_t get_offset_of__rowsToRecords_4() { return static_cast<int32_t>(offsetof(RecordCache_t3670191456, ____rowsToRecords_4)); }
	inline DataRowU5BU5D_t2197358595* get__rowsToRecords_4() const { return ____rowsToRecords_4; }
	inline DataRowU5BU5D_t2197358595** get_address_of__rowsToRecords_4() { return &____rowsToRecords_4; }
	inline void set__rowsToRecords_4(DataRowU5BU5D_t2197358595* value)
	{
		____rowsToRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____rowsToRecords_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDCACHE_T3670191456_H
#ifndef DBTYPES_T3515484222_H
#define DBTYPES_T3515484222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbTypes
struct  DbTypes_t3515484222  : public RuntimeObject
{
public:

public:
};

struct DbTypes_t3515484222_StaticFields
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
	inline static int32_t get_offset_of_TypeOfBoolean_0() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfBoolean_0)); }
	inline Type_t * get_TypeOfBoolean_0() const { return ___TypeOfBoolean_0; }
	inline Type_t ** get_address_of_TypeOfBoolean_0() { return &___TypeOfBoolean_0; }
	inline void set_TypeOfBoolean_0(Type_t * value)
	{
		___TypeOfBoolean_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfBoolean_0), value);
	}

	inline static int32_t get_offset_of_TypeOfSByte_1() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfSByte_1)); }
	inline Type_t * get_TypeOfSByte_1() const { return ___TypeOfSByte_1; }
	inline Type_t ** get_address_of_TypeOfSByte_1() { return &___TypeOfSByte_1; }
	inline void set_TypeOfSByte_1(Type_t * value)
	{
		___TypeOfSByte_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSByte_1), value);
	}

	inline static int32_t get_offset_of_TypeOfChar_2() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfChar_2)); }
	inline Type_t * get_TypeOfChar_2() const { return ___TypeOfChar_2; }
	inline Type_t ** get_address_of_TypeOfChar_2() { return &___TypeOfChar_2; }
	inline void set_TypeOfChar_2(Type_t * value)
	{
		___TypeOfChar_2 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfChar_2), value);
	}

	inline static int32_t get_offset_of_TypeOfInt16_3() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfInt16_3)); }
	inline Type_t * get_TypeOfInt16_3() const { return ___TypeOfInt16_3; }
	inline Type_t ** get_address_of_TypeOfInt16_3() { return &___TypeOfInt16_3; }
	inline void set_TypeOfInt16_3(Type_t * value)
	{
		___TypeOfInt16_3 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt16_3), value);
	}

	inline static int32_t get_offset_of_TypeOfInt32_4() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfInt32_4)); }
	inline Type_t * get_TypeOfInt32_4() const { return ___TypeOfInt32_4; }
	inline Type_t ** get_address_of_TypeOfInt32_4() { return &___TypeOfInt32_4; }
	inline void set_TypeOfInt32_4(Type_t * value)
	{
		___TypeOfInt32_4 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt32_4), value);
	}

	inline static int32_t get_offset_of_TypeOfInt64_5() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfInt64_5)); }
	inline Type_t * get_TypeOfInt64_5() const { return ___TypeOfInt64_5; }
	inline Type_t ** get_address_of_TypeOfInt64_5() { return &___TypeOfInt64_5; }
	inline void set_TypeOfInt64_5(Type_t * value)
	{
		___TypeOfInt64_5 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfInt64_5), value);
	}

	inline static int32_t get_offset_of_TypeOfByte_6() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfByte_6)); }
	inline Type_t * get_TypeOfByte_6() const { return ___TypeOfByte_6; }
	inline Type_t ** get_address_of_TypeOfByte_6() { return &___TypeOfByte_6; }
	inline void set_TypeOfByte_6(Type_t * value)
	{
		___TypeOfByte_6 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByte_6), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt16_7() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfUInt16_7)); }
	inline Type_t * get_TypeOfUInt16_7() const { return ___TypeOfUInt16_7; }
	inline Type_t ** get_address_of_TypeOfUInt16_7() { return &___TypeOfUInt16_7; }
	inline void set_TypeOfUInt16_7(Type_t * value)
	{
		___TypeOfUInt16_7 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt16_7), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt32_8() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfUInt32_8)); }
	inline Type_t * get_TypeOfUInt32_8() const { return ___TypeOfUInt32_8; }
	inline Type_t ** get_address_of_TypeOfUInt32_8() { return &___TypeOfUInt32_8; }
	inline void set_TypeOfUInt32_8(Type_t * value)
	{
		___TypeOfUInt32_8 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt32_8), value);
	}

	inline static int32_t get_offset_of_TypeOfUInt64_9() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfUInt64_9)); }
	inline Type_t * get_TypeOfUInt64_9() const { return ___TypeOfUInt64_9; }
	inline Type_t ** get_address_of_TypeOfUInt64_9() { return &___TypeOfUInt64_9; }
	inline void set_TypeOfUInt64_9(Type_t * value)
	{
		___TypeOfUInt64_9 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfUInt64_9), value);
	}

	inline static int32_t get_offset_of_TypeOfDouble_10() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfDouble_10)); }
	inline Type_t * get_TypeOfDouble_10() const { return ___TypeOfDouble_10; }
	inline Type_t ** get_address_of_TypeOfDouble_10() { return &___TypeOfDouble_10; }
	inline void set_TypeOfDouble_10(Type_t * value)
	{
		___TypeOfDouble_10 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDouble_10), value);
	}

	inline static int32_t get_offset_of_TypeOfSingle_11() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfSingle_11)); }
	inline Type_t * get_TypeOfSingle_11() const { return ___TypeOfSingle_11; }
	inline Type_t ** get_address_of_TypeOfSingle_11() { return &___TypeOfSingle_11; }
	inline void set_TypeOfSingle_11(Type_t * value)
	{
		___TypeOfSingle_11 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfSingle_11), value);
	}

	inline static int32_t get_offset_of_TypeOfDecimal_12() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfDecimal_12)); }
	inline Type_t * get_TypeOfDecimal_12() const { return ___TypeOfDecimal_12; }
	inline Type_t ** get_address_of_TypeOfDecimal_12() { return &___TypeOfDecimal_12; }
	inline void set_TypeOfDecimal_12(Type_t * value)
	{
		___TypeOfDecimal_12 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDecimal_12), value);
	}

	inline static int32_t get_offset_of_TypeOfString_13() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfString_13)); }
	inline Type_t * get_TypeOfString_13() const { return ___TypeOfString_13; }
	inline Type_t ** get_address_of_TypeOfString_13() { return &___TypeOfString_13; }
	inline void set_TypeOfString_13(Type_t * value)
	{
		___TypeOfString_13 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfString_13), value);
	}

	inline static int32_t get_offset_of_TypeOfDateTime_14() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfDateTime_14)); }
	inline Type_t * get_TypeOfDateTime_14() const { return ___TypeOfDateTime_14; }
	inline Type_t ** get_address_of_TypeOfDateTime_14() { return &___TypeOfDateTime_14; }
	inline void set_TypeOfDateTime_14(Type_t * value)
	{
		___TypeOfDateTime_14 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfDateTime_14), value);
	}

	inline static int32_t get_offset_of_TypeOfObject_15() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfObject_15)); }
	inline Type_t * get_TypeOfObject_15() const { return ___TypeOfObject_15; }
	inline Type_t ** get_address_of_TypeOfObject_15() { return &___TypeOfObject_15; }
	inline void set_TypeOfObject_15(Type_t * value)
	{
		___TypeOfObject_15 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfObject_15), value);
	}

	inline static int32_t get_offset_of_TypeOfGuid_16() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfGuid_16)); }
	inline Type_t * get_TypeOfGuid_16() const { return ___TypeOfGuid_16; }
	inline Type_t ** get_address_of_TypeOfGuid_16() { return &___TypeOfGuid_16; }
	inline void set_TypeOfGuid_16(Type_t * value)
	{
		___TypeOfGuid_16 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfGuid_16), value);
	}

	inline static int32_t get_offset_of_TypeOfType_17() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfType_17)); }
	inline Type_t * get_TypeOfType_17() const { return ___TypeOfType_17; }
	inline Type_t ** get_address_of_TypeOfType_17() { return &___TypeOfType_17; }
	inline void set_TypeOfType_17(Type_t * value)
	{
		___TypeOfType_17 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfType_17), value);
	}

	inline static int32_t get_offset_of_TypeOfByteArray_18() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfByteArray_18)); }
	inline Type_t * get_TypeOfByteArray_18() const { return ___TypeOfByteArray_18; }
	inline Type_t ** get_address_of_TypeOfByteArray_18() { return &___TypeOfByteArray_18; }
	inline void set_TypeOfByteArray_18(Type_t * value)
	{
		___TypeOfByteArray_18 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfByteArray_18), value);
	}

	inline static int32_t get_offset_of_TypeOfFloat_19() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfFloat_19)); }
	inline Type_t * get_TypeOfFloat_19() const { return ___TypeOfFloat_19; }
	inline Type_t ** get_address_of_TypeOfFloat_19() { return &___TypeOfFloat_19; }
	inline void set_TypeOfFloat_19(Type_t * value)
	{
		___TypeOfFloat_19 = value;
		Il2CppCodeGenWriteBarrier((&___TypeOfFloat_19), value);
	}

	inline static int32_t get_offset_of_TypeOfTimespan_20() { return static_cast<int32_t>(offsetof(DbTypes_t3515484222_StaticFields, ___TypeOfTimespan_20)); }
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
#endif // DBTYPES_T3515484222_H
#ifndef INDEX_T1374197991_H
#define INDEX_T1374197991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Index
struct  Index_t1374197991  : public RuntimeObject
{
public:
	// System.Int32[] System.Data.Common.Index::_array
	Int32U5BU5D_t3459058900* ____array_1;
	// System.Int32 System.Data.Common.Index::_size
	int32_t ____size_2;
	// System.Data.Common.Key System.Data.Common.Index::_key
	Key_t2901176986 * ____key_3;
	// System.Int32 System.Data.Common.Index::_refCount
	int32_t ____refCount_4;
	// System.Boolean System.Data.Common.Index::know_have_duplicates
	bool ___know_have_duplicates_5;
	// System.Boolean System.Data.Common.Index::know_no_duplicates
	bool ___know_no_duplicates_6;

public:
	inline static int32_t get_offset_of__array_1() { return static_cast<int32_t>(offsetof(Index_t1374197991, ____array_1)); }
	inline Int32U5BU5D_t3459058900* get__array_1() const { return ____array_1; }
	inline Int32U5BU5D_t3459058900** get_address_of__array_1() { return &____array_1; }
	inline void set__array_1(Int32U5BU5D_t3459058900* value)
	{
		____array_1 = value;
		Il2CppCodeGenWriteBarrier((&____array_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(Index_t1374197991, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__key_3() { return static_cast<int32_t>(offsetof(Index_t1374197991, ____key_3)); }
	inline Key_t2901176986 * get__key_3() const { return ____key_3; }
	inline Key_t2901176986 ** get_address_of__key_3() { return &____key_3; }
	inline void set__key_3(Key_t2901176986 * value)
	{
		____key_3 = value;
		Il2CppCodeGenWriteBarrier((&____key_3), value);
	}

	inline static int32_t get_offset_of__refCount_4() { return static_cast<int32_t>(offsetof(Index_t1374197991, ____refCount_4)); }
	inline int32_t get__refCount_4() const { return ____refCount_4; }
	inline int32_t* get_address_of__refCount_4() { return &____refCount_4; }
	inline void set__refCount_4(int32_t value)
	{
		____refCount_4 = value;
	}

	inline static int32_t get_offset_of_know_have_duplicates_5() { return static_cast<int32_t>(offsetof(Index_t1374197991, ___know_have_duplicates_5)); }
	inline bool get_know_have_duplicates_5() const { return ___know_have_duplicates_5; }
	inline bool* get_address_of_know_have_duplicates_5() { return &___know_have_duplicates_5; }
	inline void set_know_have_duplicates_5(bool value)
	{
		___know_have_duplicates_5 = value;
	}

	inline static int32_t get_offset_of_know_no_duplicates_6() { return static_cast<int32_t>(offsetof(Index_t1374197991, ___know_no_duplicates_6)); }
	inline bool get_know_no_duplicates_6() const { return ___know_no_duplicates_6; }
	inline bool* get_address_of_know_no_duplicates_6() { return &___know_no_duplicates_6; }
	inline void set_know_no_duplicates_6(bool value)
	{
		___know_no_duplicates_6 = value;
	}
};

struct Index_t1374197991_StaticFields
{
public:
	// System.Int32[] System.Data.Common.Index::empty
	Int32U5BU5D_t3459058900* ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(Index_t1374197991_StaticFields, ___empty_0)); }
	inline Int32U5BU5D_t3459058900* get_empty_0() const { return ___empty_0; }
	inline Int32U5BU5D_t3459058900** get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(Int32U5BU5D_t3459058900* value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEX_T1374197991_H
#ifndef CONSTRAINT_T2822837117_H
#define CONSTRAINT_T2822837117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Constraint
struct  Constraint_t2822837117  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList System.Data.Constraint::events
	EventHandlerList_t814000345 * ___events_1;
	// System.String System.Data.Constraint::_constraintName
	String_t* ____constraintName_2;
	// System.Data.PropertyCollection System.Data.Constraint::_properties
	PropertyCollection_t2338443888 * ____properties_3;
	// System.Data.Common.Index System.Data.Constraint::_index
	Index_t1374197991 * ____index_4;
	// System.Data.ConstraintCollection System.Data.Constraint::_constraintCollection
	ConstraintCollection_t1629304036 * ____constraintCollection_5;
	// System.Data.DataSet System.Data.Constraint::dataSet
	DataSet_t3917940959 * ___dataSet_6;
	// System.Boolean System.Data.Constraint::initInProgress
	bool ___initInProgress_7;

public:
	inline static int32_t get_offset_of_events_1() { return static_cast<int32_t>(offsetof(Constraint_t2822837117, ___events_1)); }
	inline EventHandlerList_t814000345 * get_events_1() const { return ___events_1; }
	inline EventHandlerList_t814000345 ** get_address_of_events_1() { return &___events_1; }
	inline void set_events_1(EventHandlerList_t814000345 * value)
	{
		___events_1 = value;
		Il2CppCodeGenWriteBarrier((&___events_1), value);
	}

	inline static int32_t get_offset_of__constraintName_2() { return static_cast<int32_t>(offsetof(Constraint_t2822837117, ____constraintName_2)); }
	inline String_t* get__constraintName_2() const { return ____constraintName_2; }
	inline String_t** get_address_of__constraintName_2() { return &____constraintName_2; }
	inline void set__constraintName_2(String_t* value)
	{
		____constraintName_2 = value;
		Il2CppCodeGenWriteBarrier((&____constraintName_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(Constraint_t2822837117, ____properties_3)); }
	inline PropertyCollection_t2338443888 * get__properties_3() const { return ____properties_3; }
	inline PropertyCollection_t2338443888 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyCollection_t2338443888 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(Constraint_t2822837117, ____index_4)); }
	inline Index_t1374197991 * get__index_4() const { return ____index_4; }
	inline Index_t1374197991 ** get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(Index_t1374197991 * value)
	{
		____index_4 = value;
		Il2CppCodeGenWriteBarrier((&____index_4), value);
	}

	inline static int32_t get_offset_of__constraintCollection_5() { return static_cast<int32_t>(offsetof(Constraint_t2822837117, ____constraintCollection_5)); }
	inline ConstraintCollection_t1629304036 * get__constraintCollection_5() const { return ____constraintCollection_5; }
	inline ConstraintCollection_t1629304036 ** get_address_of__constraintCollection_5() { return &____constraintCollection_5; }
	inline void set__constraintCollection_5(ConstraintCollection_t1629304036 * value)
	{
		____constraintCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_5), value);
	}

	inline static int32_t get_offset_of_dataSet_6() { return static_cast<int32_t>(offsetof(Constraint_t2822837117, ___dataSet_6)); }
	inline DataSet_t3917940959 * get_dataSet_6() const { return ___dataSet_6; }
	inline DataSet_t3917940959 ** get_address_of_dataSet_6() { return &___dataSet_6; }
	inline void set_dataSet_6(DataSet_t3917940959 * value)
	{
		___dataSet_6 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_6), value);
	}

	inline static int32_t get_offset_of_initInProgress_7() { return static_cast<int32_t>(offsetof(Constraint_t2822837117, ___initInProgress_7)); }
	inline bool get_initInProgress_7() const { return ___initInProgress_7; }
	inline bool* get_address_of_initInProgress_7() { return &___initInProgress_7; }
	inline void set_initInProgress_7(bool value)
	{
		___initInProgress_7 = value;
	}
};

struct Constraint_t2822837117_StaticFields
{
public:
	// System.Object System.Data.Constraint::beforeConstraintNameChange
	RuntimeObject * ___beforeConstraintNameChange_0;

public:
	inline static int32_t get_offset_of_beforeConstraintNameChange_0() { return static_cast<int32_t>(offsetof(Constraint_t2822837117_StaticFields, ___beforeConstraintNameChange_0)); }
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
#endif // CONSTRAINT_T2822837117_H
#ifndef PROPERTYCOLLECTION_T2338443888_H
#define PROPERTYCOLLECTION_T2338443888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.PropertyCollection
struct  PropertyCollection_t2338443888  : public Hashtable_t2902679355
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYCOLLECTION_T2338443888_H
#ifndef DATACOLUMNCHANGEEVENTARGS_T94204385_H
#define DATACOLUMNCHANGEEVENTARGS_T94204385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnChangeEventArgs
struct  DataColumnChangeEventArgs_t94204385  : public EventArgs_t761006049
{
public:
	// System.Data.DataColumn System.Data.DataColumnChangeEventArgs::_column
	DataColumn_t1291436568 * ____column_1;
	// System.Data.DataRow System.Data.DataColumnChangeEventArgs::_row
	DataRow_t793422502 * ____row_2;
	// System.Object System.Data.DataColumnChangeEventArgs::_proposedValue
	RuntimeObject * ____proposedValue_3;

public:
	inline static int32_t get_offset_of__column_1() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t94204385, ____column_1)); }
	inline DataColumn_t1291436568 * get__column_1() const { return ____column_1; }
	inline DataColumn_t1291436568 ** get_address_of__column_1() { return &____column_1; }
	inline void set__column_1(DataColumn_t1291436568 * value)
	{
		____column_1 = value;
		Il2CppCodeGenWriteBarrier((&____column_1), value);
	}

	inline static int32_t get_offset_of__row_2() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t94204385, ____row_2)); }
	inline DataRow_t793422502 * get__row_2() const { return ____row_2; }
	inline DataRow_t793422502 ** get_address_of__row_2() { return &____row_2; }
	inline void set__row_2(DataRow_t793422502 * value)
	{
		____row_2 = value;
		Il2CppCodeGenWriteBarrier((&____row_2), value);
	}

	inline static int32_t get_offset_of__proposedValue_3() { return static_cast<int32_t>(offsetof(DataColumnChangeEventArgs_t94204385, ____proposedValue_3)); }
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
#endif // DATACOLUMNCHANGEEVENTARGS_T94204385_H
#ifndef MERGEFAILEDEVENTARGS_T585845895_H
#define MERGEFAILEDEVENTARGS_T585845895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MergeFailedEventArgs
struct  MergeFailedEventArgs_t585845895  : public EventArgs_t761006049
{
public:
	// System.Data.DataTable System.Data.MergeFailedEventArgs::data_table
	DataTable_t3557248419 * ___data_table_1;
	// System.String System.Data.MergeFailedEventArgs::conflict
	String_t* ___conflict_2;

public:
	inline static int32_t get_offset_of_data_table_1() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t585845895, ___data_table_1)); }
	inline DataTable_t3557248419 * get_data_table_1() const { return ___data_table_1; }
	inline DataTable_t3557248419 ** get_address_of_data_table_1() { return &___data_table_1; }
	inline void set_data_table_1(DataTable_t3557248419 * value)
	{
		___data_table_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_table_1), value);
	}

	inline static int32_t get_offset_of_conflict_2() { return static_cast<int32_t>(offsetof(MergeFailedEventArgs_t585845895, ___conflict_2)); }
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
#endif // MERGEFAILEDEVENTARGS_T585845895_H
#ifndef CATEGORYATTRIBUTE_T880074458_H
#define CATEGORYATTRIBUTE_T880074458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CategoryAttribute
struct  CategoryAttribute_t880074458  : public Attribute_t463658151
{
public:
	// System.String System.ComponentModel.CategoryAttribute::category
	String_t* ___category_0;
	// System.Boolean System.ComponentModel.CategoryAttribute::IsLocalized
	bool ___IsLocalized_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(CategoryAttribute_t880074458, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_IsLocalized_1() { return static_cast<int32_t>(offsetof(CategoryAttribute_t880074458, ___IsLocalized_1)); }
	inline bool get_IsLocalized_1() const { return ___IsLocalized_1; }
	inline bool* get_address_of_IsLocalized_1() { return &___IsLocalized_1; }
	inline void set_IsLocalized_1(bool value)
	{
		___IsLocalized_1 = value;
	}
};

struct CategoryAttribute_t880074458_StaticFields
{
public:
	// System.ComponentModel.CategoryAttribute modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CategoryAttribute::def
	CategoryAttribute_t880074458 * ___def_2;
	// System.Object System.ComponentModel.CategoryAttribute::lockobj
	RuntimeObject * ___lockobj_3;

public:
	inline static int32_t get_offset_of_def_2() { return static_cast<int32_t>(offsetof(CategoryAttribute_t880074458_StaticFields, ___def_2)); }
	inline CategoryAttribute_t880074458 * get_def_2() const { return ___def_2; }
	inline CategoryAttribute_t880074458 ** get_address_of_def_2() { return &___def_2; }
	inline void set_def_2(CategoryAttribute_t880074458 * value)
	{
		___def_2 = value;
		Il2CppCodeGenWriteBarrier((&___def_2), value);
	}

	inline static int32_t get_offset_of_lockobj_3() { return static_cast<int32_t>(offsetof(CategoryAttribute_t880074458_StaticFields, ___lockobj_3)); }
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
#endif // CATEGORYATTRIBUTE_T880074458_H
#ifndef DATATABLENEWROWEVENTARGS_T1050019527_H
#define DATATABLENEWROWEVENTARGS_T1050019527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableNewRowEventArgs
struct  DataTableNewRowEventArgs_t1050019527  : public EventArgs_t761006049
{
public:
	// System.Data.DataRow System.Data.DataTableNewRowEventArgs::_row
	DataRow_t793422502 * ____row_1;

public:
	inline static int32_t get_offset_of__row_1() { return static_cast<int32_t>(offsetof(DataTableNewRowEventArgs_t1050019527, ____row_1)); }
	inline DataRow_t793422502 * get__row_1() const { return ____row_1; }
	inline DataRow_t793422502 ** get_address_of__row_1() { return &____row_1; }
	inline void set__row_1(DataRow_t793422502 * value)
	{
		____row_1 = value;
		Il2CppCodeGenWriteBarrier((&____row_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLENEWROWEVENTARGS_T1050019527_H
#ifndef DATATABLECOLLECTION_T568115666_H
#define DATATABLECOLLECTION_T568115666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTableCollection
struct  DataTableCollection_t568115666  : public InternalDataCollectionBase_t697251732
{
public:
	// System.Data.DataSet System.Data.DataTableCollection::dataSet
	DataSet_t3917940959 * ___dataSet_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanged
	CollectionChangeEventHandler_t2881381690 * ___CollectionChanged_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataTableCollection::CollectionChanging
	CollectionChangeEventHandler_t2881381690 * ___CollectionChanging_4;

public:
	inline static int32_t get_offset_of_dataSet_2() { return static_cast<int32_t>(offsetof(DataTableCollection_t568115666, ___dataSet_2)); }
	inline DataSet_t3917940959 * get_dataSet_2() const { return ___dataSet_2; }
	inline DataSet_t3917940959 ** get_address_of_dataSet_2() { return &___dataSet_2; }
	inline void set_dataSet_2(DataSet_t3917940959 * value)
	{
		___dataSet_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(DataTableCollection_t568115666, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2881381690 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2881381690 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2881381690 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}

	inline static int32_t get_offset_of_CollectionChanging_4() { return static_cast<int32_t>(offsetof(DataTableCollection_t568115666, ___CollectionChanging_4)); }
	inline CollectionChangeEventHandler_t2881381690 * get_CollectionChanging_4() const { return ___CollectionChanging_4; }
	inline CollectionChangeEventHandler_t2881381690 ** get_address_of_CollectionChanging_4() { return &___CollectionChanging_4; }
	inline void set_CollectionChanging_4(CollectionChangeEventHandler_t2881381690 * value)
	{
		___CollectionChanging_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanging_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLECOLLECTION_T568115666_H
#ifndef ENUM_T1813265844_H
#define ENUM_T1813265844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1813265844  : public ValueType_t1221137822
{
public:

public:
};

struct Enum_t1813265844_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t4171157588* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1813265844_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t4171157588* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t4171157588** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t4171157588* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1813265844_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1813265844_marshaled_com
{
};
#endif // ENUM_T1813265844_H
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
	RandomNumberGenerator_t2085603257 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2085603257 * ____fastRng_14;

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
	inline RandomNumberGenerator_t2085603257 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2085603257 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2085603257 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2085603257 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2085603257 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2085603257 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef DECIMAL_T910938021_H
#define DECIMAL_T910938021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t910938021 
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
	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Decimal_t910938021, ___flags_6)); }
	inline uint32_t get_flags_6() const { return ___flags_6; }
	inline uint32_t* get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(uint32_t value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_hi_7() { return static_cast<int32_t>(offsetof(Decimal_t910938021, ___hi_7)); }
	inline uint32_t get_hi_7() const { return ___hi_7; }
	inline uint32_t* get_address_of_hi_7() { return &___hi_7; }
	inline void set_hi_7(uint32_t value)
	{
		___hi_7 = value;
	}

	inline static int32_t get_offset_of_lo_8() { return static_cast<int32_t>(offsetof(Decimal_t910938021, ___lo_8)); }
	inline uint32_t get_lo_8() const { return ___lo_8; }
	inline uint32_t* get_address_of_lo_8() { return &___lo_8; }
	inline void set_lo_8(uint32_t value)
	{
		___lo_8 = value;
	}

	inline static int32_t get_offset_of_mid_9() { return static_cast<int32_t>(offsetof(Decimal_t910938021, ___mid_9)); }
	inline uint32_t get_mid_9() const { return ___mid_9; }
	inline uint32_t* get_address_of_mid_9() { return &___mid_9; }
	inline void set_mid_9(uint32_t value)
	{
		___mid_9 = value;
	}
};

struct Decimal_t910938021_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t910938021  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t910938021  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t910938021  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t910938021  ___One_3;
	// System.Decimal System.Decimal::Zero
	Decimal_t910938021  ___Zero_4;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t910938021  ___MaxValueDiv10_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t910938021_StaticFields, ___MinValue_0)); }
	inline Decimal_t910938021  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t910938021 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t910938021  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t910938021_StaticFields, ___MaxValue_1)); }
	inline Decimal_t910938021  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t910938021 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t910938021  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t910938021_StaticFields, ___MinusOne_2)); }
	inline Decimal_t910938021  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t910938021 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t910938021  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t910938021_StaticFields, ___One_3)); }
	inline Decimal_t910938021  get_One_3() const { return ___One_3; }
	inline Decimal_t910938021 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t910938021  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_Zero_4() { return static_cast<int32_t>(offsetof(Decimal_t910938021_StaticFields, ___Zero_4)); }
	inline Decimal_t910938021  get_Zero_4() const { return ___Zero_4; }
	inline Decimal_t910938021 * get_address_of_Zero_4() { return &___Zero_4; }
	inline void set_Zero_4(Decimal_t910938021  value)
	{
		___Zero_4 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_5() { return static_cast<int32_t>(offsetof(Decimal_t910938021_StaticFields, ___MaxValueDiv10_5)); }
	inline Decimal_t910938021  get_MaxValueDiv10_5() const { return ___MaxValueDiv10_5; }
	inline Decimal_t910938021 * get_address_of_MaxValueDiv10_5() { return &___MaxValueDiv10_5; }
	inline void set_MaxValueDiv10_5(Decimal_t910938021  value)
	{
		___MaxValueDiv10_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T910938021_H
#ifndef DATARELATIONCOLLECTION_T213541485_H
#define DATARELATIONCOLLECTION_T213541485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection
struct  DataRelationCollection_t213541485  : public InternalDataCollectionBase_t697251732
{
public:
	// System.Data.DataRelation System.Data.DataRelationCollection::inTransition
	DataRelation_t3258539283 * ___inTransition_2;
	// System.Int32 System.Data.DataRelationCollection::index
	int32_t ___index_3;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataRelationCollection::CollectionChanged
	CollectionChangeEventHandler_t2881381690 * ___CollectionChanged_4;

public:
	inline static int32_t get_offset_of_inTransition_2() { return static_cast<int32_t>(offsetof(DataRelationCollection_t213541485, ___inTransition_2)); }
	inline DataRelation_t3258539283 * get_inTransition_2() const { return ___inTransition_2; }
	inline DataRelation_t3258539283 ** get_address_of_inTransition_2() { return &___inTransition_2; }
	inline void set_inTransition_2(DataRelation_t3258539283 * value)
	{
		___inTransition_2 = value;
		Il2CppCodeGenWriteBarrier((&___inTransition_2), value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(DataRelationCollection_t213541485, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_CollectionChanged_4() { return static_cast<int32_t>(offsetof(DataRelationCollection_t213541485, ___CollectionChanged_4)); }
	inline CollectionChangeEventHandler_t2881381690 * get_CollectionChanged_4() const { return ___CollectionChanged_4; }
	inline CollectionChangeEventHandler_t2881381690 ** get_address_of_CollectionChanged_4() { return &___CollectionChanged_4; }
	inline void set_CollectionChanged_4(CollectionChangeEventHandler_t2881381690 * value)
	{
		___CollectionChanged_4 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATARELATIONCOLLECTION_T213541485_H
#ifndef DESCRIPTIONATTRIBUTE_T1205677918_H
#define DESCRIPTIONATTRIBUTE_T1205677918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t1205677918  : public Attribute_t463658151
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::desc
	String_t* ___desc_0;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t1205677918, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((&___desc_0), value);
	}
};

struct DescriptionAttribute_t1205677918_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t1205677918 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t1205677918_StaticFields, ___Default_1)); }
	inline DescriptionAttribute_t1205677918 * get_Default_1() const { return ___Default_1; }
	inline DescriptionAttribute_t1205677918 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DescriptionAttribute_t1205677918 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T1205677918_H
#ifndef TIMESPAN_T3431509403_H
#define TIMESPAN_T3431509403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3431509403 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3431509403, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3431509403_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3431509403  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3431509403  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3431509403  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3431509403_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3431509403  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3431509403 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3431509403  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3431509403_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3431509403  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3431509403 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3431509403  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3431509403_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3431509403  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3431509403 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3431509403  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3431509403_H
#ifndef DATACOLUMNCOLLECTION_T3329180304_H
#define DATACOLUMNCOLLECTION_T3329180304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumnCollection
struct  DataColumnCollection_t3329180304  : public InternalDataCollectionBase_t697251732
{
public:
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnNameCount
	Hashtable_t2902679355 * ___columnNameCount_2;
	// System.Collections.Hashtable System.Data.DataColumnCollection::columnFromName
	Hashtable_t2902679355 * ___columnFromName_3;
	// System.Collections.ArrayList System.Data.DataColumnCollection::autoIncrement
	ArrayList_t2374174184 * ___autoIncrement_4;
	// System.Int32 System.Data.DataColumnCollection::defaultColumnIndex
	int32_t ___defaultColumnIndex_5;
	// System.Data.DataTable System.Data.DataColumnCollection::parentTable
	DataTable_t3557248419 * ___parentTable_6;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionChanged
	CollectionChangeEventHandler_t2881381690 * ___CollectionChanged_9;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.DataColumnCollection::CollectionMetaDataChanged
	CollectionChangeEventHandler_t2881381690 * ___CollectionMetaDataChanged_10;

public:
	inline static int32_t get_offset_of_columnNameCount_2() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304, ___columnNameCount_2)); }
	inline Hashtable_t2902679355 * get_columnNameCount_2() const { return ___columnNameCount_2; }
	inline Hashtable_t2902679355 ** get_address_of_columnNameCount_2() { return &___columnNameCount_2; }
	inline void set_columnNameCount_2(Hashtable_t2902679355 * value)
	{
		___columnNameCount_2 = value;
		Il2CppCodeGenWriteBarrier((&___columnNameCount_2), value);
	}

	inline static int32_t get_offset_of_columnFromName_3() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304, ___columnFromName_3)); }
	inline Hashtable_t2902679355 * get_columnFromName_3() const { return ___columnFromName_3; }
	inline Hashtable_t2902679355 ** get_address_of_columnFromName_3() { return &___columnFromName_3; }
	inline void set_columnFromName_3(Hashtable_t2902679355 * value)
	{
		___columnFromName_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnFromName_3), value);
	}

	inline static int32_t get_offset_of_autoIncrement_4() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304, ___autoIncrement_4)); }
	inline ArrayList_t2374174184 * get_autoIncrement_4() const { return ___autoIncrement_4; }
	inline ArrayList_t2374174184 ** get_address_of_autoIncrement_4() { return &___autoIncrement_4; }
	inline void set_autoIncrement_4(ArrayList_t2374174184 * value)
	{
		___autoIncrement_4 = value;
		Il2CppCodeGenWriteBarrier((&___autoIncrement_4), value);
	}

	inline static int32_t get_offset_of_defaultColumnIndex_5() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304, ___defaultColumnIndex_5)); }
	inline int32_t get_defaultColumnIndex_5() const { return ___defaultColumnIndex_5; }
	inline int32_t* get_address_of_defaultColumnIndex_5() { return &___defaultColumnIndex_5; }
	inline void set_defaultColumnIndex_5(int32_t value)
	{
		___defaultColumnIndex_5 = value;
	}

	inline static int32_t get_offset_of_parentTable_6() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304, ___parentTable_6)); }
	inline DataTable_t3557248419 * get_parentTable_6() const { return ___parentTable_6; }
	inline DataTable_t3557248419 ** get_address_of_parentTable_6() { return &___parentTable_6; }
	inline void set_parentTable_6(DataTable_t3557248419 * value)
	{
		___parentTable_6 = value;
		Il2CppCodeGenWriteBarrier((&___parentTable_6), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_9() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304, ___CollectionChanged_9)); }
	inline CollectionChangeEventHandler_t2881381690 * get_CollectionChanged_9() const { return ___CollectionChanged_9; }
	inline CollectionChangeEventHandler_t2881381690 ** get_address_of_CollectionChanged_9() { return &___CollectionChanged_9; }
	inline void set_CollectionChanged_9(CollectionChangeEventHandler_t2881381690 * value)
	{
		___CollectionChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_9), value);
	}

	inline static int32_t get_offset_of_CollectionMetaDataChanged_10() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304, ___CollectionMetaDataChanged_10)); }
	inline CollectionChangeEventHandler_t2881381690 * get_CollectionMetaDataChanged_10() const { return ___CollectionMetaDataChanged_10; }
	inline CollectionChangeEventHandler_t2881381690 ** get_address_of_CollectionMetaDataChanged_10() { return &___CollectionMetaDataChanged_10; }
	inline void set_CollectionMetaDataChanged_10(CollectionChangeEventHandler_t2881381690 * value)
	{
		___CollectionMetaDataChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionMetaDataChanged_10), value);
	}
};

struct DataColumnCollection_t3329180304_StaticFields
{
public:
	// System.String System.Data.DataColumnCollection::ColumnPrefix
	String_t* ___ColumnPrefix_7;
	// System.String[] System.Data.DataColumnCollection::TenColumns
	StringU5BU5D_t2114809087* ___TenColumns_8;

public:
	inline static int32_t get_offset_of_ColumnPrefix_7() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304_StaticFields, ___ColumnPrefix_7)); }
	inline String_t* get_ColumnPrefix_7() const { return ___ColumnPrefix_7; }
	inline String_t** get_address_of_ColumnPrefix_7() { return &___ColumnPrefix_7; }
	inline void set_ColumnPrefix_7(String_t* value)
	{
		___ColumnPrefix_7 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnPrefix_7), value);
	}

	inline static int32_t get_offset_of_TenColumns_8() { return static_cast<int32_t>(offsetof(DataColumnCollection_t3329180304_StaticFields, ___TenColumns_8)); }
	inline StringU5BU5D_t2114809087* get_TenColumns_8() const { return ___TenColumns_8; }
	inline StringU5BU5D_t2114809087** get_address_of_TenColumns_8() { return &___TenColumns_8; }
	inline void set_TenColumns_8(StringU5BU5D_t2114809087* value)
	{
		___TenColumns_8 = value;
		Il2CppCodeGenWriteBarrier((&___TenColumns_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACOLUMNCOLLECTION_T3329180304_H
#ifndef SYSTEMEXCEPTION_T515177351_H
#define SYSTEMEXCEPTION_T515177351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t515177351  : public Exception_t1855349159
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T515177351_H
#ifndef COMPONENT_T2856023423_H
#define COMPONENT_T2856023423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t2856023423  : public MarshalByRefObject_t3719727093
{
public:
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::event_handlers
	EventHandlerList_t814000345 * ___event_handlers_1;
	// System.ComponentModel.ISite System.ComponentModel.Component::mySite
	RuntimeObject* ___mySite_2;
	// System.Object System.ComponentModel.Component::disposedEvent
	RuntimeObject * ___disposedEvent_3;

public:
	inline static int32_t get_offset_of_event_handlers_1() { return static_cast<int32_t>(offsetof(Component_t2856023423, ___event_handlers_1)); }
	inline EventHandlerList_t814000345 * get_event_handlers_1() const { return ___event_handlers_1; }
	inline EventHandlerList_t814000345 ** get_address_of_event_handlers_1() { return &___event_handlers_1; }
	inline void set_event_handlers_1(EventHandlerList_t814000345 * value)
	{
		___event_handlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___event_handlers_1), value);
	}

	inline static int32_t get_offset_of_mySite_2() { return static_cast<int32_t>(offsetof(Component_t2856023423, ___mySite_2)); }
	inline RuntimeObject* get_mySite_2() const { return ___mySite_2; }
	inline RuntimeObject** get_address_of_mySite_2() { return &___mySite_2; }
	inline void set_mySite_2(RuntimeObject* value)
	{
		___mySite_2 = value;
		Il2CppCodeGenWriteBarrier((&___mySite_2), value);
	}

	inline static int32_t get_offset_of_disposedEvent_3() { return static_cast<int32_t>(offsetof(Component_t2856023423, ___disposedEvent_3)); }
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
#endif // COMPONENT_T2856023423_H
#ifndef EXPANDABLEOBJECTCONVERTER_T586583215_H
#define EXPANDABLEOBJECTCONVERTER_T586583215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExpandableObjectConverter
struct  ExpandableObjectConverter_t586583215  : public TypeConverter_t3402060652
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPANDABLEOBJECTCONVERTER_T586583215_H
#ifndef DATAROWCOLLECTION_T3150816660_H
#define DATAROWCOLLECTION_T3150816660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowCollection
struct  DataRowCollection_t3150816660  : public InternalDataCollectionBase_t697251732
{
public:
	// System.Data.DataTable System.Data.DataRowCollection::table
	DataTable_t3557248419 * ___table_2;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(DataRowCollection_t3150816660, ___table_2)); }
	inline DataTable_t3557248419 * get_table_2() const { return ___table_2; }
	inline DataTable_t3557248419 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t3557248419 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAROWCOLLECTION_T3150816660_H
#ifndef SQLINT32_T227699779_H
#define SQLINT32_T227699779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt32
struct  SqlInt32_t227699779 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlInt32::value
	int32_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt32::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt32_t227699779, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt32_t227699779, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt32_t227699779_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MaxValue
	SqlInt32_t227699779  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::MinValue
	SqlInt32_t227699779  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Null
	SqlInt32_t227699779  ___Null_4;
	// System.Data.SqlTypes.SqlInt32 System.Data.SqlTypes.SqlInt32::Zero
	SqlInt32_t227699779  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt32_t227699779_StaticFields, ___MaxValue_2)); }
	inline SqlInt32_t227699779  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt32_t227699779 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt32_t227699779  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt32_t227699779_StaticFields, ___MinValue_3)); }
	inline SqlInt32_t227699779  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt32_t227699779 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt32_t227699779  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt32_t227699779_StaticFields, ___Null_4)); }
	inline SqlInt32_t227699779  get_Null_4() const { return ___Null_4; }
	inline SqlInt32_t227699779 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt32_t227699779  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt32_t227699779_StaticFields, ___Zero_5)); }
	inline SqlInt32_t227699779  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt32_t227699779 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt32_t227699779  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t227699779_marshaled_pinvoke
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt32
struct SqlInt32_t227699779_marshaled_com
{
	int32_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT32_T227699779_H
#ifndef DATATABLEMAPPINGCOLLECTION_T2798561756_H
#define DATATABLEMAPPINGCOLLECTION_T2798561756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMappingCollection
struct  DataTableMappingCollection_t2798561756  : public MarshalByRefObject_t3719727093
{
public:
	// System.Collections.ArrayList System.Data.Common.DataTableMappingCollection::mappings
	ArrayList_t2374174184 * ___mappings_1;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::sourceTables
	Hashtable_t2902679355 * ___sourceTables_2;
	// System.Collections.Hashtable System.Data.Common.DataTableMappingCollection::dataSetTables
	Hashtable_t2902679355 * ___dataSetTables_3;

public:
	inline static int32_t get_offset_of_mappings_1() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2798561756, ___mappings_1)); }
	inline ArrayList_t2374174184 * get_mappings_1() const { return ___mappings_1; }
	inline ArrayList_t2374174184 ** get_address_of_mappings_1() { return &___mappings_1; }
	inline void set_mappings_1(ArrayList_t2374174184 * value)
	{
		___mappings_1 = value;
		Il2CppCodeGenWriteBarrier((&___mappings_1), value);
	}

	inline static int32_t get_offset_of_sourceTables_2() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2798561756, ___sourceTables_2)); }
	inline Hashtable_t2902679355 * get_sourceTables_2() const { return ___sourceTables_2; }
	inline Hashtable_t2902679355 ** get_address_of_sourceTables_2() { return &___sourceTables_2; }
	inline void set_sourceTables_2(Hashtable_t2902679355 * value)
	{
		___sourceTables_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTables_2), value);
	}

	inline static int32_t get_offset_of_dataSetTables_3() { return static_cast<int32_t>(offsetof(DataTableMappingCollection_t2798561756, ___dataSetTables_3)); }
	inline Hashtable_t2902679355 * get_dataSetTables_3() const { return ___dataSetTables_3; }
	inline Hashtable_t2902679355 ** get_address_of_dataSetTables_3() { return &___dataSetTables_3; }
	inline void set_dataSetTables_3(Hashtable_t2902679355 * value)
	{
		___dataSetTables_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTables_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPINGCOLLECTION_T2798561756_H
#ifndef DBPARAMETER_T1828078135_H
#define DBPARAMETER_T1828078135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameter
struct  DbParameter_t1828078135  : public MarshalByRefObject_t3719727093
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETER_T1828078135_H
#ifndef DBPARAMETERCOLLECTION_T476421843_H
#define DBPARAMETERCOLLECTION_T476421843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t476421843  : public MarshalByRefObject_t3719727093
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBPARAMETERCOLLECTION_T476421843_H
#ifndef SQLBINARY_T1965529616_H
#define SQLBINARY_T1965529616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBinary
struct  SqlBinary_t1965529616 
{
public:
	// System.Byte[] System.Data.SqlTypes.SqlBinary::value
	ByteU5BU5D_t2677048370* ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBinary::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBinary_t1965529616, ___value_0)); }
	inline ByteU5BU5D_t2677048370* get_value_0() const { return ___value_0; }
	inline ByteU5BU5D_t2677048370** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ByteU5BU5D_t2677048370* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBinary_t1965529616, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBinary_t1965529616_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBinary System.Data.SqlTypes.SqlBinary::Null
	SqlBinary_t1965529616  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlBinary_t1965529616_StaticFields, ___Null_2)); }
	inline SqlBinary_t1965529616  get_Null_2() const { return ___Null_2; }
	inline SqlBinary_t1965529616 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlBinary_t1965529616  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t1965529616_marshaled_pinvoke
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBinary
struct SqlBinary_t1965529616_marshaled_com
{
	uint8_t* ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBINARY_T1965529616_H
#ifndef SQLBOOLEAN_T346223151_H
#define SQLBOOLEAN_T346223151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBoolean
struct  SqlBoolean_t346223151 
{
public:
	// System.Byte System.Data.SqlTypes.SqlBoolean::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlBoolean::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlBoolean_t346223151, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlBoolean_t346223151, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlBoolean_t346223151_StaticFields
{
public:
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::False
	SqlBoolean_t346223151  ___False_2;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Null
	SqlBoolean_t346223151  ___Null_3;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::One
	SqlBoolean_t346223151  ___One_4;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::True
	SqlBoolean_t346223151  ___True_5;
	// System.Data.SqlTypes.SqlBoolean System.Data.SqlTypes.SqlBoolean::Zero
	SqlBoolean_t346223151  ___Zero_6;

public:
	inline static int32_t get_offset_of_False_2() { return static_cast<int32_t>(offsetof(SqlBoolean_t346223151_StaticFields, ___False_2)); }
	inline SqlBoolean_t346223151  get_False_2() const { return ___False_2; }
	inline SqlBoolean_t346223151 * get_address_of_False_2() { return &___False_2; }
	inline void set_False_2(SqlBoolean_t346223151  value)
	{
		___False_2 = value;
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(SqlBoolean_t346223151_StaticFields, ___Null_3)); }
	inline SqlBoolean_t346223151  get_Null_3() const { return ___Null_3; }
	inline SqlBoolean_t346223151 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(SqlBoolean_t346223151  value)
	{
		___Null_3 = value;
	}

	inline static int32_t get_offset_of_One_4() { return static_cast<int32_t>(offsetof(SqlBoolean_t346223151_StaticFields, ___One_4)); }
	inline SqlBoolean_t346223151  get_One_4() const { return ___One_4; }
	inline SqlBoolean_t346223151 * get_address_of_One_4() { return &___One_4; }
	inline void set_One_4(SqlBoolean_t346223151  value)
	{
		___One_4 = value;
	}

	inline static int32_t get_offset_of_True_5() { return static_cast<int32_t>(offsetof(SqlBoolean_t346223151_StaticFields, ___True_5)); }
	inline SqlBoolean_t346223151  get_True_5() const { return ___True_5; }
	inline SqlBoolean_t346223151 * get_address_of_True_5() { return &___True_5; }
	inline void set_True_5(SqlBoolean_t346223151  value)
	{
		___True_5 = value;
	}

	inline static int32_t get_offset_of_Zero_6() { return static_cast<int32_t>(offsetof(SqlBoolean_t346223151_StaticFields, ___Zero_6)); }
	inline SqlBoolean_t346223151  get_Zero_6() const { return ___Zero_6; }
	inline SqlBoolean_t346223151 * get_address_of_Zero_6() { return &___Zero_6; }
	inline void set_Zero_6(SqlBoolean_t346223151  value)
	{
		___Zero_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t346223151_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlBoolean
struct SqlBoolean_t346223151_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBOOLEAN_T346223151_H
#ifndef SQLBYTE_T583242281_H
#define SQLBYTE_T583242281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlByte
struct  SqlByte_t583242281 
{
public:
	// System.Byte System.Data.SqlTypes.SqlByte::value
	uint8_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlByte::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlByte_t583242281, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlByte_t583242281, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlByte_t583242281_StaticFields
{
public:
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MaxValue
	SqlByte_t583242281  ___MaxValue_2;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::MinValue
	SqlByte_t583242281  ___MinValue_3;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Null
	SqlByte_t583242281  ___Null_4;
	// System.Data.SqlTypes.SqlByte System.Data.SqlTypes.SqlByte::Zero
	SqlByte_t583242281  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlByte_t583242281_StaticFields, ___MaxValue_2)); }
	inline SqlByte_t583242281  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlByte_t583242281 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlByte_t583242281  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlByte_t583242281_StaticFields, ___MinValue_3)); }
	inline SqlByte_t583242281  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlByte_t583242281 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlByte_t583242281  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlByte_t583242281_StaticFields, ___Null_4)); }
	inline SqlByte_t583242281  get_Null_4() const { return ___Null_4; }
	inline SqlByte_t583242281 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlByte_t583242281  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlByte_t583242281_StaticFields, ___Zero_5)); }
	inline SqlByte_t583242281  get_Zero_5() const { return ___Zero_5; }
	inline SqlByte_t583242281 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlByte_t583242281  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t583242281_marshaled_pinvoke
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlByte
struct SqlByte_t583242281_marshaled_com
{
	uint8_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLBYTE_T583242281_H
#ifndef SQLDECIMAL_T2046928231_H
#define SQLDECIMAL_T2046928231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDecimal
struct  SqlDecimal_t2046928231 
{
public:
	// System.Int32[] System.Data.SqlTypes.SqlDecimal::value
	Int32U5BU5D_t3459058900* ___value_0;
	// System.Byte System.Data.SqlTypes.SqlDecimal::precision
	uint8_t ___precision_1;
	// System.Byte System.Data.SqlTypes.SqlDecimal::scale
	uint8_t ___scale_2;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::positive
	bool ___positive_3;
	// System.Boolean System.Data.SqlTypes.SqlDecimal::notNull
	bool ___notNull_4;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231, ___value_0)); }
	inline Int32U5BU5D_t3459058900* get_value_0() const { return ___value_0; }
	inline Int32U5BU5D_t3459058900** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Int32U5BU5D_t3459058900* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_precision_1() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231, ___precision_1)); }
	inline uint8_t get_precision_1() const { return ___precision_1; }
	inline uint8_t* get_address_of_precision_1() { return &___precision_1; }
	inline void set_precision_1(uint8_t value)
	{
		___precision_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231, ___scale_2)); }
	inline uint8_t get_scale_2() const { return ___scale_2; }
	inline uint8_t* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(uint8_t value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_positive_3() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231, ___positive_3)); }
	inline bool get_positive_3() const { return ___positive_3; }
	inline bool* get_address_of_positive_3() { return &___positive_3; }
	inline void set_positive_3(bool value)
	{
		___positive_3 = value;
	}

	inline static int32_t get_offset_of_notNull_4() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231, ___notNull_4)); }
	inline bool get_notNull_4() const { return ___notNull_4; }
	inline bool* get_address_of_notNull_4() { return &___notNull_4; }
	inline void set_notNull_4(bool value)
	{
		___notNull_4 = value;
	}
};

struct SqlDecimal_t2046928231_StaticFields
{
public:
	// System.UInt32[] System.Data.SqlTypes.SqlDecimal::constantsDecadeInt32Factors
	UInt32U5BU5D_t3253494211* ___constantsDecadeInt32Factors_5;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxPrecision
	uint8_t ___MaxPrecision_6;
	// System.Byte System.Data.SqlTypes.SqlDecimal::MaxScale
	uint8_t ___MaxScale_7;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MaxValue
	SqlDecimal_t2046928231  ___MaxValue_8;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::MinValue
	SqlDecimal_t2046928231  ___MinValue_9;
	// System.Data.SqlTypes.SqlDecimal System.Data.SqlTypes.SqlDecimal::Null
	SqlDecimal_t2046928231  ___Null_10;

public:
	inline static int32_t get_offset_of_constantsDecadeInt32Factors_5() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231_StaticFields, ___constantsDecadeInt32Factors_5)); }
	inline UInt32U5BU5D_t3253494211* get_constantsDecadeInt32Factors_5() const { return ___constantsDecadeInt32Factors_5; }
	inline UInt32U5BU5D_t3253494211** get_address_of_constantsDecadeInt32Factors_5() { return &___constantsDecadeInt32Factors_5; }
	inline void set_constantsDecadeInt32Factors_5(UInt32U5BU5D_t3253494211* value)
	{
		___constantsDecadeInt32Factors_5 = value;
		Il2CppCodeGenWriteBarrier((&___constantsDecadeInt32Factors_5), value);
	}

	inline static int32_t get_offset_of_MaxPrecision_6() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231_StaticFields, ___MaxPrecision_6)); }
	inline uint8_t get_MaxPrecision_6() const { return ___MaxPrecision_6; }
	inline uint8_t* get_address_of_MaxPrecision_6() { return &___MaxPrecision_6; }
	inline void set_MaxPrecision_6(uint8_t value)
	{
		___MaxPrecision_6 = value;
	}

	inline static int32_t get_offset_of_MaxScale_7() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231_StaticFields, ___MaxScale_7)); }
	inline uint8_t get_MaxScale_7() const { return ___MaxScale_7; }
	inline uint8_t* get_address_of_MaxScale_7() { return &___MaxScale_7; }
	inline void set_MaxScale_7(uint8_t value)
	{
		___MaxScale_7 = value;
	}

	inline static int32_t get_offset_of_MaxValue_8() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231_StaticFields, ___MaxValue_8)); }
	inline SqlDecimal_t2046928231  get_MaxValue_8() const { return ___MaxValue_8; }
	inline SqlDecimal_t2046928231 * get_address_of_MaxValue_8() { return &___MaxValue_8; }
	inline void set_MaxValue_8(SqlDecimal_t2046928231  value)
	{
		___MaxValue_8 = value;
	}

	inline static int32_t get_offset_of_MinValue_9() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231_StaticFields, ___MinValue_9)); }
	inline SqlDecimal_t2046928231  get_MinValue_9() const { return ___MinValue_9; }
	inline SqlDecimal_t2046928231 * get_address_of_MinValue_9() { return &___MinValue_9; }
	inline void set_MinValue_9(SqlDecimal_t2046928231  value)
	{
		___MinValue_9 = value;
	}

	inline static int32_t get_offset_of_Null_10() { return static_cast<int32_t>(offsetof(SqlDecimal_t2046928231_StaticFields, ___Null_10)); }
	inline SqlDecimal_t2046928231  get_Null_10() const { return ___Null_10; }
	inline SqlDecimal_t2046928231 * get_address_of_Null_10() { return &___Null_10; }
	inline void set_Null_10(SqlDecimal_t2046928231  value)
	{
		___Null_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t2046928231_marshaled_pinvoke
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDecimal
struct SqlDecimal_t2046928231_marshaled_com
{
	int32_t* ___value_0;
	uint8_t ___precision_1;
	uint8_t ___scale_2;
	int32_t ___positive_3;
	int32_t ___notNull_4;
};
#endif // SQLDECIMAL_T2046928231_H
#ifndef SQLDOUBLE_T3851545678_H
#define SQLDOUBLE_T3851545678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDouble
struct  SqlDouble_t3851545678 
{
public:
	// System.Double System.Data.SqlTypes.SqlDouble::value
	double ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDouble::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDouble_t3851545678, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDouble_t3851545678, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDouble_t3851545678_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MaxValue
	SqlDouble_t3851545678  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::MinValue
	SqlDouble_t3851545678  ___MinValue_3;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Null
	SqlDouble_t3851545678  ___Null_4;
	// System.Data.SqlTypes.SqlDouble System.Data.SqlTypes.SqlDouble::Zero
	SqlDouble_t3851545678  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDouble_t3851545678_StaticFields, ___MaxValue_2)); }
	inline SqlDouble_t3851545678  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDouble_t3851545678 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDouble_t3851545678  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDouble_t3851545678_StaticFields, ___MinValue_3)); }
	inline SqlDouble_t3851545678  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDouble_t3851545678 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDouble_t3851545678  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDouble_t3851545678_StaticFields, ___Null_4)); }
	inline SqlDouble_t3851545678  get_Null_4() const { return ___Null_4; }
	inline SqlDouble_t3851545678 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDouble_t3851545678  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlDouble_t3851545678_StaticFields, ___Zero_5)); }
	inline SqlDouble_t3851545678  get_Zero_5() const { return ___Zero_5; }
	inline SqlDouble_t3851545678 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlDouble_t3851545678  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t3851545678_marshaled_pinvoke
{
	double ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDouble
struct SqlDouble_t3851545678_marshaled_com
{
	double ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDOUBLE_T3851545678_H
#ifndef SQLINT16_T498169526_H
#define SQLINT16_T498169526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt16
struct  SqlInt16_t498169526 
{
public:
	// System.Int16 System.Data.SqlTypes.SqlInt16::value
	int16_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt16::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt16_t498169526, ___value_0)); }
	inline int16_t get_value_0() const { return ___value_0; }
	inline int16_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int16_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt16_t498169526, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt16_t498169526_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MaxValue
	SqlInt16_t498169526  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::MinValue
	SqlInt16_t498169526  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Null
	SqlInt16_t498169526  ___Null_4;
	// System.Data.SqlTypes.SqlInt16 System.Data.SqlTypes.SqlInt16::Zero
	SqlInt16_t498169526  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt16_t498169526_StaticFields, ___MaxValue_2)); }
	inline SqlInt16_t498169526  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt16_t498169526 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt16_t498169526  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt16_t498169526_StaticFields, ___MinValue_3)); }
	inline SqlInt16_t498169526  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt16_t498169526 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt16_t498169526  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt16_t498169526_StaticFields, ___Null_4)); }
	inline SqlInt16_t498169526  get_Null_4() const { return ___Null_4; }
	inline SqlInt16_t498169526 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt16_t498169526  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt16_t498169526_StaticFields, ___Zero_5)); }
	inline SqlInt16_t498169526  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt16_t498169526 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt16_t498169526  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t498169526_marshaled_pinvoke
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt16
struct SqlInt16_t498169526_marshaled_com
{
	int16_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT16_T498169526_H
#ifndef CONSTRAINTCOLLECTION_T1629304036_H
#define CONSTRAINTCOLLECTION_T1629304036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintCollection
struct  ConstraintCollection_t1629304036  : public InternalDataCollectionBase_t697251732
{
public:
	// System.Data.DataTable System.Data.ConstraintCollection::table
	DataTable_t3557248419 * ___table_2;
	// System.ComponentModel.CollectionChangeEventHandler System.Data.ConstraintCollection::CollectionChanged
	CollectionChangeEventHandler_t2881381690 * ___CollectionChanged_3;

public:
	inline static int32_t get_offset_of_table_2() { return static_cast<int32_t>(offsetof(ConstraintCollection_t1629304036, ___table_2)); }
	inline DataTable_t3557248419 * get_table_2() const { return ___table_2; }
	inline DataTable_t3557248419 ** get_address_of_table_2() { return &___table_2; }
	inline void set_table_2(DataTable_t3557248419 * value)
	{
		___table_2 = value;
		Il2CppCodeGenWriteBarrier((&___table_2), value);
	}

	inline static int32_t get_offset_of_CollectionChanged_3() { return static_cast<int32_t>(offsetof(ConstraintCollection_t1629304036, ___CollectionChanged_3)); }
	inline CollectionChangeEventHandler_t2881381690 * get_CollectionChanged_3() const { return ___CollectionChanged_3; }
	inline CollectionChangeEventHandler_t2881381690 ** get_address_of_CollectionChanged_3() { return &___CollectionChanged_3; }
	inline void set_CollectionChanged_3(CollectionChangeEventHandler_t2881381690 * value)
	{
		___CollectionChanged_3 = value;
		Il2CppCodeGenWriteBarrier((&___CollectionChanged_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCOLLECTION_T1629304036_H
#ifndef SQLINT64_T4191277368_H
#define SQLINT64_T4191277368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlInt64
struct  SqlInt64_t4191277368 
{
public:
	// System.Int64 System.Data.SqlTypes.SqlInt64::value
	int64_t ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlInt64::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlInt64_t4191277368, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlInt64_t4191277368, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlInt64_t4191277368_StaticFields
{
public:
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MaxValue
	SqlInt64_t4191277368  ___MaxValue_2;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::MinValue
	SqlInt64_t4191277368  ___MinValue_3;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Null
	SqlInt64_t4191277368  ___Null_4;
	// System.Data.SqlTypes.SqlInt64 System.Data.SqlTypes.SqlInt64::Zero
	SqlInt64_t4191277368  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlInt64_t4191277368_StaticFields, ___MaxValue_2)); }
	inline SqlInt64_t4191277368  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlInt64_t4191277368 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlInt64_t4191277368  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlInt64_t4191277368_StaticFields, ___MinValue_3)); }
	inline SqlInt64_t4191277368  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlInt64_t4191277368 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlInt64_t4191277368  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlInt64_t4191277368_StaticFields, ___Null_4)); }
	inline SqlInt64_t4191277368  get_Null_4() const { return ___Null_4; }
	inline SqlInt64_t4191277368 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlInt64_t4191277368  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlInt64_t4191277368_StaticFields, ___Zero_5)); }
	inline SqlInt64_t4191277368  get_Zero_5() const { return ___Zero_5; }
	inline SqlInt64_t4191277368 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlInt64_t4191277368  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t4191277368_marshaled_pinvoke
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlInt64
struct SqlInt64_t4191277368_marshaled_com
{
	int64_t ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLINT64_T4191277368_H
#ifndef SQLSINGLE_T3580894546_H
#define SQLSINGLE_T3580894546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlSingle
struct  SqlSingle_t3580894546 
{
public:
	// System.Single System.Data.SqlTypes.SqlSingle::value
	float ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlSingle::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlSingle_t3580894546, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlSingle_t3580894546, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlSingle_t3580894546_StaticFields
{
public:
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MaxValue
	SqlSingle_t3580894546  ___MaxValue_2;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::MinValue
	SqlSingle_t3580894546  ___MinValue_3;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Null
	SqlSingle_t3580894546  ___Null_4;
	// System.Data.SqlTypes.SqlSingle System.Data.SqlTypes.SqlSingle::Zero
	SqlSingle_t3580894546  ___Zero_5;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlSingle_t3580894546_StaticFields, ___MaxValue_2)); }
	inline SqlSingle_t3580894546  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlSingle_t3580894546 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlSingle_t3580894546  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlSingle_t3580894546_StaticFields, ___MinValue_3)); }
	inline SqlSingle_t3580894546  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlSingle_t3580894546 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlSingle_t3580894546  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlSingle_t3580894546_StaticFields, ___Null_4)); }
	inline SqlSingle_t3580894546  get_Null_4() const { return ___Null_4; }
	inline SqlSingle_t3580894546 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlSingle_t3580894546  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlSingle_t3580894546_StaticFields, ___Zero_5)); }
	inline SqlSingle_t3580894546  get_Zero_5() const { return ___Zero_5; }
	inline SqlSingle_t3580894546 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlSingle_t3580894546  value)
	{
		___Zero_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3580894546_marshaled_pinvoke
{
	float ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlSingle
struct SqlSingle_t3580894546_marshaled_com
{
	float ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLSINGLE_T3580894546_H
#ifndef DATATABLEMAPPING_T1735306289_H
#define DATATABLEMAPPING_T1735306289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataTableMapping
struct  DataTableMapping_t1735306289  : public MarshalByRefObject_t3719727093
{
public:
	// System.String System.Data.Common.DataTableMapping::sourceTable
	String_t* ___sourceTable_1;
	// System.String System.Data.Common.DataTableMapping::dataSetTable
	String_t* ___dataSetTable_2;
	// System.Data.Common.DataColumnMappingCollection System.Data.Common.DataTableMapping::columnMappings
	DataColumnMappingCollection_t3620046051 * ___columnMappings_3;

public:
	inline static int32_t get_offset_of_sourceTable_1() { return static_cast<int32_t>(offsetof(DataTableMapping_t1735306289, ___sourceTable_1)); }
	inline String_t* get_sourceTable_1() const { return ___sourceTable_1; }
	inline String_t** get_address_of_sourceTable_1() { return &___sourceTable_1; }
	inline void set_sourceTable_1(String_t* value)
	{
		___sourceTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___sourceTable_1), value);
	}

	inline static int32_t get_offset_of_dataSetTable_2() { return static_cast<int32_t>(offsetof(DataTableMapping_t1735306289, ___dataSetTable_2)); }
	inline String_t* get_dataSetTable_2() const { return ___dataSetTable_2; }
	inline String_t** get_address_of_dataSetTable_2() { return &___dataSetTable_2; }
	inline void set_dataSetTable_2(String_t* value)
	{
		___dataSetTable_2 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetTable_2), value);
	}

	inline static int32_t get_offset_of_columnMappings_3() { return static_cast<int32_t>(offsetof(DataTableMapping_t1735306289, ___columnMappings_3)); }
	inline DataColumnMappingCollection_t3620046051 * get_columnMappings_3() const { return ___columnMappings_3; }
	inline DataColumnMappingCollection_t3620046051 ** get_address_of_columnMappings_3() { return &___columnMappings_3; }
	inline void set_columnMappings_3(DataColumnMappingCollection_t3620046051 * value)
	{
		___columnMappings_3 = value;
		Il2CppCodeGenWriteBarrier((&___columnMappings_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLEMAPPING_T1735306289_H
#ifndef CONSTRAINTCONVERTER_T3024456279_H
#define CONSTRAINTCONVERTER_T3024456279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintConverter
struct  ConstraintConverter_t3024456279  : public ExpandableObjectConverter_t586583215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTCONVERTER_T3024456279_H
#ifndef MAPPINGTYPE_T1545966524_H
#define MAPPINGTYPE_T1545966524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MappingType
struct  MappingType_t1545966524 
{
public:
	// System.Int32 System.Data.MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t1545966524, ___value___1)); }
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
#endif // MAPPINGTYPE_T1545966524_H
#ifndef DATASETRELATIONCOLLECTION_T765330754_H
#define DATASETRELATIONCOLLECTION_T765330754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataSetRelationCollection
struct  DataSetRelationCollection_t765330754  : public DataRelationCollection_t213541485
{
public:
	// System.Data.DataSet System.Data.DataRelationCollection/DataSetRelationCollection::dataSet
	DataSet_t3917940959 * ___dataSet_5;

public:
	inline static int32_t get_offset_of_dataSet_5() { return static_cast<int32_t>(offsetof(DataSetRelationCollection_t765330754, ___dataSet_5)); }
	inline DataSet_t3917940959 * get_dataSet_5() const { return ___dataSet_5; }
	inline DataSet_t3917940959 ** get_address_of_dataSet_5() { return &___dataSet_5; }
	inline void set_dataSet_5(DataSet_t3917940959 * value)
	{
		___dataSet_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASETRELATIONCOLLECTION_T765330754_H
#ifndef SQLTYPEEXCEPTION_T2665868951_H
#define SQLTYPEEXCEPTION_T2665868951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTypeException
struct  SqlTypeException_t2665868951  : public SystemException_t515177351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTYPEEXCEPTION_T2665868951_H
#ifndef MISSINGSCHEMAACTION_T2489813475_H
#define MISSINGSCHEMAACTION_T2489813475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingSchemaAction
struct  MissingSchemaAction_t2489813475 
{
public:
	// System.Int32 System.Data.MissingSchemaAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MissingSchemaAction_t2489813475, ___value___1)); }
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
#endif // MISSINGSCHEMAACTION_T2489813475_H
#ifndef PARAMETERDIRECTION_T450714121_H
#define PARAMETERDIRECTION_T450714121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ParameterDirection
struct  ParameterDirection_t450714121 
{
public:
	// System.Int32 System.Data.ParameterDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterDirection_t450714121, ___value___1)); }
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
#endif // PARAMETERDIRECTION_T450714121_H
#ifndef SQLGUID_T670641496_H
#define SQLGUID_T670641496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlGuid
struct  SqlGuid_t670641496 
{
public:
	// System.Guid System.Data.SqlTypes.SqlGuid::value
	Guid_t  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlGuid::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlGuid_t670641496, ___value_0)); }
	inline Guid_t  get_value_0() const { return ___value_0; }
	inline Guid_t * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Guid_t  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlGuid_t670641496, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlGuid_t670641496_StaticFields
{
public:
	// System.Data.SqlTypes.SqlGuid System.Data.SqlTypes.SqlGuid::Null
	SqlGuid_t670641496  ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(SqlGuid_t670641496_StaticFields, ___Null_2)); }
	inline SqlGuid_t670641496  get_Null_2() const { return ___Null_2; }
	inline SqlGuid_t670641496 * get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(SqlGuid_t670641496  value)
	{
		___Null_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t670641496_marshaled_pinvoke
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlGuid
struct SqlGuid_t670641496_marshaled_com
{
	Guid_t  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLGUID_T670641496_H
#ifndef STORAGESTATE_T1651896631_H
#define STORAGESTATE_T1651896631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.StorageState
struct  StorageState_t1651896631 
{
public:
	// System.Int32 System.Data.SqlTypes.StorageState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StorageState_t1651896631, ___value___1)); }
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
#endif // STORAGESTATE_T1651896631_H
#ifndef DATAROWACTION_T3649658171_H
#define DATAROWACTION_T3649658171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowAction
struct  DataRowAction_t3649658171 
{
public:
	// System.Int32 System.Data.DataRowAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowAction_t3649658171, ___value___1)); }
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
#endif // DATAROWACTION_T3649658171_H
#ifndef RESDESCRIPTIONATTRIBUTE_T1119504674_H
#define RESDESCRIPTIONATTRIBUTE_T1119504674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ResDescriptionAttribute
struct  ResDescriptionAttribute_t1119504674  : public DescriptionAttribute_t1205677918
{
public:
	// System.String System.Data.ResDescriptionAttribute::description
	String_t* ___description_2;

public:
	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(ResDescriptionAttribute_t1119504674, ___description_2)); }
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
#endif // RESDESCRIPTIONATTRIBUTE_T1119504674_H
#ifndef SQLCOMPAREOPTIONS_T2241908394_H
#define SQLCOMPAREOPTIONS_T2241908394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlCompareOptions
struct  SqlCompareOptions_t2241908394 
{
public:
	// System.Int32 System.Data.SqlTypes.SqlCompareOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SqlCompareOptions_t2241908394, ___value___1)); }
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
#endif // SQLCOMPAREOPTIONS_T2241908394_H
#ifndef RULE_T1797838765_H
#define RULE_T1797838765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Rule
struct  Rule_t1797838765 
{
public:
	// System.Int32 System.Data.Rule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Rule_t1797838765, ___value___1)); }
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
#endif // RULE_T1797838765_H
#ifndef SCHEMASERIALIZATIONMODE_T201347391_H
#define SCHEMASERIALIZATIONMODE_T201347391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SchemaSerializationMode
struct  SchemaSerializationMode_t201347391 
{
public:
	// System.Int32 System.Data.SchemaSerializationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SchemaSerializationMode_t201347391, ___value___1)); }
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
#endif // SCHEMASERIALIZATIONMODE_T201347391_H
#ifndef SERIALIZATIONFORMAT_T2821137780_H
#define SERIALIZATIONFORMAT_T2821137780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SerializationFormat
struct  SerializationFormat_t2821137780 
{
public:
	// System.Int32 System.Data.SerializationFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SerializationFormat_t2821137780, ___value___1)); }
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
#endif // SERIALIZATIONFORMAT_T2821137780_H
#ifndef DATAADAPTER_T790688923_H
#define DATAADAPTER_T790688923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DataAdapter
struct  DataAdapter_t790688923  : public Component_t2856023423
{
public:
	// System.Data.Common.DataTableMappingCollection System.Data.Common.DataAdapter::tableMappings
	DataTableMappingCollection_t2798561756 * ___tableMappings_4;

public:
	inline static int32_t get_offset_of_tableMappings_4() { return static_cast<int32_t>(offsetof(DataAdapter_t790688923, ___tableMappings_4)); }
	inline DataTableMappingCollection_t2798561756 * get_tableMappings_4() const { return ___tableMappings_4; }
	inline DataTableMappingCollection_t2798561756 ** get_address_of_tableMappings_4() { return &___tableMappings_4; }
	inline void set_tableMappings_4(DataTableMappingCollection_t2798561756 * value)
	{
		___tableMappings_4 = value;
		Il2CppCodeGenWriteBarrier((&___tableMappings_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAADAPTER_T790688923_H
#ifndef RELATIONSHIPCONVERTER_T2412424286_H
#define RELATIONSHIPCONVERTER_T2412424286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RelationshipConverter
struct  RelationshipConverter_t2412424286  : public ExpandableObjectConverter_t586583215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELATIONSHIPCONVERTER_T2412424286_H
#ifndef DATATABLERELATIONCOLLECTION_T3010343470_H
#define DATATABLERELATIONCOLLECTION_T3010343470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRelationCollection/DataTableRelationCollection
struct  DataTableRelationCollection_t3010343470  : public DataRelationCollection_t213541485
{
public:
	// System.Data.DataTable System.Data.DataRelationCollection/DataTableRelationCollection::dataTable
	DataTable_t3557248419 * ___dataTable_5;

public:
	inline static int32_t get_offset_of_dataTable_5() { return static_cast<int32_t>(offsetof(DataTableRelationCollection_t3010343470, ___dataTable_5)); }
	inline DataTable_t3557248419 * get_dataTable_5() const { return ___dataTable_5; }
	inline DataTable_t3557248419 ** get_address_of_dataTable_5() { return &___dataTable_5; }
	inline void set_dataTable_5(DataTable_t3557248419 * value)
	{
		___dataTable_5 = value;
		Il2CppCodeGenWriteBarrier((&___dataTable_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLERELATIONCOLLECTION_T3010343470_H
#ifndef ACCEPTREJECTRULE_T1952693119_H
#define ACCEPTREJECTRULE_T1952693119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.AcceptRejectRule
struct  AcceptRejectRule_t1952693119 
{
public:
	// System.Int32 System.Data.AcceptRejectRule::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AcceptRejectRule_t1952693119, ___value___1)); }
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
#endif // ACCEPTREJECTRULE_T1952693119_H
#ifndef COMMANDTYPE_T2243563317_H
#define COMMANDTYPE_T2243563317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.CommandType
struct  CommandType_t2243563317 
{
public:
	// System.Int32 System.Data.CommandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CommandType_t2243563317, ___value___1)); }
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
#endif // COMMANDTYPE_T2243563317_H
#ifndef DATETIMEKIND_T4262518655_H
#define DATETIMEKIND_T4262518655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t4262518655 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t4262518655, ___value___1)); }
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
#endif // DATETIMEKIND_T4262518655_H
#ifndef DATAROWSTATE_T3620377663_H
#define DATAROWSTATE_T3620377663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowState
struct  DataRowState_t3620377663 
{
public:
	// System.Int32 System.Data.DataRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowState_t3620377663, ___value___1)); }
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
#endif // DATAROWSTATE_T3620377663_H
#ifndef DATAROWVERSION_T1927329429_H
#define DATAROWVERSION_T1927329429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowVersion
struct  DataRowVersion_t1927329429 
{
public:
	// System.Int32 System.Data.DataRowVersion::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataRowVersion_t1927329429, ___value___1)); }
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
#endif // DATAROWVERSION_T1927329429_H
#ifndef DBCOMMAND_T2716222205_H
#define DBCOMMAND_T2716222205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbCommand
struct  DbCommand_t2716222205  : public Component_t2856023423
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCOMMAND_T2716222205_H
#ifndef DATASETDATETIME_T1015319019_H
#define DATASETDATETIME_T1015319019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSetDateTime
struct  DataSetDateTime_t1015319019 
{
public:
	// System.Int32 System.Data.DataSetDateTime::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataSetDateTime_t1015319019, ___value___1)); }
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
#endif // DATASETDATETIME_T1015319019_H
#ifndef DBCONNECTION_T2992751362_H
#define DBCONNECTION_T2992751362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbConnection
struct  DbConnection_t2992751362  : public Component_t2856023423
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBCONNECTION_T2992751362_H
#ifndef COLUMNTYPECONVERTER_T204482301_H
#define COLUMNTYPECONVERTER_T204482301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ColumnTypeConverter
struct  ColumnTypeConverter_t204482301  : public ExpandableObjectConverter_t586583215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLUMNTYPECONVERTER_T204482301_H
#ifndef SQLMONEY_T3002506268_H
#define SQLMONEY_T3002506268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlMoney
struct  SqlMoney_t3002506268 
{
public:
	// System.Decimal System.Data.SqlTypes.SqlMoney::value
	Decimal_t910938021  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlMoney::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlMoney_t3002506268, ___value_0)); }
	inline Decimal_t910938021  get_value_0() const { return ___value_0; }
	inline Decimal_t910938021 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t910938021  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlMoney_t3002506268, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlMoney_t3002506268_StaticFields
{
public:
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MaxValue
	SqlMoney_t3002506268  ___MaxValue_2;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::MinValue
	SqlMoney_t3002506268  ___MinValue_3;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Null
	SqlMoney_t3002506268  ___Null_4;
	// System.Data.SqlTypes.SqlMoney System.Data.SqlTypes.SqlMoney::Zero
	SqlMoney_t3002506268  ___Zero_5;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlMoney::MoneyFormat
	NumberFormatInfo_t582963377 * ___MoneyFormat_6;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlMoney_t3002506268_StaticFields, ___MaxValue_2)); }
	inline SqlMoney_t3002506268  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlMoney_t3002506268 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlMoney_t3002506268  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlMoney_t3002506268_StaticFields, ___MinValue_3)); }
	inline SqlMoney_t3002506268  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlMoney_t3002506268 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlMoney_t3002506268  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlMoney_t3002506268_StaticFields, ___Null_4)); }
	inline SqlMoney_t3002506268  get_Null_4() const { return ___Null_4; }
	inline SqlMoney_t3002506268 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlMoney_t3002506268  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_Zero_5() { return static_cast<int32_t>(offsetof(SqlMoney_t3002506268_StaticFields, ___Zero_5)); }
	inline SqlMoney_t3002506268  get_Zero_5() const { return ___Zero_5; }
	inline SqlMoney_t3002506268 * get_address_of_Zero_5() { return &___Zero_5; }
	inline void set_Zero_5(SqlMoney_t3002506268  value)
	{
		___Zero_5 = value;
	}

	inline static int32_t get_offset_of_MoneyFormat_6() { return static_cast<int32_t>(offsetof(SqlMoney_t3002506268_StaticFields, ___MoneyFormat_6)); }
	inline NumberFormatInfo_t582963377 * get_MoneyFormat_6() const { return ___MoneyFormat_6; }
	inline NumberFormatInfo_t582963377 ** get_address_of_MoneyFormat_6() { return &___MoneyFormat_6; }
	inline void set_MoneyFormat_6(NumberFormatInfo_t582963377 * value)
	{
		___MoneyFormat_6 = value;
		Il2CppCodeGenWriteBarrier((&___MoneyFormat_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3002506268_marshaled_pinvoke
{
	Decimal_t910938021  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlMoney
struct SqlMoney_t3002506268_marshaled_com
{
	Decimal_t910938021  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLMONEY_T3002506268_H
#ifndef DEFAULTVALUETYPECONVERTER_T1165355396_H
#define DEFAULTVALUETYPECONVERTER_T1165355396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DefaultValueTypeConverter
struct  DefaultValueTypeConverter_t1165355396  : public ExpandableObjectConverter_t586583215
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUETYPECONVERTER_T1165355396_H
#ifndef DATACATEGORYATTRIBUTE_T1285006400_H
#define DATACATEGORYATTRIBUTE_T1285006400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataCategoryAttribute
struct  DataCategoryAttribute_t1285006400  : public CategoryAttribute_t880074458
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATACATEGORYATTRIBUTE_T1285006400_H
#ifndef DATAVIEWROWSTATE_T792567974_H
#define DATAVIEWROWSTATE_T792567974_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataViewRowState
struct  DataViewRowState_t792567974 
{
public:
	// System.Int32 System.Data.DataViewRowState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataViewRowState_t792567974, ___value___1)); }
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
#endif // DATAVIEWROWSTATE_T792567974_H
#ifndef DATAEXCEPTION_T58735596_H
#define DATAEXCEPTION_T58735596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataException
struct  DataException_t58735596  : public SystemException_t515177351
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAEXCEPTION_T58735596_H
#ifndef SQLCHARS_T400448092_H
#define SQLCHARS_T400448092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlChars
struct  SqlChars_t400448092  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlChars::notNull
	bool ___notNull_0;
	// System.Char[] System.Data.SqlTypes.SqlChars::buffer
	CharU5BU5D_t4171157588* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlChars::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlChars_t400448092, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlChars_t400448092, ___buffer_1)); }
	inline CharU5BU5D_t4171157588* get_buffer_1() const { return ___buffer_1; }
	inline CharU5BU5D_t4171157588** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(CharU5BU5D_t4171157588* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlChars_t400448092, ___storage_2)); }
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
#endif // SQLCHARS_T400448092_H
#ifndef DBDATAADAPTER_T576230262_H
#define DBDATAADAPTER_T576230262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.DbDataAdapter
struct  DbDataAdapter_t576230262  : public DataAdapter_t790688923
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
	inline static int32_t get_offset_of__selectCommand_5() { return static_cast<int32_t>(offsetof(DbDataAdapter_t576230262, ____selectCommand_5)); }
	inline RuntimeObject* get__selectCommand_5() const { return ____selectCommand_5; }
	inline RuntimeObject** get_address_of__selectCommand_5() { return &____selectCommand_5; }
	inline void set__selectCommand_5(RuntimeObject* value)
	{
		____selectCommand_5 = value;
		Il2CppCodeGenWriteBarrier((&____selectCommand_5), value);
	}

	inline static int32_t get_offset_of__updateCommand_6() { return static_cast<int32_t>(offsetof(DbDataAdapter_t576230262, ____updateCommand_6)); }
	inline RuntimeObject* get__updateCommand_6() const { return ____updateCommand_6; }
	inline RuntimeObject** get_address_of__updateCommand_6() { return &____updateCommand_6; }
	inline void set__updateCommand_6(RuntimeObject* value)
	{
		____updateCommand_6 = value;
		Il2CppCodeGenWriteBarrier((&____updateCommand_6), value);
	}

	inline static int32_t get_offset_of__deleteCommand_7() { return static_cast<int32_t>(offsetof(DbDataAdapter_t576230262, ____deleteCommand_7)); }
	inline RuntimeObject* get__deleteCommand_7() const { return ____deleteCommand_7; }
	inline RuntimeObject** get_address_of__deleteCommand_7() { return &____deleteCommand_7; }
	inline void set__deleteCommand_7(RuntimeObject* value)
	{
		____deleteCommand_7 = value;
		Il2CppCodeGenWriteBarrier((&____deleteCommand_7), value);
	}

	inline static int32_t get_offset_of__insertCommand_8() { return static_cast<int32_t>(offsetof(DbDataAdapter_t576230262, ____insertCommand_8)); }
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
#endif // DBDATAADAPTER_T576230262_H
#ifndef DATETIME_T3788000966_H
#define DATETIME_T3788000966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3788000966 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3431509403  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3788000966, ___ticks_0)); }
	inline TimeSpan_t3431509403  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3431509403 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3431509403  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3788000966, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3788000966_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3788000966  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3788000966  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t2114809087* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t2114809087* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t2114809087* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t2114809087* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t2114809087* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t2114809087* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t2114809087* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3459058900* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3459058900* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3788000966  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3788000966 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3788000966  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___MinValue_3)); }
	inline DateTime_t3788000966  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3788000966 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3788000966  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t2114809087* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t2114809087** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t2114809087* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t2114809087* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t2114809087** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t2114809087* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t2114809087* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t2114809087** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t2114809087* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t2114809087* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t2114809087** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t2114809087* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t2114809087* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t2114809087** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t2114809087* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t2114809087* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t2114809087** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t2114809087* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t2114809087* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t2114809087** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t2114809087* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3459058900* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3459058900** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3459058900* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3459058900* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3459058900** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3459058900* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3788000966_StaticFields, ___last_now_14)); }
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
#endif // DATETIME_T3788000966_H
#ifndef DATACOLUMN_T1291436568_H
#define DATACOLUMN_T1291436568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataColumn
struct  DataColumn_t1291436568  : public MarshalByValueComponent_t3415908616
{
public:
	// System.ComponentModel.EventHandlerList System.Data.DataColumn::_eventHandlers
	EventHandlerList_t814000345 * ____eventHandlers_3;
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
	PropertyCollection_t2338443888 * ____extendedProperties_16;
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
	DataTable_t3557248419 * ____table_22;
	// System.Boolean System.Data.DataColumn::_unique
	bool ____unique_23;
	// System.Data.Common.DataContainer System.Data.DataColumn::_dataContainer
	DataContainer_t101689242 * ____dataContainer_24;
	// System.Data.DataSetDateTime System.Data.DataColumn::_datetimeMode
	int32_t ____datetimeMode_25;

public:
	inline static int32_t get_offset_of__eventHandlers_3() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____eventHandlers_3)); }
	inline EventHandlerList_t814000345 * get__eventHandlers_3() const { return ____eventHandlers_3; }
	inline EventHandlerList_t814000345 ** get_address_of__eventHandlers_3() { return &____eventHandlers_3; }
	inline void set__eventHandlers_3(EventHandlerList_t814000345 * value)
	{
		____eventHandlers_3 = value;
		Il2CppCodeGenWriteBarrier((&____eventHandlers_3), value);
	}

	inline static int32_t get_offset_of__allowDBNull_5() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____allowDBNull_5)); }
	inline bool get__allowDBNull_5() const { return ____allowDBNull_5; }
	inline bool* get_address_of__allowDBNull_5() { return &____allowDBNull_5; }
	inline void set__allowDBNull_5(bool value)
	{
		____allowDBNull_5 = value;
	}

	inline static int32_t get_offset_of__autoIncrement_6() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____autoIncrement_6)); }
	inline bool get__autoIncrement_6() const { return ____autoIncrement_6; }
	inline bool* get_address_of__autoIncrement_6() { return &____autoIncrement_6; }
	inline void set__autoIncrement_6(bool value)
	{
		____autoIncrement_6 = value;
	}

	inline static int32_t get_offset_of__autoIncrementSeed_7() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____autoIncrementSeed_7)); }
	inline int64_t get__autoIncrementSeed_7() const { return ____autoIncrementSeed_7; }
	inline int64_t* get_address_of__autoIncrementSeed_7() { return &____autoIncrementSeed_7; }
	inline void set__autoIncrementSeed_7(int64_t value)
	{
		____autoIncrementSeed_7 = value;
	}

	inline static int32_t get_offset_of__autoIncrementStep_8() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____autoIncrementStep_8)); }
	inline int64_t get__autoIncrementStep_8() const { return ____autoIncrementStep_8; }
	inline int64_t* get_address_of__autoIncrementStep_8() { return &____autoIncrementStep_8; }
	inline void set__autoIncrementStep_8(int64_t value)
	{
		____autoIncrementStep_8 = value;
	}

	inline static int32_t get_offset_of__nextAutoIncrementValue_9() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____nextAutoIncrementValue_9)); }
	inline int64_t get__nextAutoIncrementValue_9() const { return ____nextAutoIncrementValue_9; }
	inline int64_t* get_address_of__nextAutoIncrementValue_9() { return &____nextAutoIncrementValue_9; }
	inline void set__nextAutoIncrementValue_9(int64_t value)
	{
		____nextAutoIncrementValue_9 = value;
	}

	inline static int32_t get_offset_of__caption_10() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____caption_10)); }
	inline String_t* get__caption_10() const { return ____caption_10; }
	inline String_t** get_address_of__caption_10() { return &____caption_10; }
	inline void set__caption_10(String_t* value)
	{
		____caption_10 = value;
		Il2CppCodeGenWriteBarrier((&____caption_10), value);
	}

	inline static int32_t get_offset_of__columnMapping_11() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____columnMapping_11)); }
	inline int32_t get__columnMapping_11() const { return ____columnMapping_11; }
	inline int32_t* get_address_of__columnMapping_11() { return &____columnMapping_11; }
	inline void set__columnMapping_11(int32_t value)
	{
		____columnMapping_11 = value;
	}

	inline static int32_t get_offset_of__columnName_12() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____columnName_12)); }
	inline String_t* get__columnName_12() const { return ____columnName_12; }
	inline String_t** get_address_of__columnName_12() { return &____columnName_12; }
	inline void set__columnName_12(String_t* value)
	{
		____columnName_12 = value;
		Il2CppCodeGenWriteBarrier((&____columnName_12), value);
	}

	inline static int32_t get_offset_of__defaultValue_13() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____defaultValue_13)); }
	inline RuntimeObject * get__defaultValue_13() const { return ____defaultValue_13; }
	inline RuntimeObject ** get_address_of__defaultValue_13() { return &____defaultValue_13; }
	inline void set__defaultValue_13(RuntimeObject * value)
	{
		____defaultValue_13 = value;
		Il2CppCodeGenWriteBarrier((&____defaultValue_13), value);
	}

	inline static int32_t get_offset_of__expression_14() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____expression_14)); }
	inline String_t* get__expression_14() const { return ____expression_14; }
	inline String_t** get_address_of__expression_14() { return &____expression_14; }
	inline void set__expression_14(String_t* value)
	{
		____expression_14 = value;
		Il2CppCodeGenWriteBarrier((&____expression_14), value);
	}

	inline static int32_t get_offset_of__compiledExpression_15() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____compiledExpression_15)); }
	inline RuntimeObject* get__compiledExpression_15() const { return ____compiledExpression_15; }
	inline RuntimeObject** get_address_of__compiledExpression_15() { return &____compiledExpression_15; }
	inline void set__compiledExpression_15(RuntimeObject* value)
	{
		____compiledExpression_15 = value;
		Il2CppCodeGenWriteBarrier((&____compiledExpression_15), value);
	}

	inline static int32_t get_offset_of__extendedProperties_16() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____extendedProperties_16)); }
	inline PropertyCollection_t2338443888 * get__extendedProperties_16() const { return ____extendedProperties_16; }
	inline PropertyCollection_t2338443888 ** get_address_of__extendedProperties_16() { return &____extendedProperties_16; }
	inline void set__extendedProperties_16(PropertyCollection_t2338443888 * value)
	{
		____extendedProperties_16 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_16), value);
	}

	inline static int32_t get_offset_of__maxLength_17() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____maxLength_17)); }
	inline int32_t get__maxLength_17() const { return ____maxLength_17; }
	inline int32_t* get_address_of__maxLength_17() { return &____maxLength_17; }
	inline void set__maxLength_17(int32_t value)
	{
		____maxLength_17 = value;
	}

	inline static int32_t get_offset_of__nameSpace_18() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____nameSpace_18)); }
	inline String_t* get__nameSpace_18() const { return ____nameSpace_18; }
	inline String_t** get_address_of__nameSpace_18() { return &____nameSpace_18; }
	inline void set__nameSpace_18(String_t* value)
	{
		____nameSpace_18 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_18), value);
	}

	inline static int32_t get_offset_of__ordinal_19() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____ordinal_19)); }
	inline int32_t get__ordinal_19() const { return ____ordinal_19; }
	inline int32_t* get_address_of__ordinal_19() { return &____ordinal_19; }
	inline void set__ordinal_19(int32_t value)
	{
		____ordinal_19 = value;
	}

	inline static int32_t get_offset_of__prefix_20() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____prefix_20)); }
	inline String_t* get__prefix_20() const { return ____prefix_20; }
	inline String_t** get_address_of__prefix_20() { return &____prefix_20; }
	inline void set__prefix_20(String_t* value)
	{
		____prefix_20 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_20), value);
	}

	inline static int32_t get_offset_of__readOnly_21() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____readOnly_21)); }
	inline bool get__readOnly_21() const { return ____readOnly_21; }
	inline bool* get_address_of__readOnly_21() { return &____readOnly_21; }
	inline void set__readOnly_21(bool value)
	{
		____readOnly_21 = value;
	}

	inline static int32_t get_offset_of__table_22() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____table_22)); }
	inline DataTable_t3557248419 * get__table_22() const { return ____table_22; }
	inline DataTable_t3557248419 ** get_address_of__table_22() { return &____table_22; }
	inline void set__table_22(DataTable_t3557248419 * value)
	{
		____table_22 = value;
		Il2CppCodeGenWriteBarrier((&____table_22), value);
	}

	inline static int32_t get_offset_of__unique_23() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____unique_23)); }
	inline bool get__unique_23() const { return ____unique_23; }
	inline bool* get_address_of__unique_23() { return &____unique_23; }
	inline void set__unique_23(bool value)
	{
		____unique_23 = value;
	}

	inline static int32_t get_offset_of__dataContainer_24() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____dataContainer_24)); }
	inline DataContainer_t101689242 * get__dataContainer_24() const { return ____dataContainer_24; }
	inline DataContainer_t101689242 ** get_address_of__dataContainer_24() { return &____dataContainer_24; }
	inline void set__dataContainer_24(DataContainer_t101689242 * value)
	{
		____dataContainer_24 = value;
		Il2CppCodeGenWriteBarrier((&____dataContainer_24), value);
	}

	inline static int32_t get_offset_of__datetimeMode_25() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568, ____datetimeMode_25)); }
	inline int32_t get__datetimeMode_25() const { return ____datetimeMode_25; }
	inline int32_t* get_address_of__datetimeMode_25() { return &____datetimeMode_25; }
	inline void set__datetimeMode_25(int32_t value)
	{
		____datetimeMode_25 = value;
	}
};

struct DataColumn_t1291436568_StaticFields
{
public:
	// System.Object System.Data.DataColumn::_propertyChangedKey
	RuntimeObject * ____propertyChangedKey_4;

public:
	inline static int32_t get_offset_of__propertyChangedKey_4() { return static_cast<int32_t>(offsetof(DataColumn_t1291436568_StaticFields, ____propertyChangedKey_4)); }
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
#endif // DATACOLUMN_T1291436568_H
#ifndef KEY_T2901176986_H
#define KEY_T2901176986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.Common.Key
struct  Key_t2901176986  : public RuntimeObject
{
public:
	// System.Data.DataTable System.Data.Common.Key::_table
	DataTable_t3557248419 * ____table_0;
	// System.Data.DataColumn[] System.Data.Common.Key::_columns
	DataColumnU5BU5D_t300694153* ____columns_1;
	// System.ComponentModel.ListSortDirection[] System.Data.Common.Key::_sortDirection
	ListSortDirectionU5BU5D_t3592076989* ____sortDirection_2;
	// System.Data.DataViewRowState System.Data.Common.Key::_rowStateFilter
	int32_t ____rowStateFilter_3;
	// Mono.Data.SqlExpressions.IExpression System.Data.Common.Key::_filter
	RuntimeObject* ____filter_4;
	// System.Data.DataRow System.Data.Common.Key::_tmpRow
	DataRow_t793422502 * ____tmpRow_5;

public:
	inline static int32_t get_offset_of__table_0() { return static_cast<int32_t>(offsetof(Key_t2901176986, ____table_0)); }
	inline DataTable_t3557248419 * get__table_0() const { return ____table_0; }
	inline DataTable_t3557248419 ** get_address_of__table_0() { return &____table_0; }
	inline void set__table_0(DataTable_t3557248419 * value)
	{
		____table_0 = value;
		Il2CppCodeGenWriteBarrier((&____table_0), value);
	}

	inline static int32_t get_offset_of__columns_1() { return static_cast<int32_t>(offsetof(Key_t2901176986, ____columns_1)); }
	inline DataColumnU5BU5D_t300694153* get__columns_1() const { return ____columns_1; }
	inline DataColumnU5BU5D_t300694153** get_address_of__columns_1() { return &____columns_1; }
	inline void set__columns_1(DataColumnU5BU5D_t300694153* value)
	{
		____columns_1 = value;
		Il2CppCodeGenWriteBarrier((&____columns_1), value);
	}

	inline static int32_t get_offset_of__sortDirection_2() { return static_cast<int32_t>(offsetof(Key_t2901176986, ____sortDirection_2)); }
	inline ListSortDirectionU5BU5D_t3592076989* get__sortDirection_2() const { return ____sortDirection_2; }
	inline ListSortDirectionU5BU5D_t3592076989** get_address_of__sortDirection_2() { return &____sortDirection_2; }
	inline void set__sortDirection_2(ListSortDirectionU5BU5D_t3592076989* value)
	{
		____sortDirection_2 = value;
		Il2CppCodeGenWriteBarrier((&____sortDirection_2), value);
	}

	inline static int32_t get_offset_of__rowStateFilter_3() { return static_cast<int32_t>(offsetof(Key_t2901176986, ____rowStateFilter_3)); }
	inline int32_t get__rowStateFilter_3() const { return ____rowStateFilter_3; }
	inline int32_t* get_address_of__rowStateFilter_3() { return &____rowStateFilter_3; }
	inline void set__rowStateFilter_3(int32_t value)
	{
		____rowStateFilter_3 = value;
	}

	inline static int32_t get_offset_of__filter_4() { return static_cast<int32_t>(offsetof(Key_t2901176986, ____filter_4)); }
	inline RuntimeObject* get__filter_4() const { return ____filter_4; }
	inline RuntimeObject** get_address_of__filter_4() { return &____filter_4; }
	inline void set__filter_4(RuntimeObject* value)
	{
		____filter_4 = value;
		Il2CppCodeGenWriteBarrier((&____filter_4), value);
	}

	inline static int32_t get_offset_of__tmpRow_5() { return static_cast<int32_t>(offsetof(Key_t2901176986, ____tmpRow_5)); }
	inline DataRow_t793422502 * get__tmpRow_5() const { return ____tmpRow_5; }
	inline DataRow_t793422502 ** get_address_of__tmpRow_5() { return &____tmpRow_5; }
	inline void set__tmpRow_5(DataRow_t793422502 * value)
	{
		____tmpRow_5 = value;
		Il2CppCodeGenWriteBarrier((&____tmpRow_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T2901176986_H
#ifndef SQLBYTES_T1181805739_H
#define SQLBYTES_T1181805739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlBytes
struct  SqlBytes_t1181805739  : public RuntimeObject
{
public:
	// System.Boolean System.Data.SqlTypes.SqlBytes::notNull
	bool ___notNull_0;
	// System.Byte[] System.Data.SqlTypes.SqlBytes::buffer
	ByteU5BU5D_t2677048370* ___buffer_1;
	// System.Data.SqlTypes.StorageState System.Data.SqlTypes.SqlBytes::storage
	int32_t ___storage_2;

public:
	inline static int32_t get_offset_of_notNull_0() { return static_cast<int32_t>(offsetof(SqlBytes_t1181805739, ___notNull_0)); }
	inline bool get_notNull_0() const { return ___notNull_0; }
	inline bool* get_address_of_notNull_0() { return &___notNull_0; }
	inline void set_notNull_0(bool value)
	{
		___notNull_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(SqlBytes_t1181805739, ___buffer_1)); }
	inline ByteU5BU5D_t2677048370* get_buffer_1() const { return ___buffer_1; }
	inline ByteU5BU5D_t2677048370** get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(ByteU5BU5D_t2677048370* value)
	{
		___buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_1), value);
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(SqlBytes_t1181805739, ___storage_2)); }
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
#endif // SQLBYTES_T1181805739_H
#ifndef CONSTRAINTEXCEPTION_T911865770_H
#define CONSTRAINTEXCEPTION_T911865770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ConstraintException
struct  ConstraintException_t911865770  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRAINTEXCEPTION_T911865770_H
#ifndef READONLYEXCEPTION_T3236679349_H
#define READONLYEXCEPTION_T3236679349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ReadOnlyException
struct  ReadOnlyException_t3236679349  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYEXCEPTION_T3236679349_H
#ifndef SQLSTRING_T1271779612_H
#define SQLSTRING_T1271779612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlString
struct  SqlString_t1271779612 
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
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlString_t1271779612, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlString_t1271779612, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}

	inline static int32_t get_offset_of_lcid_2() { return static_cast<int32_t>(offsetof(SqlString_t1271779612, ___lcid_2)); }
	inline int32_t get_lcid_2() const { return ___lcid_2; }
	inline int32_t* get_address_of_lcid_2() { return &___lcid_2; }
	inline void set_lcid_2(int32_t value)
	{
		___lcid_2 = value;
	}

	inline static int32_t get_offset_of_compareOptions_3() { return static_cast<int32_t>(offsetof(SqlString_t1271779612, ___compareOptions_3)); }
	inline int32_t get_compareOptions_3() const { return ___compareOptions_3; }
	inline int32_t* get_address_of_compareOptions_3() { return &___compareOptions_3; }
	inline void set_compareOptions_3(int32_t value)
	{
		___compareOptions_3 = value;
	}
};

struct SqlString_t1271779612_StaticFields
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
	SqlString_t1271779612  ___Null_9;
	// System.Globalization.NumberFormatInfo System.Data.SqlTypes.SqlString::DecimalFormat
	NumberFormatInfo_t582963377 * ___DecimalFormat_10;

public:
	inline static int32_t get_offset_of_BinarySort_4() { return static_cast<int32_t>(offsetof(SqlString_t1271779612_StaticFields, ___BinarySort_4)); }
	inline int32_t get_BinarySort_4() const { return ___BinarySort_4; }
	inline int32_t* get_address_of_BinarySort_4() { return &___BinarySort_4; }
	inline void set_BinarySort_4(int32_t value)
	{
		___BinarySort_4 = value;
	}

	inline static int32_t get_offset_of_IgnoreCase_5() { return static_cast<int32_t>(offsetof(SqlString_t1271779612_StaticFields, ___IgnoreCase_5)); }
	inline int32_t get_IgnoreCase_5() const { return ___IgnoreCase_5; }
	inline int32_t* get_address_of_IgnoreCase_5() { return &___IgnoreCase_5; }
	inline void set_IgnoreCase_5(int32_t value)
	{
		___IgnoreCase_5 = value;
	}

	inline static int32_t get_offset_of_IgnoreKanaType_6() { return static_cast<int32_t>(offsetof(SqlString_t1271779612_StaticFields, ___IgnoreKanaType_6)); }
	inline int32_t get_IgnoreKanaType_6() const { return ___IgnoreKanaType_6; }
	inline int32_t* get_address_of_IgnoreKanaType_6() { return &___IgnoreKanaType_6; }
	inline void set_IgnoreKanaType_6(int32_t value)
	{
		___IgnoreKanaType_6 = value;
	}

	inline static int32_t get_offset_of_IgnoreNonSpace_7() { return static_cast<int32_t>(offsetof(SqlString_t1271779612_StaticFields, ___IgnoreNonSpace_7)); }
	inline int32_t get_IgnoreNonSpace_7() const { return ___IgnoreNonSpace_7; }
	inline int32_t* get_address_of_IgnoreNonSpace_7() { return &___IgnoreNonSpace_7; }
	inline void set_IgnoreNonSpace_7(int32_t value)
	{
		___IgnoreNonSpace_7 = value;
	}

	inline static int32_t get_offset_of_IgnoreWidth_8() { return static_cast<int32_t>(offsetof(SqlString_t1271779612_StaticFields, ___IgnoreWidth_8)); }
	inline int32_t get_IgnoreWidth_8() const { return ___IgnoreWidth_8; }
	inline int32_t* get_address_of_IgnoreWidth_8() { return &___IgnoreWidth_8; }
	inline void set_IgnoreWidth_8(int32_t value)
	{
		___IgnoreWidth_8 = value;
	}

	inline static int32_t get_offset_of_Null_9() { return static_cast<int32_t>(offsetof(SqlString_t1271779612_StaticFields, ___Null_9)); }
	inline SqlString_t1271779612  get_Null_9() const { return ___Null_9; }
	inline SqlString_t1271779612 * get_address_of_Null_9() { return &___Null_9; }
	inline void set_Null_9(SqlString_t1271779612  value)
	{
		___Null_9 = value;
	}

	inline static int32_t get_offset_of_DecimalFormat_10() { return static_cast<int32_t>(offsetof(SqlString_t1271779612_StaticFields, ___DecimalFormat_10)); }
	inline NumberFormatInfo_t582963377 * get_DecimalFormat_10() const { return ___DecimalFormat_10; }
	inline NumberFormatInfo_t582963377 ** get_address_of_DecimalFormat_10() { return &___DecimalFormat_10; }
	inline void set_DecimalFormat_10(NumberFormatInfo_t582963377 * value)
	{
		___DecimalFormat_10 = value;
		Il2CppCodeGenWriteBarrier((&___DecimalFormat_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t1271779612_marshaled_pinvoke
{
	char* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlString
struct SqlString_t1271779612_marshaled_com
{
	Il2CppChar* ___value_0;
	int32_t ___notNull_1;
	int32_t ___lcid_2;
	int32_t ___compareOptions_3;
};
#endif // SQLSTRING_T1271779612_H
#ifndef ROWNOTINTABLEEXCEPTION_T73914914_H
#define ROWNOTINTABLEEXCEPTION_T73914914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.RowNotInTableException
struct  RowNotInTableException_t73914914  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROWNOTINTABLEEXCEPTION_T73914914_H
#ifndef NONULLALLOWEDEXCEPTION_T2505591883_H
#define NONULLALLOWEDEXCEPTION_T2505591883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.NoNullAllowedException
struct  NoNullAllowedException_t2505591883  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONULLALLOWEDEXCEPTION_T2505591883_H
#ifndef MISSINGPRIMARYKEYEXCEPTION_T1541985360_H
#define MISSINGPRIMARYKEYEXCEPTION_T1541985360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.MissingPrimaryKeyException
struct  MissingPrimaryKeyException_t1541985360  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGPRIMARYKEYEXCEPTION_T1541985360_H
#ifndef INVALIDEXPRESSIONEXCEPTION_T4232127465_H
#define INVALIDEXPRESSIONEXCEPTION_T4232127465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidExpressionException
struct  InvalidExpressionException_t4232127465  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDEXPRESSIONEXCEPTION_T4232127465_H
#ifndef INVALIDCONSTRAINTEXCEPTION_T1712908941_H
#define INVALIDCONSTRAINTEXCEPTION_T1712908941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InvalidConstraintException
struct  InvalidConstraintException_t1712908941  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCONSTRAINTEXCEPTION_T1712908941_H
#ifndef INROWCHANGINGEVENTEXCEPTION_T1926320477_H
#define INROWCHANGINGEVENTEXCEPTION_T1926320477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.InRowChangingEventException
struct  InRowChangingEventException_t1926320477  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INROWCHANGINGEVENTEXCEPTION_T1926320477_H
#ifndef FOREIGNKEYCONSTRAINT_T164289483_H
#define FOREIGNKEYCONSTRAINT_T164289483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.ForeignKeyConstraint
struct  ForeignKeyConstraint_t164289483  : public Constraint_t2822837117
{
public:
	// System.Data.UniqueConstraint System.Data.ForeignKeyConstraint::_parentUniqueConstraint
	UniqueConstraint_t2722223588 * ____parentUniqueConstraint_8;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_parentColumns
	DataColumnU5BU5D_t300694153* ____parentColumns_9;
	// System.Data.DataColumn[] System.Data.ForeignKeyConstraint::_childColumns
	DataColumnU5BU5D_t300694153* ____childColumns_10;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_deleteRule
	int32_t ____deleteRule_11;
	// System.Data.Rule System.Data.ForeignKeyConstraint::_updateRule
	int32_t ____updateRule_12;
	// System.Data.AcceptRejectRule System.Data.ForeignKeyConstraint::_acceptRejectRule
	int32_t ____acceptRejectRule_13;

public:
	inline static int32_t get_offset_of__parentUniqueConstraint_8() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t164289483, ____parentUniqueConstraint_8)); }
	inline UniqueConstraint_t2722223588 * get__parentUniqueConstraint_8() const { return ____parentUniqueConstraint_8; }
	inline UniqueConstraint_t2722223588 ** get_address_of__parentUniqueConstraint_8() { return &____parentUniqueConstraint_8; }
	inline void set__parentUniqueConstraint_8(UniqueConstraint_t2722223588 * value)
	{
		____parentUniqueConstraint_8 = value;
		Il2CppCodeGenWriteBarrier((&____parentUniqueConstraint_8), value);
	}

	inline static int32_t get_offset_of__parentColumns_9() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t164289483, ____parentColumns_9)); }
	inline DataColumnU5BU5D_t300694153* get__parentColumns_9() const { return ____parentColumns_9; }
	inline DataColumnU5BU5D_t300694153** get_address_of__parentColumns_9() { return &____parentColumns_9; }
	inline void set__parentColumns_9(DataColumnU5BU5D_t300694153* value)
	{
		____parentColumns_9 = value;
		Il2CppCodeGenWriteBarrier((&____parentColumns_9), value);
	}

	inline static int32_t get_offset_of__childColumns_10() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t164289483, ____childColumns_10)); }
	inline DataColumnU5BU5D_t300694153* get__childColumns_10() const { return ____childColumns_10; }
	inline DataColumnU5BU5D_t300694153** get_address_of__childColumns_10() { return &____childColumns_10; }
	inline void set__childColumns_10(DataColumnU5BU5D_t300694153* value)
	{
		____childColumns_10 = value;
		Il2CppCodeGenWriteBarrier((&____childColumns_10), value);
	}

	inline static int32_t get_offset_of__deleteRule_11() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t164289483, ____deleteRule_11)); }
	inline int32_t get__deleteRule_11() const { return ____deleteRule_11; }
	inline int32_t* get_address_of__deleteRule_11() { return &____deleteRule_11; }
	inline void set__deleteRule_11(int32_t value)
	{
		____deleteRule_11 = value;
	}

	inline static int32_t get_offset_of__updateRule_12() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t164289483, ____updateRule_12)); }
	inline int32_t get__updateRule_12() const { return ____updateRule_12; }
	inline int32_t* get_address_of__updateRule_12() { return &____updateRule_12; }
	inline void set__updateRule_12(int32_t value)
	{
		____updateRule_12 = value;
	}

	inline static int32_t get_offset_of__acceptRejectRule_13() { return static_cast<int32_t>(offsetof(ForeignKeyConstraint_t164289483, ____acceptRejectRule_13)); }
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
#endif // FOREIGNKEYCONSTRAINT_T164289483_H
#ifndef DATAROWCHANGEEVENTARGS_T2223663155_H
#define DATAROWCHANGEEVENTARGS_T2223663155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataRowChangeEventArgs
struct  DataRowChangeEventArgs_t2223663155  : public EventArgs_t761006049
{
public:
	// System.Data.DataRow System.Data.DataRowChangeEventArgs::row
	DataRow_t793422502 * ___row_1;
	// System.Data.DataRowAction System.Data.DataRowChangeEventArgs::action
	int32_t ___action_2;

public:
	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2223663155, ___row_1)); }
	inline DataRow_t793422502 * get_row_1() const { return ___row_1; }
	inline DataRow_t793422502 ** get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(DataRow_t793422502 * value)
	{
		___row_1 = value;
		Il2CppCodeGenWriteBarrier((&___row_1), value);
	}

	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(DataRowChangeEventArgs_t2223663155, ___action_2)); }
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
#endif // DATAROWCHANGEEVENTARGS_T2223663155_H
#ifndef DUPLICATENAMEEXCEPTION_T2562623346_H
#define DUPLICATENAMEEXCEPTION_T2562623346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DuplicateNameException
struct  DuplicateNameException_t2562623346  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DUPLICATENAMEEXCEPTION_T2562623346_H
#ifndef DELETEDROWINACCESSIBLEEXCEPTION_T1939116550_H
#define DELETEDROWINACCESSIBLEEXCEPTION_T1939116550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DeletedRowInaccessibleException
struct  DeletedRowInaccessibleException_t1939116550  : public DataException_t58735596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEDROWINACCESSIBLEEXCEPTION_T1939116550_H
#ifndef SQLNULLVALUEEXCEPTION_T4230872017_H
#define SQLNULLVALUEEXCEPTION_T4230872017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlNullValueException
struct  SqlNullValueException_t4230872017  : public SqlTypeException_t2665868951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLNULLVALUEEXCEPTION_T4230872017_H
#ifndef DATATABLE_T3557248419_H
#define DATATABLE_T3557248419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataTable
struct  DataTable_t3557248419  : public MarshalByValueComponent_t3415908616
{
public:
	// System.Data.DataSet System.Data.DataTable::dataSet
	DataSet_t3917940959 * ___dataSet_3;
	// System.Boolean System.Data.DataTable::_caseSensitive
	bool ____caseSensitive_4;
	// System.Data.DataColumnCollection System.Data.DataTable::_columnCollection
	DataColumnCollection_t3329180304 * ____columnCollection_5;
	// System.Data.ConstraintCollection System.Data.DataTable::_constraintCollection
	ConstraintCollection_t1629304036 * ____constraintCollection_6;
	// System.String System.Data.DataTable::_displayExpression
	String_t* ____displayExpression_7;
	// System.Data.PropertyCollection System.Data.DataTable::_extendedProperties
	PropertyCollection_t2338443888 * ____extendedProperties_8;
	// System.Globalization.CultureInfo System.Data.DataTable::_locale
	CultureInfo_t1377571235 * ____locale_9;
	// System.Int32 System.Data.DataTable::_minimumCapacity
	int32_t ____minimumCapacity_10;
	// System.String System.Data.DataTable::_nameSpace
	String_t* ____nameSpace_11;
	// System.Data.DataRelationCollection System.Data.DataTable::_childRelations
	DataRelationCollection_t213541485 * ____childRelations_12;
	// System.Data.DataRelationCollection System.Data.DataTable::_parentRelations
	DataRelationCollection_t213541485 * ____parentRelations_13;
	// System.String System.Data.DataTable::_prefix
	String_t* ____prefix_14;
	// System.Data.UniqueConstraint System.Data.DataTable::_primaryKeyConstraint
	UniqueConstraint_t2722223588 * ____primaryKeyConstraint_15;
	// System.Data.DataRowCollection System.Data.DataTable::_rows
	DataRowCollection_t3150816660 * ____rows_16;
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
	DataRowBuilder_t2079591726 * ____rowBuilder_22;
	// System.Collections.ArrayList System.Data.DataTable::_indexes
	ArrayList_t2374174184 * ____indexes_23;
	// System.Data.Common.RecordCache System.Data.DataTable::_recordCache
	RecordCache_t3670191456 * ____recordCache_24;
	// System.Int32 System.Data.DataTable::_defaultValuesRowIndex
	int32_t ____defaultValuesRowIndex_25;
	// System.Boolean System.Data.DataTable::fInitInProgress
	bool ___fInitInProgress_26;
	// System.Boolean System.Data.DataTable::_virginCaseSensitive
	bool ____virginCaseSensitive_27;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.DataTable::_propertyDescriptorsCache
	PropertyDescriptorCollection_t855881775 * ____propertyDescriptorsCache_28;
	// System.Data.DataColumn[] System.Data.DataTable::_latestPrimaryKeyCols
	DataColumnU5BU5D_t300694153* ____latestPrimaryKeyCols_31;
	// System.Data.DataRow[] System.Data.DataTable::empty_rows
	DataRowU5BU5D_t2197358595* ___empty_rows_32;
	// System.Boolean System.Data.DataTable::tableInitialized
	bool ___tableInitialized_33;
	// System.Data.SerializationFormat System.Data.DataTable::remotingFormat
	int32_t ___remotingFormat_34;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanged
	DataColumnChangeEventHandler_t1255671457 * ___ColumnChanged_35;
	// System.Data.DataColumnChangeEventHandler System.Data.DataTable::ColumnChanging
	DataColumnChangeEventHandler_t1255671457 * ___ColumnChanging_36;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanged
	DataRowChangeEventHandler_t1799537135 * ___RowChanged_37;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowChanging
	DataRowChangeEventHandler_t1799537135 * ___RowChanging_38;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleted
	DataRowChangeEventHandler_t1799537135 * ___RowDeleted_39;
	// System.Data.DataRowChangeEventHandler System.Data.DataTable::RowDeleting
	DataRowChangeEventHandler_t1799537135 * ___RowDeleting_40;
	// System.Data.DataTableNewRowEventHandler System.Data.DataTable::TableNewRow
	DataTableNewRowEventHandler_t900785158 * ___TableNewRow_41;

public:
	inline static int32_t get_offset_of_dataSet_3() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___dataSet_3)); }
	inline DataSet_t3917940959 * get_dataSet_3() const { return ___dataSet_3; }
	inline DataSet_t3917940959 ** get_address_of_dataSet_3() { return &___dataSet_3; }
	inline void set_dataSet_3(DataSet_t3917940959 * value)
	{
		___dataSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSet_3), value);
	}

	inline static int32_t get_offset_of__caseSensitive_4() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____caseSensitive_4)); }
	inline bool get__caseSensitive_4() const { return ____caseSensitive_4; }
	inline bool* get_address_of__caseSensitive_4() { return &____caseSensitive_4; }
	inline void set__caseSensitive_4(bool value)
	{
		____caseSensitive_4 = value;
	}

	inline static int32_t get_offset_of__columnCollection_5() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____columnCollection_5)); }
	inline DataColumnCollection_t3329180304 * get__columnCollection_5() const { return ____columnCollection_5; }
	inline DataColumnCollection_t3329180304 ** get_address_of__columnCollection_5() { return &____columnCollection_5; }
	inline void set__columnCollection_5(DataColumnCollection_t3329180304 * value)
	{
		____columnCollection_5 = value;
		Il2CppCodeGenWriteBarrier((&____columnCollection_5), value);
	}

	inline static int32_t get_offset_of__constraintCollection_6() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____constraintCollection_6)); }
	inline ConstraintCollection_t1629304036 * get__constraintCollection_6() const { return ____constraintCollection_6; }
	inline ConstraintCollection_t1629304036 ** get_address_of__constraintCollection_6() { return &____constraintCollection_6; }
	inline void set__constraintCollection_6(ConstraintCollection_t1629304036 * value)
	{
		____constraintCollection_6 = value;
		Il2CppCodeGenWriteBarrier((&____constraintCollection_6), value);
	}

	inline static int32_t get_offset_of__displayExpression_7() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____displayExpression_7)); }
	inline String_t* get__displayExpression_7() const { return ____displayExpression_7; }
	inline String_t** get_address_of__displayExpression_7() { return &____displayExpression_7; }
	inline void set__displayExpression_7(String_t* value)
	{
		____displayExpression_7 = value;
		Il2CppCodeGenWriteBarrier((&____displayExpression_7), value);
	}

	inline static int32_t get_offset_of__extendedProperties_8() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____extendedProperties_8)); }
	inline PropertyCollection_t2338443888 * get__extendedProperties_8() const { return ____extendedProperties_8; }
	inline PropertyCollection_t2338443888 ** get_address_of__extendedProperties_8() { return &____extendedProperties_8; }
	inline void set__extendedProperties_8(PropertyCollection_t2338443888 * value)
	{
		____extendedProperties_8 = value;
		Il2CppCodeGenWriteBarrier((&____extendedProperties_8), value);
	}

	inline static int32_t get_offset_of__locale_9() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____locale_9)); }
	inline CultureInfo_t1377571235 * get__locale_9() const { return ____locale_9; }
	inline CultureInfo_t1377571235 ** get_address_of__locale_9() { return &____locale_9; }
	inline void set__locale_9(CultureInfo_t1377571235 * value)
	{
		____locale_9 = value;
		Il2CppCodeGenWriteBarrier((&____locale_9), value);
	}

	inline static int32_t get_offset_of__minimumCapacity_10() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____minimumCapacity_10)); }
	inline int32_t get__minimumCapacity_10() const { return ____minimumCapacity_10; }
	inline int32_t* get_address_of__minimumCapacity_10() { return &____minimumCapacity_10; }
	inline void set__minimumCapacity_10(int32_t value)
	{
		____minimumCapacity_10 = value;
	}

	inline static int32_t get_offset_of__nameSpace_11() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____nameSpace_11)); }
	inline String_t* get__nameSpace_11() const { return ____nameSpace_11; }
	inline String_t** get_address_of__nameSpace_11() { return &____nameSpace_11; }
	inline void set__nameSpace_11(String_t* value)
	{
		____nameSpace_11 = value;
		Il2CppCodeGenWriteBarrier((&____nameSpace_11), value);
	}

	inline static int32_t get_offset_of__childRelations_12() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____childRelations_12)); }
	inline DataRelationCollection_t213541485 * get__childRelations_12() const { return ____childRelations_12; }
	inline DataRelationCollection_t213541485 ** get_address_of__childRelations_12() { return &____childRelations_12; }
	inline void set__childRelations_12(DataRelationCollection_t213541485 * value)
	{
		____childRelations_12 = value;
		Il2CppCodeGenWriteBarrier((&____childRelations_12), value);
	}

	inline static int32_t get_offset_of__parentRelations_13() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____parentRelations_13)); }
	inline DataRelationCollection_t213541485 * get__parentRelations_13() const { return ____parentRelations_13; }
	inline DataRelationCollection_t213541485 ** get_address_of__parentRelations_13() { return &____parentRelations_13; }
	inline void set__parentRelations_13(DataRelationCollection_t213541485 * value)
	{
		____parentRelations_13 = value;
		Il2CppCodeGenWriteBarrier((&____parentRelations_13), value);
	}

	inline static int32_t get_offset_of__prefix_14() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____prefix_14)); }
	inline String_t* get__prefix_14() const { return ____prefix_14; }
	inline String_t** get_address_of__prefix_14() { return &____prefix_14; }
	inline void set__prefix_14(String_t* value)
	{
		____prefix_14 = value;
		Il2CppCodeGenWriteBarrier((&____prefix_14), value);
	}

	inline static int32_t get_offset_of__primaryKeyConstraint_15() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____primaryKeyConstraint_15)); }
	inline UniqueConstraint_t2722223588 * get__primaryKeyConstraint_15() const { return ____primaryKeyConstraint_15; }
	inline UniqueConstraint_t2722223588 ** get_address_of__primaryKeyConstraint_15() { return &____primaryKeyConstraint_15; }
	inline void set__primaryKeyConstraint_15(UniqueConstraint_t2722223588 * value)
	{
		____primaryKeyConstraint_15 = value;
		Il2CppCodeGenWriteBarrier((&____primaryKeyConstraint_15), value);
	}

	inline static int32_t get_offset_of__rows_16() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____rows_16)); }
	inline DataRowCollection_t3150816660 * get__rows_16() const { return ____rows_16; }
	inline DataRowCollection_t3150816660 ** get_address_of__rows_16() { return &____rows_16; }
	inline void set__rows_16(DataRowCollection_t3150816660 * value)
	{
		____rows_16 = value;
		Il2CppCodeGenWriteBarrier((&____rows_16), value);
	}

	inline static int32_t get_offset_of__site_17() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____site_17)); }
	inline RuntimeObject* get__site_17() const { return ____site_17; }
	inline RuntimeObject** get_address_of__site_17() { return &____site_17; }
	inline void set__site_17(RuntimeObject* value)
	{
		____site_17 = value;
		Il2CppCodeGenWriteBarrier((&____site_17), value);
	}

	inline static int32_t get_offset_of__tableName_18() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____tableName_18)); }
	inline String_t* get__tableName_18() const { return ____tableName_18; }
	inline String_t** get_address_of__tableName_18() { return &____tableName_18; }
	inline void set__tableName_18(String_t* value)
	{
		____tableName_18 = value;
		Il2CppCodeGenWriteBarrier((&____tableName_18), value);
	}

	inline static int32_t get_offset_of__duringDataLoad_19() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____duringDataLoad_19)); }
	inline bool get__duringDataLoad_19() const { return ____duringDataLoad_19; }
	inline bool* get_address_of__duringDataLoad_19() { return &____duringDataLoad_19; }
	inline void set__duringDataLoad_19(bool value)
	{
		____duringDataLoad_19 = value;
	}

	inline static int32_t get_offset_of__nullConstraintViolationDuringDataLoad_20() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____nullConstraintViolationDuringDataLoad_20)); }
	inline bool get__nullConstraintViolationDuringDataLoad_20() const { return ____nullConstraintViolationDuringDataLoad_20; }
	inline bool* get_address_of__nullConstraintViolationDuringDataLoad_20() { return &____nullConstraintViolationDuringDataLoad_20; }
	inline void set__nullConstraintViolationDuringDataLoad_20(bool value)
	{
		____nullConstraintViolationDuringDataLoad_20 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_21() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___enforceConstraints_21)); }
	inline bool get_enforceConstraints_21() const { return ___enforceConstraints_21; }
	inline bool* get_address_of_enforceConstraints_21() { return &___enforceConstraints_21; }
	inline void set_enforceConstraints_21(bool value)
	{
		___enforceConstraints_21 = value;
	}

	inline static int32_t get_offset_of__rowBuilder_22() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____rowBuilder_22)); }
	inline DataRowBuilder_t2079591726 * get__rowBuilder_22() const { return ____rowBuilder_22; }
	inline DataRowBuilder_t2079591726 ** get_address_of__rowBuilder_22() { return &____rowBuilder_22; }
	inline void set__rowBuilder_22(DataRowBuilder_t2079591726 * value)
	{
		____rowBuilder_22 = value;
		Il2CppCodeGenWriteBarrier((&____rowBuilder_22), value);
	}

	inline static int32_t get_offset_of__indexes_23() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____indexes_23)); }
	inline ArrayList_t2374174184 * get__indexes_23() const { return ____indexes_23; }
	inline ArrayList_t2374174184 ** get_address_of__indexes_23() { return &____indexes_23; }
	inline void set__indexes_23(ArrayList_t2374174184 * value)
	{
		____indexes_23 = value;
		Il2CppCodeGenWriteBarrier((&____indexes_23), value);
	}

	inline static int32_t get_offset_of__recordCache_24() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____recordCache_24)); }
	inline RecordCache_t3670191456 * get__recordCache_24() const { return ____recordCache_24; }
	inline RecordCache_t3670191456 ** get_address_of__recordCache_24() { return &____recordCache_24; }
	inline void set__recordCache_24(RecordCache_t3670191456 * value)
	{
		____recordCache_24 = value;
		Il2CppCodeGenWriteBarrier((&____recordCache_24), value);
	}

	inline static int32_t get_offset_of__defaultValuesRowIndex_25() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____defaultValuesRowIndex_25)); }
	inline int32_t get__defaultValuesRowIndex_25() const { return ____defaultValuesRowIndex_25; }
	inline int32_t* get_address_of__defaultValuesRowIndex_25() { return &____defaultValuesRowIndex_25; }
	inline void set__defaultValuesRowIndex_25(int32_t value)
	{
		____defaultValuesRowIndex_25 = value;
	}

	inline static int32_t get_offset_of_fInitInProgress_26() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___fInitInProgress_26)); }
	inline bool get_fInitInProgress_26() const { return ___fInitInProgress_26; }
	inline bool* get_address_of_fInitInProgress_26() { return &___fInitInProgress_26; }
	inline void set_fInitInProgress_26(bool value)
	{
		___fInitInProgress_26 = value;
	}

	inline static int32_t get_offset_of__virginCaseSensitive_27() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____virginCaseSensitive_27)); }
	inline bool get__virginCaseSensitive_27() const { return ____virginCaseSensitive_27; }
	inline bool* get_address_of__virginCaseSensitive_27() { return &____virginCaseSensitive_27; }
	inline void set__virginCaseSensitive_27(bool value)
	{
		____virginCaseSensitive_27 = value;
	}

	inline static int32_t get_offset_of__propertyDescriptorsCache_28() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____propertyDescriptorsCache_28)); }
	inline PropertyDescriptorCollection_t855881775 * get__propertyDescriptorsCache_28() const { return ____propertyDescriptorsCache_28; }
	inline PropertyDescriptorCollection_t855881775 ** get_address_of__propertyDescriptorsCache_28() { return &____propertyDescriptorsCache_28; }
	inline void set__propertyDescriptorsCache_28(PropertyDescriptorCollection_t855881775 * value)
	{
		____propertyDescriptorsCache_28 = value;
		Il2CppCodeGenWriteBarrier((&____propertyDescriptorsCache_28), value);
	}

	inline static int32_t get_offset_of__latestPrimaryKeyCols_31() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ____latestPrimaryKeyCols_31)); }
	inline DataColumnU5BU5D_t300694153* get__latestPrimaryKeyCols_31() const { return ____latestPrimaryKeyCols_31; }
	inline DataColumnU5BU5D_t300694153** get_address_of__latestPrimaryKeyCols_31() { return &____latestPrimaryKeyCols_31; }
	inline void set__latestPrimaryKeyCols_31(DataColumnU5BU5D_t300694153* value)
	{
		____latestPrimaryKeyCols_31 = value;
		Il2CppCodeGenWriteBarrier((&____latestPrimaryKeyCols_31), value);
	}

	inline static int32_t get_offset_of_empty_rows_32() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___empty_rows_32)); }
	inline DataRowU5BU5D_t2197358595* get_empty_rows_32() const { return ___empty_rows_32; }
	inline DataRowU5BU5D_t2197358595** get_address_of_empty_rows_32() { return &___empty_rows_32; }
	inline void set_empty_rows_32(DataRowU5BU5D_t2197358595* value)
	{
		___empty_rows_32 = value;
		Il2CppCodeGenWriteBarrier((&___empty_rows_32), value);
	}

	inline static int32_t get_offset_of_tableInitialized_33() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___tableInitialized_33)); }
	inline bool get_tableInitialized_33() const { return ___tableInitialized_33; }
	inline bool* get_address_of_tableInitialized_33() { return &___tableInitialized_33; }
	inline void set_tableInitialized_33(bool value)
	{
		___tableInitialized_33 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_34() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___remotingFormat_34)); }
	inline int32_t get_remotingFormat_34() const { return ___remotingFormat_34; }
	inline int32_t* get_address_of_remotingFormat_34() { return &___remotingFormat_34; }
	inline void set_remotingFormat_34(int32_t value)
	{
		___remotingFormat_34 = value;
	}

	inline static int32_t get_offset_of_ColumnChanged_35() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___ColumnChanged_35)); }
	inline DataColumnChangeEventHandler_t1255671457 * get_ColumnChanged_35() const { return ___ColumnChanged_35; }
	inline DataColumnChangeEventHandler_t1255671457 ** get_address_of_ColumnChanged_35() { return &___ColumnChanged_35; }
	inline void set_ColumnChanged_35(DataColumnChangeEventHandler_t1255671457 * value)
	{
		___ColumnChanged_35 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanged_35), value);
	}

	inline static int32_t get_offset_of_ColumnChanging_36() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___ColumnChanging_36)); }
	inline DataColumnChangeEventHandler_t1255671457 * get_ColumnChanging_36() const { return ___ColumnChanging_36; }
	inline DataColumnChangeEventHandler_t1255671457 ** get_address_of_ColumnChanging_36() { return &___ColumnChanging_36; }
	inline void set_ColumnChanging_36(DataColumnChangeEventHandler_t1255671457 * value)
	{
		___ColumnChanging_36 = value;
		Il2CppCodeGenWriteBarrier((&___ColumnChanging_36), value);
	}

	inline static int32_t get_offset_of_RowChanged_37() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___RowChanged_37)); }
	inline DataRowChangeEventHandler_t1799537135 * get_RowChanged_37() const { return ___RowChanged_37; }
	inline DataRowChangeEventHandler_t1799537135 ** get_address_of_RowChanged_37() { return &___RowChanged_37; }
	inline void set_RowChanged_37(DataRowChangeEventHandler_t1799537135 * value)
	{
		___RowChanged_37 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanged_37), value);
	}

	inline static int32_t get_offset_of_RowChanging_38() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___RowChanging_38)); }
	inline DataRowChangeEventHandler_t1799537135 * get_RowChanging_38() const { return ___RowChanging_38; }
	inline DataRowChangeEventHandler_t1799537135 ** get_address_of_RowChanging_38() { return &___RowChanging_38; }
	inline void set_RowChanging_38(DataRowChangeEventHandler_t1799537135 * value)
	{
		___RowChanging_38 = value;
		Il2CppCodeGenWriteBarrier((&___RowChanging_38), value);
	}

	inline static int32_t get_offset_of_RowDeleted_39() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___RowDeleted_39)); }
	inline DataRowChangeEventHandler_t1799537135 * get_RowDeleted_39() const { return ___RowDeleted_39; }
	inline DataRowChangeEventHandler_t1799537135 ** get_address_of_RowDeleted_39() { return &___RowDeleted_39; }
	inline void set_RowDeleted_39(DataRowChangeEventHandler_t1799537135 * value)
	{
		___RowDeleted_39 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleted_39), value);
	}

	inline static int32_t get_offset_of_RowDeleting_40() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___RowDeleting_40)); }
	inline DataRowChangeEventHandler_t1799537135 * get_RowDeleting_40() const { return ___RowDeleting_40; }
	inline DataRowChangeEventHandler_t1799537135 ** get_address_of_RowDeleting_40() { return &___RowDeleting_40; }
	inline void set_RowDeleting_40(DataRowChangeEventHandler_t1799537135 * value)
	{
		___RowDeleting_40 = value;
		Il2CppCodeGenWriteBarrier((&___RowDeleting_40), value);
	}

	inline static int32_t get_offset_of_TableNewRow_41() { return static_cast<int32_t>(offsetof(DataTable_t3557248419, ___TableNewRow_41)); }
	inline DataTableNewRowEventHandler_t900785158 * get_TableNewRow_41() const { return ___TableNewRow_41; }
	inline DataTableNewRowEventHandler_t900785158 ** get_address_of_TableNewRow_41() { return &___TableNewRow_41; }
	inline void set_TableNewRow_41(DataTableNewRowEventHandler_t900785158 * value)
	{
		___TableNewRow_41 = value;
		Il2CppCodeGenWriteBarrier((&___TableNewRow_41), value);
	}
};

struct DataTable_t3557248419_StaticFields
{
public:
	// System.Data.DataColumn[] System.Data.DataTable::_emptyColumnArray
	DataColumnU5BU5D_t300694153* ____emptyColumnArray_29;
	// System.Text.RegularExpressions.Regex System.Data.DataTable::SortRegex
	Regex_t335305106 * ___SortRegex_30;

public:
	inline static int32_t get_offset_of__emptyColumnArray_29() { return static_cast<int32_t>(offsetof(DataTable_t3557248419_StaticFields, ____emptyColumnArray_29)); }
	inline DataColumnU5BU5D_t300694153* get__emptyColumnArray_29() const { return ____emptyColumnArray_29; }
	inline DataColumnU5BU5D_t300694153** get_address_of__emptyColumnArray_29() { return &____emptyColumnArray_29; }
	inline void set__emptyColumnArray_29(DataColumnU5BU5D_t300694153* value)
	{
		____emptyColumnArray_29 = value;
		Il2CppCodeGenWriteBarrier((&____emptyColumnArray_29), value);
	}

	inline static int32_t get_offset_of_SortRegex_30() { return static_cast<int32_t>(offsetof(DataTable_t3557248419_StaticFields, ___SortRegex_30)); }
	inline Regex_t335305106 * get_SortRegex_30() const { return ___SortRegex_30; }
	inline Regex_t335305106 ** get_address_of_SortRegex_30() { return &___SortRegex_30; }
	inline void set_SortRegex_30(Regex_t335305106 * value)
	{
		___SortRegex_30 = value;
		Il2CppCodeGenWriteBarrier((&___SortRegex_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATATABLE_T3557248419_H
#ifndef DATASET_T3917940959_H
#define DATASET_T3917940959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.DataSet
struct  DataSet_t3917940959  : public MarshalByValueComponent_t3415908616
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
	DataTableCollection_t568115666 * ___tableCollection_8;
	// System.Data.DataRelationCollection System.Data.DataSet::relationCollection
	DataRelationCollection_t213541485 * ___relationCollection_9;
	// System.Data.PropertyCollection System.Data.DataSet::properties
	PropertyCollection_t2338443888 * ___properties_10;
	// System.Globalization.CultureInfo System.Data.DataSet::locale
	CultureInfo_t1377571235 * ___locale_11;
	// System.Data.TableAdapterSchemaInfo System.Data.DataSet::tableAdapterSchemaInfo
	TableAdapterSchemaInfo_t988754123 * ___tableAdapterSchemaInfo_12;
	// System.Boolean System.Data.DataSet::dataSetInitialized
	bool ___dataSetInitialized_13;
	// System.Data.SerializationFormat System.Data.DataSet::remotingFormat
	int32_t ___remotingFormat_14;
	// System.Data.MergeFailedEventHandler System.Data.DataSet::MergeFailed
	MergeFailedEventHandler_t3708603694 * ___MergeFailed_15;

public:
	inline static int32_t get_offset_of_dataSetName_3() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___dataSetName_3)); }
	inline String_t* get_dataSetName_3() const { return ___dataSetName_3; }
	inline String_t** get_address_of_dataSetName_3() { return &___dataSetName_3; }
	inline void set_dataSetName_3(String_t* value)
	{
		___dataSetName_3 = value;
		Il2CppCodeGenWriteBarrier((&___dataSetName_3), value);
	}

	inline static int32_t get_offset_of__namespace_4() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ____namespace_4)); }
	inline String_t* get__namespace_4() const { return ____namespace_4; }
	inline String_t** get_address_of__namespace_4() { return &____namespace_4; }
	inline void set__namespace_4(String_t* value)
	{
		____namespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_4), value);
	}

	inline static int32_t get_offset_of_prefix_5() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___prefix_5)); }
	inline String_t* get_prefix_5() const { return ___prefix_5; }
	inline String_t** get_address_of_prefix_5() { return &___prefix_5; }
	inline void set_prefix_5(String_t* value)
	{
		___prefix_5 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_5), value);
	}

	inline static int32_t get_offset_of_caseSensitive_6() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___caseSensitive_6)); }
	inline bool get_caseSensitive_6() const { return ___caseSensitive_6; }
	inline bool* get_address_of_caseSensitive_6() { return &___caseSensitive_6; }
	inline void set_caseSensitive_6(bool value)
	{
		___caseSensitive_6 = value;
	}

	inline static int32_t get_offset_of_enforceConstraints_7() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___enforceConstraints_7)); }
	inline bool get_enforceConstraints_7() const { return ___enforceConstraints_7; }
	inline bool* get_address_of_enforceConstraints_7() { return &___enforceConstraints_7; }
	inline void set_enforceConstraints_7(bool value)
	{
		___enforceConstraints_7 = value;
	}

	inline static int32_t get_offset_of_tableCollection_8() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___tableCollection_8)); }
	inline DataTableCollection_t568115666 * get_tableCollection_8() const { return ___tableCollection_8; }
	inline DataTableCollection_t568115666 ** get_address_of_tableCollection_8() { return &___tableCollection_8; }
	inline void set_tableCollection_8(DataTableCollection_t568115666 * value)
	{
		___tableCollection_8 = value;
		Il2CppCodeGenWriteBarrier((&___tableCollection_8), value);
	}

	inline static int32_t get_offset_of_relationCollection_9() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___relationCollection_9)); }
	inline DataRelationCollection_t213541485 * get_relationCollection_9() const { return ___relationCollection_9; }
	inline DataRelationCollection_t213541485 ** get_address_of_relationCollection_9() { return &___relationCollection_9; }
	inline void set_relationCollection_9(DataRelationCollection_t213541485 * value)
	{
		___relationCollection_9 = value;
		Il2CppCodeGenWriteBarrier((&___relationCollection_9), value);
	}

	inline static int32_t get_offset_of_properties_10() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___properties_10)); }
	inline PropertyCollection_t2338443888 * get_properties_10() const { return ___properties_10; }
	inline PropertyCollection_t2338443888 ** get_address_of_properties_10() { return &___properties_10; }
	inline void set_properties_10(PropertyCollection_t2338443888 * value)
	{
		___properties_10 = value;
		Il2CppCodeGenWriteBarrier((&___properties_10), value);
	}

	inline static int32_t get_offset_of_locale_11() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___locale_11)); }
	inline CultureInfo_t1377571235 * get_locale_11() const { return ___locale_11; }
	inline CultureInfo_t1377571235 ** get_address_of_locale_11() { return &___locale_11; }
	inline void set_locale_11(CultureInfo_t1377571235 * value)
	{
		___locale_11 = value;
		Il2CppCodeGenWriteBarrier((&___locale_11), value);
	}

	inline static int32_t get_offset_of_tableAdapterSchemaInfo_12() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___tableAdapterSchemaInfo_12)); }
	inline TableAdapterSchemaInfo_t988754123 * get_tableAdapterSchemaInfo_12() const { return ___tableAdapterSchemaInfo_12; }
	inline TableAdapterSchemaInfo_t988754123 ** get_address_of_tableAdapterSchemaInfo_12() { return &___tableAdapterSchemaInfo_12; }
	inline void set_tableAdapterSchemaInfo_12(TableAdapterSchemaInfo_t988754123 * value)
	{
		___tableAdapterSchemaInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___tableAdapterSchemaInfo_12), value);
	}

	inline static int32_t get_offset_of_dataSetInitialized_13() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___dataSetInitialized_13)); }
	inline bool get_dataSetInitialized_13() const { return ___dataSetInitialized_13; }
	inline bool* get_address_of_dataSetInitialized_13() { return &___dataSetInitialized_13; }
	inline void set_dataSetInitialized_13(bool value)
	{
		___dataSetInitialized_13 = value;
	}

	inline static int32_t get_offset_of_remotingFormat_14() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___remotingFormat_14)); }
	inline int32_t get_remotingFormat_14() const { return ___remotingFormat_14; }
	inline int32_t* get_address_of_remotingFormat_14() { return &___remotingFormat_14; }
	inline void set_remotingFormat_14(int32_t value)
	{
		___remotingFormat_14 = value;
	}

	inline static int32_t get_offset_of_MergeFailed_15() { return static_cast<int32_t>(offsetof(DataSet_t3917940959, ___MergeFailed_15)); }
	inline MergeFailedEventHandler_t3708603694 * get_MergeFailed_15() const { return ___MergeFailed_15; }
	inline MergeFailedEventHandler_t3708603694 ** get_address_of_MergeFailed_15() { return &___MergeFailed_15; }
	inline void set_MergeFailed_15(MergeFailedEventHandler_t3708603694 * value)
	{
		___MergeFailed_15 = value;
		Il2CppCodeGenWriteBarrier((&___MergeFailed_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASET_T3917940959_H
#ifndef SQLTRUNCATEEXCEPTION_T33666985_H
#define SQLTRUNCATEEXCEPTION_T33666985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlTruncateException
struct  SqlTruncateException_t33666985  : public SqlTypeException_t2665868951
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SQLTRUNCATEEXCEPTION_T33666985_H
#ifndef EVALUATEEXCEPTION_T2244912585_H
#define EVALUATEEXCEPTION_T2244912585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.EvaluateException
struct  EvaluateException_t2244912585  : public InvalidExpressionException_t4232127465
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVALUATEEXCEPTION_T2244912585_H
#ifndef SYNTAXERROREXCEPTION_T149467067_H
#define SYNTAXERROREXCEPTION_T149467067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SyntaxErrorException
struct  SyntaxErrorException_t149467067  : public InvalidExpressionException_t4232127465
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNTAXERROREXCEPTION_T149467067_H
#ifndef SQLDATETIME_T1862432915_H
#define SQLDATETIME_T1862432915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Data.SqlTypes.SqlDateTime
struct  SqlDateTime_t1862432915 
{
public:
	// System.DateTime System.Data.SqlTypes.SqlDateTime::value
	DateTime_t3788000966  ___value_0;
	// System.Boolean System.Data.SqlTypes.SqlDateTime::notNull
	bool ___notNull_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915, ___value_0)); }
	inline DateTime_t3788000966  get_value_0() const { return ___value_0; }
	inline DateTime_t3788000966 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_t3788000966  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_notNull_1() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915, ___notNull_1)); }
	inline bool get_notNull_1() const { return ___notNull_1; }
	inline bool* get_address_of_notNull_1() { return &___notNull_1; }
	inline void set_notNull_1(bool value)
	{
		___notNull_1 = value;
	}
};

struct SqlDateTime_t1862432915_StaticFields
{
public:
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MaxValue
	SqlDateTime_t1862432915  ___MaxValue_2;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::MinValue
	SqlDateTime_t1862432915  ___MinValue_3;
	// System.Data.SqlTypes.SqlDateTime System.Data.SqlTypes.SqlDateTime::Null
	SqlDateTime_t1862432915  ___Null_4;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerHour
	int32_t ___SQLTicksPerHour_5;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerMinute
	int32_t ___SQLTicksPerMinute_6;
	// System.Int32 System.Data.SqlTypes.SqlDateTime::SQLTicksPerSecond
	int32_t ___SQLTicksPerSecond_7;
	// System.DateTime System.Data.SqlTypes.SqlDateTime::zero_day
	DateTime_t3788000966  ___zero_day_8;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915_StaticFields, ___MaxValue_2)); }
	inline SqlDateTime_t1862432915  get_MaxValue_2() const { return ___MaxValue_2; }
	inline SqlDateTime_t1862432915 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(SqlDateTime_t1862432915  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915_StaticFields, ___MinValue_3)); }
	inline SqlDateTime_t1862432915  get_MinValue_3() const { return ___MinValue_3; }
	inline SqlDateTime_t1862432915 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(SqlDateTime_t1862432915  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915_StaticFields, ___Null_4)); }
	inline SqlDateTime_t1862432915  get_Null_4() const { return ___Null_4; }
	inline SqlDateTime_t1862432915 * get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(SqlDateTime_t1862432915  value)
	{
		___Null_4 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerHour_5() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915_StaticFields, ___SQLTicksPerHour_5)); }
	inline int32_t get_SQLTicksPerHour_5() const { return ___SQLTicksPerHour_5; }
	inline int32_t* get_address_of_SQLTicksPerHour_5() { return &___SQLTicksPerHour_5; }
	inline void set_SQLTicksPerHour_5(int32_t value)
	{
		___SQLTicksPerHour_5 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerMinute_6() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915_StaticFields, ___SQLTicksPerMinute_6)); }
	inline int32_t get_SQLTicksPerMinute_6() const { return ___SQLTicksPerMinute_6; }
	inline int32_t* get_address_of_SQLTicksPerMinute_6() { return &___SQLTicksPerMinute_6; }
	inline void set_SQLTicksPerMinute_6(int32_t value)
	{
		___SQLTicksPerMinute_6 = value;
	}

	inline static int32_t get_offset_of_SQLTicksPerSecond_7() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915_StaticFields, ___SQLTicksPerSecond_7)); }
	inline int32_t get_SQLTicksPerSecond_7() const { return ___SQLTicksPerSecond_7; }
	inline int32_t* get_address_of_SQLTicksPerSecond_7() { return &___SQLTicksPerSecond_7; }
	inline void set_SQLTicksPerSecond_7(int32_t value)
	{
		___SQLTicksPerSecond_7 = value;
	}

	inline static int32_t get_offset_of_zero_day_8() { return static_cast<int32_t>(offsetof(SqlDateTime_t1862432915_StaticFields, ___zero_day_8)); }
	inline DateTime_t3788000966  get_zero_day_8() const { return ___zero_day_8; }
	inline DateTime_t3788000966 * get_address_of_zero_day_8() { return &___zero_day_8; }
	inline void set_zero_day_8(DateTime_t3788000966  value)
	{
		___zero_day_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t1862432915_marshaled_pinvoke
{
	DateTime_t3788000966  ___value_0;
	int32_t ___notNull_1;
};
// Native definition for COM marshalling of System.Data.SqlTypes.SqlDateTime
struct SqlDateTime_t1862432915_marshaled_com
{
	DateTime_t3788000966  ___value_0;
	int32_t ___notNull_1;
};
#endif // SQLDATETIME_T1862432915_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (DataTableMapping_t1735306289), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2300[3] = 
{
	DataTableMapping_t1735306289::get_offset_of_sourceTable_1(),
	DataTableMapping_t1735306289::get_offset_of_dataSetTable_2(),
	DataTableMapping_t1735306289::get_offset_of_columnMappings_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (DataTableMappingCollection_t2798561756), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2301[3] = 
{
	DataTableMappingCollection_t2798561756::get_offset_of_mappings_1(),
	DataTableMappingCollection_t2798561756::get_offset_of_sourceTables_2(),
	DataTableMappingCollection_t2798561756::get_offset_of_dataSetTables_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (DbCommand_t2716222205), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (DbConnection_t2992751362), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (DbDataAdapter_t576230262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2304[4] = 
{
	DbDataAdapter_t576230262::get_offset_of__selectCommand_5(),
	DbDataAdapter_t576230262::get_offset_of__updateCommand_6(),
	DbDataAdapter_t576230262::get_offset_of__deleteCommand_7(),
	DbDataAdapter_t576230262::get_offset_of__insertCommand_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (DbParameter_t1828078135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (DbParameterCollection_t476421843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (DbProviderFactory_t3470316299), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (DbTypes_t3515484222), -1, sizeof(DbTypes_t3515484222_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2308[21] = 
{
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfBoolean_0(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfSByte_1(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfChar_2(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfInt16_3(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfInt32_4(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfInt64_5(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfByte_6(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfUInt16_7(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfUInt32_8(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfUInt64_9(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfDouble_10(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfSingle_11(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfDecimal_12(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfString_13(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfDateTime_14(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfObject_15(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfGuid_16(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfType_17(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfByteArray_18(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfFloat_19(),
	DbTypes_t3515484222_StaticFields::get_offset_of_TypeOfTimespan_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2309 = { sizeof (Index_t1374197991), -1, sizeof(Index_t1374197991_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2309[7] = 
{
	Index_t1374197991_StaticFields::get_offset_of_empty_0(),
	Index_t1374197991::get_offset_of__array_1(),
	Index_t1374197991::get_offset_of__size_2(),
	Index_t1374197991::get_offset_of__key_3(),
	Index_t1374197991::get_offset_of__refCount_4(),
	Index_t1374197991::get_offset_of_know_have_duplicates_5(),
	Index_t1374197991::get_offset_of_know_no_duplicates_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2310 = { sizeof (Key_t2901176986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2310[6] = 
{
	Key_t2901176986::get_offset_of__table_0(),
	Key_t2901176986::get_offset_of__columns_1(),
	Key_t2901176986::get_offset_of__sortDirection_2(),
	Key_t2901176986::get_offset_of__rowStateFilter_3(),
	Key_t2901176986::get_offset_of__filter_4(),
	Key_t2901176986::get_offset_of__tmpRow_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2311 = { sizeof (RecordCache_t3670191456), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2311[5] = 
{
	RecordCache_t3670191456::get_offset_of__records_0(),
	RecordCache_t3670191456::get_offset_of__nextFreeIndex_1(),
	RecordCache_t3670191456::get_offset_of__currentCapacity_2(),
	RecordCache_t3670191456::get_offset_of__table_3(),
	RecordCache_t3670191456::get_offset_of__rowsToRecords_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2312 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2313 = { sizeof (SqlBinary_t1965529616)+ sizeof (RuntimeObject), sizeof(SqlBinary_t1965529616_marshaled_pinvoke), sizeof(SqlBinary_t1965529616_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2313[3] = 
{
	SqlBinary_t1965529616::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t1965529616::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBinary_t1965529616_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2314 = { sizeof (SqlBoolean_t346223151)+ sizeof (RuntimeObject), sizeof(SqlBoolean_t346223151_marshaled_pinvoke), sizeof(SqlBoolean_t346223151_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2314[7] = 
{
	SqlBoolean_t346223151::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t346223151::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlBoolean_t346223151_StaticFields::get_offset_of_False_2(),
	SqlBoolean_t346223151_StaticFields::get_offset_of_Null_3(),
	SqlBoolean_t346223151_StaticFields::get_offset_of_One_4(),
	SqlBoolean_t346223151_StaticFields::get_offset_of_True_5(),
	SqlBoolean_t346223151_StaticFields::get_offset_of_Zero_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2315 = { sizeof (SqlByte_t583242281)+ sizeof (RuntimeObject), sizeof(SqlByte_t583242281_marshaled_pinvoke), sizeof(SqlByte_t583242281_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2315[6] = 
{
	SqlByte_t583242281::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t583242281::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlByte_t583242281_StaticFields::get_offset_of_MaxValue_2(),
	SqlByte_t583242281_StaticFields::get_offset_of_MinValue_3(),
	SqlByte_t583242281_StaticFields::get_offset_of_Null_4(),
	SqlByte_t583242281_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2316 = { sizeof (SqlBytes_t1181805739), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2316[3] = 
{
	SqlBytes_t1181805739::get_offset_of_notNull_0(),
	SqlBytes_t1181805739::get_offset_of_buffer_1(),
	SqlBytes_t1181805739::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2317 = { sizeof (SqlChars_t400448092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2317[3] = 
{
	SqlChars_t400448092::get_offset_of_notNull_0(),
	SqlChars_t400448092::get_offset_of_buffer_1(),
	SqlChars_t400448092::get_offset_of_storage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2318 = { sizeof (SqlCompareOptions_t2241908394)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2318[7] = 
{
	SqlCompareOptions_t2241908394::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2319 = { sizeof (SqlDateTime_t1862432915)+ sizeof (RuntimeObject), -1, sizeof(SqlDateTime_t1862432915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2319[9] = 
{
	SqlDateTime_t1862432915::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t1862432915::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDateTime_t1862432915_StaticFields::get_offset_of_MaxValue_2(),
	SqlDateTime_t1862432915_StaticFields::get_offset_of_MinValue_3(),
	SqlDateTime_t1862432915_StaticFields::get_offset_of_Null_4(),
	SqlDateTime_t1862432915_StaticFields::get_offset_of_SQLTicksPerHour_5(),
	SqlDateTime_t1862432915_StaticFields::get_offset_of_SQLTicksPerMinute_6(),
	SqlDateTime_t1862432915_StaticFields::get_offset_of_SQLTicksPerSecond_7(),
	SqlDateTime_t1862432915_StaticFields::get_offset_of_zero_day_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2320 = { sizeof (SqlDecimal_t2046928231)+ sizeof (RuntimeObject), sizeof(SqlDecimal_t2046928231_marshaled_pinvoke), sizeof(SqlDecimal_t2046928231_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2320[11] = 
{
	SqlDecimal_t2046928231::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2046928231::get_offset_of_precision_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2046928231::get_offset_of_scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2046928231::get_offset_of_positive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2046928231::get_offset_of_notNull_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDecimal_t2046928231_StaticFields::get_offset_of_constantsDecadeInt32Factors_5(),
	SqlDecimal_t2046928231_StaticFields::get_offset_of_MaxPrecision_6(),
	SqlDecimal_t2046928231_StaticFields::get_offset_of_MaxScale_7(),
	SqlDecimal_t2046928231_StaticFields::get_offset_of_MaxValue_8(),
	SqlDecimal_t2046928231_StaticFields::get_offset_of_MinValue_9(),
	SqlDecimal_t2046928231_StaticFields::get_offset_of_Null_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2321 = { sizeof (SqlDouble_t3851545678)+ sizeof (RuntimeObject), sizeof(SqlDouble_t3851545678_marshaled_pinvoke), sizeof(SqlDouble_t3851545678_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2321[6] = 
{
	SqlDouble_t3851545678::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t3851545678::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlDouble_t3851545678_StaticFields::get_offset_of_MaxValue_2(),
	SqlDouble_t3851545678_StaticFields::get_offset_of_MinValue_3(),
	SqlDouble_t3851545678_StaticFields::get_offset_of_Null_4(),
	SqlDouble_t3851545678_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2322 = { sizeof (SqlGuid_t670641496)+ sizeof (RuntimeObject), sizeof(SqlGuid_t670641496_marshaled_pinvoke), sizeof(SqlGuid_t670641496_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2322[3] = 
{
	SqlGuid_t670641496::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t670641496::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlGuid_t670641496_StaticFields::get_offset_of_Null_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2323 = { sizeof (SqlInt16_t498169526)+ sizeof (RuntimeObject), sizeof(SqlInt16_t498169526_marshaled_pinvoke), sizeof(SqlInt16_t498169526_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2323[6] = 
{
	SqlInt16_t498169526::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t498169526::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt16_t498169526_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt16_t498169526_StaticFields::get_offset_of_MinValue_3(),
	SqlInt16_t498169526_StaticFields::get_offset_of_Null_4(),
	SqlInt16_t498169526_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2324 = { sizeof (SqlInt32_t227699779)+ sizeof (RuntimeObject), sizeof(SqlInt32_t227699779_marshaled_pinvoke), sizeof(SqlInt32_t227699779_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2324[6] = 
{
	SqlInt32_t227699779::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t227699779::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt32_t227699779_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt32_t227699779_StaticFields::get_offset_of_MinValue_3(),
	SqlInt32_t227699779_StaticFields::get_offset_of_Null_4(),
	SqlInt32_t227699779_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2325 = { sizeof (SqlInt64_t4191277368)+ sizeof (RuntimeObject), sizeof(SqlInt64_t4191277368_marshaled_pinvoke), sizeof(SqlInt64_t4191277368_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2325[6] = 
{
	SqlInt64_t4191277368::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t4191277368::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlInt64_t4191277368_StaticFields::get_offset_of_MaxValue_2(),
	SqlInt64_t4191277368_StaticFields::get_offset_of_MinValue_3(),
	SqlInt64_t4191277368_StaticFields::get_offset_of_Null_4(),
	SqlInt64_t4191277368_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2326 = { sizeof (SqlMoney_t3002506268)+ sizeof (RuntimeObject), sizeof(SqlMoney_t3002506268_marshaled_pinvoke), sizeof(SqlMoney_t3002506268_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2326[7] = 
{
	SqlMoney_t3002506268::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t3002506268::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlMoney_t3002506268_StaticFields::get_offset_of_MaxValue_2(),
	SqlMoney_t3002506268_StaticFields::get_offset_of_MinValue_3(),
	SqlMoney_t3002506268_StaticFields::get_offset_of_Null_4(),
	SqlMoney_t3002506268_StaticFields::get_offset_of_Zero_5(),
	SqlMoney_t3002506268_StaticFields::get_offset_of_MoneyFormat_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2327 = { sizeof (SqlNullValueException_t4230872017), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2328 = { sizeof (SqlSingle_t3580894546)+ sizeof (RuntimeObject), sizeof(SqlSingle_t3580894546_marshaled_pinvoke), sizeof(SqlSingle_t3580894546_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2328[6] = 
{
	SqlSingle_t3580894546::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3580894546::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlSingle_t3580894546_StaticFields::get_offset_of_MaxValue_2(),
	SqlSingle_t3580894546_StaticFields::get_offset_of_MinValue_3(),
	SqlSingle_t3580894546_StaticFields::get_offset_of_Null_4(),
	SqlSingle_t3580894546_StaticFields::get_offset_of_Zero_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2329 = { sizeof (SqlString_t1271779612)+ sizeof (RuntimeObject), sizeof(SqlString_t1271779612_marshaled_pinvoke), sizeof(SqlString_t1271779612_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2329[11] = 
{
	SqlString_t1271779612::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1271779612::get_offset_of_notNull_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1271779612::get_offset_of_lcid_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1271779612::get_offset_of_compareOptions_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SqlString_t1271779612_StaticFields::get_offset_of_BinarySort_4(),
	SqlString_t1271779612_StaticFields::get_offset_of_IgnoreCase_5(),
	SqlString_t1271779612_StaticFields::get_offset_of_IgnoreKanaType_6(),
	SqlString_t1271779612_StaticFields::get_offset_of_IgnoreNonSpace_7(),
	SqlString_t1271779612_StaticFields::get_offset_of_IgnoreWidth_8(),
	SqlString_t1271779612_StaticFields::get_offset_of_Null_9(),
	SqlString_t1271779612_StaticFields::get_offset_of_DecimalFormat_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2330 = { sizeof (SqlTruncateException_t33666985), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2331 = { sizeof (SqlTypeException_t2665868951), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2332 = { sizeof (SqlXml_t2130775032), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2332[2] = 
{
	SqlXml_t2130775032::get_offset_of_notNull_0(),
	SqlXml_t2130775032::get_offset_of_xmlValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2333 = { sizeof (StorageState_t1651896631)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2333[4] = 
{
	StorageState_t1651896631::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2334 = { sizeof (AcceptRejectRule_t1952693119)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2334[3] = 
{
	AcceptRejectRule_t1952693119::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2335 = { sizeof (ColumnTypeConverter_t204482301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2336 = { sizeof (CommandType_t2243563317)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2336[4] = 
{
	CommandType_t2243563317::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2337 = { sizeof (Constraint_t2822837117), -1, sizeof(Constraint_t2822837117_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2337[8] = 
{
	Constraint_t2822837117_StaticFields::get_offset_of_beforeConstraintNameChange_0(),
	Constraint_t2822837117::get_offset_of_events_1(),
	Constraint_t2822837117::get_offset_of__constraintName_2(),
	Constraint_t2822837117::get_offset_of__properties_3(),
	Constraint_t2822837117::get_offset_of__index_4(),
	Constraint_t2822837117::get_offset_of__constraintCollection_5(),
	Constraint_t2822837117::get_offset_of_dataSet_6(),
	Constraint_t2822837117::get_offset_of_initInProgress_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2338 = { sizeof (ConstraintCollection_t1629304036), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2338[2] = 
{
	ConstraintCollection_t1629304036::get_offset_of_table_2(),
	ConstraintCollection_t1629304036::get_offset_of_CollectionChanged_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2339 = { sizeof (ConstraintConverter_t3024456279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2340 = { sizeof (ConstraintException_t911865770), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2341 = { sizeof (DataCategoryAttribute_t1285006400), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2342 = { sizeof (DataColumn_t1291436568), -1, sizeof(DataColumn_t1291436568_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2342[23] = 
{
	DataColumn_t1291436568::get_offset_of__eventHandlers_3(),
	DataColumn_t1291436568_StaticFields::get_offset_of__propertyChangedKey_4(),
	DataColumn_t1291436568::get_offset_of__allowDBNull_5(),
	DataColumn_t1291436568::get_offset_of__autoIncrement_6(),
	DataColumn_t1291436568::get_offset_of__autoIncrementSeed_7(),
	DataColumn_t1291436568::get_offset_of__autoIncrementStep_8(),
	DataColumn_t1291436568::get_offset_of__nextAutoIncrementValue_9(),
	DataColumn_t1291436568::get_offset_of__caption_10(),
	DataColumn_t1291436568::get_offset_of__columnMapping_11(),
	DataColumn_t1291436568::get_offset_of__columnName_12(),
	DataColumn_t1291436568::get_offset_of__defaultValue_13(),
	DataColumn_t1291436568::get_offset_of__expression_14(),
	DataColumn_t1291436568::get_offset_of__compiledExpression_15(),
	DataColumn_t1291436568::get_offset_of__extendedProperties_16(),
	DataColumn_t1291436568::get_offset_of__maxLength_17(),
	DataColumn_t1291436568::get_offset_of__nameSpace_18(),
	DataColumn_t1291436568::get_offset_of__ordinal_19(),
	DataColumn_t1291436568::get_offset_of__prefix_20(),
	DataColumn_t1291436568::get_offset_of__readOnly_21(),
	DataColumn_t1291436568::get_offset_of__table_22(),
	DataColumn_t1291436568::get_offset_of__unique_23(),
	DataColumn_t1291436568::get_offset_of__dataContainer_24(),
	DataColumn_t1291436568::get_offset_of__datetimeMode_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2343 = { sizeof (DataColumnChangeEventArgs_t94204385), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2343[3] = 
{
	DataColumnChangeEventArgs_t94204385::get_offset_of__column_1(),
	DataColumnChangeEventArgs_t94204385::get_offset_of__row_2(),
	DataColumnChangeEventArgs_t94204385::get_offset_of__proposedValue_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2344 = { sizeof (Doublet_t387857851), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2344[2] = 
{
	Doublet_t387857851::get_offset_of_count_0(),
	Doublet_t387857851::get_offset_of_columnNames_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2345 = { sizeof (DataColumnCollection_t3329180304), -1, sizeof(DataColumnCollection_t3329180304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2345[9] = 
{
	DataColumnCollection_t3329180304::get_offset_of_columnNameCount_2(),
	DataColumnCollection_t3329180304::get_offset_of_columnFromName_3(),
	DataColumnCollection_t3329180304::get_offset_of_autoIncrement_4(),
	DataColumnCollection_t3329180304::get_offset_of_defaultColumnIndex_5(),
	DataColumnCollection_t3329180304::get_offset_of_parentTable_6(),
	DataColumnCollection_t3329180304_StaticFields::get_offset_of_ColumnPrefix_7(),
	DataColumnCollection_t3329180304_StaticFields::get_offset_of_TenColumns_8(),
	DataColumnCollection_t3329180304::get_offset_of_CollectionChanged_9(),
	DataColumnCollection_t3329180304::get_offset_of_CollectionMetaDataChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2346 = { sizeof (DataException_t58735596), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2347 = { sizeof (DataRelation_t3258539283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2347[12] = 
{
	DataRelation_t3258539283::get_offset_of_dataSet_0(),
	DataRelation_t3258539283::get_offset_of_relationName_1(),
	DataRelation_t3258539283::get_offset_of_parentKeyConstraint_2(),
	DataRelation_t3258539283::get_offset_of_childKeyConstraint_3(),
	DataRelation_t3258539283::get_offset_of_parentColumns_4(),
	DataRelation_t3258539283::get_offset_of_childColumns_5(),
	DataRelation_t3258539283::get_offset_of_nested_6(),
	DataRelation_t3258539283::get_offset_of_createConstraints_7(),
	DataRelation_t3258539283::get_offset_of_initFinished_8(),
	DataRelation_t3258539283::get_offset_of_extendedProperties_9(),
	DataRelation_t3258539283::get_offset_of__parentTableNameSpace_10(),
	DataRelation_t3258539283::get_offset_of__childTableNameSpace_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2348 = { sizeof (DataRelationCollection_t213541485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2348[3] = 
{
	DataRelationCollection_t213541485::get_offset_of_inTransition_2(),
	DataRelationCollection_t213541485::get_offset_of_index_3(),
	DataRelationCollection_t213541485::get_offset_of_CollectionChanged_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2349 = { sizeof (DataSetRelationCollection_t765330754), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2349[1] = 
{
	DataSetRelationCollection_t765330754::get_offset_of_dataSet_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2350 = { sizeof (DataTableRelationCollection_t3010343470), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2350[1] = 
{
	DataTableRelationCollection_t3010343470::get_offset_of_dataTable_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2351 = { sizeof (DataRow_t793422502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2351[13] = 
{
	DataRow_t793422502::get_offset_of__table_0(),
	DataRow_t793422502::get_offset_of__original_1(),
	DataRow_t793422502::get_offset_of__current_2(),
	DataRow_t793422502::get_offset_of__proposed_3(),
	DataRow_t793422502::get_offset_of__columnErrors_4(),
	DataRow_t793422502::get_offset_of_rowError_5(),
	DataRow_t793422502::get_offset_of_xmlRowID_6(),
	DataRow_t793422502::get_offset_of__nullConstraintViolation_7(),
	DataRow_t793422502::get_offset_of__nullConstraintMessage_8(),
	DataRow_t793422502::get_offset_of__inChangingEvent_9(),
	DataRow_t793422502::get_offset_of__rowId_10(),
	DataRow_t793422502::get_offset_of__rowChanged_11(),
	DataRow_t793422502::get_offset_of__inExpressionEvaluation_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2352 = { sizeof (DataRowAction_t3649658171)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2352[9] = 
{
	DataRowAction_t3649658171::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2353 = { sizeof (DataRowBuilder_t2079591726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2353[2] = 
{
	DataRowBuilder_t2079591726::get_offset_of_table_0(),
	DataRowBuilder_t2079591726::get_offset_of__rowId_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2354 = { sizeof (DataRowChangeEventArgs_t2223663155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2354[2] = 
{
	DataRowChangeEventArgs_t2223663155::get_offset_of_row_1(),
	DataRowChangeEventArgs_t2223663155::get_offset_of_action_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2355 = { sizeof (DataRowCollection_t3150816660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2355[1] = 
{
	DataRowCollection_t3150816660::get_offset_of_table_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2356 = { sizeof (DataRowState_t3620377663)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2356[6] = 
{
	DataRowState_t3620377663::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2357 = { sizeof (DataRowVersion_t1927329429)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2357[5] = 
{
	DataRowVersion_t1927329429::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2358 = { sizeof (DataSet_t3917940959), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2358[13] = 
{
	DataSet_t3917940959::get_offset_of_dataSetName_3(),
	DataSet_t3917940959::get_offset_of__namespace_4(),
	DataSet_t3917940959::get_offset_of_prefix_5(),
	DataSet_t3917940959::get_offset_of_caseSensitive_6(),
	DataSet_t3917940959::get_offset_of_enforceConstraints_7(),
	DataSet_t3917940959::get_offset_of_tableCollection_8(),
	DataSet_t3917940959::get_offset_of_relationCollection_9(),
	DataSet_t3917940959::get_offset_of_properties_10(),
	DataSet_t3917940959::get_offset_of_locale_11(),
	DataSet_t3917940959::get_offset_of_tableAdapterSchemaInfo_12(),
	DataSet_t3917940959::get_offset_of_dataSetInitialized_13(),
	DataSet_t3917940959::get_offset_of_remotingFormat_14(),
	DataSet_t3917940959::get_offset_of_MergeFailed_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2359 = { sizeof (DataSetDateTime_t1015319019)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2359[5] = 
{
	DataSetDateTime_t1015319019::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2360 = { sizeof (DataTable_t3557248419), -1, sizeof(DataTable_t3557248419_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2360[39] = 
{
	DataTable_t3557248419::get_offset_of_dataSet_3(),
	DataTable_t3557248419::get_offset_of__caseSensitive_4(),
	DataTable_t3557248419::get_offset_of__columnCollection_5(),
	DataTable_t3557248419::get_offset_of__constraintCollection_6(),
	DataTable_t3557248419::get_offset_of__displayExpression_7(),
	DataTable_t3557248419::get_offset_of__extendedProperties_8(),
	DataTable_t3557248419::get_offset_of__locale_9(),
	DataTable_t3557248419::get_offset_of__minimumCapacity_10(),
	DataTable_t3557248419::get_offset_of__nameSpace_11(),
	DataTable_t3557248419::get_offset_of__childRelations_12(),
	DataTable_t3557248419::get_offset_of__parentRelations_13(),
	DataTable_t3557248419::get_offset_of__prefix_14(),
	DataTable_t3557248419::get_offset_of__primaryKeyConstraint_15(),
	DataTable_t3557248419::get_offset_of__rows_16(),
	DataTable_t3557248419::get_offset_of__site_17(),
	DataTable_t3557248419::get_offset_of__tableName_18(),
	DataTable_t3557248419::get_offset_of__duringDataLoad_19(),
	DataTable_t3557248419::get_offset_of__nullConstraintViolationDuringDataLoad_20(),
	DataTable_t3557248419::get_offset_of_enforceConstraints_21(),
	DataTable_t3557248419::get_offset_of__rowBuilder_22(),
	DataTable_t3557248419::get_offset_of__indexes_23(),
	DataTable_t3557248419::get_offset_of__recordCache_24(),
	DataTable_t3557248419::get_offset_of__defaultValuesRowIndex_25(),
	DataTable_t3557248419::get_offset_of_fInitInProgress_26(),
	DataTable_t3557248419::get_offset_of__virginCaseSensitive_27(),
	DataTable_t3557248419::get_offset_of__propertyDescriptorsCache_28(),
	DataTable_t3557248419_StaticFields::get_offset_of__emptyColumnArray_29(),
	DataTable_t3557248419_StaticFields::get_offset_of_SortRegex_30(),
	DataTable_t3557248419::get_offset_of__latestPrimaryKeyCols_31(),
	DataTable_t3557248419::get_offset_of_empty_rows_32(),
	DataTable_t3557248419::get_offset_of_tableInitialized_33(),
	DataTable_t3557248419::get_offset_of_remotingFormat_34(),
	DataTable_t3557248419::get_offset_of_ColumnChanged_35(),
	DataTable_t3557248419::get_offset_of_ColumnChanging_36(),
	DataTable_t3557248419::get_offset_of_RowChanged_37(),
	DataTable_t3557248419::get_offset_of_RowChanging_38(),
	DataTable_t3557248419::get_offset_of_RowDeleted_39(),
	DataTable_t3557248419::get_offset_of_RowDeleting_40(),
	DataTable_t3557248419::get_offset_of_TableNewRow_41(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2361 = { sizeof (DataTableCollection_t568115666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2361[3] = 
{
	DataTableCollection_t568115666::get_offset_of_dataSet_2(),
	DataTableCollection_t568115666::get_offset_of_CollectionChanged_3(),
	DataTableCollection_t568115666::get_offset_of_CollectionChanging_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2362 = { sizeof (DataTableNewRowEventArgs_t1050019527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2362[1] = 
{
	DataTableNewRowEventArgs_t1050019527::get_offset_of__row_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2363 = { sizeof (DataViewRowState_t792567974)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2363[9] = 
{
	DataViewRowState_t792567974::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2364 = { sizeof (DefaultValueTypeConverter_t1165355396), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2365 = { sizeof (DeletedRowInaccessibleException_t1939116550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2366 = { sizeof (DuplicateNameException_t2562623346), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2367 = { sizeof (EvaluateException_t2244912585), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2368 = { sizeof (ForeignKeyConstraint_t164289483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2368[6] = 
{
	ForeignKeyConstraint_t164289483::get_offset_of__parentUniqueConstraint_8(),
	ForeignKeyConstraint_t164289483::get_offset_of__parentColumns_9(),
	ForeignKeyConstraint_t164289483::get_offset_of__childColumns_10(),
	ForeignKeyConstraint_t164289483::get_offset_of__deleteRule_11(),
	ForeignKeyConstraint_t164289483::get_offset_of__updateRule_12(),
	ForeignKeyConstraint_t164289483::get_offset_of__acceptRejectRule_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2369 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2370 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2371 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2372 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2373 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2374 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2375 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2376 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2377 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2378 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2379 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2380 = { sizeof (InRowChangingEventException_t1926320477), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2381 = { sizeof (InternalDataCollectionBase_t697251732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2381[2] = 
{
	InternalDataCollectionBase_t697251732::get_offset_of_list_0(),
	InternalDataCollectionBase_t697251732::get_offset_of_synchronized_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2382 = { sizeof (InvalidConstraintException_t1712908941), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2383 = { sizeof (InvalidExpressionException_t4232127465), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2384 = { sizeof (MappingType_t1545966524)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2384[5] = 
{
	MappingType_t1545966524::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2385 = { sizeof (MergeFailedEventArgs_t585845895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2385[2] = 
{
	MergeFailedEventArgs_t585845895::get_offset_of_data_table_1(),
	MergeFailedEventArgs_t585845895::get_offset_of_conflict_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2386 = { sizeof (MergeManager_t3170053755), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2387 = { sizeof (MissingPrimaryKeyException_t1541985360), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2388 = { sizeof (MissingSchemaAction_t2489813475)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2388[5] = 
{
	MissingSchemaAction_t2489813475::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2389 = { sizeof (NoNullAllowedException_t2505591883), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2390 = { sizeof (ParameterDirection_t450714121)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2390[5] = 
{
	ParameterDirection_t450714121::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2391 = { sizeof (PropertyCollection_t2338443888), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2392 = { sizeof (ReadOnlyException_t3236679349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2393 = { sizeof (RelationshipConverter_t2412424286), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2394 = { sizeof (ResDescriptionAttribute_t1119504674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2394[1] = 
{
	ResDescriptionAttribute_t1119504674::get_offset_of_description_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2395 = { sizeof (RowNotInTableException_t73914914), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2396 = { sizeof (Rule_t1797838765)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2396[5] = 
{
	Rule_t1797838765::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2397 = { sizeof (SchemaSerializationMode_t201347391)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2397[3] = 
{
	SchemaSerializationMode_t201347391::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2398 = { sizeof (SerializationFormat_t2821137780)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2398[3] = 
{
	SerializationFormat_t2821137780::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2399 = { sizeof (SyntaxErrorException_t149467067), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
