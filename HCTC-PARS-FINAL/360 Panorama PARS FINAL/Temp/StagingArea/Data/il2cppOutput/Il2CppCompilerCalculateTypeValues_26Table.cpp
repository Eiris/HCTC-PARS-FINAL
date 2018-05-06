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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.String
struct String_t;
// System.Collections.Generic.List`1<Hazard>
struct List_1_t1807265320;
// System.Collections.Generic.List`1<TrainingHazard>
struct List_1_t2270999925;
// TrainingHazardController
struct TrainingHazardController_t987698733;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t1067045639;
// System.String[]
struct StringU5BU5D_t1281789340;
// TrainingController
struct TrainingController_t3952779903;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// PARSSettings
struct PARSSettings_t2801629121;
// TrainingHazard
struct TrainingHazard_t798925183;
// HazardIconController
struct HazardIconController_t3601592792;
// HazardContentView
struct HazardContentView_t2572541359;
// TrainingCollectionCell
struct TrainingCollectionCell_t2778354195;
// State
struct State_t3329758327;
// UnityEngine.UI.Text
struct Text_t1901882714;
// ResultAnswersList
struct ResultAnswersList_t719099062;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// Round
struct Round_t3007421971;
// System.Collections.Generic.List`1<Round>
struct List_1_t184529417;
// PARSDataManager
struct PARSDataManager_t1176312113;
// NavigationController
struct NavigationController_t182472134;
// PARSController
struct PARSController_t1025491303;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// ResultCardCell
struct ResultCardCell_t3938479119;
// AssessmentController
struct AssessmentController_t2586697688;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t422084607;
// CellPressedCallBack
struct CellPressedCallBack_t865333736;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936;
// HazardSummary
struct HazardSummary_t168547793;
// System.Collections.Generic.List`1<TrainingHazardController>
struct List_1_t2459773475;
// TrainingDataManager
struct TrainingDataManager_t3084013207;
// AnswerKey
struct AnswerKey_t1212413198;




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
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ROUND_T3007421971_H
#define ROUND_T3007421971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Round
struct  Round_t3007421971  : public RuntimeObject
{
public:
	// System.String Round::sceneID
	String_t* ___sceneID_0;
	// System.String Round::startTime
	String_t* ___startTime_1;
	// System.String Round::endTime
	String_t* ___endTime_2;
	// System.Collections.Generic.List`1<Hazard> Round::hazardResponses
	List_1_t1807265320 * ___hazardResponses_3;
	// System.Collections.Generic.List`1<TrainingHazard> Round::trainingHazardData
	List_1_t2270999925 * ___trainingHazardData_4;

public:
	inline static int32_t get_offset_of_sceneID_0() { return static_cast<int32_t>(offsetof(Round_t3007421971, ___sceneID_0)); }
	inline String_t* get_sceneID_0() const { return ___sceneID_0; }
	inline String_t** get_address_of_sceneID_0() { return &___sceneID_0; }
	inline void set_sceneID_0(String_t* value)
	{
		___sceneID_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneID_0), value);
	}

	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(Round_t3007421971, ___startTime_1)); }
	inline String_t* get_startTime_1() const { return ___startTime_1; }
	inline String_t** get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(String_t* value)
	{
		___startTime_1 = value;
		Il2CppCodeGenWriteBarrier((&___startTime_1), value);
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(Round_t3007421971, ___endTime_2)); }
	inline String_t* get_endTime_2() const { return ___endTime_2; }
	inline String_t** get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(String_t* value)
	{
		___endTime_2 = value;
		Il2CppCodeGenWriteBarrier((&___endTime_2), value);
	}

	inline static int32_t get_offset_of_hazardResponses_3() { return static_cast<int32_t>(offsetof(Round_t3007421971, ___hazardResponses_3)); }
	inline List_1_t1807265320 * get_hazardResponses_3() const { return ___hazardResponses_3; }
	inline List_1_t1807265320 ** get_address_of_hazardResponses_3() { return &___hazardResponses_3; }
	inline void set_hazardResponses_3(List_1_t1807265320 * value)
	{
		___hazardResponses_3 = value;
		Il2CppCodeGenWriteBarrier((&___hazardResponses_3), value);
	}

	inline static int32_t get_offset_of_trainingHazardData_4() { return static_cast<int32_t>(offsetof(Round_t3007421971, ___trainingHazardData_4)); }
	inline List_1_t2270999925 * get_trainingHazardData_4() const { return ___trainingHazardData_4; }
	inline List_1_t2270999925 ** get_address_of_trainingHazardData_4() { return &___trainingHazardData_4; }
	inline void set_trainingHazardData_4(List_1_t2270999925 * value)
	{
		___trainingHazardData_4 = value;
		Il2CppCodeGenWriteBarrier((&___trainingHazardData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUND_T3007421971_H
#ifndef HAZARD_T335190578_H
#define HAZARD_T335190578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Hazard
struct  Hazard_t335190578  : public RuntimeObject
{
public:
	// System.String Hazard::category
	String_t* ___category_0;
	// System.String Hazard::name
	String_t* ___name_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(Hazard_t335190578, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Hazard_t335190578, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAZARD_T335190578_H
#ifndef JSONHELPER_T323687296_H
#define JSONHELPER_T323687296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonHelper
struct  JsonHelper_t323687296  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONHELPER_T323687296_H
#ifndef PARSDATAMANAGER_T1176312113_H
#define PARSDATAMANAGER_T1176312113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PARSDataManager
struct  PARSDataManager_t1176312113  : public RuntimeObject
{
public:
	// System.String PARSDataManager::sessionID
	String_t* ___sessionID_0;
	// System.String PARSDataManager::gameDataFileName
	String_t* ___gameDataFileName_2;
	// System.String PARSDataManager::jsonOutput
	String_t* ___jsonOutput_3;
	// System.String PARSDataManager::sessionStart
	String_t* ___sessionStart_4;

public:
	inline static int32_t get_offset_of_sessionID_0() { return static_cast<int32_t>(offsetof(PARSDataManager_t1176312113, ___sessionID_0)); }
	inline String_t* get_sessionID_0() const { return ___sessionID_0; }
	inline String_t** get_address_of_sessionID_0() { return &___sessionID_0; }
	inline void set_sessionID_0(String_t* value)
	{
		___sessionID_0 = value;
		Il2CppCodeGenWriteBarrier((&___sessionID_0), value);
	}

	inline static int32_t get_offset_of_gameDataFileName_2() { return static_cast<int32_t>(offsetof(PARSDataManager_t1176312113, ___gameDataFileName_2)); }
	inline String_t* get_gameDataFileName_2() const { return ___gameDataFileName_2; }
	inline String_t** get_address_of_gameDataFileName_2() { return &___gameDataFileName_2; }
	inline void set_gameDataFileName_2(String_t* value)
	{
		___gameDataFileName_2 = value;
		Il2CppCodeGenWriteBarrier((&___gameDataFileName_2), value);
	}

	inline static int32_t get_offset_of_jsonOutput_3() { return static_cast<int32_t>(offsetof(PARSDataManager_t1176312113, ___jsonOutput_3)); }
	inline String_t* get_jsonOutput_3() const { return ___jsonOutput_3; }
	inline String_t** get_address_of_jsonOutput_3() { return &___jsonOutput_3; }
	inline void set_jsonOutput_3(String_t* value)
	{
		___jsonOutput_3 = value;
		Il2CppCodeGenWriteBarrier((&___jsonOutput_3), value);
	}

	inline static int32_t get_offset_of_sessionStart_4() { return static_cast<int32_t>(offsetof(PARSDataManager_t1176312113, ___sessionStart_4)); }
	inline String_t* get_sessionStart_4() const { return ___sessionStart_4; }
	inline String_t** get_address_of_sessionStart_4() { return &___sessionStart_4; }
	inline void set_sessionStart_4(String_t* value)
	{
		___sessionStart_4 = value;
		Il2CppCodeGenWriteBarrier((&___sessionStart_4), value);
	}
};

struct PARSDataManager_t1176312113_StaticFields
{
public:
	// PARSDataManager PARSDataManager::instance
	PARSDataManager_t1176312113 * ___instance_1;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(PARSDataManager_t1176312113_StaticFields, ___instance_1)); }
	inline PARSDataManager_t1176312113 * get_instance_1() const { return ___instance_1; }
	inline PARSDataManager_t1176312113 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(PARSDataManager_t1176312113 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSDATAMANAGER_T1176312113_H
#ifndef STATE_T3329758327_H
#define STATE_T3329758327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// State
struct  State_t3329758327  : public RuntimeObject
{
public:
	// TrainingHazardController State::hazardController
	TrainingHazardController_t987698733 * ___hazardController_0;

public:
	inline static int32_t get_offset_of_hazardController_0() { return static_cast<int32_t>(offsetof(State_t3329758327, ___hazardController_0)); }
	inline TrainingHazardController_t987698733 * get_hazardController_0() const { return ___hazardController_0; }
	inline TrainingHazardController_t987698733 ** get_address_of_hazardController_0() { return &___hazardController_0; }
	inline void set_hazardController_0(TrainingHazardController_t987698733 * value)
	{
		___hazardController_0 = value;
		Il2CppCodeGenWriteBarrier((&___hazardController_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATE_T3329758327_H
#ifndef ANSWERKEY_T1212413198_H
#define ANSWERKEY_T1212413198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnswerKey
struct  AnswerKey_t1212413198  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String[]> AnswerKey::dictionary
	Dictionary_2_t1067045639 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(AnswerKey_t1212413198, ___dictionary_0)); }
	inline Dictionary_2_t1067045639 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1067045639 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1067045639 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANSWERKEY_T1212413198_H
#ifndef QUESTION_T1471288757_H
#define QUESTION_T1471288757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Question
struct  Question_t1471288757  : public RuntimeObject
{
public:
	// System.String Question::key
	String_t* ___key_0;
	// System.String[] Question::answers
	StringU5BU5D_t1281789340* ___answers_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(Question_t1471288757, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_answers_1() { return static_cast<int32_t>(offsetof(Question_t1471288757, ___answers_1)); }
	inline StringU5BU5D_t1281789340* get_answers_1() const { return ___answers_1; }
	inline StringU5BU5D_t1281789340** get_address_of_answers_1() { return &___answers_1; }
	inline void set_answers_1(StringU5BU5D_t1281789340* value)
	{
		___answers_1 = value;
		Il2CppCodeGenWriteBarrier((&___answers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUESTION_T1471288757_H
#ifndef TRAININGDATAMANAGER_T3084013207_H
#define TRAININGDATAMANAGER_T3084013207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrainingDataManager
struct  TrainingDataManager_t3084013207  : public PARSDataManager_t1176312113
{
public:
	// TrainingController TrainingDataManager::tc
	TrainingController_t3952779903 * ___tc_5;

public:
	inline static int32_t get_offset_of_tc_5() { return static_cast<int32_t>(offsetof(TrainingDataManager_t3084013207, ___tc_5)); }
	inline TrainingController_t3952779903 * get_tc_5() const { return ___tc_5; }
	inline TrainingController_t3952779903 ** get_address_of_tc_5() { return &___tc_5; }
	inline void set_tc_5(TrainingController_t3952779903 * value)
	{
		___tc_5 = value;
		Il2CppCodeGenWriteBarrier((&___tc_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAININGDATAMANAGER_T3084013207_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_8;

public:
	inline static int32_t get_offset_of__ticks_8() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_8)); }
	inline int64_t get__ticks_8() const { return ____ticks_8; }
	inline int64_t* get_address_of__ticks_8() { return &____ticks_8; }
	inline void set__ticks_8(int64_t value)
	{
		____ticks_8 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_5;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_6;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_7;

public:
	inline static int32_t get_offset_of_MaxValue_5() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_5)); }
	inline TimeSpan_t881159249  get_MaxValue_5() const { return ___MaxValue_5; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_5() { return &___MaxValue_5; }
	inline void set_MaxValue_5(TimeSpan_t881159249  value)
	{
		___MaxValue_5 = value;
	}

	inline static int32_t get_offset_of_MinValue_6() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_6)); }
	inline TimeSpan_t881159249  get_MinValue_6() const { return ___MinValue_6; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_6() { return &___MinValue_6; }
	inline void set_MinValue_6(TimeSpan_t881159249  value)
	{
		___MinValue_6 = value;
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_7)); }
	inline TimeSpan_t881159249  get_Zero_7() const { return ___Zero_7; }
	inline TimeSpan_t881159249 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(TimeSpan_t881159249  value)
	{
		___Zero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASSESSMENTROUND_T4264710411_H
#define ASSESSMENTROUND_T4264710411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssessmentRound
struct  AssessmentRound_t4264710411  : public Round_t3007421971
{
public:
	// System.String AssessmentRound::sceneID
	String_t* ___sceneID_5;
	// System.Single AssessmentRound::HIIScore
	float ___HIIScore_6;

public:
	inline static int32_t get_offset_of_sceneID_5() { return static_cast<int32_t>(offsetof(AssessmentRound_t4264710411, ___sceneID_5)); }
	inline String_t* get_sceneID_5() const { return ___sceneID_5; }
	inline String_t** get_address_of_sceneID_5() { return &___sceneID_5; }
	inline void set_sceneID_5(String_t* value)
	{
		___sceneID_5 = value;
		Il2CppCodeGenWriteBarrier((&___sceneID_5), value);
	}

	inline static int32_t get_offset_of_HIIScore_6() { return static_cast<int32_t>(offsetof(AssessmentRound_t4264710411, ___HIIScore_6)); }
	inline float get_HIIScore_6() const { return ___HIIScore_6; }
	inline float* get_address_of_HIIScore_6() { return &___HIIScore_6; }
	inline void set_HIIScore_6(float value)
	{
		___HIIScore_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSESSMENTROUND_T4264710411_H
#ifndef HAZARDONSTATE_T4192084759_H
#define HAZARDONSTATE_T4192084759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HazardOnState
struct  HazardOnState_t4192084759  : public State_t3329758327
{
public:
	// UnityEngine.Vector3 HazardOnState::destination
	Vector3_t3722313464  ___destination_1;

public:
	inline static int32_t get_offset_of_destination_1() { return static_cast<int32_t>(offsetof(HazardOnState_t4192084759, ___destination_1)); }
	inline Vector3_t3722313464  get_destination_1() const { return ___destination_1; }
	inline Vector3_t3722313464 * get_address_of_destination_1() { return &___destination_1; }
	inline void set_destination_1(Vector3_t3722313464  value)
	{
		___destination_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAZARDONSTATE_T4192084759_H
#ifndef TRAININGHAZARD_T798925183_H
#define TRAININGHAZARD_T798925183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrainingHazard
struct  TrainingHazard_t798925183  : public Hazard_t335190578
{
public:
	// System.String TrainingHazard::summaryText
	String_t* ___summaryText_2;
	// UnityEngine.Color TrainingHazard::color
	Color_t2555686324  ___color_3;
	// System.Single TrainingHazard::duration
	float ___duration_4;

public:
	inline static int32_t get_offset_of_summaryText_2() { return static_cast<int32_t>(offsetof(TrainingHazard_t798925183, ___summaryText_2)); }
	inline String_t* get_summaryText_2() const { return ___summaryText_2; }
	inline String_t** get_address_of_summaryText_2() { return &___summaryText_2; }
	inline void set_summaryText_2(String_t* value)
	{
		___summaryText_2 = value;
		Il2CppCodeGenWriteBarrier((&___summaryText_2), value);
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(TrainingHazard_t798925183, ___color_3)); }
	inline Color_t2555686324  get_color_3() const { return ___color_3; }
	inline Color_t2555686324 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2555686324  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(TrainingHazard_t798925183, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAININGHAZARD_T798925183_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef HAZARDOFFSTATE_T4154887258_H
#define HAZARDOFFSTATE_T4154887258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HazardOffState
struct  HazardOffState_t4154887258  : public State_t3329758327
{
public:
	// UnityEngine.Vector3 HazardOffState::destination
	Vector3_t3722313464  ___destination_1;

public:
	inline static int32_t get_offset_of_destination_1() { return static_cast<int32_t>(offsetof(HazardOffState_t4154887258, ___destination_1)); }
	inline Vector3_t3722313464  get_destination_1() const { return ___destination_1; }
	inline Vector3_t3722313464 * get_address_of_destination_1() { return &___destination_1; }
	inline void set_destination_1(Vector3_t3722313464  value)
	{
		___destination_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAZARDOFFSTATE_T4154887258_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_10;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_11;

public:
	inline static int32_t get_offset_of_ticks_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_10)); }
	inline TimeSpan_t881159249  get_ticks_10() const { return ___ticks_10; }
	inline TimeSpan_t881159249 * get_address_of_ticks_10() { return &___ticks_10; }
	inline void set_ticks_10(TimeSpan_t881159249  value)
	{
		___ticks_10 = value;
	}

	inline static int32_t get_offset_of_kind_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_11)); }
	inline int32_t get_kind_11() const { return ___kind_11; }
	inline int32_t* get_address_of_kind_11() { return &___kind_11; }
	inline void set_kind_11(int32_t value)
	{
		___kind_11 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_12;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_13;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_14;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_15;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_16;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_17;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_18;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_19;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_20;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_21;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_22;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_23;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_24;

public:
	inline static int32_t get_offset_of_MaxValue_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_12)); }
	inline DateTime_t3738529785  get_MaxValue_12() const { return ___MaxValue_12; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_12() { return &___MaxValue_12; }
	inline void set_MaxValue_12(DateTime_t3738529785  value)
	{
		___MaxValue_12 = value;
	}

	inline static int32_t get_offset_of_MinValue_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_13)); }
	inline DateTime_t3738529785  get_MinValue_13() const { return ___MinValue_13; }
	inline DateTime_t3738529785 * get_address_of_MinValue_13() { return &___MinValue_13; }
	inline void set_MinValue_13(DateTime_t3738529785  value)
	{
		___MinValue_13 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_14)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_14() const { return ___ParseTimeFormats_14; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_14() { return &___ParseTimeFormats_14; }
	inline void set_ParseTimeFormats_14(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_14 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_14), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_15() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_15)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_15() const { return ___ParseYearDayMonthFormats_15; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_15() { return &___ParseYearDayMonthFormats_15; }
	inline void set_ParseYearDayMonthFormats_15(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_15 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_15), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_16() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_16)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_16() const { return ___ParseYearMonthDayFormats_16; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_16() { return &___ParseYearMonthDayFormats_16; }
	inline void set_ParseYearMonthDayFormats_16(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_16 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_16), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_17() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_17)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_17() const { return ___ParseDayMonthYearFormats_17; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_17() { return &___ParseDayMonthYearFormats_17; }
	inline void set_ParseDayMonthYearFormats_17(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_17 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_17), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_18() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_18)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_18() const { return ___ParseMonthDayYearFormats_18; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_18() { return &___ParseMonthDayYearFormats_18; }
	inline void set_ParseMonthDayYearFormats_18(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_18 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_18), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_19() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_19)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_19() const { return ___MonthDayShortFormats_19; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_19() { return &___MonthDayShortFormats_19; }
	inline void set_MonthDayShortFormats_19(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_19 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_19), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_20() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_20)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_20() const { return ___DayMonthShortFormats_20; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_20() { return &___DayMonthShortFormats_20; }
	inline void set_DayMonthShortFormats_20(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_20 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_20), value);
	}

	inline static int32_t get_offset_of_daysmonth_21() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_21)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_21() const { return ___daysmonth_21; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_21() { return &___daysmonth_21; }
	inline void set_daysmonth_21(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_21 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_21), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_22() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_22)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_22() const { return ___daysmonthleap_22; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_22() { return &___daysmonthleap_22; }
	inline void set_daysmonthleap_22(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_22 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_22), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_23() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_23)); }
	inline RuntimeObject * get_to_local_time_span_object_23() const { return ___to_local_time_span_object_23; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_23() { return &___to_local_time_span_object_23; }
	inline void set_to_local_time_span_object_23(RuntimeObject * value)
	{
		___to_local_time_span_object_23 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_23), value);
	}

	inline static int32_t get_offset_of_last_now_24() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_24)); }
	inline int64_t get_last_now_24() const { return ___last_now_24; }
	inline int64_t* get_address_of_last_now_24() { return &___last_now_24; }
	inline void set_last_now_24(int64_t value)
	{
		___last_now_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef CELLPRESSEDCALLBACK_T865333736_H
#define CELLPRESSEDCALLBACK_T865333736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellPressedCallBack
struct  CellPressedCallBack_t865333736  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CELLPRESSEDCALLBACK_T865333736_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef PARSSETTINGS_T2801629121_H
#define PARSSETTINGS_T2801629121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PARSSettings
struct  PARSSettings_t2801629121  : public ScriptableObject_t2528358522
{
public:
	// System.String PARSSettings::fireBaseURL
	String_t* ___fireBaseURL_2;
	// System.Int32 PARSSettings::dangerZoneTime
	int32_t ___dangerZoneTime_3;
	// System.Boolean PARSSettings::T_forcedTimeNavigationEnabled
	bool ___T_forcedTimeNavigationEnabled_4;
	// System.Boolean PARSSettings::T_selfNavigationEnabled
	bool ___T_selfNavigationEnabled_5;
	// System.Int32 PARSSettings::T_roundForcedTimeLimit
	int32_t ___T_roundForcedTimeLimit_6;
	// System.Int32 PARSSettings::T_roundsTotalCount
	int32_t ___T_roundsTotalCount_7;
	// System.Boolean PARSSettings::T_expandingSummaryTextBoxEnabled
	bool ___T_expandingSummaryTextBoxEnabled_8;
	// System.Boolean PARSSettings::A_forcedTimeNavigationEnabled
	bool ___A_forcedTimeNavigationEnabled_9;
	// System.Boolean PARSSettings::A_selfNavigationEnabled
	bool ___A_selfNavigationEnabled_10;
	// System.Int32 PARSSettings::A_roundForcedTimeLimit
	int32_t ___A_roundForcedTimeLimit_11;
	// System.Int32 PARSSettings::A_roundsTotalCount
	int32_t ___A_roundsTotalCount_12;

public:
	inline static int32_t get_offset_of_fireBaseURL_2() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___fireBaseURL_2)); }
	inline String_t* get_fireBaseURL_2() const { return ___fireBaseURL_2; }
	inline String_t** get_address_of_fireBaseURL_2() { return &___fireBaseURL_2; }
	inline void set_fireBaseURL_2(String_t* value)
	{
		___fireBaseURL_2 = value;
		Il2CppCodeGenWriteBarrier((&___fireBaseURL_2), value);
	}

	inline static int32_t get_offset_of_dangerZoneTime_3() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___dangerZoneTime_3)); }
	inline int32_t get_dangerZoneTime_3() const { return ___dangerZoneTime_3; }
	inline int32_t* get_address_of_dangerZoneTime_3() { return &___dangerZoneTime_3; }
	inline void set_dangerZoneTime_3(int32_t value)
	{
		___dangerZoneTime_3 = value;
	}

	inline static int32_t get_offset_of_T_forcedTimeNavigationEnabled_4() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___T_forcedTimeNavigationEnabled_4)); }
	inline bool get_T_forcedTimeNavigationEnabled_4() const { return ___T_forcedTimeNavigationEnabled_4; }
	inline bool* get_address_of_T_forcedTimeNavigationEnabled_4() { return &___T_forcedTimeNavigationEnabled_4; }
	inline void set_T_forcedTimeNavigationEnabled_4(bool value)
	{
		___T_forcedTimeNavigationEnabled_4 = value;
	}

	inline static int32_t get_offset_of_T_selfNavigationEnabled_5() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___T_selfNavigationEnabled_5)); }
	inline bool get_T_selfNavigationEnabled_5() const { return ___T_selfNavigationEnabled_5; }
	inline bool* get_address_of_T_selfNavigationEnabled_5() { return &___T_selfNavigationEnabled_5; }
	inline void set_T_selfNavigationEnabled_5(bool value)
	{
		___T_selfNavigationEnabled_5 = value;
	}

	inline static int32_t get_offset_of_T_roundForcedTimeLimit_6() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___T_roundForcedTimeLimit_6)); }
	inline int32_t get_T_roundForcedTimeLimit_6() const { return ___T_roundForcedTimeLimit_6; }
	inline int32_t* get_address_of_T_roundForcedTimeLimit_6() { return &___T_roundForcedTimeLimit_6; }
	inline void set_T_roundForcedTimeLimit_6(int32_t value)
	{
		___T_roundForcedTimeLimit_6 = value;
	}

	inline static int32_t get_offset_of_T_roundsTotalCount_7() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___T_roundsTotalCount_7)); }
	inline int32_t get_T_roundsTotalCount_7() const { return ___T_roundsTotalCount_7; }
	inline int32_t* get_address_of_T_roundsTotalCount_7() { return &___T_roundsTotalCount_7; }
	inline void set_T_roundsTotalCount_7(int32_t value)
	{
		___T_roundsTotalCount_7 = value;
	}

	inline static int32_t get_offset_of_T_expandingSummaryTextBoxEnabled_8() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___T_expandingSummaryTextBoxEnabled_8)); }
	inline bool get_T_expandingSummaryTextBoxEnabled_8() const { return ___T_expandingSummaryTextBoxEnabled_8; }
	inline bool* get_address_of_T_expandingSummaryTextBoxEnabled_8() { return &___T_expandingSummaryTextBoxEnabled_8; }
	inline void set_T_expandingSummaryTextBoxEnabled_8(bool value)
	{
		___T_expandingSummaryTextBoxEnabled_8 = value;
	}

	inline static int32_t get_offset_of_A_forcedTimeNavigationEnabled_9() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___A_forcedTimeNavigationEnabled_9)); }
	inline bool get_A_forcedTimeNavigationEnabled_9() const { return ___A_forcedTimeNavigationEnabled_9; }
	inline bool* get_address_of_A_forcedTimeNavigationEnabled_9() { return &___A_forcedTimeNavigationEnabled_9; }
	inline void set_A_forcedTimeNavigationEnabled_9(bool value)
	{
		___A_forcedTimeNavigationEnabled_9 = value;
	}

	inline static int32_t get_offset_of_A_selfNavigationEnabled_10() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___A_selfNavigationEnabled_10)); }
	inline bool get_A_selfNavigationEnabled_10() const { return ___A_selfNavigationEnabled_10; }
	inline bool* get_address_of_A_selfNavigationEnabled_10() { return &___A_selfNavigationEnabled_10; }
	inline void set_A_selfNavigationEnabled_10(bool value)
	{
		___A_selfNavigationEnabled_10 = value;
	}

	inline static int32_t get_offset_of_A_roundForcedTimeLimit_11() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___A_roundForcedTimeLimit_11)); }
	inline int32_t get_A_roundForcedTimeLimit_11() const { return ___A_roundForcedTimeLimit_11; }
	inline int32_t* get_address_of_A_roundForcedTimeLimit_11() { return &___A_roundForcedTimeLimit_11; }
	inline void set_A_roundForcedTimeLimit_11(int32_t value)
	{
		___A_roundForcedTimeLimit_11 = value;
	}

	inline static int32_t get_offset_of_A_roundsTotalCount_12() { return static_cast<int32_t>(offsetof(PARSSettings_t2801629121, ___A_roundsTotalCount_12)); }
	inline int32_t get_A_roundsTotalCount_12() const { return ___A_roundsTotalCount_12; }
	inline int32_t* get_address_of_A_roundsTotalCount_12() { return &___A_roundsTotalCount_12; }
	inline void set_A_roundsTotalCount_12(int32_t value)
	{
		___A_roundsTotalCount_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSSETTINGS_T2801629121_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SETTINGS_T298812435_H
#define SETTINGS_T298812435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Settings
struct  Settings_t298812435  : public MonoBehaviour_t3962482529
{
public:
	// PARSSettings Settings::_settings
	PARSSettings_t2801629121 * ____settings_2;

public:
	inline static int32_t get_offset_of__settings_2() { return static_cast<int32_t>(offsetof(Settings_t298812435, ____settings_2)); }
	inline PARSSettings_t2801629121 * get__settings_2() const { return ____settings_2; }
	inline PARSSettings_t2801629121 ** get_address_of__settings_2() { return &____settings_2; }
	inline void set__settings_2(PARSSettings_t2801629121 * value)
	{
		____settings_2 = value;
		Il2CppCodeGenWriteBarrier((&____settings_2), value);
	}
};

struct Settings_t298812435_StaticFields
{
public:
	// PARSSettings Settings::s
	PARSSettings_t2801629121 * ___s_3;
	// Settings Settings::instance
	Settings_t298812435 * ___instance_4;

public:
	inline static int32_t get_offset_of_s_3() { return static_cast<int32_t>(offsetof(Settings_t298812435_StaticFields, ___s_3)); }
	inline PARSSettings_t2801629121 * get_s_3() const { return ___s_3; }
	inline PARSSettings_t2801629121 ** get_address_of_s_3() { return &___s_3; }
	inline void set_s_3(PARSSettings_t2801629121 * value)
	{
		___s_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_3), value);
	}

	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(Settings_t298812435_StaticFields, ___instance_4)); }
	inline Settings_t298812435 * get_instance_4() const { return ___instance_4; }
	inline Settings_t298812435 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(Settings_t298812435 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((&___instance_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGS_T298812435_H
#ifndef TRAININGHAZARDCONTROLLER_T987698733_H
#define TRAININGHAZARDCONTROLLER_T987698733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrainingHazardController
struct  TrainingHazardController_t987698733  : public MonoBehaviour_t3962482529
{
public:
	// TrainingHazard TrainingHazardController::hazard
	TrainingHazard_t798925183 * ___hazard_2;
	// HazardIconController TrainingHazardController::icon
	HazardIconController_t3601592792 * ___icon_3;
	// HazardContentView TrainingHazardController::content
	HazardContentView_t2572541359 * ___content_4;
	// TrainingCollectionCell TrainingHazardController::cell
	TrainingCollectionCell_t2778354195 * ___cell_5;
	// TrainingController TrainingHazardController::tcDelegate
	TrainingController_t3952779903 * ___tcDelegate_6;
	// State TrainingHazardController::currentState
	State_t3329758327 * ___currentState_7;

public:
	inline static int32_t get_offset_of_hazard_2() { return static_cast<int32_t>(offsetof(TrainingHazardController_t987698733, ___hazard_2)); }
	inline TrainingHazard_t798925183 * get_hazard_2() const { return ___hazard_2; }
	inline TrainingHazard_t798925183 ** get_address_of_hazard_2() { return &___hazard_2; }
	inline void set_hazard_2(TrainingHazard_t798925183 * value)
	{
		___hazard_2 = value;
		Il2CppCodeGenWriteBarrier((&___hazard_2), value);
	}

	inline static int32_t get_offset_of_icon_3() { return static_cast<int32_t>(offsetof(TrainingHazardController_t987698733, ___icon_3)); }
	inline HazardIconController_t3601592792 * get_icon_3() const { return ___icon_3; }
	inline HazardIconController_t3601592792 ** get_address_of_icon_3() { return &___icon_3; }
	inline void set_icon_3(HazardIconController_t3601592792 * value)
	{
		___icon_3 = value;
		Il2CppCodeGenWriteBarrier((&___icon_3), value);
	}

	inline static int32_t get_offset_of_content_4() { return static_cast<int32_t>(offsetof(TrainingHazardController_t987698733, ___content_4)); }
	inline HazardContentView_t2572541359 * get_content_4() const { return ___content_4; }
	inline HazardContentView_t2572541359 ** get_address_of_content_4() { return &___content_4; }
	inline void set_content_4(HazardContentView_t2572541359 * value)
	{
		___content_4 = value;
		Il2CppCodeGenWriteBarrier((&___content_4), value);
	}

	inline static int32_t get_offset_of_cell_5() { return static_cast<int32_t>(offsetof(TrainingHazardController_t987698733, ___cell_5)); }
	inline TrainingCollectionCell_t2778354195 * get_cell_5() const { return ___cell_5; }
	inline TrainingCollectionCell_t2778354195 ** get_address_of_cell_5() { return &___cell_5; }
	inline void set_cell_5(TrainingCollectionCell_t2778354195 * value)
	{
		___cell_5 = value;
		Il2CppCodeGenWriteBarrier((&___cell_5), value);
	}

	inline static int32_t get_offset_of_tcDelegate_6() { return static_cast<int32_t>(offsetof(TrainingHazardController_t987698733, ___tcDelegate_6)); }
	inline TrainingController_t3952779903 * get_tcDelegate_6() const { return ___tcDelegate_6; }
	inline TrainingController_t3952779903 ** get_address_of_tcDelegate_6() { return &___tcDelegate_6; }
	inline void set_tcDelegate_6(TrainingController_t3952779903 * value)
	{
		___tcDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&___tcDelegate_6), value);
	}

	inline static int32_t get_offset_of_currentState_7() { return static_cast<int32_t>(offsetof(TrainingHazardController_t987698733, ___currentState_7)); }
	inline State_t3329758327 * get_currentState_7() const { return ___currentState_7; }
	inline State_t3329758327 ** get_address_of_currentState_7() { return &___currentState_7; }
	inline void set_currentState_7(State_t3329758327 * value)
	{
		___currentState_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentState_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAININGHAZARDCONTROLLER_T987698733_H
#ifndef RESULTCARDVIEW_T2246120343_H
#define RESULTCARDVIEW_T2246120343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultCardView
struct  ResultCardView_t2246120343  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTCARDVIEW_T2246120343_H
#ifndef RESULTCARDCELL_T3938479119_H
#define RESULTCARDCELL_T3938479119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultCardCell
struct  ResultCardCell_t3938479119  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text ResultCardCell::sceneLabel
	Text_t1901882714 * ___sceneLabel_2;
	// ResultAnswersList ResultCardCell::correctList
	ResultAnswersList_t719099062 * ___correctList_3;
	// ResultAnswersList ResultCardCell::yourList
	ResultAnswersList_t719099062 * ___yourList_4;
	// UnityEngine.UI.Text ResultCardCell::hiiScoreLabel
	Text_t1901882714 * ___hiiScoreLabel_5;
	// UnityEngine.UI.Text ResultCardCell::notesLabel
	Text_t1901882714 * ___notesLabel_6;

public:
	inline static int32_t get_offset_of_sceneLabel_2() { return static_cast<int32_t>(offsetof(ResultCardCell_t3938479119, ___sceneLabel_2)); }
	inline Text_t1901882714 * get_sceneLabel_2() const { return ___sceneLabel_2; }
	inline Text_t1901882714 ** get_address_of_sceneLabel_2() { return &___sceneLabel_2; }
	inline void set_sceneLabel_2(Text_t1901882714 * value)
	{
		___sceneLabel_2 = value;
		Il2CppCodeGenWriteBarrier((&___sceneLabel_2), value);
	}

	inline static int32_t get_offset_of_correctList_3() { return static_cast<int32_t>(offsetof(ResultCardCell_t3938479119, ___correctList_3)); }
	inline ResultAnswersList_t719099062 * get_correctList_3() const { return ___correctList_3; }
	inline ResultAnswersList_t719099062 ** get_address_of_correctList_3() { return &___correctList_3; }
	inline void set_correctList_3(ResultAnswersList_t719099062 * value)
	{
		___correctList_3 = value;
		Il2CppCodeGenWriteBarrier((&___correctList_3), value);
	}

	inline static int32_t get_offset_of_yourList_4() { return static_cast<int32_t>(offsetof(ResultCardCell_t3938479119, ___yourList_4)); }
	inline ResultAnswersList_t719099062 * get_yourList_4() const { return ___yourList_4; }
	inline ResultAnswersList_t719099062 ** get_address_of_yourList_4() { return &___yourList_4; }
	inline void set_yourList_4(ResultAnswersList_t719099062 * value)
	{
		___yourList_4 = value;
		Il2CppCodeGenWriteBarrier((&___yourList_4), value);
	}

	inline static int32_t get_offset_of_hiiScoreLabel_5() { return static_cast<int32_t>(offsetof(ResultCardCell_t3938479119, ___hiiScoreLabel_5)); }
	inline Text_t1901882714 * get_hiiScoreLabel_5() const { return ___hiiScoreLabel_5; }
	inline Text_t1901882714 ** get_address_of_hiiScoreLabel_5() { return &___hiiScoreLabel_5; }
	inline void set_hiiScoreLabel_5(Text_t1901882714 * value)
	{
		___hiiScoreLabel_5 = value;
		Il2CppCodeGenWriteBarrier((&___hiiScoreLabel_5), value);
	}

	inline static int32_t get_offset_of_notesLabel_6() { return static_cast<int32_t>(offsetof(ResultCardCell_t3938479119, ___notesLabel_6)); }
	inline Text_t1901882714 * get_notesLabel_6() const { return ___notesLabel_6; }
	inline Text_t1901882714 ** get_address_of_notesLabel_6() { return &___notesLabel_6; }
	inline void set_notesLabel_6(Text_t1901882714 * value)
	{
		___notesLabel_6 = value;
		Il2CppCodeGenWriteBarrier((&___notesLabel_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTCARDCELL_T3938479119_H
#ifndef RESULTANSWERSLIST_T719099062_H
#define RESULTANSWERSLIST_T719099062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultAnswersList
struct  ResultAnswersList_t719099062  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ResultAnswersList::listItem
	GameObject_t1113636619 * ___listItem_2;

public:
	inline static int32_t get_offset_of_listItem_2() { return static_cast<int32_t>(offsetof(ResultAnswersList_t719099062, ___listItem_2)); }
	inline GameObject_t1113636619 * get_listItem_2() const { return ___listItem_2; }
	inline GameObject_t1113636619 ** get_address_of_listItem_2() { return &___listItem_2; }
	inline void set_listItem_2(GameObject_t1113636619 * value)
	{
		___listItem_2 = value;
		Il2CppCodeGenWriteBarrier((&___listItem_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTANSWERSLIST_T719099062_H
#ifndef PARSCONTROLLER_T1025491303_H
#define PARSCONTROLLER_T1025491303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PARSController
struct  PARSController_t1025491303  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 PARSController::allowedTimePerRound
	int32_t ___allowedTimePerRound_3;
	// System.Boolean PARSController::isTimedTraining
	bool ___isTimedTraining_4;
	// System.Boolean PARSController::isAllowedToSelfNavigate
	bool ___isAllowedToSelfNavigate_5;
	// System.Int32 PARSController::totalRoundCount
	int32_t ___totalRoundCount_6;
	// System.Nullable`1<System.Int32> PARSController::currentRoundIndex
	Nullable_1_t378540539  ___currentRoundIndex_7;
	// Round PARSController::currentRound
	Round_t3007421971 * ___currentRound_8;
	// System.Collections.Generic.List`1<Round> PARSController::finishedRounds
	List_1_t184529417 * ___finishedRounds_9;
	// PARSDataManager PARSController::dataManager
	PARSDataManager_t1176312113 * ___dataManager_10;
	// NavigationController PARSController::navigationController
	NavigationController_t182472134 * ___navigationController_11;
	// System.DateTime PARSController::startTime
	DateTime_t3738529785  ___startTime_12;
	// System.DateTime PARSController::endTime
	DateTime_t3738529785  ___endTime_13;
	// System.Char PARSController::type
	Il2CppChar ___type_14;

public:
	inline static int32_t get_offset_of_allowedTimePerRound_3() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___allowedTimePerRound_3)); }
	inline int32_t get_allowedTimePerRound_3() const { return ___allowedTimePerRound_3; }
	inline int32_t* get_address_of_allowedTimePerRound_3() { return &___allowedTimePerRound_3; }
	inline void set_allowedTimePerRound_3(int32_t value)
	{
		___allowedTimePerRound_3 = value;
	}

	inline static int32_t get_offset_of_isTimedTraining_4() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___isTimedTraining_4)); }
	inline bool get_isTimedTraining_4() const { return ___isTimedTraining_4; }
	inline bool* get_address_of_isTimedTraining_4() { return &___isTimedTraining_4; }
	inline void set_isTimedTraining_4(bool value)
	{
		___isTimedTraining_4 = value;
	}

	inline static int32_t get_offset_of_isAllowedToSelfNavigate_5() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___isAllowedToSelfNavigate_5)); }
	inline bool get_isAllowedToSelfNavigate_5() const { return ___isAllowedToSelfNavigate_5; }
	inline bool* get_address_of_isAllowedToSelfNavigate_5() { return &___isAllowedToSelfNavigate_5; }
	inline void set_isAllowedToSelfNavigate_5(bool value)
	{
		___isAllowedToSelfNavigate_5 = value;
	}

	inline static int32_t get_offset_of_totalRoundCount_6() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___totalRoundCount_6)); }
	inline int32_t get_totalRoundCount_6() const { return ___totalRoundCount_6; }
	inline int32_t* get_address_of_totalRoundCount_6() { return &___totalRoundCount_6; }
	inline void set_totalRoundCount_6(int32_t value)
	{
		___totalRoundCount_6 = value;
	}

	inline static int32_t get_offset_of_currentRoundIndex_7() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___currentRoundIndex_7)); }
	inline Nullable_1_t378540539  get_currentRoundIndex_7() const { return ___currentRoundIndex_7; }
	inline Nullable_1_t378540539 * get_address_of_currentRoundIndex_7() { return &___currentRoundIndex_7; }
	inline void set_currentRoundIndex_7(Nullable_1_t378540539  value)
	{
		___currentRoundIndex_7 = value;
	}

	inline static int32_t get_offset_of_currentRound_8() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___currentRound_8)); }
	inline Round_t3007421971 * get_currentRound_8() const { return ___currentRound_8; }
	inline Round_t3007421971 ** get_address_of_currentRound_8() { return &___currentRound_8; }
	inline void set_currentRound_8(Round_t3007421971 * value)
	{
		___currentRound_8 = value;
		Il2CppCodeGenWriteBarrier((&___currentRound_8), value);
	}

	inline static int32_t get_offset_of_finishedRounds_9() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___finishedRounds_9)); }
	inline List_1_t184529417 * get_finishedRounds_9() const { return ___finishedRounds_9; }
	inline List_1_t184529417 ** get_address_of_finishedRounds_9() { return &___finishedRounds_9; }
	inline void set_finishedRounds_9(List_1_t184529417 * value)
	{
		___finishedRounds_9 = value;
		Il2CppCodeGenWriteBarrier((&___finishedRounds_9), value);
	}

	inline static int32_t get_offset_of_dataManager_10() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___dataManager_10)); }
	inline PARSDataManager_t1176312113 * get_dataManager_10() const { return ___dataManager_10; }
	inline PARSDataManager_t1176312113 ** get_address_of_dataManager_10() { return &___dataManager_10; }
	inline void set_dataManager_10(PARSDataManager_t1176312113 * value)
	{
		___dataManager_10 = value;
		Il2CppCodeGenWriteBarrier((&___dataManager_10), value);
	}

	inline static int32_t get_offset_of_navigationController_11() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___navigationController_11)); }
	inline NavigationController_t182472134 * get_navigationController_11() const { return ___navigationController_11; }
	inline NavigationController_t182472134 ** get_address_of_navigationController_11() { return &___navigationController_11; }
	inline void set_navigationController_11(NavigationController_t182472134 * value)
	{
		___navigationController_11 = value;
		Il2CppCodeGenWriteBarrier((&___navigationController_11), value);
	}

	inline static int32_t get_offset_of_startTime_12() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___startTime_12)); }
	inline DateTime_t3738529785  get_startTime_12() const { return ___startTime_12; }
	inline DateTime_t3738529785 * get_address_of_startTime_12() { return &___startTime_12; }
	inline void set_startTime_12(DateTime_t3738529785  value)
	{
		___startTime_12 = value;
	}

	inline static int32_t get_offset_of_endTime_13() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___endTime_13)); }
	inline DateTime_t3738529785  get_endTime_13() const { return ___endTime_13; }
	inline DateTime_t3738529785 * get_address_of_endTime_13() { return &___endTime_13; }
	inline void set_endTime_13(DateTime_t3738529785  value)
	{
		___endTime_13 = value;
	}

	inline static int32_t get_offset_of_type_14() { return static_cast<int32_t>(offsetof(PARSController_t1025491303, ___type_14)); }
	inline Il2CppChar get_type_14() const { return ___type_14; }
	inline Il2CppChar* get_address_of_type_14() { return &___type_14; }
	inline void set_type_14(Il2CppChar value)
	{
		___type_14 = value;
	}
};

struct PARSController_t1025491303_StaticFields
{
public:
	// PARSController PARSController::instance
	PARSController_t1025491303 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(PARSController_t1025491303_StaticFields, ___instance_2)); }
	inline PARSController_t1025491303 * get_instance_2() const { return ___instance_2; }
	inline PARSController_t1025491303 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(PARSController_t1025491303 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSCONTROLLER_T1025491303_H
#ifndef NAVIGATIONCONTROLLER_T182472134_H
#define NAVIGATIONCONTROLLER_T182472134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NavigationController
struct  NavigationController_t182472134  : public MonoBehaviour_t3962482529
{
public:
	// PARSController NavigationController::controller
	PARSController_t1025491303 * ___controller_2;
	// UnityEngine.UI.Text NavigationController::timerText
	Text_t1901882714 * ___timerText_3;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(NavigationController_t182472134, ___controller_2)); }
	inline PARSController_t1025491303 * get_controller_2() const { return ___controller_2; }
	inline PARSController_t1025491303 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(PARSController_t1025491303 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((&___controller_2), value);
	}

	inline static int32_t get_offset_of_timerText_3() { return static_cast<int32_t>(offsetof(NavigationController_t182472134, ___timerText_3)); }
	inline Text_t1901882714 * get_timerText_3() const { return ___timerText_3; }
	inline Text_t1901882714 ** get_address_of_timerText_3() { return &___timerText_3; }
	inline void set_timerText_3(Text_t1901882714 * value)
	{
		___timerText_3 = value;
		Il2CppCodeGenWriteBarrier((&___timerText_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAVIGATIONCONTROLLER_T182472134_H
#ifndef DEMOGRAPHICVIEWCONTROLLER_T3688029416_H
#define DEMOGRAPHICVIEWCONTROLLER_T3688029416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DemographicViewController
struct  DemographicViewController_t3688029416  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.InputField DemographicViewController::studyTextField
	InputField_t3762917431 * ___studyTextField_2;
	// UnityEngine.UI.ToggleGroup DemographicViewController::demographicToggles
	ToggleGroup_t123837990 * ___demographicToggles_3;

public:
	inline static int32_t get_offset_of_studyTextField_2() { return static_cast<int32_t>(offsetof(DemographicViewController_t3688029416, ___studyTextField_2)); }
	inline InputField_t3762917431 * get_studyTextField_2() const { return ___studyTextField_2; }
	inline InputField_t3762917431 ** get_address_of_studyTextField_2() { return &___studyTextField_2; }
	inline void set_studyTextField_2(InputField_t3762917431 * value)
	{
		___studyTextField_2 = value;
		Il2CppCodeGenWriteBarrier((&___studyTextField_2), value);
	}

	inline static int32_t get_offset_of_demographicToggles_3() { return static_cast<int32_t>(offsetof(DemographicViewController_t3688029416, ___demographicToggles_3)); }
	inline ToggleGroup_t123837990 * get_demographicToggles_3() const { return ___demographicToggles_3; }
	inline ToggleGroup_t123837990 ** get_address_of_demographicToggles_3() { return &___demographicToggles_3; }
	inline void set_demographicToggles_3(ToggleGroup_t123837990 * value)
	{
		___demographicToggles_3 = value;
		Il2CppCodeGenWriteBarrier((&___demographicToggles_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEMOGRAPHICVIEWCONTROLLER_T3688029416_H
#ifndef CAMERAMOVEMENT_T4037080991_H
#define CAMERAMOVEMENT_T4037080991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraMovement
struct  CameraMovement_t4037080991  : public MonoBehaviour_t3962482529
{
public:
	// System.Single CameraMovement::minFOV
	float ___minFOV_2;
	// System.Single CameraMovement::maxFOV
	float ___maxFOV_3;
	// System.Single CameraMovement::sensitivity
	float ___sensitivity_4;
	// System.Single CameraMovement::FOV
	float ___FOV_5;
	// System.Single CameraMovement::minY
	float ___minY_6;
	// System.Single CameraMovement::maxY
	float ___maxY_7;
	// System.Single CameraMovement::sensX
	float ___sensX_8;
	// System.Single CameraMovement::sensY
	float ___sensY_9;
	// System.Single CameraMovement::rotationY
	float ___rotationY_10;
	// System.Single CameraMovement::rotationX
	float ___rotationX_11;
	// UnityEngine.Transform CameraMovement::lookAtTarget
	Transform_t3600365921 * ___lookAtTarget_12;
	// System.Boolean CameraMovement::lerping
	bool ___lerping_13;
	// System.Boolean CameraMovement::dragging
	bool ___dragging_14;
	// UnityEngine.EventSystems.EventSystem CameraMovement::eventSys
	EventSystem_t1003666588 * ___eventSys_15;

public:
	inline static int32_t get_offset_of_minFOV_2() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___minFOV_2)); }
	inline float get_minFOV_2() const { return ___minFOV_2; }
	inline float* get_address_of_minFOV_2() { return &___minFOV_2; }
	inline void set_minFOV_2(float value)
	{
		___minFOV_2 = value;
	}

	inline static int32_t get_offset_of_maxFOV_3() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___maxFOV_3)); }
	inline float get_maxFOV_3() const { return ___maxFOV_3; }
	inline float* get_address_of_maxFOV_3() { return &___maxFOV_3; }
	inline void set_maxFOV_3(float value)
	{
		___maxFOV_3 = value;
	}

	inline static int32_t get_offset_of_sensitivity_4() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___sensitivity_4)); }
	inline float get_sensitivity_4() const { return ___sensitivity_4; }
	inline float* get_address_of_sensitivity_4() { return &___sensitivity_4; }
	inline void set_sensitivity_4(float value)
	{
		___sensitivity_4 = value;
	}

	inline static int32_t get_offset_of_FOV_5() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___FOV_5)); }
	inline float get_FOV_5() const { return ___FOV_5; }
	inline float* get_address_of_FOV_5() { return &___FOV_5; }
	inline void set_FOV_5(float value)
	{
		___FOV_5 = value;
	}

	inline static int32_t get_offset_of_minY_6() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___minY_6)); }
	inline float get_minY_6() const { return ___minY_6; }
	inline float* get_address_of_minY_6() { return &___minY_6; }
	inline void set_minY_6(float value)
	{
		___minY_6 = value;
	}

	inline static int32_t get_offset_of_maxY_7() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___maxY_7)); }
	inline float get_maxY_7() const { return ___maxY_7; }
	inline float* get_address_of_maxY_7() { return &___maxY_7; }
	inline void set_maxY_7(float value)
	{
		___maxY_7 = value;
	}

	inline static int32_t get_offset_of_sensX_8() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___sensX_8)); }
	inline float get_sensX_8() const { return ___sensX_8; }
	inline float* get_address_of_sensX_8() { return &___sensX_8; }
	inline void set_sensX_8(float value)
	{
		___sensX_8 = value;
	}

	inline static int32_t get_offset_of_sensY_9() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___sensY_9)); }
	inline float get_sensY_9() const { return ___sensY_9; }
	inline float* get_address_of_sensY_9() { return &___sensY_9; }
	inline void set_sensY_9(float value)
	{
		___sensY_9 = value;
	}

	inline static int32_t get_offset_of_rotationY_10() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___rotationY_10)); }
	inline float get_rotationY_10() const { return ___rotationY_10; }
	inline float* get_address_of_rotationY_10() { return &___rotationY_10; }
	inline void set_rotationY_10(float value)
	{
		___rotationY_10 = value;
	}

	inline static int32_t get_offset_of_rotationX_11() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___rotationX_11)); }
	inline float get_rotationX_11() const { return ___rotationX_11; }
	inline float* get_address_of_rotationX_11() { return &___rotationX_11; }
	inline void set_rotationX_11(float value)
	{
		___rotationX_11 = value;
	}

	inline static int32_t get_offset_of_lookAtTarget_12() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___lookAtTarget_12)); }
	inline Transform_t3600365921 * get_lookAtTarget_12() const { return ___lookAtTarget_12; }
	inline Transform_t3600365921 ** get_address_of_lookAtTarget_12() { return &___lookAtTarget_12; }
	inline void set_lookAtTarget_12(Transform_t3600365921 * value)
	{
		___lookAtTarget_12 = value;
		Il2CppCodeGenWriteBarrier((&___lookAtTarget_12), value);
	}

	inline static int32_t get_offset_of_lerping_13() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___lerping_13)); }
	inline bool get_lerping_13() const { return ___lerping_13; }
	inline bool* get_address_of_lerping_13() { return &___lerping_13; }
	inline void set_lerping_13(bool value)
	{
		___lerping_13 = value;
	}

	inline static int32_t get_offset_of_dragging_14() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___dragging_14)); }
	inline bool get_dragging_14() const { return ___dragging_14; }
	inline bool* get_address_of_dragging_14() { return &___dragging_14; }
	inline void set_dragging_14(bool value)
	{
		___dragging_14 = value;
	}

	inline static int32_t get_offset_of_eventSys_15() { return static_cast<int32_t>(offsetof(CameraMovement_t4037080991, ___eventSys_15)); }
	inline EventSystem_t1003666588 * get_eventSys_15() const { return ___eventSys_15; }
	inline EventSystem_t1003666588 ** get_address_of_eventSys_15() { return &___eventSys_15; }
	inline void set_eventSys_15(EventSystem_t1003666588 * value)
	{
		___eventSys_15 = value;
		Il2CppCodeGenWriteBarrier((&___eventSys_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMOVEMENT_T4037080991_H
#ifndef ASSESSMENTPANELCONTROLLER_T2974685767_H
#define ASSESSMENTPANELCONTROLLER_T2974685767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssessmentPanelController
struct  AssessmentPanelController_t2974685767  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject AssessmentPanelController::collectionView
	GameObject_t1113636619 * ___collectionView_2;

public:
	inline static int32_t get_offset_of_collectionView_2() { return static_cast<int32_t>(offsetof(AssessmentPanelController_t2974685767, ___collectionView_2)); }
	inline GameObject_t1113636619 * get_collectionView_2() const { return ___collectionView_2; }
	inline GameObject_t1113636619 ** get_address_of_collectionView_2() { return &___collectionView_2; }
	inline void set_collectionView_2(GameObject_t1113636619 * value)
	{
		___collectionView_2 = value;
		Il2CppCodeGenWriteBarrier((&___collectionView_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSESSMENTPANELCONTROLLER_T2974685767_H
#ifndef RESULTSCONTROLLER_T712609476_H
#define RESULTSCONTROLLER_T712609476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultsController
struct  ResultsController_t712609476  : public MonoBehaviour_t3962482529
{
public:
	// ResultCardCell ResultsController::ResultCardCell
	ResultCardCell_t3938479119 * ___ResultCardCell_2;
	// AssessmentController ResultsController::controller
	AssessmentController_t2586697688 * ___controller_3;

public:
	inline static int32_t get_offset_of_ResultCardCell_2() { return static_cast<int32_t>(offsetof(ResultsController_t712609476, ___ResultCardCell_2)); }
	inline ResultCardCell_t3938479119 * get_ResultCardCell_2() const { return ___ResultCardCell_2; }
	inline ResultCardCell_t3938479119 ** get_address_of_ResultCardCell_2() { return &___ResultCardCell_2; }
	inline void set_ResultCardCell_2(ResultCardCell_t3938479119 * value)
	{
		___ResultCardCell_2 = value;
		Il2CppCodeGenWriteBarrier((&___ResultCardCell_2), value);
	}

	inline static int32_t get_offset_of_controller_3() { return static_cast<int32_t>(offsetof(ResultsController_t712609476, ___controller_3)); }
	inline AssessmentController_t2586697688 * get_controller_3() const { return ___controller_3; }
	inline AssessmentController_t2586697688 ** get_address_of_controller_3() { return &___controller_3; }
	inline void set_controller_3(AssessmentController_t2586697688 * value)
	{
		___controller_3 = value;
		Il2CppCodeGenWriteBarrier((&___controller_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTSCONTROLLER_T712609476_H
#ifndef TRAININGCOLLECTIONCONTROLLER_T2905092020_H
#define TRAININGCOLLECTIONCONTROLLER_T2905092020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrainingCollectionController
struct  TrainingCollectionController_t2905092020  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject TrainingCollectionController::HazardCell
	GameObject_t1113636619 * ___HazardCell_2;

public:
	inline static int32_t get_offset_of_HazardCell_2() { return static_cast<int32_t>(offsetof(TrainingCollectionController_t2905092020, ___HazardCell_2)); }
	inline GameObject_t1113636619 * get_HazardCell_2() const { return ___HazardCell_2; }
	inline GameObject_t1113636619 ** get_address_of_HazardCell_2() { return &___HazardCell_2; }
	inline void set_HazardCell_2(GameObject_t1113636619 * value)
	{
		___HazardCell_2 = value;
		Il2CppCodeGenWriteBarrier((&___HazardCell_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAININGCOLLECTIONCONTROLLER_T2905092020_H
#ifndef TRAININGCOLLECTIONCELL_T2778354195_H
#define TRAININGCOLLECTIONCELL_T2778354195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrainingCollectionCell
struct  TrainingCollectionCell_t2778354195  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean TrainingCollectionCell::expandingSummaryTextBoxEnabled
	bool ___expandingSummaryTextBoxEnabled_2;
	// System.String TrainingCollectionCell::category
	String_t* ___category_3;
	// System.String TrainingCollectionCell::name
	String_t* ___name_4;
	// System.String TrainingCollectionCell::summaryText
	String_t* ___summaryText_5;
	// UnityEngine.Color TrainingCollectionCell::color
	Color_t2555686324  ___color_6;
	// TrainingHazardController TrainingCollectionCell::hazardController
	TrainingHazardController_t987698733 * ___hazardController_7;
	// UnityEngine.UI.Image TrainingCollectionCell::cellBackground
	Image_t2670269651 * ___cellBackground_8;
	// UnityEngine.UI.Text[] TrainingCollectionCell::cellLabels
	TextU5BU5D_t422084607* ___cellLabels_9;
	// UnityEngine.UI.Text TrainingCollectionCell::categoryLabel
	Text_t1901882714 * ___categoryLabel_10;
	// UnityEngine.UI.Text TrainingCollectionCell::nameLabel
	Text_t1901882714 * ___nameLabel_11;
	// UnityEngine.UI.Text TrainingCollectionCell::summaryTextBox
	Text_t1901882714 * ___summaryTextBox_12;
	// UnityEngine.UI.Image TrainingCollectionCell::icon
	Image_t2670269651 * ___icon_13;
	// State TrainingCollectionCell::currentState
	State_t3329758327 * ___currentState_14;
	// CellPressedCallBack TrainingCollectionCell::collectionCallBack
	CellPressedCallBack_t865333736 * ___collectionCallBack_15;

public:
	inline static int32_t get_offset_of_expandingSummaryTextBoxEnabled_2() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___expandingSummaryTextBoxEnabled_2)); }
	inline bool get_expandingSummaryTextBoxEnabled_2() const { return ___expandingSummaryTextBoxEnabled_2; }
	inline bool* get_address_of_expandingSummaryTextBoxEnabled_2() { return &___expandingSummaryTextBoxEnabled_2; }
	inline void set_expandingSummaryTextBoxEnabled_2(bool value)
	{
		___expandingSummaryTextBoxEnabled_2 = value;
	}

	inline static int32_t get_offset_of_category_3() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___category_3)); }
	inline String_t* get_category_3() const { return ___category_3; }
	inline String_t** get_address_of_category_3() { return &___category_3; }
	inline void set_category_3(String_t* value)
	{
		___category_3 = value;
		Il2CppCodeGenWriteBarrier((&___category_3), value);
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((&___name_4), value);
	}

	inline static int32_t get_offset_of_summaryText_5() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___summaryText_5)); }
	inline String_t* get_summaryText_5() const { return ___summaryText_5; }
	inline String_t** get_address_of_summaryText_5() { return &___summaryText_5; }
	inline void set_summaryText_5(String_t* value)
	{
		___summaryText_5 = value;
		Il2CppCodeGenWriteBarrier((&___summaryText_5), value);
	}

	inline static int32_t get_offset_of_color_6() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___color_6)); }
	inline Color_t2555686324  get_color_6() const { return ___color_6; }
	inline Color_t2555686324 * get_address_of_color_6() { return &___color_6; }
	inline void set_color_6(Color_t2555686324  value)
	{
		___color_6 = value;
	}

	inline static int32_t get_offset_of_hazardController_7() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___hazardController_7)); }
	inline TrainingHazardController_t987698733 * get_hazardController_7() const { return ___hazardController_7; }
	inline TrainingHazardController_t987698733 ** get_address_of_hazardController_7() { return &___hazardController_7; }
	inline void set_hazardController_7(TrainingHazardController_t987698733 * value)
	{
		___hazardController_7 = value;
		Il2CppCodeGenWriteBarrier((&___hazardController_7), value);
	}

	inline static int32_t get_offset_of_cellBackground_8() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___cellBackground_8)); }
	inline Image_t2670269651 * get_cellBackground_8() const { return ___cellBackground_8; }
	inline Image_t2670269651 ** get_address_of_cellBackground_8() { return &___cellBackground_8; }
	inline void set_cellBackground_8(Image_t2670269651 * value)
	{
		___cellBackground_8 = value;
		Il2CppCodeGenWriteBarrier((&___cellBackground_8), value);
	}

	inline static int32_t get_offset_of_cellLabels_9() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___cellLabels_9)); }
	inline TextU5BU5D_t422084607* get_cellLabels_9() const { return ___cellLabels_9; }
	inline TextU5BU5D_t422084607** get_address_of_cellLabels_9() { return &___cellLabels_9; }
	inline void set_cellLabels_9(TextU5BU5D_t422084607* value)
	{
		___cellLabels_9 = value;
		Il2CppCodeGenWriteBarrier((&___cellLabels_9), value);
	}

	inline static int32_t get_offset_of_categoryLabel_10() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___categoryLabel_10)); }
	inline Text_t1901882714 * get_categoryLabel_10() const { return ___categoryLabel_10; }
	inline Text_t1901882714 ** get_address_of_categoryLabel_10() { return &___categoryLabel_10; }
	inline void set_categoryLabel_10(Text_t1901882714 * value)
	{
		___categoryLabel_10 = value;
		Il2CppCodeGenWriteBarrier((&___categoryLabel_10), value);
	}

	inline static int32_t get_offset_of_nameLabel_11() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___nameLabel_11)); }
	inline Text_t1901882714 * get_nameLabel_11() const { return ___nameLabel_11; }
	inline Text_t1901882714 ** get_address_of_nameLabel_11() { return &___nameLabel_11; }
	inline void set_nameLabel_11(Text_t1901882714 * value)
	{
		___nameLabel_11 = value;
		Il2CppCodeGenWriteBarrier((&___nameLabel_11), value);
	}

	inline static int32_t get_offset_of_summaryTextBox_12() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___summaryTextBox_12)); }
	inline Text_t1901882714 * get_summaryTextBox_12() const { return ___summaryTextBox_12; }
	inline Text_t1901882714 ** get_address_of_summaryTextBox_12() { return &___summaryTextBox_12; }
	inline void set_summaryTextBox_12(Text_t1901882714 * value)
	{
		___summaryTextBox_12 = value;
		Il2CppCodeGenWriteBarrier((&___summaryTextBox_12), value);
	}

	inline static int32_t get_offset_of_icon_13() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___icon_13)); }
	inline Image_t2670269651 * get_icon_13() const { return ___icon_13; }
	inline Image_t2670269651 ** get_address_of_icon_13() { return &___icon_13; }
	inline void set_icon_13(Image_t2670269651 * value)
	{
		___icon_13 = value;
		Il2CppCodeGenWriteBarrier((&___icon_13), value);
	}

	inline static int32_t get_offset_of_currentState_14() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___currentState_14)); }
	inline State_t3329758327 * get_currentState_14() const { return ___currentState_14; }
	inline State_t3329758327 ** get_address_of_currentState_14() { return &___currentState_14; }
	inline void set_currentState_14(State_t3329758327 * value)
	{
		___currentState_14 = value;
		Il2CppCodeGenWriteBarrier((&___currentState_14), value);
	}

	inline static int32_t get_offset_of_collectionCallBack_15() { return static_cast<int32_t>(offsetof(TrainingCollectionCell_t2778354195, ___collectionCallBack_15)); }
	inline CellPressedCallBack_t865333736 * get_collectionCallBack_15() const { return ___collectionCallBack_15; }
	inline CellPressedCallBack_t865333736 ** get_address_of_collectionCallBack_15() { return &___collectionCallBack_15; }
	inline void set_collectionCallBack_15(CellPressedCallBack_t865333736 * value)
	{
		___collectionCallBack_15 = value;
		Il2CppCodeGenWriteBarrier((&___collectionCallBack_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAININGCOLLECTIONCELL_T2778354195_H
#ifndef URL_ACCESS_CONDITIONAL_T372617475_H
#define URL_ACCESS_CONDITIONAL_T372617475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// URL_Access_Conditional
struct  URL_Access_Conditional_t372617475  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject URL_Access_Conditional::kk
	GameObject_t1113636619 * ___kk_2;

public:
	inline static int32_t get_offset_of_kk_2() { return static_cast<int32_t>(offsetof(URL_Access_Conditional_t372617475, ___kk_2)); }
	inline GameObject_t1113636619 * get_kk_2() const { return ___kk_2; }
	inline GameObject_t1113636619 ** get_address_of_kk_2() { return &___kk_2; }
	inline void set_kk_2(GameObject_t1113636619 * value)
	{
		___kk_2 = value;
		Il2CppCodeGenWriteBarrier((&___kk_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URL_ACCESS_CONDITIONAL_T372617475_H
#ifndef HAZARDICONCONTROLLER_T3601592792_H
#define HAZARDICONCONTROLLER_T3601592792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HazardIconController
struct  HazardIconController_t3601592792  : public MonoBehaviour_t3962482529
{
public:
	// TrainingHazardController HazardIconController::parentController
	TrainingHazardController_t987698733 * ___parentController_2;
	// UnityEngine.Color HazardIconController::color
	Color_t2555686324  ___color_3;
	// UnityEngine.SpriteRenderer HazardIconController::fill
	SpriteRenderer_t3235626157 * ___fill_4;
	// UnityEngine.SpriteRenderer HazardIconController::outline
	SpriteRenderer_t3235626157 * ___outline_5;
	// System.Boolean HazardIconController::isInView
	bool ___isInView_6;

public:
	inline static int32_t get_offset_of_parentController_2() { return static_cast<int32_t>(offsetof(HazardIconController_t3601592792, ___parentController_2)); }
	inline TrainingHazardController_t987698733 * get_parentController_2() const { return ___parentController_2; }
	inline TrainingHazardController_t987698733 ** get_address_of_parentController_2() { return &___parentController_2; }
	inline void set_parentController_2(TrainingHazardController_t987698733 * value)
	{
		___parentController_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentController_2), value);
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(HazardIconController_t3601592792, ___color_3)); }
	inline Color_t2555686324  get_color_3() const { return ___color_3; }
	inline Color_t2555686324 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2555686324  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_fill_4() { return static_cast<int32_t>(offsetof(HazardIconController_t3601592792, ___fill_4)); }
	inline SpriteRenderer_t3235626157 * get_fill_4() const { return ___fill_4; }
	inline SpriteRenderer_t3235626157 ** get_address_of_fill_4() { return &___fill_4; }
	inline void set_fill_4(SpriteRenderer_t3235626157 * value)
	{
		___fill_4 = value;
		Il2CppCodeGenWriteBarrier((&___fill_4), value);
	}

	inline static int32_t get_offset_of_outline_5() { return static_cast<int32_t>(offsetof(HazardIconController_t3601592792, ___outline_5)); }
	inline SpriteRenderer_t3235626157 * get_outline_5() const { return ___outline_5; }
	inline SpriteRenderer_t3235626157 ** get_address_of_outline_5() { return &___outline_5; }
	inline void set_outline_5(SpriteRenderer_t3235626157 * value)
	{
		___outline_5 = value;
		Il2CppCodeGenWriteBarrier((&___outline_5), value);
	}

	inline static int32_t get_offset_of_isInView_6() { return static_cast<int32_t>(offsetof(HazardIconController_t3601592792, ___isInView_6)); }
	inline bool get_isInView_6() const { return ___isInView_6; }
	inline bool* get_address_of_isInView_6() { return &___isInView_6; }
	inline void set_isInView_6(bool value)
	{
		___isInView_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAZARDICONCONTROLLER_T3601592792_H
#ifndef HAZARDCONTENTVIEW_T2572541359_H
#define HAZARDCONTENTVIEW_T2572541359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HazardContentView
struct  HazardContentView_t2572541359  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer[] HazardContentView::sprites
	SpriteRendererU5BU5D_t911335936* ___sprites_2;
	// HazardSummary HazardContentView::summary
	HazardSummary_t168547793 * ___summary_3;

public:
	inline static int32_t get_offset_of_sprites_2() { return static_cast<int32_t>(offsetof(HazardContentView_t2572541359, ___sprites_2)); }
	inline SpriteRendererU5BU5D_t911335936* get_sprites_2() const { return ___sprites_2; }
	inline SpriteRendererU5BU5D_t911335936** get_address_of_sprites_2() { return &___sprites_2; }
	inline void set_sprites_2(SpriteRendererU5BU5D_t911335936* value)
	{
		___sprites_2 = value;
		Il2CppCodeGenWriteBarrier((&___sprites_2), value);
	}

	inline static int32_t get_offset_of_summary_3() { return static_cast<int32_t>(offsetof(HazardContentView_t2572541359, ___summary_3)); }
	inline HazardSummary_t168547793 * get_summary_3() const { return ___summary_3; }
	inline HazardSummary_t168547793 ** get_address_of_summary_3() { return &___summary_3; }
	inline void set_summary_3(HazardSummary_t168547793 * value)
	{
		___summary_3 = value;
		Il2CppCodeGenWriteBarrier((&___summary_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAZARDCONTENTVIEW_T2572541359_H
#ifndef SCENELINK_T2949730838_H
#define SCENELINK_T2949730838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneLink
struct  SceneLink_t2949730838  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENELINK_T2949730838_H
#ifndef TOGGLECONTROLLER_T3012097607_H
#define TOGGLECONTROLLER_T3012097607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToggleController
struct  ToggleController_t3012097607  : public MonoBehaviour_t3962482529
{
public:
	// System.String ToggleController::category
	String_t* ___category_2;
	// System.String ToggleController::value
	String_t* ___value_3;

public:
	inline static int32_t get_offset_of_category_2() { return static_cast<int32_t>(offsetof(ToggleController_t3012097607, ___category_2)); }
	inline String_t* get_category_2() const { return ___category_2; }
	inline String_t** get_address_of_category_2() { return &___category_2; }
	inline void set_category_2(String_t* value)
	{
		___category_2 = value;
		Il2CppCodeGenWriteBarrier((&___category_2), value);
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(ToggleController_t3012097607, ___value_3)); }
	inline String_t* get_value_3() const { return ___value_3; }
	inline String_t** get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(String_t* value)
	{
		___value_3 = value;
		Il2CppCodeGenWriteBarrier((&___value_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLECONTROLLER_T3012097607_H
#ifndef HAZARDSUMMARY_T168547793_H
#define HAZARDSUMMARY_T168547793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HazardSummary
struct  HazardSummary_t168547793  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text HazardSummary::summaryText
	Text_t1901882714 * ___summaryText_2;
	// System.String HazardSummary::content
	String_t* ___content_3;

public:
	inline static int32_t get_offset_of_summaryText_2() { return static_cast<int32_t>(offsetof(HazardSummary_t168547793, ___summaryText_2)); }
	inline Text_t1901882714 * get_summaryText_2() const { return ___summaryText_2; }
	inline Text_t1901882714 ** get_address_of_summaryText_2() { return &___summaryText_2; }
	inline void set_summaryText_2(Text_t1901882714 * value)
	{
		___summaryText_2 = value;
		Il2CppCodeGenWriteBarrier((&___summaryText_2), value);
	}

	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(HazardSummary_t168547793, ___content_3)); }
	inline String_t* get_content_3() const { return ___content_3; }
	inline String_t** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(String_t* value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier((&___content_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAZARDSUMMARY_T168547793_H
#ifndef TRAININGCONTROLLER_T3952779903_H
#define TRAININGCONTROLLER_T3952779903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrainingController
struct  TrainingController_t3952779903  : public PARSController_t1025491303
{
public:
	// System.Collections.Generic.List`1<TrainingHazard> TrainingController::currentRoundTrainingHazards
	List_1_t2270999925 * ___currentRoundTrainingHazards_15;
	// System.Collections.Generic.List`1<TrainingHazardController> TrainingController::currentRoundTrainingHazardControllers
	List_1_t2459773475 * ___currentRoundTrainingHazardControllers_16;
	// TrainingDataManager TrainingController::dataManager
	TrainingDataManager_t3084013207 * ___dataManager_17;

public:
	inline static int32_t get_offset_of_currentRoundTrainingHazards_15() { return static_cast<int32_t>(offsetof(TrainingController_t3952779903, ___currentRoundTrainingHazards_15)); }
	inline List_1_t2270999925 * get_currentRoundTrainingHazards_15() const { return ___currentRoundTrainingHazards_15; }
	inline List_1_t2270999925 ** get_address_of_currentRoundTrainingHazards_15() { return &___currentRoundTrainingHazards_15; }
	inline void set_currentRoundTrainingHazards_15(List_1_t2270999925 * value)
	{
		___currentRoundTrainingHazards_15 = value;
		Il2CppCodeGenWriteBarrier((&___currentRoundTrainingHazards_15), value);
	}

	inline static int32_t get_offset_of_currentRoundTrainingHazardControllers_16() { return static_cast<int32_t>(offsetof(TrainingController_t3952779903, ___currentRoundTrainingHazardControllers_16)); }
	inline List_1_t2459773475 * get_currentRoundTrainingHazardControllers_16() const { return ___currentRoundTrainingHazardControllers_16; }
	inline List_1_t2459773475 ** get_address_of_currentRoundTrainingHazardControllers_16() { return &___currentRoundTrainingHazardControllers_16; }
	inline void set_currentRoundTrainingHazardControllers_16(List_1_t2459773475 * value)
	{
		___currentRoundTrainingHazardControllers_16 = value;
		Il2CppCodeGenWriteBarrier((&___currentRoundTrainingHazardControllers_16), value);
	}

	inline static int32_t get_offset_of_dataManager_17() { return static_cast<int32_t>(offsetof(TrainingController_t3952779903, ___dataManager_17)); }
	inline TrainingDataManager_t3084013207 * get_dataManager_17() const { return ___dataManager_17; }
	inline TrainingDataManager_t3084013207 ** get_address_of_dataManager_17() { return &___dataManager_17; }
	inline void set_dataManager_17(TrainingDataManager_t3084013207 * value)
	{
		___dataManager_17 = value;
		Il2CppCodeGenWriteBarrier((&___dataManager_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRAININGCONTROLLER_T3952779903_H
#ifndef ASSESSMENTCONTROLLER_T2586697688_H
#define ASSESSMENTCONTROLLER_T2586697688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssessmentController
struct  AssessmentController_t2586697688  : public PARSController_t1025491303
{
public:
	// AnswerKey AssessmentController::answerKey
	AnswerKey_t1212413198 * ___answerKey_15;

public:
	inline static int32_t get_offset_of_answerKey_15() { return static_cast<int32_t>(offsetof(AssessmentController_t2586697688, ___answerKey_15)); }
	inline AnswerKey_t1212413198 * get_answerKey_15() const { return ___answerKey_15; }
	inline AnswerKey_t1212413198 ** get_address_of_answerKey_15() { return &___answerKey_15; }
	inline void set_answerKey_15(AnswerKey_t1212413198 * value)
	{
		___answerKey_15 = value;
		Il2CppCodeGenWriteBarrier((&___answerKey_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSESSMENTCONTROLLER_T2586697688_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (URL_Access_Conditional_t372617475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2600[1] = 
{
	URL_Access_Conditional_t372617475::get_offset_of_kk_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (PARSSettings_t2801629121), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2601[11] = 
{
	PARSSettings_t2801629121::get_offset_of_fireBaseURL_2(),
	PARSSettings_t2801629121::get_offset_of_dangerZoneTime_3(),
	PARSSettings_t2801629121::get_offset_of_T_forcedTimeNavigationEnabled_4(),
	PARSSettings_t2801629121::get_offset_of_T_selfNavigationEnabled_5(),
	PARSSettings_t2801629121::get_offset_of_T_roundForcedTimeLimit_6(),
	PARSSettings_t2801629121::get_offset_of_T_roundsTotalCount_7(),
	PARSSettings_t2801629121::get_offset_of_T_expandingSummaryTextBoxEnabled_8(),
	PARSSettings_t2801629121::get_offset_of_A_forcedTimeNavigationEnabled_9(),
	PARSSettings_t2801629121::get_offset_of_A_selfNavigationEnabled_10(),
	PARSSettings_t2801629121::get_offset_of_A_roundForcedTimeLimit_11(),
	PARSSettings_t2801629121::get_offset_of_A_roundsTotalCount_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { sizeof (Question_t1471288757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2602[2] = 
{
	Question_t1471288757::get_offset_of_key_0(),
	Question_t1471288757::get_offset_of_answers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (AnswerKey_t1212413198), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2603[1] = 
{
	AnswerKey_t1212413198::get_offset_of_dictionary_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { sizeof (AssessmentController_t2586697688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2604[1] = 
{
	AssessmentController_t2586697688::get_offset_of_answerKey_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (PARSDataManager_t1176312113), -1, sizeof(PARSDataManager_t1176312113_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2605[5] = 
{
	PARSDataManager_t1176312113::get_offset_of_sessionID_0(),
	PARSDataManager_t1176312113_StaticFields::get_offset_of_instance_1(),
	PARSDataManager_t1176312113::get_offset_of_gameDataFileName_2(),
	PARSDataManager_t1176312113::get_offset_of_jsonOutput_3(),
	PARSDataManager_t1176312113::get_offset_of_sessionStart_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (JsonHelper_t323687296), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2607[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (AssessmentPanelController_t2974685767), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2608[1] = 
{
	AssessmentPanelController_t2974685767::get_offset_of_collectionView_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { sizeof (AssessmentRound_t4264710411), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2609[2] = 
{
	AssessmentRound_t4264710411::get_offset_of_sceneID_5(),
	AssessmentRound_t4264710411::get_offset_of_HIIScore_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (Hazard_t335190578), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2610[2] = 
{
	Hazard_t335190578::get_offset_of_category_0(),
	Hazard_t335190578::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (Round_t3007421971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2611[5] = 
{
	Round_t3007421971::get_offset_of_sceneID_0(),
	Round_t3007421971::get_offset_of_startTime_1(),
	Round_t3007421971::get_offset_of_endTime_2(),
	Round_t3007421971::get_offset_of_hazardResponses_3(),
	Round_t3007421971::get_offset_of_trainingHazardData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (CameraMovement_t4037080991), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2612[14] = 
{
	CameraMovement_t4037080991::get_offset_of_minFOV_2(),
	CameraMovement_t4037080991::get_offset_of_maxFOV_3(),
	CameraMovement_t4037080991::get_offset_of_sensitivity_4(),
	CameraMovement_t4037080991::get_offset_of_FOV_5(),
	CameraMovement_t4037080991::get_offset_of_minY_6(),
	CameraMovement_t4037080991::get_offset_of_maxY_7(),
	CameraMovement_t4037080991::get_offset_of_sensX_8(),
	CameraMovement_t4037080991::get_offset_of_sensY_9(),
	CameraMovement_t4037080991::get_offset_of_rotationY_10(),
	CameraMovement_t4037080991::get_offset_of_rotationX_11(),
	CameraMovement_t4037080991::get_offset_of_lookAtTarget_12(),
	CameraMovement_t4037080991::get_offset_of_lerping_13(),
	CameraMovement_t4037080991::get_offset_of_dragging_14(),
	CameraMovement_t4037080991::get_offset_of_eventSys_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2613 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2614 = { sizeof (DemographicViewController_t3688029416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2614[2] = 
{
	DemographicViewController_t3688029416::get_offset_of_studyTextField_2(),
	DemographicViewController_t3688029416::get_offset_of_demographicToggles_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2615 = { sizeof (NavigationController_t182472134), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2615[2] = 
{
	NavigationController_t182472134::get_offset_of_controller_2(),
	NavigationController_t182472134::get_offset_of_timerText_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2616 = { sizeof (PARSController_t1025491303), -1, sizeof(PARSController_t1025491303_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2616[13] = 
{
	PARSController_t1025491303_StaticFields::get_offset_of_instance_2(),
	PARSController_t1025491303::get_offset_of_allowedTimePerRound_3(),
	PARSController_t1025491303::get_offset_of_isTimedTraining_4(),
	PARSController_t1025491303::get_offset_of_isAllowedToSelfNavigate_5(),
	PARSController_t1025491303::get_offset_of_totalRoundCount_6(),
	PARSController_t1025491303::get_offset_of_currentRoundIndex_7(),
	PARSController_t1025491303::get_offset_of_currentRound_8(),
	PARSController_t1025491303::get_offset_of_finishedRounds_9(),
	PARSController_t1025491303::get_offset_of_dataManager_10(),
	PARSController_t1025491303::get_offset_of_navigationController_11(),
	PARSController_t1025491303::get_offset_of_startTime_12(),
	PARSController_t1025491303::get_offset_of_endTime_13(),
	PARSController_t1025491303::get_offset_of_type_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2617 = { sizeof (ResultAnswersList_t719099062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2617[1] = 
{
	ResultAnswersList_t719099062::get_offset_of_listItem_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2618 = { sizeof (ResultCardCell_t3938479119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2618[5] = 
{
	ResultCardCell_t3938479119::get_offset_of_sceneLabel_2(),
	ResultCardCell_t3938479119::get_offset_of_correctList_3(),
	ResultCardCell_t3938479119::get_offset_of_yourList_4(),
	ResultCardCell_t3938479119::get_offset_of_hiiScoreLabel_5(),
	ResultCardCell_t3938479119::get_offset_of_notesLabel_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2619 = { sizeof (ResultCardView_t2246120343), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2620 = { sizeof (ResultsController_t712609476), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2620[2] = 
{
	ResultsController_t712609476::get_offset_of_ResultCardCell_2(),
	ResultsController_t712609476::get_offset_of_controller_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2621 = { sizeof (ToggleController_t3012097607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2621[2] = 
{
	ToggleController_t3012097607::get_offset_of_category_2(),
	ToggleController_t3012097607::get_offset_of_value_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2622 = { sizeof (SceneLink_t2949730838), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2623 = { sizeof (HazardContentView_t2572541359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2623[2] = 
{
	HazardContentView_t2572541359::get_offset_of_sprites_2(),
	HazardContentView_t2572541359::get_offset_of_summary_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2624 = { sizeof (HazardIconController_t3601592792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2624[5] = 
{
	HazardIconController_t3601592792::get_offset_of_parentController_2(),
	HazardIconController_t3601592792::get_offset_of_color_3(),
	HazardIconController_t3601592792::get_offset_of_fill_4(),
	HazardIconController_t3601592792::get_offset_of_outline_5(),
	HazardIconController_t3601592792::get_offset_of_isInView_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2625 = { sizeof (HazardOnState_t4192084759), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2625[1] = 
{
	HazardOnState_t4192084759::get_offset_of_destination_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2626 = { sizeof (HazardOffState_t4154887258), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2626[1] = 
{
	HazardOffState_t4154887258::get_offset_of_destination_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2627 = { sizeof (State_t3329758327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2627[1] = 
{
	State_t3329758327::get_offset_of_hazardController_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2628 = { sizeof (HazardSummary_t168547793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2628[2] = 
{
	HazardSummary_t168547793::get_offset_of_summaryText_2(),
	HazardSummary_t168547793::get_offset_of_content_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2629 = { sizeof (TrainingCollectionCell_t2778354195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2629[14] = 
{
	TrainingCollectionCell_t2778354195::get_offset_of_expandingSummaryTextBoxEnabled_2(),
	TrainingCollectionCell_t2778354195::get_offset_of_category_3(),
	TrainingCollectionCell_t2778354195::get_offset_of_name_4(),
	TrainingCollectionCell_t2778354195::get_offset_of_summaryText_5(),
	TrainingCollectionCell_t2778354195::get_offset_of_color_6(),
	TrainingCollectionCell_t2778354195::get_offset_of_hazardController_7(),
	TrainingCollectionCell_t2778354195::get_offset_of_cellBackground_8(),
	TrainingCollectionCell_t2778354195::get_offset_of_cellLabels_9(),
	TrainingCollectionCell_t2778354195::get_offset_of_categoryLabel_10(),
	TrainingCollectionCell_t2778354195::get_offset_of_nameLabel_11(),
	TrainingCollectionCell_t2778354195::get_offset_of_summaryTextBox_12(),
	TrainingCollectionCell_t2778354195::get_offset_of_icon_13(),
	TrainingCollectionCell_t2778354195::get_offset_of_currentState_14(),
	TrainingCollectionCell_t2778354195::get_offset_of_collectionCallBack_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2630 = { sizeof (CellPressedCallBack_t865333736), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2631 = { sizeof (TrainingCollectionController_t2905092020), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2631[1] = 
{
	TrainingCollectionController_t2905092020::get_offset_of_HazardCell_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2632 = { sizeof (TrainingController_t3952779903), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2632[3] = 
{
	TrainingController_t3952779903::get_offset_of_currentRoundTrainingHazards_15(),
	TrainingController_t3952779903::get_offset_of_currentRoundTrainingHazardControllers_16(),
	TrainingController_t3952779903::get_offset_of_dataManager_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2633 = { sizeof (TrainingDataManager_t3084013207), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2633[1] = 
{
	TrainingDataManager_t3084013207::get_offset_of_tc_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2634 = { sizeof (TrainingHazard_t798925183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2634[3] = 
{
	TrainingHazard_t798925183::get_offset_of_summaryText_2(),
	TrainingHazard_t798925183::get_offset_of_color_3(),
	TrainingHazard_t798925183::get_offset_of_duration_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2635 = { sizeof (TrainingHazardController_t987698733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2635[6] = 
{
	TrainingHazardController_t987698733::get_offset_of_hazard_2(),
	TrainingHazardController_t987698733::get_offset_of_icon_3(),
	TrainingHazardController_t987698733::get_offset_of_content_4(),
	TrainingHazardController_t987698733::get_offset_of_cell_5(),
	TrainingHazardController_t987698733::get_offset_of_tcDelegate_6(),
	TrainingHazardController_t987698733::get_offset_of_currentState_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2636 = { sizeof (Settings_t298812435), -1, sizeof(Settings_t298812435_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2636[3] = 
{
	Settings_t298812435::get_offset_of__settings_2(),
	Settings_t298812435_StaticFields::get_offset_of_s_3(),
	Settings_t298812435_StaticFields::get_offset_of_instance_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
