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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// AnswerKey
struct AnswerKey_t1212413198;
// Question[]
struct QuestionU5BU5D_t3050773464;
// Question
struct Question_t1471288757;
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t1067045639;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// Round
struct Round_t3007421971;
// System.Collections.Generic.List`1<Hazard>
struct List_1_t1807265320;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Hazard
struct Hazard_t335190578;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// AssessmentController
struct AssessmentController_t2586697688;
// PARSController
struct PARSController_t1025491303;
// PARSDataManager
struct PARSDataManager_t1176312113;
// System.Action`1<Question[]>
struct Action_1_t3223241059;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// AssessmentRound
struct AssessmentRound_t4264710411;
// System.Collections.Generic.List`1<Round>
struct List_1_t184529417;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// ToggleController
struct ToggleController_t3012097607;
// AssessmentPanelController
struct AssessmentPanelController_t2974685767;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Transform
struct Transform_t3600365921;
// CameraMovement
struct CameraMovement_t4037080991;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Component
struct Component_t1923634451;
// CellPressedCallBack
struct CellPressedCallBack_t865333736;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// DemographicViewController
struct DemographicViewController_t3688029416;
// UnityEngine.UI.InputField
struct InputField_t3762917431;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t1715229950;
// UnityEngine.UI.Text
struct Text_t1901882714;
// Done_Button
struct Done_Button_t3558270190;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.IO.FileSystemInfo
struct FileSystemInfo_t3745885336;
// Email_Data
struct Email_Data_t2527726807;
// System.Net.Mail.MailMessage
struct MailMessage_t154277952;
// System.Net.Mail.MailAddress
struct MailAddress_t3229635559;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t2881748872;
// System.Net.Mail.AttachmentCollection
struct AttachmentCollection_t1412086921;
// System.Net.Mail.Attachment
struct Attachment_t2783998197;
// System.Collections.ObjectModel.Collection`1<System.Net.Mail.Attachment>
struct Collection_1_t1728354115;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2024462082;
// System.Net.Mail.SmtpClient
struct SmtpClient_t1048709847;
// System.Net.NetworkCredential
struct NetworkCredential_t3282608323;
// System.Net.ICredentialsByHost
struct ICredentialsByHost_t3390590939;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t3014364904;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t194917408;
// Finish_Button
struct Finish_Button_t3878445350;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// Finish_Button/<timer>c__Iterator0
struct U3CtimerU3Ec__Iterator0_t2808194927;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// FlipNormals
struct FlipNormals_t293739268;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// HazardContentView
struct HazardContentView_t2572541359;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// HazardIconController
struct HazardIconController_t3601592792;
// TrainingHazardController
struct TrainingHazardController_t987698733;
// State
struct State_t3329758327;
// HazardOffState
struct HazardOffState_t4154887258;
// TrainingCollectionCell
struct TrainingCollectionCell_t2778354195;
// HazardOnState
struct HazardOnState_t4192084759;
// HazardSummary
struct HazardSummary_t168547793;
// JsonHelper
struct JsonHelper_t323687296;
// NavigationController
struct NavigationController_t182472134;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t422084607;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// UnityEngine.UI.Button
struct Button_t4055032469;
// System.IO.FileStream
struct FileStream_t4292183065;
// UnityEngine.TextAsset
struct TextAsset_t3022178571;
// PARSSettings
struct PARSSettings_t2801629121;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// Render_Button
struct Render_Button_t438558594;
// Render_Menu
struct Render_Menu_t1727724032;
// ResultAnswersList
struct ResultAnswersList_t719099062;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t923838031;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// ResultCardCell
struct ResultCardCell_t3938479119;
// ResultCardView
struct ResultCardView_t2246120343;
// ResultsController
struct ResultsController_t712609476;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<TrainingHazard>
struct List_1_t2270999925;
// SceneLink
struct SceneLink_t2949730838;
// Settings
struct Settings_t298812435;
// Start_Button
struct Start_Button_t84841713;
// UnityEngine.UI.Image
struct Image_t2670269651;
// TrainingCollectionController
struct TrainingCollectionController_t2905092020;
// TrainingController
struct TrainingController_t3952779903;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t2165061829;
// TrainingDataManager
struct TrainingDataManager_t3084013207;
// System.Collections.Generic.List`1<TrainingHazardController>
struct List_1_t2459773475;
// TrainingHazard
struct TrainingHazard_t798925183;
// URL_Access
struct URL_Access_t1474579352;
// URL_Access_Conditional
struct URL_Access_Conditional_t372617475;
// TrainingHazardController[]
struct TrainingHazardControllerU5BU5D_t483553920;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Collections.Generic.IList`1<System.Net.Mail.MailAddress>
struct IList_1_t749988046;
// System.Collections.Generic.IList`1<System.Net.Mail.Attachment>
struct IList_1_t304350684;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// Round[]
struct RoundU5BU5D_t1371029570;
// TrainingHazard[]
struct TrainingHazardU5BU5D_t3102508454;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[][]
struct StringU5BU5DU5BU5D_t2611993717;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.DictionaryEntry>
struct Transform_1_t1462405433;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// Hazard[]
struct HazardU5BU5D_t3116993735;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Net.Mail.AlternateViewCollection
struct AlternateViewCollection_t988355290;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t407452768;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t3110968994;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t2426922870;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t2685945535;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t875709727;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t932037087;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1464056338;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t2922691911;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t2111161276;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3399372417;
// System.Net.Sockets.TcpClient
struct TcpClient_t822906377;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.StreamWriter
struct StreamWriter_t1266378904;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t3811013447;
// System.Threading.Mutex
struct Mutex_t3066672582;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// System.Net.Mime.ContentType
struct ContentType_t768484892;
// System.Net.Mime.ContentDisposition
struct ContentDisposition_t4252586968;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t4207451803;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t3560671185;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t3446800538;
// UnityEngine.RectOffset
struct RectOffset_t1369453676;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t881764471;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t3491343620;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t2019268878;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_t2475741330;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t3135238028;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t48803504;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t731888065;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t648412432;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t467195904;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t2355412304;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Event
struct Event_t2956885303;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;

extern RuntimeClass* Dictionary_2_t1067045639_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3412077385_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m2025336897_RuntimeMethod_var;
extern const uint32_t AnswerKey__ctor_m2683242041_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_get_Item_m2750682826_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3382736461_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2602721882_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Contains_TisString_t_m1131914166_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1639399454_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4248804872_RuntimeMethod_var;
extern const uint32_t AnswerKey_gradeForRound_m1433895029_MetadataUsageId;
extern RuntimeClass* Settings_t298812435_il2cpp_TypeInfo_var;
extern RuntimeClass* PARSDataManager_t1176312113_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3223241059_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Nullable_1__ctor_m3940678751_RuntimeMethod_var;
extern const RuntimeMethod* AssessmentController_populateAnswerKey_m711856798_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m2606183498_RuntimeMethod_var;
extern String_t* _stringLiteral487232572;
extern const uint32_t AssessmentController_Start_m2250056151_MetadataUsageId;
extern RuntimeClass* AssessmentRound_t4264710411_il2cpp_TypeInfo_var;
extern const uint32_t AssessmentController_startRound_m1473572809_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern const uint32_t AssessmentController_completeCurrentRound_m3696108491_MetadataUsageId;
extern String_t* _stringLiteral1675990857;
extern const uint32_t AssessmentController_complete_m1461984597_MetadataUsageId;
extern RuntimeClass* List_1_t1807265320_il2cpp_TypeInfo_var;
extern RuntimeClass* Hazard_t335190578_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2274875901_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisToggleController_t3012097607_m1888744386_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m470618553_RuntimeMethod_var;
extern String_t* _stringLiteral3085175763;
extern const uint32_t AssessmentController_getActiveToggleHazards_m3363953234_MetadataUsageId;
extern RuntimeClass* AnswerKey_t1212413198_il2cpp_TypeInfo_var;
extern const uint32_t AssessmentController_populateAnswerKey_m711856798_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m2597448471_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m4052406410_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m3792823848_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3439656034_RuntimeMethod_var;
extern const uint32_t AssessmentController_gradeAssessment_m1358060621_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3723677132;
extern String_t* _stringLiteral1440638807;
extern const uint32_t AssessmentPanelController_Start_m3537048510_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral307881322;
extern const uint32_t CameraMovement_Awake_m3666367343_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisEventSystem_t1003666588_m3854587646_RuntimeMethod_var;
extern String_t* _stringLiteral3534642813;
extern const uint32_t CameraMovement_Start_m306335942_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1891098395;
extern String_t* _stringLiteral3403559637;
extern String_t* _stringLiteral674676282;
extern const uint32_t CameraMovement_Update_m1067466054_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const uint32_t CameraMovement_smoothLookTowards_m3218301120_MetadataUsageId;
extern const uint32_t CameraMovement_eulerTo360_m4112585906_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisInputField_t3762917431_m1498207142_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisToggleGroup_t123837990_m4013193853_RuntimeMethod_var;
extern const uint32_t DemographicViewController_Start_m1356958573_MetadataUsageId;
extern const RuntimeMethod* Enumerable_First_TisToggle_t2735377061_m1709940420_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var;
extern String_t* _stringLiteral1898394020;
extern String_t* _stringLiteral3727360559;
extern String_t* _stringLiteral2142637263;
extern const uint32_t DemographicViewController_buttonPressed_m2533673270_MetadataUsageId;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3319525431_il2cpp_TypeInfo_var;
extern RuntimeClass* DirectoryInfo_t35957480_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m706204246_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1685793073_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2276455407_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3346958548_RuntimeMethod_var;
extern String_t* _stringLiteral3737918690;
extern String_t* _stringLiteral1651855327;
extern String_t* _stringLiteral1743080903;
extern const uint32_t Done_Button_MoveFile_m683613391_MetadataUsageId;
extern RuntimeClass* MailMessage_t154277952_il2cpp_TypeInfo_var;
extern RuntimeClass* MailAddress_t3229635559_il2cpp_TypeInfo_var;
extern RuntimeClass* Attachment_t2783998197_il2cpp_TypeInfo_var;
extern RuntimeClass* SmtpClient_t1048709847_il2cpp_TypeInfo_var;
extern RuntimeClass* NetworkCredential_t3282608323_il2cpp_TypeInfo_var;
extern RuntimeClass* Email_Data_t2527726807_il2cpp_TypeInfo_var;
extern RuntimeClass* RemoteCertificateValidationCallback_t3014364904_il2cpp_TypeInfo_var;
extern RuntimeClass* ServicePointManager_t170559685_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Collection_1_Add_m2768975781_RuntimeMethod_var;
extern const RuntimeMethod* Email_Data_U3CsendAutoMailU3Em__0_m2024622076_RuntimeMethod_var;
extern String_t* _stringLiteral15098105;
extern String_t* _stringLiteral1654290143;
extern String_t* _stringLiteral2029288972;
extern String_t* _stringLiteral2440652511;
extern String_t* _stringLiteral3900656079;
extern String_t* _stringLiteral4170948408;
extern String_t* _stringLiteral3507221820;
extern String_t* _stringLiteral2647798630;
extern const uint32_t Email_Data_sendAutoMail_m4110006632_MetadataUsageId;
extern RuntimeClass* U3CtimerU3Ec__Iterator0_t2808194927_il2cpp_TypeInfo_var;
extern const uint32_t Finish_Button_timer_m3339991693_MetadataUsageId;
extern String_t* _stringLiteral3452614528;
extern String_t* _stringLiteral1672095855;
extern String_t* _stringLiteral1672030319;
extern String_t* _stringLiteral1671964783;
extern String_t* _stringLiteral1671899247;
extern const uint32_t Finish_Button_TaskOnClick_m3222859292_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CtimerU3Ec__Iterator0_MoveNext_m1214629907_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CtimerU3Ec__Iterator0_Reset_m1551868511_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var;
extern const uint32_t FlipNormals_Start_m996546300_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354_RuntimeMethod_var;
extern const uint32_t HazardContentView_Start_m342415974_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisTrainingHazardController_t987698733_m259221932_RuntimeMethod_var;
extern const uint32_t HazardIconController_Start_m690616789_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisCameraMovement_t4037080991_m4258948832_RuntimeMethod_var;
extern const uint32_t HazardIconController_Update_m848640067_MetadataUsageId;
extern const uint32_t HazardOnState_OnStateEnter_m3452361788_MetadataUsageId;
extern const uint32_t HazardSummary_Start_m544711420_MetadataUsageId;
extern const uint32_t NavigationController_Update_m3299951066_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisPARSController_t1025491303_m3747387168_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m589371754_RuntimeMethod_var;
extern String_t* _stringLiteral1989743823;
extern const uint32_t NavigationController_fetchController_m2817432675_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisText_t1901882714_m4076551387_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m807984802_RuntimeMethod_var;
extern String_t* _stringLiteral2574883718;
extern String_t* _stringLiteral2762656541;
extern String_t* _stringLiteral3720627605;
extern String_t* _stringLiteral2593825373;
extern String_t* _stringLiteral388431000;
extern String_t* _stringLiteral3452614529;
extern const uint32_t NavigationController_setupUI_m3312411452_MetadataUsageId;
extern RuntimeClass* PARSController_t1025491303_il2cpp_TypeInfo_var;
extern const uint32_t PARSController_Awake_m792106636_MetadataUsageId;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1858654798;
extern const uint32_t PARSController_Update_m1460431685_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentInChildren_TisButton_t4055032469_m1032908271_RuntimeMethod_var;
extern const uint32_t PARSController_set_m3728066873_MetadataUsageId;
extern const uint32_t PARSController_set_m1213541725_MetadataUsageId;
extern String_t* _stringLiteral547424145;
extern const uint32_t PARSController_formatTime_m487284323_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Nullable_1_t378540539_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614641;
extern const uint32_t PARSController_getCurrentSceneID_m563327644_MetadataUsageId;
extern RuntimeClass* Round_t3007421971_il2cpp_TypeInfo_var;
extern const uint32_t PARSController_startRound_m3876318191_MetadataUsageId;
extern const RuntimeMethod* List_1_Add_m1265277236_RuntimeMethod_var;
extern String_t* _stringLiteral969047483;
extern const uint32_t PARSController_completeCurrentRound_m3102217683_MetadataUsageId;
extern const RuntimeMethod* Nullable_1_GetValueOrDefault_m3412711055_RuntimeMethod_var;
extern String_t* _stringLiteral3958758786;
extern const uint32_t PARSController_changeToNextRound_m1838612674_MetadataUsageId;
extern String_t* _stringLiteral1544303647;
extern const uint32_t PARSController_complete_m2748135589_MetadataUsageId;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3452614613;
extern const uint32_t PARSDataManager__ctor_m867678872_MetadataUsageId;
extern const uint32_t PARSDataManager_saveRounds_m1321154175_MetadataUsageId;
extern String_t* _stringLiteral3283914384;
extern String_t* _stringLiteral3450779518;
extern String_t* _stringLiteral1681551641;
extern const uint32_t PARSDataManager_saveAssessmentTime_m1692115370_MetadataUsageId;
extern String_t* _stringLiteral3455956902;
extern const uint32_t PARSDataManager_saveToFile_m3976889622_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral984706734;
extern String_t* _stringLiteral2685047561;
extern String_t* _stringLiteral3451959166;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3748519251;
extern const uint32_t PARSDataManager_roundsToJson_m1935425996_MetadataUsageId;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m864250344_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m815285786_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m3983937259_RuntimeMethod_var;
extern String_t* _stringLiteral921030788;
extern String_t* _stringLiteral2169409668;
extern String_t* _stringLiteral142814509;
extern String_t* _stringLiteral3453007748;
extern String_t* _stringLiteral1556933064;
extern String_t* _stringLiteral2359841222;
extern String_t* _stringLiteral3499573116;
extern String_t* _stringLiteral1556932951;
extern const uint32_t PARSDataManager_saveToFile_m2008296848_MetadataUsageId;
extern RuntimeClass* TextAsset_t3022178571_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonHelper_getJsonArray_TisQuestion_t1471288757_m378419108_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_m2515147361_RuntimeMethod_var;
extern String_t* _stringLiteral1456421895;
extern const uint32_t PARSDataManager_retrieveAnswers_m2899432400_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var;
extern String_t* _stringLiteral3450517379;
extern const uint32_t ResultAnswersList_populateList_m150961407_MetadataUsageId;
extern const RuntimeMethod* List_1_Contains_m3852460914_RuntimeMethod_var;
extern const uint32_t ResultAnswersList_populateCorrectList_m2868273776_MetadataUsageId;
extern String_t* _stringLiteral1608650950;
extern String_t* _stringLiteral3323403006;
extern String_t* _stringLiteral3452614523;
extern const uint32_t ResultCardCell_populateAssessmentResults_m3462029152_MetadataUsageId;
extern const RuntimeType* AssessmentController_t2586697688_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* AssessmentController_t2586697688_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisResultCardCell_t3938479119_m1896471127_RuntimeMethod_var;
extern const uint32_t ResultsController_Start_m2207440578_MetadataUsageId;
extern const uint32_t ResultsController_endSession_m2810958949_MetadataUsageId;
extern const uint32_t Round__ctor_m229890800_MetadataUsageId;
extern const uint32_t Round_completeRound_m1302899356_MetadataUsageId;
extern const uint32_t Round_getResponseHazardNames_m3355812307_MetadataUsageId;
extern String_t* _stringLiteral1593182404;
extern const uint32_t SceneLink_ChangeToScene_m2624128699_MetadataUsageId;
extern const uint32_t Settings_Awake_m1564446969_MetadataUsageId;
extern const uint32_t Start_Button_MoveFile_Start_m3707627426_MetadataUsageId;
extern const uint32_t ToggleController_Start_m3255508610_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisImage_t2670269651_m2604193531_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var;
extern String_t* _stringLiteral1484129813;
extern String_t* _stringLiteral2049384710;
extern String_t* _stringLiteral4003399582;
extern String_t* _stringLiteral1649205087;
extern String_t* _stringLiteral4232524195;
extern const uint32_t TrainingCollectionCell_reloadUI_m827093517_MetadataUsageId;
extern const uint32_t TrainingCollectionCell_setSummaryTextBox_m3467887963_MetadataUsageId;
extern RuntimeClass* CellPressedCallBack_t865333736_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTrainingCollectionCell_t2778354195_m1210859829_RuntimeMethod_var;
extern const RuntimeMethod* TrainingCollectionController_cellPressed_m3149019868_RuntimeMethod_var;
extern const uint32_t TrainingCollectionController_addCell_m3008532179_MetadataUsageId;
extern String_t* _stringLiteral1758576363;
extern const uint32_t TrainingCollectionController_cellPressed_m3149019868_MetadataUsageId;
extern String_t* _stringLiteral3173330993;
extern const uint32_t TrainingCollectionController_removeAllCells_m2696540309_MetadataUsageId;
extern RuntimeClass* UnityAction_2_t2165061829_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TrainingController_OnSceneLoaded_m353045012_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_2__ctor_m2949990045_RuntimeMethod_var;
extern const uint32_t TrainingController_OnEnable_m3846267760_MetadataUsageId;
extern RuntimeClass* TrainingDataManager_t3084013207_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3414554074;
extern const uint32_t TrainingController_Start_m2827282609_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m2027888975_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m2252741316_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m370746012_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4029193529_RuntimeMethod_var;
extern String_t* _stringLiteral3150062864;
extern const uint32_t TrainingController_setOtherStatesToOff_m1651245967_MetadataUsageId;
extern const uint32_t TrainingController_startRound_m1701146648_MetadataUsageId;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTrainingCollectionController_t2905092020_m3022184610_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisTrainingHazardController_t987698733_m4062657134_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1366643004_RuntimeMethod_var;
extern String_t* _stringLiteral3625332488;
extern String_t* _stringLiteral3723644332;
extern String_t* _stringLiteral828859856;
extern const uint32_t TrainingController_beginRound_m1547517853_MetadataUsageId;
extern RuntimeClass* List_1_t2270999925_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m2660807848_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m4193797784_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m76980947_RuntimeMethod_var;
extern const uint32_t TrainingController_completeCurrentRound_m2205976968_MetadataUsageId;
extern String_t* _stringLiteral1965291424;
extern String_t* _stringLiteral2133593295;
extern const uint32_t TrainingController_complete_m806312153_MetadataUsageId;
extern String_t* _stringLiteral4008285834;
extern const uint32_t TrainingDataManager_save_m2989509151_MetadataUsageId;
extern const uint32_t TrainingDataManager_addTimesToJson_m3839368256_MetadataUsageId;
extern String_t* _stringLiteral1738631339;
extern String_t* _stringLiteral1669698311;
extern String_t* _stringLiteral629592751;
extern const uint32_t TrainingDataManager_addRoundsToJson_m480598126_MetadataUsageId;
extern String_t* _stringLiteral3471027431;
extern const uint32_t TrainingDataManager_storeToFile_m3737157907_MetadataUsageId;
extern RuntimeClass* TrainingHazard_t798925183_il2cpp_TypeInfo_var;
extern RuntimeClass* HazardOffState_t4154887258_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisHazardIconController_t3601592792_m4269302997_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisHazardContentView_t2572541359_m2937662336_RuntimeMethod_var;
extern String_t* _stringLiteral3135112755;
extern String_t* _stringLiteral4181604528;
extern const uint32_t TrainingHazardController_Start_m3901289496_MetadataUsageId;
extern RuntimeClass* HazardOnState_t4192084759_il2cpp_TypeInfo_var;
extern const uint32_t TrainingHazardController_Update_m3678155068_MetadataUsageId;
extern String_t* _stringLiteral3495164950;
extern const uint32_t TrainingHazardController_setColor_m4124926025_MetadataUsageId;
extern String_t* _stringLiteral469513365;
extern const uint32_t TrainingHazardController_SetState_m3812308502_MetadataUsageId;
extern String_t* _stringLiteral3187260365;
extern const uint32_t TrainingHazardController_SetState_m102977102_MetadataUsageId;
extern String_t* _stringLiteral275796330;
extern const uint32_t TrainingHazardController_ToggleState_m3766278890_MetadataUsageId;
extern const uint32_t TrainingHazardController_SetStateOff_m2749530923_MetadataUsageId;
extern String_t* _stringLiteral2776651368;
extern const uint32_t URL_Access_TaskOnClick_m3205665750_MetadataUsageId;
extern const uint32_t URL_Access_Conditional_TaskOnClick_m566987448_MetadataUsageId;

struct QuestionU5BU5D_t3050773464;
struct StringU5BU5D_t1281789340;
struct GameObjectU5BU5D_t3328599146;
struct Vector3U5BU5D_t1718750761;
struct Int32U5BU5D_t385246372;
struct SpriteRendererU5BU5D_t911335936;
struct TextU5BU5D_t422084607;
struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745548_H
#define U3CMODULEU3E_T692745548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745548 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745548_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef NETWORKCREDENTIAL_T3282608323_H
#define NETWORKCREDENTIAL_T3282608323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.NetworkCredential
struct  NetworkCredential_t3282608323  : public RuntimeObject
{
public:
	// System.String System.Net.NetworkCredential::userName
	String_t* ___userName_0;
	// System.String System.Net.NetworkCredential::password
	String_t* ___password_1;
	// System.String System.Net.NetworkCredential::domain
	String_t* ___domain_2;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(NetworkCredential_t3282608323, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_password_1() { return static_cast<int32_t>(offsetof(NetworkCredential_t3282608323, ___password_1)); }
	inline String_t* get_password_1() const { return ___password_1; }
	inline String_t** get_address_of_password_1() { return &___password_1; }
	inline void set_password_1(String_t* value)
	{
		___password_1 = value;
		Il2CppCodeGenWriteBarrier((&___password_1), value);
	}

	inline static int32_t get_offset_of_domain_2() { return static_cast<int32_t>(offsetof(NetworkCredential_t3282608323, ___domain_2)); }
	inline String_t* get_domain_2() const { return ___domain_2; }
	inline String_t** get_address_of_domain_2() { return &___domain_2; }
	inline void set_domain_2(String_t* value)
	{
		___domain_2 = value;
		Il2CppCodeGenWriteBarrier((&___domain_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKCREDENTIAL_T3282608323_H
#ifndef LIST_1_T2459773475_H
#define LIST_1_T2459773475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<TrainingHazardController>
struct  List_1_t2459773475  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrainingHazardControllerU5BU5D_t483553920* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2459773475, ____items_1)); }
	inline TrainingHazardControllerU5BU5D_t483553920* get__items_1() const { return ____items_1; }
	inline TrainingHazardControllerU5BU5D_t483553920** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrainingHazardControllerU5BU5D_t483553920* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2459773475, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2459773475, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2459773475_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TrainingHazardControllerU5BU5D_t483553920* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2459773475_StaticFields, ___EmptyArray_4)); }
	inline TrainingHazardControllerU5BU5D_t483553920* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TrainingHazardControllerU5BU5D_t483553920** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TrainingHazardControllerU5BU5D_t483553920* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2459773475_H
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
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef COLLECTION_1_T2173991477_H
#define COLLECTION_1_T2173991477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<System.Net.Mail.MailAddress>
struct  Collection_1_t2173991477  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.Collection`1::syncRoot
	RuntimeObject * ___syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Collection_1_t2173991477, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t2173991477, ___syncRoot_1)); }
	inline RuntimeObject * get_syncRoot_1() const { return ___syncRoot_1; }
	inline RuntimeObject ** get_address_of_syncRoot_1() { return &___syncRoot_1; }
	inline void set_syncRoot_1(RuntimeObject * value)
	{
		___syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTION_1_T2173991477_H
#ifndef COLLECTION_1_T1728354115_H
#define COLLECTION_1_T1728354115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<System.Net.Mail.Attachment>
struct  Collection_1_t1728354115  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.Collection`1::syncRoot
	RuntimeObject * ___syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Collection_1_t1728354115, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t1728354115, ___syncRoot_1)); }
	inline RuntimeObject * get_syncRoot_1() const { return ___syncRoot_1; }
	inline RuntimeObject ** get_address_of_syncRoot_1() { return &___syncRoot_1; }
	inline void set_syncRoot_1(RuntimeObject * value)
	{
		___syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTION_1_T1728354115_H
#ifndef X509CERTIFICATE_T713131622_H
#define X509CERTIFICATE_T713131622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t713131622  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t489243024 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t4116647657* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___x509_0)); }
	inline X509Certificate_t489243024 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t489243024 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t489243024 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t4116647657* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t4116647657* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T713131622_H
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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1B_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1C_41;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1B_40() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1B_40)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1B_40() const { return ___U3CU3Ef__switchU24map1B_40; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1B_40() { return &___U3CU3Ef__switchU24map1B_40; }
	inline void set_U3CU3Ef__switchU24map1B_40(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1B_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1B_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_41() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1C_41)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1C_41() const { return ___U3CU3Ef__switchU24map1C_41; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1C_41() { return &___U3CU3Ef__switchU24map1C_41; }
	inline void set_U3CU3Ef__switchU24map1C_41(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1C_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef LIST_1_T184529417_H
#define LIST_1_T184529417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Round>
struct  List_1_t184529417  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RoundU5BU5D_t1371029570* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t184529417, ____items_1)); }
	inline RoundU5BU5D_t1371029570* get__items_1() const { return ____items_1; }
	inline RoundU5BU5D_t1371029570** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RoundU5BU5D_t1371029570* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t184529417, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t184529417, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t184529417_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	RoundU5BU5D_t1371029570* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t184529417_StaticFields, ___EmptyArray_4)); }
	inline RoundU5BU5D_t1371029570* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline RoundU5BU5D_t1371029570** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(RoundU5BU5D_t1371029570* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T184529417_H
#ifndef LIST_1_T2270999925_H
#define LIST_1_T2270999925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<TrainingHazard>
struct  List_1_t2270999925  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrainingHazardU5BU5D_t3102508454* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2270999925, ____items_1)); }
	inline TrainingHazardU5BU5D_t3102508454* get__items_1() const { return ____items_1; }
	inline TrainingHazardU5BU5D_t3102508454** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrainingHazardU5BU5D_t3102508454* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2270999925, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2270999925, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2270999925_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	TrainingHazardU5BU5D_t3102508454* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2270999925_StaticFields, ___EmptyArray_4)); }
	inline TrainingHazardU5BU5D_t3102508454* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline TrainingHazardU5BU5D_t3102508454** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(TrainingHazardU5BU5D_t3102508454* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2270999925_H
#ifndef U3CTIMERU3EC__ITERATOR0_T2808194927_H
#define U3CTIMERU3EC__ITERATOR0_T2808194927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Finish_Button/<timer>c__Iterator0
struct  U3CtimerU3Ec__Iterator0_t2808194927  : public RuntimeObject
{
public:
	// Finish_Button Finish_Button/<timer>c__Iterator0::$this
	Finish_Button_t3878445350 * ___U24this_0;
	// System.Object Finish_Button/<timer>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Finish_Button/<timer>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Finish_Button/<timer>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CtimerU3Ec__Iterator0_t2808194927, ___U24this_0)); }
	inline Finish_Button_t3878445350 * get_U24this_0() const { return ___U24this_0; }
	inline Finish_Button_t3878445350 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Finish_Button_t3878445350 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CtimerU3Ec__Iterator0_t2808194927, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CtimerU3Ec__Iterator0_t2808194927, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CtimerU3Ec__Iterator0_t2808194927, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTIMERU3EC__ITERATOR0_T2808194927_H
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
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef DICTIONARY_2_T1067045639_H
#define DICTIONARY_2_T1067045639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct  Dictionary_2_t1067045639  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5DU5BU5D_t2611993717* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___valueSlots_7)); }
	inline StringU5BU5DU5BU5D_t2611993717* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5DU5BU5D_t2611993717** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5DU5BU5D_t2611993717* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1067045639_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1462405433 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1067045639_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1462405433 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1462405433 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1462405433 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1067045639_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
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
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StringU5BU5D_t1281789340* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ___EmptyArray_4)); }
	inline StringU5BU5D_t1281789340* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StringU5BU5D_t1281789340** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StringU5BU5D_t1281789340* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
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
#ifndef LIST_1_T1807265320_H
#define LIST_1_T1807265320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Hazard>
struct  List_1_t1807265320  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	HazardU5BU5D_t3116993735* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1807265320, ____items_1)); }
	inline HazardU5BU5D_t3116993735* get__items_1() const { return ____items_1; }
	inline HazardU5BU5D_t3116993735** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(HazardU5BU5D_t3116993735* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1807265320, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1807265320, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1807265320_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	HazardU5BU5D_t3116993735* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1807265320_StaticFields, ___EmptyArray_4)); }
	inline HazardU5BU5D_t3116993735* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline HazardU5BU5D_t3116993735** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(HazardU5BU5D_t3116993735* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1807265320_H
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
#ifndef MAILADDRESS_T3229635559_H
#define MAILADDRESS_T3229635559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.MailAddress
struct  MailAddress_t3229635559  : public RuntimeObject
{
public:
	// System.String System.Net.Mail.MailAddress::address
	String_t* ___address_0;
	// System.String System.Net.Mail.MailAddress::displayName
	String_t* ___displayName_1;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(MailAddress_t3229635559, ___address_0)); }
	inline String_t* get_address_0() const { return ___address_0; }
	inline String_t** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(String_t* value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier((&___address_0), value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MailAddress_t3229635559, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAILADDRESS_T3229635559_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef MAILADDRESSCOLLECTION_T2881748872_H
#define MAILADDRESSCOLLECTION_T2881748872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.MailAddressCollection
struct  MailAddressCollection_t2881748872  : public Collection_1_t2173991477
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAILADDRESSCOLLECTION_T2881748872_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef ATTACHMENTCOLLECTION_T1412086921_H
#define ATTACHMENTCOLLECTION_T1412086921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.AttachmentCollection
struct  AttachmentCollection_t1412086921  : public Collection_1_t1728354115
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTACHMENTCOLLECTION_T1412086921_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef ENUMERATOR_T54050056_H
#define ENUMERATOR_T54050056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<TrainingHazardController>
struct  Enumerator_t54050056 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2459773475 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	TrainingHazardController_t987698733 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t54050056, ___l_0)); }
	inline List_1_t2459773475 * get_l_0() const { return ___l_0; }
	inline List_1_t2459773475 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2459773475 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t54050056, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t54050056, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t54050056, ___current_3)); }
	inline TrainingHazardController_t987698733 * get_current_3() const { return ___current_3; }
	inline TrainingHazardController_t987698733 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(TrainingHazardController_t987698733 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T54050056_H
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
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef ENUMERATOR_T3696509197_H
#define ENUMERATOR_T3696509197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Hazard>
struct  Enumerator_t3696509197 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1807265320 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Hazard_t335190578 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3696509197, ___l_0)); }
	inline List_1_t1807265320 * get_l_0() const { return ___l_0; }
	inline List_1_t1807265320 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1807265320 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3696509197, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3696509197, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3696509197, ___current_3)); }
	inline Hazard_t335190578 * get_current_3() const { return ___current_3; }
	inline Hazard_t335190578 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Hazard_t335190578 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3696509197_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef ENUMERATOR_T2073773294_H
#define ENUMERATOR_T2073773294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Round>
struct  Enumerator_t2073773294 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t184529417 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Round_t3007421971 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2073773294, ___l_0)); }
	inline List_1_t184529417 * get_l_0() const { return ___l_0; }
	inline List_1_t184529417 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t184529417 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2073773294, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2073773294, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2073773294, ___current_3)); }
	inline Round_t3007421971 * get_current_3() const { return ___current_3; }
	inline Round_t3007421971 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Round_t3007421971 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2073773294_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
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
#ifndef CHARACTERVALIDATION_T4051914437_H
#define CHARACTERVALIDATION_T4051914437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/CharacterValidation
struct  CharacterValidation_t4051914437 
{
public:
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t4051914437, ___value___1)); }
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
#endif // CHARACTERVALIDATION_T4051914437_H
#ifndef LINETYPE_T4214648469_H
#define LINETYPE_T4214648469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/LineType
struct  LineType_t4214648469 
{
public:
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t4214648469, ___value___1)); }
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
#endif // LINETYPE_T4214648469_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#define TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t1530597702 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t1530597702, ___value___1)); }
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
#endif // TOUCHSCREENKEYBOARDTYPE_T1530597702_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef INPUTTYPE_T1770400679_H
#define INPUTTYPE_T1770400679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/InputType
struct  InputType_t1770400679 
{
public:
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1770400679, ___value___1)); }
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
#endif // INPUTTYPE_T1770400679_H
#ifndef LOADSCENEMODE_T3251202195_H
#define LOADSCENEMODE_T3251202195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t3251202195 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadSceneMode_t3251202195, ___value___1)); }
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
#endif // LOADSCENEMODE_T3251202195_H
#ifndef CONTENTTYPE_T1787303396_H
#define CONTENTTYPE_T1787303396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField/ContentType
struct  ContentType_t1787303396 
{
public:
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t1787303396, ___value___1)); }
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
#endif // CONTENTTYPE_T1787303396_H
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
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___1)); }
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
#endif // TOGGLETRANSITION_T3587297765_H
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
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
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
#endif // TRANSITION_T1769908631_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
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
#endif // SELECTIONSTATE_T2656606514_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef TRANSFERENCODING_T4058633441_H
#define TRANSFERENCODING_T4058633441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mime.TransferEncoding
struct  TransferEncoding_t4058633441 
{
public:
	// System.Int32 System.Net.Mime.TransferEncoding::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TransferEncoding_t4058633441, ___value___1)); }
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
#endif // TRANSFERENCODING_T4058633441_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
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
#endif // MODE_T1066900953_H
#ifndef TEXTANCHOR_T2035777396_H
#define TEXTANCHOR_T2035777396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAnchor
struct  TextAnchor_t2035777396 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextAnchor_t2035777396, ___value___1)); }
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
#endif // TEXTANCHOR_T2035777396_H
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
#ifndef MAILPRIORITY_T877289049_H
#define MAILPRIORITY_T877289049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.MailPriority
struct  MailPriority_t877289049 
{
public:
	// System.Int32 System.Net.Mail.MailPriority::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MailPriority_t877289049, ___value___1)); }
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
#endif // MAILPRIORITY_T877289049_H
#ifndef SMTPDELIVERYMETHOD_T2051892378_H
#define SMTPDELIVERYMETHOD_T2051892378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpDeliveryMethod
struct  SmtpDeliveryMethod_t2051892378 
{
public:
	// System.Int32 System.Net.Mail.SmtpDeliveryMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SmtpDeliveryMethod_t2051892378, ___value___1)); }
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
#endif // SMTPDELIVERYMETHOD_T2051892378_H
#ifndef AUTHMECHS_T4087609418_H
#define AUTHMECHS_T4087609418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpClient/AuthMechs
struct  AuthMechs_t4087609418 
{
public:
	// System.Int32 System.Net.Mail.SmtpClient/AuthMechs::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AuthMechs_t4087609418, ___value___1)); }
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
#endif // AUTHMECHS_T4087609418_H
#ifndef STORELOCATION_T2864310644_H
#define STORELOCATION_T2864310644_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.StoreLocation
struct  StoreLocation_t2864310644 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.StoreLocation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StoreLocation_t2864310644, ___value___1)); }
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
#endif // STORELOCATION_T2864310644_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___1)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
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
#endif // TYPE_T1152881528_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
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
#endif // FILLMETHOD_T1167457570_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
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
#ifndef SSLPOLICYERRORS_T2205227823_H
#define SSLPOLICYERRORS_T2205227823_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2205227823 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2205227823, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T2205227823_H
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
#ifndef MAILMESSAGE_T154277952_H
#define MAILMESSAGE_T154277952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.MailMessage
struct  MailMessage_t154277952  : public RuntimeObject
{
public:
	// System.Net.Mail.AlternateViewCollection System.Net.Mail.MailMessage::alternateViews
	AlternateViewCollection_t988355290 * ___alternateViews_0;
	// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::attachments
	AttachmentCollection_t1412086921 * ___attachments_1;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::bcc
	MailAddressCollection_t2881748872 * ___bcc_2;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::replyTo
	MailAddressCollection_t2881748872 * ___replyTo_3;
	// System.String System.Net.Mail.MailMessage::body
	String_t* ___body_4;
	// System.Net.Mail.MailPriority System.Net.Mail.MailMessage::priority
	int32_t ___priority_5;
	// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::sender
	MailAddress_t3229635559 * ___sender_6;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::cc
	MailAddressCollection_t2881748872 * ___cc_7;
	// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::from
	MailAddress_t3229635559 * ___from_8;
	// System.Collections.Specialized.NameValueCollection System.Net.Mail.MailMessage::headers
	NameValueCollection_t407452768 * ___headers_9;
	// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::to
	MailAddressCollection_t2881748872 * ___to_10;
	// System.String System.Net.Mail.MailMessage::subject
	String_t* ___subject_11;
	// System.Text.Encoding System.Net.Mail.MailMessage::subjectEncoding
	Encoding_t1523322056 * ___subjectEncoding_12;
	// System.Text.Encoding System.Net.Mail.MailMessage::bodyEncoding
	Encoding_t1523322056 * ___bodyEncoding_13;
	// System.Text.Encoding System.Net.Mail.MailMessage::headersEncoding
	Encoding_t1523322056 * ___headersEncoding_14;
	// System.Boolean System.Net.Mail.MailMessage::isHtml
	bool ___isHtml_15;

public:
	inline static int32_t get_offset_of_alternateViews_0() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___alternateViews_0)); }
	inline AlternateViewCollection_t988355290 * get_alternateViews_0() const { return ___alternateViews_0; }
	inline AlternateViewCollection_t988355290 ** get_address_of_alternateViews_0() { return &___alternateViews_0; }
	inline void set_alternateViews_0(AlternateViewCollection_t988355290 * value)
	{
		___alternateViews_0 = value;
		Il2CppCodeGenWriteBarrier((&___alternateViews_0), value);
	}

	inline static int32_t get_offset_of_attachments_1() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___attachments_1)); }
	inline AttachmentCollection_t1412086921 * get_attachments_1() const { return ___attachments_1; }
	inline AttachmentCollection_t1412086921 ** get_address_of_attachments_1() { return &___attachments_1; }
	inline void set_attachments_1(AttachmentCollection_t1412086921 * value)
	{
		___attachments_1 = value;
		Il2CppCodeGenWriteBarrier((&___attachments_1), value);
	}

	inline static int32_t get_offset_of_bcc_2() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___bcc_2)); }
	inline MailAddressCollection_t2881748872 * get_bcc_2() const { return ___bcc_2; }
	inline MailAddressCollection_t2881748872 ** get_address_of_bcc_2() { return &___bcc_2; }
	inline void set_bcc_2(MailAddressCollection_t2881748872 * value)
	{
		___bcc_2 = value;
		Il2CppCodeGenWriteBarrier((&___bcc_2), value);
	}

	inline static int32_t get_offset_of_replyTo_3() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___replyTo_3)); }
	inline MailAddressCollection_t2881748872 * get_replyTo_3() const { return ___replyTo_3; }
	inline MailAddressCollection_t2881748872 ** get_address_of_replyTo_3() { return &___replyTo_3; }
	inline void set_replyTo_3(MailAddressCollection_t2881748872 * value)
	{
		___replyTo_3 = value;
		Il2CppCodeGenWriteBarrier((&___replyTo_3), value);
	}

	inline static int32_t get_offset_of_body_4() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___body_4)); }
	inline String_t* get_body_4() const { return ___body_4; }
	inline String_t** get_address_of_body_4() { return &___body_4; }
	inline void set_body_4(String_t* value)
	{
		___body_4 = value;
		Il2CppCodeGenWriteBarrier((&___body_4), value);
	}

	inline static int32_t get_offset_of_priority_5() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___priority_5)); }
	inline int32_t get_priority_5() const { return ___priority_5; }
	inline int32_t* get_address_of_priority_5() { return &___priority_5; }
	inline void set_priority_5(int32_t value)
	{
		___priority_5 = value;
	}

	inline static int32_t get_offset_of_sender_6() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___sender_6)); }
	inline MailAddress_t3229635559 * get_sender_6() const { return ___sender_6; }
	inline MailAddress_t3229635559 ** get_address_of_sender_6() { return &___sender_6; }
	inline void set_sender_6(MailAddress_t3229635559 * value)
	{
		___sender_6 = value;
		Il2CppCodeGenWriteBarrier((&___sender_6), value);
	}

	inline static int32_t get_offset_of_cc_7() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___cc_7)); }
	inline MailAddressCollection_t2881748872 * get_cc_7() const { return ___cc_7; }
	inline MailAddressCollection_t2881748872 ** get_address_of_cc_7() { return &___cc_7; }
	inline void set_cc_7(MailAddressCollection_t2881748872 * value)
	{
		___cc_7 = value;
		Il2CppCodeGenWriteBarrier((&___cc_7), value);
	}

	inline static int32_t get_offset_of_from_8() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___from_8)); }
	inline MailAddress_t3229635559 * get_from_8() const { return ___from_8; }
	inline MailAddress_t3229635559 ** get_address_of_from_8() { return &___from_8; }
	inline void set_from_8(MailAddress_t3229635559 * value)
	{
		___from_8 = value;
		Il2CppCodeGenWriteBarrier((&___from_8), value);
	}

	inline static int32_t get_offset_of_headers_9() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___headers_9)); }
	inline NameValueCollection_t407452768 * get_headers_9() const { return ___headers_9; }
	inline NameValueCollection_t407452768 ** get_address_of_headers_9() { return &___headers_9; }
	inline void set_headers_9(NameValueCollection_t407452768 * value)
	{
		___headers_9 = value;
		Il2CppCodeGenWriteBarrier((&___headers_9), value);
	}

	inline static int32_t get_offset_of_to_10() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___to_10)); }
	inline MailAddressCollection_t2881748872 * get_to_10() const { return ___to_10; }
	inline MailAddressCollection_t2881748872 ** get_address_of_to_10() { return &___to_10; }
	inline void set_to_10(MailAddressCollection_t2881748872 * value)
	{
		___to_10 = value;
		Il2CppCodeGenWriteBarrier((&___to_10), value);
	}

	inline static int32_t get_offset_of_subject_11() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___subject_11)); }
	inline String_t* get_subject_11() const { return ___subject_11; }
	inline String_t** get_address_of_subject_11() { return &___subject_11; }
	inline void set_subject_11(String_t* value)
	{
		___subject_11 = value;
		Il2CppCodeGenWriteBarrier((&___subject_11), value);
	}

	inline static int32_t get_offset_of_subjectEncoding_12() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___subjectEncoding_12)); }
	inline Encoding_t1523322056 * get_subjectEncoding_12() const { return ___subjectEncoding_12; }
	inline Encoding_t1523322056 ** get_address_of_subjectEncoding_12() { return &___subjectEncoding_12; }
	inline void set_subjectEncoding_12(Encoding_t1523322056 * value)
	{
		___subjectEncoding_12 = value;
		Il2CppCodeGenWriteBarrier((&___subjectEncoding_12), value);
	}

	inline static int32_t get_offset_of_bodyEncoding_13() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___bodyEncoding_13)); }
	inline Encoding_t1523322056 * get_bodyEncoding_13() const { return ___bodyEncoding_13; }
	inline Encoding_t1523322056 ** get_address_of_bodyEncoding_13() { return &___bodyEncoding_13; }
	inline void set_bodyEncoding_13(Encoding_t1523322056 * value)
	{
		___bodyEncoding_13 = value;
		Il2CppCodeGenWriteBarrier((&___bodyEncoding_13), value);
	}

	inline static int32_t get_offset_of_headersEncoding_14() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___headersEncoding_14)); }
	inline Encoding_t1523322056 * get_headersEncoding_14() const { return ___headersEncoding_14; }
	inline Encoding_t1523322056 ** get_address_of_headersEncoding_14() { return &___headersEncoding_14; }
	inline void set_headersEncoding_14(Encoding_t1523322056 * value)
	{
		___headersEncoding_14 = value;
		Il2CppCodeGenWriteBarrier((&___headersEncoding_14), value);
	}

	inline static int32_t get_offset_of_isHtml_15() { return static_cast<int32_t>(offsetof(MailMessage_t154277952, ___isHtml_15)); }
	inline bool get_isHtml_15() const { return ___isHtml_15; }
	inline bool* get_address_of_isHtml_15() { return &___isHtml_15; }
	inline void set_isHtml_15(bool value)
	{
		___isHtml_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAILMESSAGE_T154277952_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
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
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef X509CHAIN_T194917408_H
#define X509CHAIN_T194917408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Chain
struct  X509Chain_t194917408  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Chain::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::elements
	X509ChainElementCollection_t3110968994 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::policy
	X509ChainPolicy_t2426922870 * ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::status
	X509ChainStatusU5BU5D_t2685945535* ___status_3;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509Chain::max_path_length
	int32_t ___max_path_length_5;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Chain::working_issuer_name
	X500DistinguishedName_t875709727 * ___working_issuer_name_6;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Chain::working_public_key
	AsymmetricAlgorithm_t932037087 * ___working_public_key_7;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509Chain::bce_restriction
	X509ChainElement_t1464056338 * ___bce_restriction_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::roots
	X509Store_t2922691911 * ___roots_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::cas
	X509Store_t2922691911 * ___cas_10;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::collection
	X509Certificate2Collection_t2111161276 * ___collection_11;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___location_0)); }
	inline int32_t get_location_0() const { return ___location_0; }
	inline int32_t* get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(int32_t value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_elements_1() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___elements_1)); }
	inline X509ChainElementCollection_t3110968994 * get_elements_1() const { return ___elements_1; }
	inline X509ChainElementCollection_t3110968994 ** get_address_of_elements_1() { return &___elements_1; }
	inline void set_elements_1(X509ChainElementCollection_t3110968994 * value)
	{
		___elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___elements_1), value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___policy_2)); }
	inline X509ChainPolicy_t2426922870 * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_t2426922870 ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_t2426922870 * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier((&___policy_2), value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___status_3)); }
	inline X509ChainStatusU5BU5D_t2685945535* get_status_3() const { return ___status_3; }
	inline X509ChainStatusU5BU5D_t2685945535** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(X509ChainStatusU5BU5D_t2685945535* value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier((&___status_3), value);
	}

	inline static int32_t get_offset_of_max_path_length_5() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___max_path_length_5)); }
	inline int32_t get_max_path_length_5() const { return ___max_path_length_5; }
	inline int32_t* get_address_of_max_path_length_5() { return &___max_path_length_5; }
	inline void set_max_path_length_5(int32_t value)
	{
		___max_path_length_5 = value;
	}

	inline static int32_t get_offset_of_working_issuer_name_6() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___working_issuer_name_6)); }
	inline X500DistinguishedName_t875709727 * get_working_issuer_name_6() const { return ___working_issuer_name_6; }
	inline X500DistinguishedName_t875709727 ** get_address_of_working_issuer_name_6() { return &___working_issuer_name_6; }
	inline void set_working_issuer_name_6(X500DistinguishedName_t875709727 * value)
	{
		___working_issuer_name_6 = value;
		Il2CppCodeGenWriteBarrier((&___working_issuer_name_6), value);
	}

	inline static int32_t get_offset_of_working_public_key_7() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___working_public_key_7)); }
	inline AsymmetricAlgorithm_t932037087 * get_working_public_key_7() const { return ___working_public_key_7; }
	inline AsymmetricAlgorithm_t932037087 ** get_address_of_working_public_key_7() { return &___working_public_key_7; }
	inline void set_working_public_key_7(AsymmetricAlgorithm_t932037087 * value)
	{
		___working_public_key_7 = value;
		Il2CppCodeGenWriteBarrier((&___working_public_key_7), value);
	}

	inline static int32_t get_offset_of_bce_restriction_8() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___bce_restriction_8)); }
	inline X509ChainElement_t1464056338 * get_bce_restriction_8() const { return ___bce_restriction_8; }
	inline X509ChainElement_t1464056338 ** get_address_of_bce_restriction_8() { return &___bce_restriction_8; }
	inline void set_bce_restriction_8(X509ChainElement_t1464056338 * value)
	{
		___bce_restriction_8 = value;
		Il2CppCodeGenWriteBarrier((&___bce_restriction_8), value);
	}

	inline static int32_t get_offset_of_roots_9() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___roots_9)); }
	inline X509Store_t2922691911 * get_roots_9() const { return ___roots_9; }
	inline X509Store_t2922691911 ** get_address_of_roots_9() { return &___roots_9; }
	inline void set_roots_9(X509Store_t2922691911 * value)
	{
		___roots_9 = value;
		Il2CppCodeGenWriteBarrier((&___roots_9), value);
	}

	inline static int32_t get_offset_of_cas_10() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___cas_10)); }
	inline X509Store_t2922691911 * get_cas_10() const { return ___cas_10; }
	inline X509Store_t2922691911 ** get_address_of_cas_10() { return &___cas_10; }
	inline void set_cas_10(X509Store_t2922691911 * value)
	{
		___cas_10 = value;
		Il2CppCodeGenWriteBarrier((&___cas_10), value);
	}

	inline static int32_t get_offset_of_collection_11() { return static_cast<int32_t>(offsetof(X509Chain_t194917408, ___collection_11)); }
	inline X509Certificate2Collection_t2111161276 * get_collection_11() const { return ___collection_11; }
	inline X509Certificate2Collection_t2111161276 ** get_address_of_collection_11() { return &___collection_11; }
	inline void set_collection_11(X509Certificate2Collection_t2111161276 * value)
	{
		___collection_11 = value;
		Il2CppCodeGenWriteBarrier((&___collection_11), value);
	}
};

struct X509Chain_t194917408_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::Empty
	X509ChainStatusU5BU5D_t2685945535* ___Empty_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$map17
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map17_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$map18
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map18_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_14;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(X509Chain_t194917408_StaticFields, ___Empty_4)); }
	inline X509ChainStatusU5BU5D_t2685945535* get_Empty_4() const { return ___Empty_4; }
	inline X509ChainStatusU5BU5D_t2685945535** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(X509ChainStatusU5BU5D_t2685945535* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map17_12() { return static_cast<int32_t>(offsetof(X509Chain_t194917408_StaticFields, ___U3CU3Ef__switchU24map17_12)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map17_12() const { return ___U3CU3Ef__switchU24map17_12; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map17_12() { return &___U3CU3Ef__switchU24map17_12; }
	inline void set_U3CU3Ef__switchU24map17_12(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map17_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map17_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map18_13() { return static_cast<int32_t>(offsetof(X509Chain_t194917408_StaticFields, ___U3CU3Ef__switchU24map18_13)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map18_13() const { return ___U3CU3Ef__switchU24map18_13; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map18_13() { return &___U3CU3Ef__switchU24map18_13; }
	inline void set_U3CU3Ef__switchU24map18_13(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map18_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map18_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_14() { return static_cast<int32_t>(offsetof(X509Chain_t194917408_StaticFields, ___U3CU3Ef__switchU24map19_14)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_14() const { return ___U3CU3Ef__switchU24map19_14; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_14() { return &___U3CU3Ef__switchU24map19_14; }
	inline void set_U3CU3Ef__switchU24map19_14(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T194917408_H
#ifndef SMTPCLIENT_T1048709847_H
#define SMTPCLIENT_T1048709847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.SmtpClient
struct  SmtpClient_t1048709847  : public RuntimeObject
{
public:
	// System.String System.Net.Mail.SmtpClient::host
	String_t* ___host_0;
	// System.Int32 System.Net.Mail.SmtpClient::port
	int32_t ___port_1;
	// System.Int32 System.Net.Mail.SmtpClient::timeout
	int32_t ___timeout_2;
	// System.Net.ICredentialsByHost System.Net.Mail.SmtpClient::credentials
	RuntimeObject* ___credentials_3;
	// System.String System.Net.Mail.SmtpClient::pickupDirectoryLocation
	String_t* ___pickupDirectoryLocation_4;
	// System.Net.Mail.SmtpDeliveryMethod System.Net.Mail.SmtpClient::deliveryMethod
	int32_t ___deliveryMethod_5;
	// System.Boolean System.Net.Mail.SmtpClient::enableSsl
	bool ___enableSsl_6;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.Mail.SmtpClient::clientCertificates
	X509CertificateCollection_t3399372417 * ___clientCertificates_7;
	// System.Net.Sockets.TcpClient System.Net.Mail.SmtpClient::client
	TcpClient_t822906377 * ___client_8;
	// System.IO.Stream System.Net.Mail.SmtpClient::stream
	Stream_t1273022909 * ___stream_9;
	// System.IO.StreamWriter System.Net.Mail.SmtpClient::writer
	StreamWriter_t1266378904 * ___writer_10;
	// System.IO.StreamReader System.Net.Mail.SmtpClient::reader
	StreamReader_t4009935899 * ___reader_11;
	// System.Int32 System.Net.Mail.SmtpClient::boundaryIndex
	int32_t ___boundaryIndex_12;
	// System.Net.Mail.MailAddress System.Net.Mail.SmtpClient::defaultFrom
	MailAddress_t3229635559 * ___defaultFrom_13;
	// System.Net.Mail.MailMessage System.Net.Mail.SmtpClient::messageInProcess
	MailMessage_t154277952 * ___messageInProcess_14;
	// System.ComponentModel.BackgroundWorker System.Net.Mail.SmtpClient::worker
	BackgroundWorker_t3811013447 * ___worker_15;
	// System.Net.Mail.SmtpClient/AuthMechs System.Net.Mail.SmtpClient::authMechs
	int32_t ___authMechs_16;
	// System.Threading.Mutex System.Net.Mail.SmtpClient::mutex
	Mutex_t3066672582 * ___mutex_17;
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Mail.SmtpClient::callback
	RemoteCertificateValidationCallback_t3014364904 * ___callback_18;

public:
	inline static int32_t get_offset_of_host_0() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___host_0)); }
	inline String_t* get_host_0() const { return ___host_0; }
	inline String_t** get_address_of_host_0() { return &___host_0; }
	inline void set_host_0(String_t* value)
	{
		___host_0 = value;
		Il2CppCodeGenWriteBarrier((&___host_0), value);
	}

	inline static int32_t get_offset_of_port_1() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___port_1)); }
	inline int32_t get_port_1() const { return ___port_1; }
	inline int32_t* get_address_of_port_1() { return &___port_1; }
	inline void set_port_1(int32_t value)
	{
		___port_1 = value;
	}

	inline static int32_t get_offset_of_timeout_2() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___timeout_2)); }
	inline int32_t get_timeout_2() const { return ___timeout_2; }
	inline int32_t* get_address_of_timeout_2() { return &___timeout_2; }
	inline void set_timeout_2(int32_t value)
	{
		___timeout_2 = value;
	}

	inline static int32_t get_offset_of_credentials_3() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___credentials_3)); }
	inline RuntimeObject* get_credentials_3() const { return ___credentials_3; }
	inline RuntimeObject** get_address_of_credentials_3() { return &___credentials_3; }
	inline void set_credentials_3(RuntimeObject* value)
	{
		___credentials_3 = value;
		Il2CppCodeGenWriteBarrier((&___credentials_3), value);
	}

	inline static int32_t get_offset_of_pickupDirectoryLocation_4() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___pickupDirectoryLocation_4)); }
	inline String_t* get_pickupDirectoryLocation_4() const { return ___pickupDirectoryLocation_4; }
	inline String_t** get_address_of_pickupDirectoryLocation_4() { return &___pickupDirectoryLocation_4; }
	inline void set_pickupDirectoryLocation_4(String_t* value)
	{
		___pickupDirectoryLocation_4 = value;
		Il2CppCodeGenWriteBarrier((&___pickupDirectoryLocation_4), value);
	}

	inline static int32_t get_offset_of_deliveryMethod_5() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___deliveryMethod_5)); }
	inline int32_t get_deliveryMethod_5() const { return ___deliveryMethod_5; }
	inline int32_t* get_address_of_deliveryMethod_5() { return &___deliveryMethod_5; }
	inline void set_deliveryMethod_5(int32_t value)
	{
		___deliveryMethod_5 = value;
	}

	inline static int32_t get_offset_of_enableSsl_6() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___enableSsl_6)); }
	inline bool get_enableSsl_6() const { return ___enableSsl_6; }
	inline bool* get_address_of_enableSsl_6() { return &___enableSsl_6; }
	inline void set_enableSsl_6(bool value)
	{
		___enableSsl_6 = value;
	}

	inline static int32_t get_offset_of_clientCertificates_7() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___clientCertificates_7)); }
	inline X509CertificateCollection_t3399372417 * get_clientCertificates_7() const { return ___clientCertificates_7; }
	inline X509CertificateCollection_t3399372417 ** get_address_of_clientCertificates_7() { return &___clientCertificates_7; }
	inline void set_clientCertificates_7(X509CertificateCollection_t3399372417 * value)
	{
		___clientCertificates_7 = value;
		Il2CppCodeGenWriteBarrier((&___clientCertificates_7), value);
	}

	inline static int32_t get_offset_of_client_8() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___client_8)); }
	inline TcpClient_t822906377 * get_client_8() const { return ___client_8; }
	inline TcpClient_t822906377 ** get_address_of_client_8() { return &___client_8; }
	inline void set_client_8(TcpClient_t822906377 * value)
	{
		___client_8 = value;
		Il2CppCodeGenWriteBarrier((&___client_8), value);
	}

	inline static int32_t get_offset_of_stream_9() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___stream_9)); }
	inline Stream_t1273022909 * get_stream_9() const { return ___stream_9; }
	inline Stream_t1273022909 ** get_address_of_stream_9() { return &___stream_9; }
	inline void set_stream_9(Stream_t1273022909 * value)
	{
		___stream_9 = value;
		Il2CppCodeGenWriteBarrier((&___stream_9), value);
	}

	inline static int32_t get_offset_of_writer_10() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___writer_10)); }
	inline StreamWriter_t1266378904 * get_writer_10() const { return ___writer_10; }
	inline StreamWriter_t1266378904 ** get_address_of_writer_10() { return &___writer_10; }
	inline void set_writer_10(StreamWriter_t1266378904 * value)
	{
		___writer_10 = value;
		Il2CppCodeGenWriteBarrier((&___writer_10), value);
	}

	inline static int32_t get_offset_of_reader_11() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___reader_11)); }
	inline StreamReader_t4009935899 * get_reader_11() const { return ___reader_11; }
	inline StreamReader_t4009935899 ** get_address_of_reader_11() { return &___reader_11; }
	inline void set_reader_11(StreamReader_t4009935899 * value)
	{
		___reader_11 = value;
		Il2CppCodeGenWriteBarrier((&___reader_11), value);
	}

	inline static int32_t get_offset_of_boundaryIndex_12() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___boundaryIndex_12)); }
	inline int32_t get_boundaryIndex_12() const { return ___boundaryIndex_12; }
	inline int32_t* get_address_of_boundaryIndex_12() { return &___boundaryIndex_12; }
	inline void set_boundaryIndex_12(int32_t value)
	{
		___boundaryIndex_12 = value;
	}

	inline static int32_t get_offset_of_defaultFrom_13() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___defaultFrom_13)); }
	inline MailAddress_t3229635559 * get_defaultFrom_13() const { return ___defaultFrom_13; }
	inline MailAddress_t3229635559 ** get_address_of_defaultFrom_13() { return &___defaultFrom_13; }
	inline void set_defaultFrom_13(MailAddress_t3229635559 * value)
	{
		___defaultFrom_13 = value;
		Il2CppCodeGenWriteBarrier((&___defaultFrom_13), value);
	}

	inline static int32_t get_offset_of_messageInProcess_14() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___messageInProcess_14)); }
	inline MailMessage_t154277952 * get_messageInProcess_14() const { return ___messageInProcess_14; }
	inline MailMessage_t154277952 ** get_address_of_messageInProcess_14() { return &___messageInProcess_14; }
	inline void set_messageInProcess_14(MailMessage_t154277952 * value)
	{
		___messageInProcess_14 = value;
		Il2CppCodeGenWriteBarrier((&___messageInProcess_14), value);
	}

	inline static int32_t get_offset_of_worker_15() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___worker_15)); }
	inline BackgroundWorker_t3811013447 * get_worker_15() const { return ___worker_15; }
	inline BackgroundWorker_t3811013447 ** get_address_of_worker_15() { return &___worker_15; }
	inline void set_worker_15(BackgroundWorker_t3811013447 * value)
	{
		___worker_15 = value;
		Il2CppCodeGenWriteBarrier((&___worker_15), value);
	}

	inline static int32_t get_offset_of_authMechs_16() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___authMechs_16)); }
	inline int32_t get_authMechs_16() const { return ___authMechs_16; }
	inline int32_t* get_address_of_authMechs_16() { return &___authMechs_16; }
	inline void set_authMechs_16(int32_t value)
	{
		___authMechs_16 = value;
	}

	inline static int32_t get_offset_of_mutex_17() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___mutex_17)); }
	inline Mutex_t3066672582 * get_mutex_17() const { return ___mutex_17; }
	inline Mutex_t3066672582 ** get_address_of_mutex_17() { return &___mutex_17; }
	inline void set_mutex_17(Mutex_t3066672582 * value)
	{
		___mutex_17 = value;
		Il2CppCodeGenWriteBarrier((&___mutex_17), value);
	}

	inline static int32_t get_offset_of_callback_18() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847, ___callback_18)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get_callback_18() const { return ___callback_18; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of_callback_18() { return &___callback_18; }
	inline void set_callback_18(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		___callback_18 = value;
		Il2CppCodeGenWriteBarrier((&___callback_18), value);
	}
};

struct SmtpClient_t1048709847_StaticFields
{
public:
	// System.Net.Security.RemoteCertificateValidationCallback System.Net.Mail.SmtpClient::<>f__am$cache16
	RemoteCertificateValidationCallback_t3014364904 * ___U3CU3Ef__amU24cache16_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.Mail.SmtpClient::<>f__switch$mapE
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapE_20;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_19() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847_StaticFields, ___U3CU3Ef__amU24cache16_19)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get_U3CU3Ef__amU24cache16_19() const { return ___U3CU3Ef__amU24cache16_19; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of_U3CU3Ef__amU24cache16_19() { return &___U3CU3Ef__amU24cache16_19; }
	inline void set_U3CU3Ef__amU24cache16_19(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		___U3CU3Ef__amU24cache16_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache16_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_20() { return static_cast<int32_t>(offsetof(SmtpClient_t1048709847_StaticFields, ___U3CU3Ef__switchU24mapE_20)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapE_20() const { return ___U3CU3Ef__switchU24mapE_20; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapE_20() { return &___U3CU3Ef__switchU24mapE_20; }
	inline void set_U3CU3Ef__switchU24mapE_20(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapE_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMTPCLIENT_T1048709847_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
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
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_2;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_3;
	// System.Boolean System.IO.FileStream::async
	bool ___async_4;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_5;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_6;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_7;
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_8;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_9;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_10;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_11;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_12;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_13;
	// System.String System.IO.FileStream::name
	String_t* ___name_14;
	// System.IntPtr System.IO.FileStream::handle
	intptr_t ___handle_15;

public:
	inline static int32_t get_offset_of_access_2() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_2)); }
	inline int32_t get_access_2() const { return ___access_2; }
	inline int32_t* get_address_of_access_2() { return &___access_2; }
	inline void set_access_2(int32_t value)
	{
		___access_2 = value;
	}

	inline static int32_t get_offset_of_owner_3() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_3)); }
	inline bool get_owner_3() const { return ___owner_3; }
	inline bool* get_address_of_owner_3() { return &___owner_3; }
	inline void set_owner_3(bool value)
	{
		___owner_3 = value;
	}

	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_4)); }
	inline bool get_async_4() const { return ___async_4; }
	inline bool* get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(bool value)
	{
		___async_4 = value;
	}

	inline static int32_t get_offset_of_canseek_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_5)); }
	inline bool get_canseek_5() const { return ___canseek_5; }
	inline bool* get_address_of_canseek_5() { return &___canseek_5; }
	inline void set_canseek_5(bool value)
	{
		___canseek_5 = value;
	}

	inline static int32_t get_offset_of_append_startpos_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_6)); }
	inline int64_t get_append_startpos_6() const { return ___append_startpos_6; }
	inline int64_t* get_address_of_append_startpos_6() { return &___append_startpos_6; }
	inline void set_append_startpos_6(int64_t value)
	{
		___append_startpos_6 = value;
	}

	inline static int32_t get_offset_of_anonymous_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_7)); }
	inline bool get_anonymous_7() const { return ___anonymous_7; }
	inline bool* get_address_of_anonymous_7() { return &___anonymous_7; }
	inline void set_anonymous_7(bool value)
	{
		___anonymous_7 = value;
	}

	inline static int32_t get_offset_of_buf_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_8)); }
	inline ByteU5BU5D_t4116647657* get_buf_8() const { return ___buf_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_8() { return &___buf_8; }
	inline void set_buf_8(ByteU5BU5D_t4116647657* value)
	{
		___buf_8 = value;
		Il2CppCodeGenWriteBarrier((&___buf_8), value);
	}

	inline static int32_t get_offset_of_buf_size_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_9)); }
	inline int32_t get_buf_size_9() const { return ___buf_size_9; }
	inline int32_t* get_address_of_buf_size_9() { return &___buf_size_9; }
	inline void set_buf_size_9(int32_t value)
	{
		___buf_size_9 = value;
	}

	inline static int32_t get_offset_of_buf_length_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_10)); }
	inline int32_t get_buf_length_10() const { return ___buf_length_10; }
	inline int32_t* get_address_of_buf_length_10() { return &___buf_length_10; }
	inline void set_buf_length_10(int32_t value)
	{
		___buf_length_10 = value;
	}

	inline static int32_t get_offset_of_buf_offset_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_11)); }
	inline int32_t get_buf_offset_11() const { return ___buf_offset_11; }
	inline int32_t* get_address_of_buf_offset_11() { return &___buf_offset_11; }
	inline void set_buf_offset_11(int32_t value)
	{
		___buf_offset_11 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_12)); }
	inline bool get_buf_dirty_12() const { return ___buf_dirty_12; }
	inline bool* get_address_of_buf_dirty_12() { return &___buf_dirty_12; }
	inline void set_buf_dirty_12(bool value)
	{
		___buf_dirty_12 = value;
	}

	inline static int32_t get_offset_of_buf_start_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_13)); }
	inline int64_t get_buf_start_13() const { return ___buf_start_13; }
	inline int64_t* get_address_of_buf_start_13() { return &___buf_start_13; }
	inline void set_buf_start_13(int64_t value)
	{
		___buf_start_13 = value;
	}

	inline static int32_t get_offset_of_name_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_14)); }
	inline String_t* get_name_14() const { return ___name_14; }
	inline String_t** get_address_of_name_14() { return &___name_14; }
	inline void set_name_14(String_t* value)
	{
		___name_14 = value;
		Il2CppCodeGenWriteBarrier((&___name_14), value);
	}

	inline static int32_t get_offset_of_handle_15() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___handle_15)); }
	inline intptr_t get_handle_15() const { return ___handle_15; }
	inline intptr_t* get_address_of_handle_15() { return &___handle_15; }
	inline void set_handle_15(intptr_t value)
	{
		___handle_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef TEXTASSET_T3022178571_H
#define TEXTASSET_T3022178571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t3022178571  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T3022178571_H
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
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef ATTACHMENTBASE_T4258187245_H
#define ATTACHMENTBASE_T4258187245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.AttachmentBase
struct  AttachmentBase_t4258187245  : public RuntimeObject
{
public:
	// System.String System.Net.Mail.AttachmentBase::id
	String_t* ___id_0;
	// System.Net.Mime.ContentType System.Net.Mail.AttachmentBase::contentType
	ContentType_t768484892 * ___contentType_1;
	// System.IO.Stream System.Net.Mail.AttachmentBase::contentStream
	Stream_t1273022909 * ___contentStream_2;
	// System.Net.Mime.TransferEncoding System.Net.Mail.AttachmentBase::transferEncoding
	int32_t ___transferEncoding_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(AttachmentBase_t4258187245, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_contentType_1() { return static_cast<int32_t>(offsetof(AttachmentBase_t4258187245, ___contentType_1)); }
	inline ContentType_t768484892 * get_contentType_1() const { return ___contentType_1; }
	inline ContentType_t768484892 ** get_address_of_contentType_1() { return &___contentType_1; }
	inline void set_contentType_1(ContentType_t768484892 * value)
	{
		___contentType_1 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_1), value);
	}

	inline static int32_t get_offset_of_contentStream_2() { return static_cast<int32_t>(offsetof(AttachmentBase_t4258187245, ___contentStream_2)); }
	inline Stream_t1273022909 * get_contentStream_2() const { return ___contentStream_2; }
	inline Stream_t1273022909 ** get_address_of_contentStream_2() { return &___contentStream_2; }
	inline void set_contentStream_2(Stream_t1273022909 * value)
	{
		___contentStream_2 = value;
		Il2CppCodeGenWriteBarrier((&___contentStream_2), value);
	}

	inline static int32_t get_offset_of_transferEncoding_3() { return static_cast<int32_t>(offsetof(AttachmentBase_t4258187245, ___transferEncoding_3)); }
	inline int32_t get_transferEncoding_3() const { return ___transferEncoding_3; }
	inline int32_t* get_address_of_transferEncoding_3() { return &___transferEncoding_3; }
	inline void set_transferEncoding_3(int32_t value)
	{
		___transferEncoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTACHMENTBASE_T4258187245_H
#ifndef ACTION_1_T3223241059_H
#define ACTION_1_T3223241059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<Question[]>
struct  Action_1_t3223241059  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3223241059_H
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
#ifndef UNITYACTION_2_T2165061829_H
#define UNITYACTION_2_T2165061829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct  UnityAction_2_t2165061829  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_2_T2165061829_H
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
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#define REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t3014364904  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTECERTIFICATEVALIDATIONCALLBACK_T3014364904_H
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
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef ATTACHMENT_T2783998197_H
#define ATTACHMENT_T2783998197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Mail.Attachment
struct  Attachment_t2783998197  : public AttachmentBase_t4258187245
{
public:
	// System.Net.Mime.ContentDisposition System.Net.Mail.Attachment::contentDisposition
	ContentDisposition_t4252586968 * ___contentDisposition_4;
	// System.Text.Encoding System.Net.Mail.Attachment::nameEncoding
	Encoding_t1523322056 * ___nameEncoding_5;

public:
	inline static int32_t get_offset_of_contentDisposition_4() { return static_cast<int32_t>(offsetof(Attachment_t2783998197, ___contentDisposition_4)); }
	inline ContentDisposition_t4252586968 * get_contentDisposition_4() const { return ___contentDisposition_4; }
	inline ContentDisposition_t4252586968 ** get_address_of_contentDisposition_4() { return &___contentDisposition_4; }
	inline void set_contentDisposition_4(ContentDisposition_t4252586968 * value)
	{
		___contentDisposition_4 = value;
		Il2CppCodeGenWriteBarrier((&___contentDisposition_4), value);
	}

	inline static int32_t get_offset_of_nameEncoding_5() { return static_cast<int32_t>(offsetof(Attachment_t2783998197, ___nameEncoding_5)); }
	inline Encoding_t1523322056 * get_nameEncoding_5() const { return ___nameEncoding_5; }
	inline Encoding_t1523322056 ** get_address_of_nameEncoding_5() { return &___nameEncoding_5; }
	inline void set_nameEncoding_5(Encoding_t1523322056 * value)
	{
		___nameEncoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___nameEncoding_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTACHMENT_T2783998197_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
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
#ifndef FLIPNORMALS_T293739268_H
#define FLIPNORMALS_T293739268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlipNormals
struct  FlipNormals_t293739268  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLIPNORMALS_T293739268_H
#ifndef FINISH_BUTTON_T3878445350_H
#define FINISH_BUTTON_T3878445350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Finish_Button
struct  Finish_Button_t3878445350  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Finish_Button::ks
	GameObject_t1113636619 * ___ks_2;
	// System.Single Finish_Button::time
	float ___time_3;

public:
	inline static int32_t get_offset_of_ks_2() { return static_cast<int32_t>(offsetof(Finish_Button_t3878445350, ___ks_2)); }
	inline GameObject_t1113636619 * get_ks_2() const { return ___ks_2; }
	inline GameObject_t1113636619 ** get_address_of_ks_2() { return &___ks_2; }
	inline void set_ks_2(GameObject_t1113636619 * value)
	{
		___ks_2 = value;
		Il2CppCodeGenWriteBarrier((&___ks_2), value);
	}

	inline static int32_t get_offset_of_time_3() { return static_cast<int32_t>(offsetof(Finish_Button_t3878445350, ___time_3)); }
	inline float get_time_3() const { return ___time_3; }
	inline float* get_address_of_time_3() { return &___time_3; }
	inline void set_time_3(float value)
	{
		___time_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINISH_BUTTON_T3878445350_H
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
#ifndef RENDER_MENU_T1727724032_H
#define RENDER_MENU_T1727724032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Render_Menu
struct  Render_Menu_t1727724032  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Render_Menu::panel_1
	GameObject_t1113636619 * ___panel_1_2;
	// UnityEngine.GameObject Render_Menu::panel_2
	GameObject_t1113636619 * ___panel_2_3;
	// UnityEngine.GameObject Render_Menu::panel_3
	GameObject_t1113636619 * ___panel_3_4;

public:
	inline static int32_t get_offset_of_panel_1_2() { return static_cast<int32_t>(offsetof(Render_Menu_t1727724032, ___panel_1_2)); }
	inline GameObject_t1113636619 * get_panel_1_2() const { return ___panel_1_2; }
	inline GameObject_t1113636619 ** get_address_of_panel_1_2() { return &___panel_1_2; }
	inline void set_panel_1_2(GameObject_t1113636619 * value)
	{
		___panel_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___panel_1_2), value);
	}

	inline static int32_t get_offset_of_panel_2_3() { return static_cast<int32_t>(offsetof(Render_Menu_t1727724032, ___panel_2_3)); }
	inline GameObject_t1113636619 * get_panel_2_3() const { return ___panel_2_3; }
	inline GameObject_t1113636619 ** get_address_of_panel_2_3() { return &___panel_2_3; }
	inline void set_panel_2_3(GameObject_t1113636619 * value)
	{
		___panel_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___panel_2_3), value);
	}

	inline static int32_t get_offset_of_panel_3_4() { return static_cast<int32_t>(offsetof(Render_Menu_t1727724032, ___panel_3_4)); }
	inline GameObject_t1113636619 * get_panel_3_4() const { return ___panel_3_4; }
	inline GameObject_t1113636619 ** get_address_of_panel_3_4() { return &___panel_3_4; }
	inline void set_panel_3_4(GameObject_t1113636619 * value)
	{
		___panel_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___panel_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDER_MENU_T1727724032_H
#ifndef RENDER_BUTTON_T438558594_H
#define RENDER_BUTTON_T438558594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Render_Button
struct  Render_Button_t438558594  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Render_Button::button
	GameObject_t1113636619 * ___button_2;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(Render_Button_t438558594, ___button_2)); }
	inline GameObject_t1113636619 * get_button_2() const { return ___button_2; }
	inline GameObject_t1113636619 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(GameObject_t1113636619 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier((&___button_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDER_BUTTON_T438558594_H
#ifndef DONE_BUTTON_T3558270190_H
#define DONE_BUTTON_T3558270190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_Button
struct  Done_Button_t3558270190  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_BUTTON_T3558270190_H
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
#ifndef EMAIL_DATA_T2527726807_H
#define EMAIL_DATA_T2527726807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Email_Data
struct  Email_Data_t2527726807  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct Email_Data_t2527726807_StaticFields
{
public:
	// System.Net.Security.RemoteCertificateValidationCallback Email_Data::<>f__am$cache0
	RemoteCertificateValidationCallback_t3014364904 * ___U3CU3Ef__amU24cache0_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_2() { return static_cast<int32_t>(offsetof(Email_Data_t2527726807_StaticFields, ___U3CU3Ef__amU24cache0_2)); }
	inline RemoteCertificateValidationCallback_t3014364904 * get_U3CU3Ef__amU24cache0_2() const { return ___U3CU3Ef__amU24cache0_2; }
	inline RemoteCertificateValidationCallback_t3014364904 ** get_address_of_U3CU3Ef__amU24cache0_2() { return &___U3CU3Ef__amU24cache0_2; }
	inline void set_U3CU3Ef__amU24cache0_2(RemoteCertificateValidationCallback_t3014364904 * value)
	{
		___U3CU3Ef__amU24cache0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMAIL_DATA_T2527726807_H
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
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef URL_ACCESS_T1474579352_H
#define URL_ACCESS_T1474579352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// URL_Access
struct  URL_Access_t1474579352  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject URL_Access::kk
	GameObject_t1113636619 * ___kk_2;

public:
	inline static int32_t get_offset_of_kk_2() { return static_cast<int32_t>(offsetof(URL_Access_t1474579352, ___kk_2)); }
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
#endif // URL_ACCESS_T1474579352_H
#ifndef START_BUTTON_T84841713_H
#define START_BUTTON_T84841713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Start_Button
struct  Start_Button_t84841713  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // START_BUTTON_T84841713_H
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
#ifndef TOGGLEGROUP_T123837990_H
#define TOGGLEGROUP_T123837990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ToggleGroup
struct  ToggleGroup_t123837990  : public UIBehaviour_t3495933518
{
public:
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_2;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t4207451803 * ___m_Toggles_3;

public:
	inline static int32_t get_offset_of_m_AllowSwitchOff_2() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990, ___m_AllowSwitchOff_2)); }
	inline bool get_m_AllowSwitchOff_2() const { return ___m_AllowSwitchOff_2; }
	inline bool* get_address_of_m_AllowSwitchOff_2() { return &___m_AllowSwitchOff_2; }
	inline void set_m_AllowSwitchOff_2(bool value)
	{
		___m_AllowSwitchOff_2 = value;
	}

	inline static int32_t get_offset_of_m_Toggles_3() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990, ___m_Toggles_3)); }
	inline List_1_t4207451803 * get_m_Toggles_3() const { return ___m_Toggles_3; }
	inline List_1_t4207451803 ** get_address_of_m_Toggles_3() { return &___m_Toggles_3; }
	inline void set_m_Toggles_3(List_1_t4207451803 * value)
	{
		___m_Toggles_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Toggles_3), value);
	}
};

struct ToggleGroup_t123837990_StaticFields
{
public:
	// System.Predicate`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::<>f__am$cache0
	Predicate_1_t3560671185 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<UnityEngine.UI.Toggle,System.Boolean> UnityEngine.UI.ToggleGroup::<>f__am$cache1
	Func_2_t3446800538 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Predicate_1_t3560671185 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Predicate_1_t3560671185 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Predicate_1_t3560671185 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(ToggleGroup_t123837990_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t3446800538 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t3446800538 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t3446800538 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLEGROUP_T123837990_H
#ifndef LAYOUTGROUP_T2436138090_H
#define LAYOUTGROUP_T2436138090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t2436138090  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t1369453676 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t3704657025 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t2156229523  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t2156229523  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t2156229523  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t881764471 * ___m_RectChildren_9;

public:
	inline static int32_t get_offset_of_m_Padding_2() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Padding_2)); }
	inline RectOffset_t1369453676 * get_m_Padding_2() const { return ___m_Padding_2; }
	inline RectOffset_t1369453676 ** get_address_of_m_Padding_2() { return &___m_Padding_2; }
	inline void set_m_Padding_2(RectOffset_t1369453676 * value)
	{
		___m_Padding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_2), value);
	}

	inline static int32_t get_offset_of_m_ChildAlignment_3() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_ChildAlignment_3)); }
	inline int32_t get_m_ChildAlignment_3() const { return ___m_ChildAlignment_3; }
	inline int32_t* get_address_of_m_ChildAlignment_3() { return &___m_ChildAlignment_3; }
	inline void set_m_ChildAlignment_3(int32_t value)
	{
		___m_ChildAlignment_3 = value;
	}

	inline static int32_t get_offset_of_m_Rect_4() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Rect_4)); }
	inline RectTransform_t3704657025 * get_m_Rect_4() const { return ___m_Rect_4; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_4() { return &___m_Rect_4; }
	inline void set_m_Rect_4(RectTransform_t3704657025 * value)
	{
		___m_Rect_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_4), value);
	}

	inline static int32_t get_offset_of_m_Tracker_5() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_Tracker_5)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_5() const { return ___m_Tracker_5; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_5() { return &___m_Tracker_5; }
	inline void set_m_Tracker_5(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_5 = value;
	}

	inline static int32_t get_offset_of_m_TotalMinSize_6() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalMinSize_6)); }
	inline Vector2_t2156229523  get_m_TotalMinSize_6() const { return ___m_TotalMinSize_6; }
	inline Vector2_t2156229523 * get_address_of_m_TotalMinSize_6() { return &___m_TotalMinSize_6; }
	inline void set_m_TotalMinSize_6(Vector2_t2156229523  value)
	{
		___m_TotalMinSize_6 = value;
	}

	inline static int32_t get_offset_of_m_TotalPreferredSize_7() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalPreferredSize_7)); }
	inline Vector2_t2156229523  get_m_TotalPreferredSize_7() const { return ___m_TotalPreferredSize_7; }
	inline Vector2_t2156229523 * get_address_of_m_TotalPreferredSize_7() { return &___m_TotalPreferredSize_7; }
	inline void set_m_TotalPreferredSize_7(Vector2_t2156229523  value)
	{
		___m_TotalPreferredSize_7 = value;
	}

	inline static int32_t get_offset_of_m_TotalFlexibleSize_8() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_TotalFlexibleSize_8)); }
	inline Vector2_t2156229523  get_m_TotalFlexibleSize_8() const { return ___m_TotalFlexibleSize_8; }
	inline Vector2_t2156229523 * get_address_of_m_TotalFlexibleSize_8() { return &___m_TotalFlexibleSize_8; }
	inline void set_m_TotalFlexibleSize_8(Vector2_t2156229523  value)
	{
		___m_TotalFlexibleSize_8 = value;
	}

	inline static int32_t get_offset_of_m_RectChildren_9() { return static_cast<int32_t>(offsetof(LayoutGroup_t2436138090, ___m_RectChildren_9)); }
	inline List_1_t881764471 * get_m_RectChildren_9() const { return ___m_RectChildren_9; }
	inline List_1_t881764471 ** get_address_of_m_RectChildren_9() { return &___m_RectChildren_9; }
	inline void set_m_RectChildren_9(List_1_t881764471 * value)
	{
		___m_RectChildren_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectChildren_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTGROUP_T2436138090_H
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
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_3)); }
	inline Navigation_t3049316579  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3049316579  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_5)); }
	inline ColorBlock_t2139031574  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2139031574  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_6)); }
	inline SpriteState_t1362986479  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t1362986479  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_9)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_15)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_2)); }
	inline List_1_t427135887 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t427135887 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t427135887 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
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
#ifndef EVENTSYSTEM_T1003666588_H
#define EVENTSYSTEM_T1003666588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventSystem
struct  EventSystem_t1003666588  : public UIBehaviour_t3495933518
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t3491343620 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t2019268878 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t1113636619 * ___m_FirstSelected_5;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_6;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_7;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t1113636619 * ___m_CurrentSelected_8;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_9;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_10;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t3903027533 * ___m_DummyData_11;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_2() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SystemInputModules_2)); }
	inline List_1_t3491343620 * get_m_SystemInputModules_2() const { return ___m_SystemInputModules_2; }
	inline List_1_t3491343620 ** get_address_of_m_SystemInputModules_2() { return &___m_SystemInputModules_2; }
	inline void set_m_SystemInputModules_2(List_1_t3491343620 * value)
	{
		___m_SystemInputModules_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SystemInputModules_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_3() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentInputModule_3)); }
	inline BaseInputModule_t2019268878 * get_m_CurrentInputModule_3() const { return ___m_CurrentInputModule_3; }
	inline BaseInputModule_t2019268878 ** get_address_of_m_CurrentInputModule_3() { return &___m_CurrentInputModule_3; }
	inline void set_m_CurrentInputModule_3(BaseInputModule_t2019268878 * value)
	{
		___m_CurrentInputModule_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentInputModule_3), value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_5() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_FirstSelected_5)); }
	inline GameObject_t1113636619 * get_m_FirstSelected_5() const { return ___m_FirstSelected_5; }
	inline GameObject_t1113636619 ** get_address_of_m_FirstSelected_5() { return &___m_FirstSelected_5; }
	inline void set_m_FirstSelected_5(GameObject_t1113636619 * value)
	{
		___m_FirstSelected_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_FirstSelected_5), value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_6() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_sendNavigationEvents_6)); }
	inline bool get_m_sendNavigationEvents_6() const { return ___m_sendNavigationEvents_6; }
	inline bool* get_address_of_m_sendNavigationEvents_6() { return &___m_sendNavigationEvents_6; }
	inline void set_m_sendNavigationEvents_6(bool value)
	{
		___m_sendNavigationEvents_6 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_7() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DragThreshold_7)); }
	inline int32_t get_m_DragThreshold_7() const { return ___m_DragThreshold_7; }
	inline int32_t* get_address_of_m_DragThreshold_7() { return &___m_DragThreshold_7; }
	inline void set_m_DragThreshold_7(int32_t value)
	{
		___m_DragThreshold_7 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_8() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_CurrentSelected_8)); }
	inline GameObject_t1113636619 * get_m_CurrentSelected_8() const { return ___m_CurrentSelected_8; }
	inline GameObject_t1113636619 ** get_address_of_m_CurrentSelected_8() { return &___m_CurrentSelected_8; }
	inline void set_m_CurrentSelected_8(GameObject_t1113636619 * value)
	{
		___m_CurrentSelected_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentSelected_8), value);
	}

	inline static int32_t get_offset_of_m_HasFocus_9() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_HasFocus_9)); }
	inline bool get_m_HasFocus_9() const { return ___m_HasFocus_9; }
	inline bool* get_address_of_m_HasFocus_9() { return &___m_HasFocus_9; }
	inline void set_m_HasFocus_9(bool value)
	{
		___m_HasFocus_9 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_10() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_SelectionGuard_10)); }
	inline bool get_m_SelectionGuard_10() const { return ___m_SelectionGuard_10; }
	inline bool* get_address_of_m_SelectionGuard_10() { return &___m_SelectionGuard_10; }
	inline void set_m_SelectionGuard_10(bool value)
	{
		___m_SelectionGuard_10 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_11() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588, ___m_DummyData_11)); }
	inline BaseEventData_t3903027533 * get_m_DummyData_11() const { return ___m_DummyData_11; }
	inline BaseEventData_t3903027533 ** get_address_of_m_DummyData_11() { return &___m_DummyData_11; }
	inline void set_m_DummyData_11(BaseEventData_t3903027533 * value)
	{
		___m_DummyData_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_DummyData_11), value);
	}
};

struct EventSystem_t1003666588_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_t2475741330 * ___m_EventSystems_4;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t3135238028 * ___s_RaycastComparer_12;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::<>f__mg$cache0
	Comparison_1_t3135238028 * ___U3CU3Ef__mgU24cache0_13;

public:
	inline static int32_t get_offset_of_m_EventSystems_4() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___m_EventSystems_4)); }
	inline List_1_t2475741330 * get_m_EventSystems_4() const { return ___m_EventSystems_4; }
	inline List_1_t2475741330 ** get_address_of_m_EventSystems_4() { return &___m_EventSystems_4; }
	inline void set_m_EventSystems_4(List_1_t2475741330 * value)
	{
		___m_EventSystems_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystems_4), value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_12() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___s_RaycastComparer_12)); }
	inline Comparison_1_t3135238028 * get_s_RaycastComparer_12() const { return ___s_RaycastComparer_12; }
	inline Comparison_1_t3135238028 ** get_address_of_s_RaycastComparer_12() { return &___s_RaycastComparer_12; }
	inline void set_s_RaycastComparer_12(Comparison_1_t3135238028 * value)
	{
		___s_RaycastComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___s_RaycastComparer_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_13() { return static_cast<int32_t>(offsetof(EventSystem_t1003666588_StaticFields, ___U3CU3Ef__mgU24cache0_13)); }
	inline Comparison_1_t3135238028 * get_U3CU3Ef__mgU24cache0_13() const { return ___U3CU3Ef__mgU24cache0_13; }
	inline Comparison_1_t3135238028 ** get_address_of_U3CU3Ef__mgU24cache0_13() { return &___U3CU3Ef__mgU24cache0_13; }
	inline void set_U3CU3Ef__mgU24cache0_13(Comparison_1_t3135238028 * value)
	{
		___U3CU3Ef__mgU24cache0_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEM_T1003666588_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_17)); }
	inline Graphic_t1660335611 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t1660335611 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t1660335611 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_17), value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_18)); }
	inline ToggleGroup_t123837990 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t123837990 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_18), value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_19)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_19), value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
#ifndef BUTTON_T4055032469_H
#define BUTTON_T4055032469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t4055032469  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t48803504 * ___m_OnClick_16;

public:
	inline static int32_t get_offset_of_m_OnClick_16() { return static_cast<int32_t>(offsetof(Button_t4055032469, ___m_OnClick_16)); }
	inline ButtonClickedEvent_t48803504 * get_m_OnClick_16() const { return ___m_OnClick_16; }
	inline ButtonClickedEvent_t48803504 ** get_address_of_m_OnClick_16() { return &___m_OnClick_16; }
	inline void set_m_OnClick_16(ButtonClickedEvent_t48803504 * value)
	{
		___m_OnClick_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T4055032469_H
#ifndef INPUTFIELD_T3762917431_H
#define INPUTFIELD_T3762917431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t3762917431  : public Selectable_t3250028441
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t731888065 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t1901882714 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t1660335611 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t648412432 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t467195904 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t2355412304 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2555686324  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2555686324  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3704657025 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t1981460040* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t3211863866 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t2598313366 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t3648964284 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t3829159415 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t3829159415 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t2956885303 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t731888065 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t731888065 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t731888065 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_16), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_TextComponent_18)); }
	inline Text_t1901882714 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t1901882714 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t1901882714 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_18), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Placeholder_19)); }
	inline Graphic_t1660335611 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t1660335611 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t1660335611 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_19), value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t648412432 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t648412432 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t648412432 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_28), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t467195904 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t467195904 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t467195904 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_29), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t2355412304 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t2355412304 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t2355412304 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_30), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretColor_31)); }
	inline Color_t2555686324  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2555686324 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2555686324  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_SelectionColor_33)); }
	inline Color_t2555686324  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2555686324 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2555686324  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_34), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___caretRectTrans_40)); }
	inline RectTransform_t3704657025 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3704657025 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3704657025 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_40), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t1981460040* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t1981460040* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_41), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_InputTextCache_42)); }
	inline TextGenerator_t3211863866 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t3211863866 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t3211863866 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_42), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t2598313366 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t2598313366 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_43), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_Mesh_45)); }
	inline Mesh_t3648964284 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t3648964284 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t3648964284 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_45), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t3829159415 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t3829159415 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t3829159415 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_53), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_DragCoroutine_57)); }
	inline Coroutine_t3829159415 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t3829159415 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t3829159415 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_57), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_58), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t3762917431, ___m_ProcessingEvent_62)); }
	inline Event_t2956885303 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t2956885303 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t2956885303 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_62), value);
	}
};

struct InputField_t3762917431_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t3528271667* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t3762917431_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t3528271667* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t3528271667** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t3528271667* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T3762917431_H
#ifndef HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#define HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.HorizontalOrVerticalLayoutGroup
struct  HorizontalOrVerticalLayoutGroup_t729725570  : public LayoutGroup_t2436138090
{
public:
	// System.Single UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_Spacing
	float ___m_Spacing_10;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandWidth
	bool ___m_ChildForceExpandWidth_11;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildForceExpandHeight
	bool ___m_ChildForceExpandHeight_12;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlWidth
	bool ___m_ChildControlWidth_13;
	// System.Boolean UnityEngine.UI.HorizontalOrVerticalLayoutGroup::m_ChildControlHeight
	bool ___m_ChildControlHeight_14;

public:
	inline static int32_t get_offset_of_m_Spacing_10() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_Spacing_10)); }
	inline float get_m_Spacing_10() const { return ___m_Spacing_10; }
	inline float* get_address_of_m_Spacing_10() { return &___m_Spacing_10; }
	inline void set_m_Spacing_10(float value)
	{
		___m_Spacing_10 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandWidth_11() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildForceExpandWidth_11)); }
	inline bool get_m_ChildForceExpandWidth_11() const { return ___m_ChildForceExpandWidth_11; }
	inline bool* get_address_of_m_ChildForceExpandWidth_11() { return &___m_ChildForceExpandWidth_11; }
	inline void set_m_ChildForceExpandWidth_11(bool value)
	{
		___m_ChildForceExpandWidth_11 = value;
	}

	inline static int32_t get_offset_of_m_ChildForceExpandHeight_12() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildForceExpandHeight_12)); }
	inline bool get_m_ChildForceExpandHeight_12() const { return ___m_ChildForceExpandHeight_12; }
	inline bool* get_address_of_m_ChildForceExpandHeight_12() { return &___m_ChildForceExpandHeight_12; }
	inline void set_m_ChildForceExpandHeight_12(bool value)
	{
		___m_ChildForceExpandHeight_12 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlWidth_13() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildControlWidth_13)); }
	inline bool get_m_ChildControlWidth_13() const { return ___m_ChildControlWidth_13; }
	inline bool* get_address_of_m_ChildControlWidth_13() { return &___m_ChildControlWidth_13; }
	inline void set_m_ChildControlWidth_13(bool value)
	{
		___m_ChildControlWidth_13 = value;
	}

	inline static int32_t get_offset_of_m_ChildControlHeight_14() { return static_cast<int32_t>(offsetof(HorizontalOrVerticalLayoutGroup_t729725570, ___m_ChildControlHeight_14)); }
	inline bool get_m_ChildControlHeight_14() const { return ___m_ChildControlHeight_14; }
	inline bool* get_address_of_m_ChildControlHeight_14() { return &___m_ChildControlHeight_14; }
	inline void set_m_ChildControlHeight_14(bool value)
	{
		___m_ChildControlHeight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HORIZONTALORVERTICALLAYOUTGROUP_T729725570_H
#ifndef VERTICALLAYOUTGROUP_T923838031_H
#define VERTICALLAYOUTGROUP_T923838031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.VerticalLayoutGroup
struct  VerticalLayoutGroup_t923838031  : public HorizontalOrVerticalLayoutGroup_t729725570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERTICALLAYOUTGROUP_T923838031_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
// Question[]
struct QuestionU5BU5D_t3050773464  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Question_t1471288757 * m_Items[1];

public:
	inline Question_t1471288757 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Question_t1471288757 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Question_t1471288757 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Question_t1471288757 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Question_t1471288757 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Question_t1471288757 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3235626157 * m_Items[1];

public:
	inline SpriteRenderer_t3235626157 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteRenderer_t3235626157 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t422084607  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t1901882714 * m_Items[1];

public:
	inline Text_t1901882714 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t1901882714 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t1901882714 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Text_t1901882714 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t1901882714 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t1901882714 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m2387223709_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C"  RuntimeObject * Dictionary_2_get_Item_m2714930061_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
extern "C"  bool Enumerable_Contains_TisRuntimeObject_m483732487_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C"  void Nullable_1__ctor_m3940678751_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C"  RuntimeObject * Enumerable_First_TisRuntimeObject_m2399704171_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(!0)
extern "C"  void Collection_1_Add_m111869950_gshared (Collection_1_t2024462082 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C"  bool Nullable_1_get_HasValue_m589371754_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
extern "C"  int32_t Nullable_1_GetValueOrDefault_m3412711055_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
extern "C"  void List_1__ctor_m1328752868_gshared (List_1_t257213610 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C"  ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// T[] JsonHelper::getJsonArray<System.Object>(System.String)
extern "C"  ObjectU5BU5D_t2843939325* JsonHelper_getJsonArray_TisRuntimeObject_m2166015213_gshared (RuntimeObject * __this /* static, unused */, String_t* ___json0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C"  void Action_1_Invoke_m2461023210_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C"  bool List_1_Contains_m2654125393_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_2__ctor_m2949990045_gshared (UnityAction_2_t2165061829 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C"  void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::.ctor()
#define Dictionary_2__ctor_m3412077385(__this, method) ((  void (*) (Dictionary_2_t1067045639 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String[]>::Add(!0,!1)
#define Dictionary_2_Add_m2025336897(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1067045639 *, String_t*, StringU5BU5D_t1281789340*, const RuntimeMethod*))Dictionary_2_Add_m2387223709_gshared)(__this, p0, p1, method)
// System.String Round::getSceneID()
extern "C"  String_t* Round_getSceneID_m1296914292 (Round_t3007421971 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String[]>::get_Item(!0)
#define Dictionary_2_get_Item_m2750682826(__this, p0, method) ((  StringU5BU5D_t1281789340* (*) (Dictionary_2_t1067045639 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m2714930061_gshared)(__this, p0, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Hazard>::GetEnumerator()
#define List_1_GetEnumerator_m3382736461(__this, method) ((  Enumerator_t3696509197  (*) (List_1_t1807265320 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Hazard>::get_Current()
#define Enumerator_get_Current_m2602721882(__this, method) ((  Hazard_t335190578 * (*) (Enumerator_t3696509197 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
#define Enumerable_Contains_TisString_t_m1131914166(__this /* static, unused */, p0, p1, method) ((  bool (*) (RuntimeObject * /* static, unused */, RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_m483732487_gshared)(__this /* static, unused */, p0, p1, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Hazard>::MoveNext()
#define Enumerator_MoveNext_m1639399454(__this, method) ((  bool (*) (Enumerator_t3696509197 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Hazard>::Dispose()
#define Enumerator_Dispose_m4248804872(__this, method) ((  void (*) (Enumerator_t3696509197 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void PARSController::.ctor()
extern "C"  void PARSController__ctor_m3918493173 (PARSController_t1025491303 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSDataManager::.ctor(System.String)
extern "C"  void PARSDataManager__ctor_m867678872 (PARSDataManager_t1176312113 * __this, String_t* ___fileName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
#define Nullable_1__ctor_m3940678751(__this, p0, method) ((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m3940678751_gshared)(__this, p0, method)
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C"  String_t* Application_get_persistentDataPath_m1428108154 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<Question[]>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m2606183498(__this, p0, p1, method) ((  void (*) (Action_1_t3223241059 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// AnswerKey PARSDataManager::retrieveAnswers(System.Action`1<Question[]>)
extern "C"  AnswerKey_t1212413198 * PARSDataManager_retrieveAnswers_m2899432400 (PARSDataManager_t1176312113 * __this, Action_1_t3223241059 * ___populationMethod0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PARSController::getCurrentSceneID()
extern "C"  String_t* PARSController_getCurrentSceneID_m563327644 (PARSController_t1025491303 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AssessmentRound::.ctor(System.String)
extern "C"  void AssessmentRound__ctor_m3975787227 (AssessmentRound_t4264710411 * __this, String_t* ___sceneID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Hazard> AssessmentController::getActiveToggleHazards()
extern "C"  List_1_t1807265320 * AssessmentController_getActiveToggleHazards_m3363953234 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single AnswerKey::gradeForRound(Round)
extern "C"  float AnswerKey_gradeForRound_m1433895029 (AnswerKey_t1212413198 * __this, Round_t3007421971 * ___round0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSController::completeCurrentRound()
extern "C"  void PARSController_completeCurrentRound_m3102217683 (PARSController_t1025491303 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSController::complete()
extern "C"  void PARSController_complete_m2748135589 (PARSController_t1025491303 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AssessmentController::gradeAssessment()
extern "C"  void AssessmentController_gradeAssessment_m1358060621 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSDataManager::saveAssessmentTime(System.DateTime,System.DateTime)
extern "C"  void PARSDataManager_saveAssessmentTime_m1692115370 (PARSDataManager_t1176312113 * __this, DateTime_t3738529785  ___startTime0, DateTime_t3738529785  ___endTime1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSDataManager::saveRounds(System.Collections.Generic.List`1<Round>)
extern "C"  void PARSDataManager_saveRounds_m1321154175 (PARSDataManager_t1176312113 * __this, List_1_t184529417 * ___rounds0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSDataManager::saveToFile()
extern "C"  void PARSDataManager_saveToFile_m3976889622 (PARSDataManager_t1176312113 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Hazard>::.ctor()
#define List_1__ctor_m2274875901(__this, method) ((  void (*) (List_1_t1807265320 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C"  GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
#define GameObject_GetComponent_TisToggle_t2735377061_m3911858412(__this, method) ((  Toggle_t2735377061 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m1428293607 (Toggle_t2735377061 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<ToggleController>()
#define GameObject_GetComponent_TisToggleController_t3012097607_m1888744386(__this, method) ((  ToggleController_t3012097607 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void Hazard::.ctor(System.String,System.String)
extern "C"  void Hazard__ctor_m2612460934 (Hazard_t335190578 * __this, String_t* ___category0, String_t* ___name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Hazard>::Add(!0)
#define List_1_Add_m470618553(__this, p0, method) ((  void (*) (List_1_t1807265320 *, Hazard_t335190578 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void AnswerKey::.ctor(Question[])
extern "C"  void AnswerKey__ctor_m2683242041 (AnswerKey_t1212413198 * __this, QuestionU5BU5D_t3050773464* ___questions0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Round>::GetEnumerator()
#define List_1_GetEnumerator_m2597448471(__this, method) ((  Enumerator_t2073773294  (*) (List_1_t184529417 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Round>::get_Current()
#define Enumerator_get_Current_m4052406410(__this, method) ((  Round_t3007421971 * (*) (Enumerator_t2073773294 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Round>::MoveNext()
#define Enumerator_MoveNext_m3792823848(__this, method) ((  bool (*) (Enumerator_t2073773294 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Round>::Dispose()
#define Enumerator_Dispose_m3439656034(__this, method) ((  void (*) (Enumerator_t2073773294 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
extern "C"  Object_t631007953 * Object_Instantiate_m3403600534 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Round::.ctor(System.String)
extern "C"  void Round__ctor_m229890800 (Round_t3007421971 * __this, String_t* ___sceneID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebGLInput::set_captureAllKeyboardInput(System.Boolean)
extern "C"  void WebGLInput_set_captureAllKeyboardInput_m690635056 (RuntimeObject * __this /* static, unused */, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMovement::reloadRotation()
extern "C"  void CameraMovement_reloadRotation_m3445980600 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.EventSystems.EventSystem>()
#define GameObject_GetComponent_TisEventSystem_t1003666588_m3854587646(__this, method) ((  EventSystem_t1003666588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
extern "C"  bool EventSystem_IsPointerOverGameObject_m1911785875 (EventSystem_t1003666588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m4009438427 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
extern "C"  void Camera_set_fieldOfView_m1438246590 (Camera_t4157153871 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single CameraMovement::eulerTo360(System.Single)
extern "C"  float CameraMovement_eulerTo360_m4112585906 (CameraMovement_t4037080991 * __this, float ___eulerValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_localEulerAngles_m2136926248 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMovement::smoothLookTowards()
extern "C"  void CameraMovement_smoothLookTowards_m3218301120 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Lerp_m1238806789 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Angle(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  float Quaternion_Angle_m1586774072 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
extern "C"  Quaternion_t2301928331  Transform_get_localRotation_m3487911431 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t3722313464  Quaternion_get_eulerAngles_m3425202016 (Quaternion_t2301928331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CellPressedCallBack::Invoke()
extern "C"  void CellPressedCallBack_Invoke_m807315293 (CellPressedCallBack_t865333736 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.InputField>()
#define Component_GetComponentInChildren_TisInputField_t3762917431_m1498207142(__this, method) ((  InputField_t3762917431 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.ToggleGroup>()
#define Component_GetComponentInChildren_TisToggleGroup_t123837990_m4013193853(__this, method) ((  ToggleGroup_t123837990 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C"  RuntimeObject* ToggleGroup_ActiveToggles_m3179342002 (ToggleGroup_t123837990 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 System.Linq.Enumerable::First<UnityEngine.UI.Toggle>(System.Collections.Generic.IEnumerable`1<!!0>)
#define Enumerable_First_TisToggle_t2735377061_m1709940420(__this /* static, unused */, p0, method) ((  Toggle_t2735377061 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_m2399704171_gshared)(__this /* static, unused */, p0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
extern "C"  void PlayerPrefs_SetString_m2101271233 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
extern "C"  String_t* InputField_get_text_m3534748202 (InputField_t3762917431 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C"  void PlayerPrefs_Save_m2701929462 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SystemInfo::get_deviceUniqueIdentifier()
extern "C"  String_t* SystemInfo_get_deviceUniqueIdentifier_m3439870207 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::GetTempPath()
extern "C"  String_t* Path_GetTempPath_m323864048 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C"  bool Directory_Exists_m1484791558 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C"  DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Move(System.String,System.String)
extern "C"  void File_Move_m1898656234 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
#define List_1__ctor_m706204246(__this, method) ((  void (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void DateTime__ctor_m12900168 (DateTime_t3738529785 * __this, int32_t p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetDirectories(System.String)
extern "C"  StringU5BU5D_t1281789340* Directory_GetDirectories_m1966820948 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C"  void DirectoryInfo__ctor_m1000259829 (DirectoryInfo_t35957480 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.IO.FileSystemInfo::get_LastWriteTime()
extern "C"  DateTime_t3738529785  FileSystemInfo_get_LastWriteTime_m1574089390 (FileSystemInfo_t3745885336 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThan_m3768590082 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  p0, DateTime_t3738529785  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
#define List_1_Add_m1685793073(__this, p0, method) ((  void (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m2276455407(__this, method) ((  int32_t (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m3346958548(__this, p0, method) ((  String_t* (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C"  String_t* String_Remove_m562998446 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::.ctor()
extern "C"  void MailMessage__ctor_m1825471261 (MailMessage_t154277952 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String)
extern "C"  void MailAddress__ctor_m53933319 (MailAddress_t3229635559 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_From(System.Net.Mail.MailAddress)
extern "C"  void MailMessage_set_From_m3034870219 (MailMessage_t154277952 * __this, MailAddress_t3229635559 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_To()
extern "C"  MailAddressCollection_t2881748872 * MailMessage_get_To_m4195779436 (MailMessage_t154277952 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::Add(System.String)
extern "C"  void MailAddressCollection_Add_m3813002948 (MailAddressCollection_t2881748872 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Subject(System.String)
extern "C"  void MailMessage_set_Subject_m4057037050 (MailMessage_t154277952 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Body(System.String)
extern "C"  void MailMessage_set_Body_m1999412655 (MailMessage_t154277952 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::get_Attachments()
extern "C"  AttachmentCollection_t1412086921 * MailMessage_get_Attachments_m811896912 (MailMessage_t154277952 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::.ctor(System.String)
extern "C"  void Attachment__ctor_m4191839283 (Attachment_t2783998197 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.Collection`1<System.Net.Mail.Attachment>::Add(!0)
#define Collection_1_Add_m2768975781(__this, p0, method) ((  void (*) (Collection_1_t1728354115 *, Attachment_t2783998197 *, const RuntimeMethod*))Collection_1_Add_m111869950_gshared)(__this, p0, method)
// System.Void System.Net.Mail.SmtpClient::.ctor(System.String)
extern "C"  void SmtpClient__ctor_m4128203854 (SmtpClient_t1048709847 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Port(System.Int32)
extern "C"  void SmtpClient_set_Port_m2583583088 (SmtpClient_t1048709847 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkCredential::.ctor(System.String,System.String)
extern "C"  void NetworkCredential__ctor_m2171369688 (NetworkCredential_t3282608323 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_Credentials(System.Net.ICredentialsByHost)
extern "C"  void SmtpClient_set_Credentials_m145499156 (SmtpClient_t1048709847 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::set_EnableSsl(System.Boolean)
extern "C"  void SmtpClient_set_EnableSsl_m4135527317 (SmtpClient_t1048709847 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoteCertificateValidationCallback__ctor_m1251969663 (RemoteCertificateValidationCallback_t3014364904 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::set_ServerCertificateValidationCallback(System.Net.Security.RemoteCertificateValidationCallback)
extern "C"  void ServicePointManager_set_ServerCertificateValidationCallback_m1752789210 (RuntimeObject * __this /* static, unused */, RemoteCertificateValidationCallback_t3014364904 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SmtpClient::Send(System.Net.Mail.MailMessage)
extern "C"  void SmtpClient_Send_m1008998301 (SmtpClient_t1048709847 * __this, MailMessage_t154277952 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Finish_Button/<timer>c__Iterator0::.ctor()
extern "C"  void U3CtimerU3Ec__Iterator0__ctor_m2614439895 (U3CtimerU3Ec__Iterator0_t2808194927 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C"  bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Finish_Button::timer()
extern "C"  RuntimeObject* Finish_Button_timer_m3339991693 (Finish_Button_t3878445350 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.File::ReadAllLines(System.String)
extern "C"  StringU5BU5D_t1281789340* File_ReadAllLines_m2281910820 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m2050845953 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
#define Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, method) ((  MeshFilter_t3523625662 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C"  Mesh_t3648964284 * MeshFilter_get_mesh_m3346355278 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C"  Vector3U5BU5D_t1718750761* Mesh_get_normals_m4099615978 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m2104357790 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C"  void Mesh_set_normals_m332514528 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetTriangles(System.Int32)
extern "C"  Int32U5BU5D_t385246372* Mesh_GetTriangles_m973693202 (Mesh_t3648964284 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Int32[],System.Int32)
extern "C"  void Mesh_SetTriangles_m3871477336 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_subMeshCount()
extern "C"  int32_t Mesh_get_subMeshCount_m3992802841 (Mesh_t3648964284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SpriteRenderer>()
#define Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354(__this, method) ((  SpriteRendererU5BU5D_t911335936* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
extern "C"  Transform_t3600365921 * Transform_get_parent_m835071599 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<TrainingHazardController>()
#define Component_GetComponent_TisTrainingHazardController_t987698733_m259221932(__this, method) ((  TrainingHazardController_t987698733 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
extern "C"  void Transform_LookAt_m3968184312 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_WorldToViewportPoint_m1538355680 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<CameraMovement>()
#define Component_GetComponent_TisCameraMovement_t4037080991_m4258948832(__this, method) ((  CameraMovement_t4037080991 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void TrainingHazardController::SetStateOff()
extern "C"  void TrainingHazardController_SetStateOff_m2749530923 (TrainingHazardController_t987698733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// State TrainingHazardController::ToggleState()
extern "C"  State_t3329758327 * TrainingHazardController_ToggleState_m3766278890 (TrainingHazardController_t987698733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C"  void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void State::.ctor(TrainingHazardController)
extern "C"  void State__ctor_m2371227322 (State_t3329758327 * __this, TrainingHazardController_t987698733 * ___hazard0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_gray()
extern "C"  Color_t2555686324  Color_get_gray_m1471337008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HazardIconController::renderToggleOff()
extern "C"  void HazardIconController_renderToggleOff_m3813990765 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HazardContentView::setContentVisibilty(System.Boolean)
extern "C"  void HazardContentView_setContentVisibilty_m329572791 (HazardContentView_t2572541359 * __this, bool ___enabled0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingCollectionCell::setViewColors(UnityEngine.Color,UnityEngine.Color)
extern "C"  void TrainingCollectionCell_setViewColors_m607410905 (TrainingCollectionCell_t2778354195 * __this, Color_t2555686324  ___backgroundColor0, Color_t2555686324  ___textColor1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingCollectionCell::setSummaryTextBox(System.Boolean)
extern "C"  void TrainingCollectionCell_setSummaryTextBox_m3467887963 (TrainingCollectionCell_t2778354195 * __this, bool ___isActive0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HazardIconController::renderToggleOn()
extern "C"  void HazardIconController_renderToggleOn_m3505321621 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraMovement::LookTowards(UnityEngine.Transform)
extern "C"  void CameraMovement_LookTowards_m4136775812 (CameraMovement_t4037080991 * __this, Transform_t3600365921 * ___target0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NavigationController::fetchController()
extern "C"  void NavigationController_fetchController_m2817432675 (NavigationController_t182472134 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<PARSController>()
#define GameObject_GetComponent_TisPARSController_t1025491303_m3747387168(__this, method) ((  PARSController_t1025491303 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
#define Nullable_1_get_HasValue_m589371754(__this, method) ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m589371754_gshared)(__this, method)
// System.Void NavigationController::setupUI()
extern "C"  void NavigationController_setupUI_m3312411452 (NavigationController_t182472134 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Text>()
#define Component_GetComponentsInChildren_TisText_t1901882714_m4076551387(__this, method) ((  TextU5BU5D_t422084607* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char PARSController::getControllerType()
extern "C"  Il2CppChar PARSController_getControllerType_m474572304 (PARSController_t1025491303 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Round>::get_Count()
#define List_1_get_Count_m807984802(__this, method) ((  int32_t (*) (List_1_t184529417 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider)
extern "C"  DateTime_t3738529785  DateTime_ParseExact_m3543736043 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, RuntimeObject* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
extern "C"  TimeSpan_t881159249  DateTime_Subtract_m77007479 (DateTime_t3738529785 * __this, DateTime_t3738529785  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Button>()
#define Component_GetComponentInChildren_TisButton_t4055032469_m1032908271(__this, method) ((  Button_t4055032469 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.String PARSController::formatTime(System.Int32)
extern "C"  String_t* PARSController_formatTime_m487284323 (PARSController_t1025491303 * __this, int32_t ___totalSeconds0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NavigationController::setTimerText(System.String)
extern "C"  void NavigationController_setTimerText_m3304993782 (NavigationController_t182472134 * __this, String_t* ___time0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m286683560 (Color_t2555686324 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void NavigationController::setTimerColor(UnityEngine.Color)
extern "C"  void NavigationController_setTimerColor_m1218955970 (NavigationController_t182472134 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Round::completeRound()
extern "C"  void Round_completeRound_m1302899356 (Round_t3007421971 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<Round>::Add(!0)
#define List_1_Add_m1265277236(__this, p0, method) ((  void (*) (List_1_t184529417 *, Round_t3007421971 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
#define Nullable_1_GetValueOrDefault_m3412711055(__this, method) ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m3412711055_gshared)(__this, method)
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
extern "C"  String_t* PlayerPrefs_GetString_m389913383 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTime::ToString(System.String)
extern "C"  String_t* DateTime_ToString_m3718521780 (DateTime_t3738529785 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String PARSDataManager::roundsToJson(System.Collections.Generic.List`1<Round>)
extern "C"  String_t* PARSDataManager_roundsToJson_m1935425996 (PARSDataManager_t1176312113 * __this, List_1_t184529417 * ___rounds0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSDataManager::saveToFile(System.String)
extern "C"  void PARSDataManager_saveToFile_m2008296848 (PARSDataManager_t1176312113 * __this, String_t* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C"  String_t* JsonUtility_ToJson_m3644929270 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C"  String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Create(System.String)
extern "C"  FileStream_t4292183065 * File_Create_m2207667142 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
#define List_1__ctor_m864250344(__this, p0, method) ((  void (*) (List_1_t3319525431 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1328752868_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m815285786(__this, p0, method) ((  void (*) (List_1_t3319525431 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method)
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m3983937259(__this, method) ((  StringU5BU5D_t1281789340* (*) (List_1_t3319525431 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method)
// System.Void System.IO.File::WriteAllLines(System.String,System.String[])
extern "C"  void File_WriteAllLines_m3166020039 (RuntimeObject * __this /* static, unused */, String_t* p0, StringU5BU5D_t1281789340* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextAsset::get_text()
extern "C"  String_t* TextAsset_get_text_m2027878391 (TextAsset_t3022178571 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// T[] JsonHelper::getJsonArray<Question>(System.String)
#define JsonHelper_getJsonArray_TisQuestion_t1471288757_m378419108(__this /* static, unused */, ___json0, method) ((  QuestionU5BU5D_t3050773464* (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonHelper_getJsonArray_TisRuntimeObject_m2166015213_gshared)(__this /* static, unused */, ___json0, method)
// System.Void System.Action`1<Question[]>::Invoke(!0)
#define Action_1_Invoke_m2515147361(__this, p0, method) ((  void (*) (Action_1_t3223241059 *, QuestionU5BU5D_t3050773464*, const RuntimeMethod*))Action_1_Invoke_m2461023210_gshared)(__this, p0, method)
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C"  void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisGameObject_t1113636619_m3215236302(__this /* static, unused */, p0, p1, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t1901882714_m2114913816(__this, method) ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C"  void Canvas_ForceUpdateCanvases_m3151644478 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.VerticalLayoutGroup>()
#define Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, method) ((  VerticalLayoutGroup_t923838031 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C"  void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
#define List_1_Contains_m3852460914(__this, p0, method) ((  bool (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Contains_m2654125393_gshared)(__this, p0, method)
// UnityEngine.Color UnityEngine.Color::get_red()
extern "C"  Color_t2555686324  Color_get_red_m3227813939 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ResultAnswersList::populateList(System.String[])
extern "C"  void ResultAnswersList_populateList_m150961407 (ResultAnswersList_t719099062 * __this, StringU5BU5D_t1281789340* ___stringItems0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> Round::getResponseHazardNames()
extern "C"  List_1_t3319525431 * Round_getResponseHazardNames_m3355812307 (Round_t3007421971 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ResultAnswersList::populateCorrectList(System.String[],System.String[])
extern "C"  void ResultAnswersList_populateCorrectList_m2868273776 (ResultAnswersList_t719099062 * __this, StringU5BU5D_t1281789340* ___stringItems0, StringU5BU5D_t1281789340* ___key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type)
extern "C"  Object_t631007953 * Object_FindObjectOfType_m67275058 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<ResultCardCell>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisResultCardCell_t3938479119_m1896471127(__this /* static, unused */, p0, p1, method) ((  ResultCardCell_t3938479119 * (*) (RuntimeObject * /* static, unused */, ResultCardCell_t3938479119 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void ResultCardCell::populateAssessmentResults(AssessmentRound,AnswerKey)
extern "C"  void ResultCardCell_populateAssessmentResults_m3462029152 (ResultCardCell_t3938479119 * __this, AssessmentRound_t4264710411 * ___roundResult0, AnswerKey_t1212413198 * ___answers1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
extern "C"  void Object_DestroyImmediate_m2288369078 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingCollectionCell::reloadUI()
extern "C"  void TrainingCollectionCell_reloadUI_m827093517 (TrainingCollectionCell_t2778354195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
#define Component_GetComponent_TisImage_t2670269651_m980647750(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Image>()
#define Component_GetComponentInChildren_TisImage_t2670269651_m2604193531(__this, method) ((  Image_t2670269651 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
extern "C"  Transform_t3600365921 * Transform_Find_m1729760951 (Transform_t3600365921 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
#define GameObject_GetComponent_TisImage_t2670269651_m2486712510(__this, method) ((  Image_t2670269651 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C"  void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<TrainingCollectionCell>()
#define GameObject_GetComponent_TisTrainingCollectionCell_t2778354195_m1210859829(__this, method) ((  TrainingCollectionCell_t2778354195 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void CellPressedCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void CellPressedCallBack__ctor_m1649801488 (CellPressedCallBack_t865333736 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingCollectionCell::setCollectionCallback(CellPressedCallBack)
extern "C"  void TrainingCollectionCell_setCollectionCallback_m44971302 (TrainingCollectionCell_t2778354195 * __this, CellPressedCallBack_t865333736 * ___callback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingCollectionCell::Initialize(TrainingHazardController)
extern "C"  void TrainingCollectionCell_Initialize_m800006240 (TrainingCollectionCell_t2778354195 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
extern "C"  Transform_t3600365921 * Transform_GetChild_m1092972975 (Transform_t3600365921 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
#define UnityAction_2__ctor_m2949990045(__this, p0, p1, method) ((  void (*) (UnityAction_2_t2165061829 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m2949990045_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
extern "C"  void SceneManager_add_sceneLoaded_m3678832055 (RuntimeObject * __this /* static, unused */, UnityAction_2_t2165061829 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingDataManager::.ctor(System.String,TrainingController)
extern "C"  void TrainingDataManager__ctor_m1073158598 (TrainingDataManager_t3084013207 * __this, String_t* ___fileName0, TrainingController_t3952779903 * ___tc1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<TrainingHazardController>::GetEnumerator()
#define List_1_GetEnumerator_m2027888975(__this, method) ((  Enumerator_t54050056  (*) (List_1_t2459773475 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<TrainingHazardController>::get_Current()
#define Enumerator_get_Current_m2252741316(__this, method) ((  TrainingHazardController_t987698733 * (*) (Enumerator_t54050056 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Void TrainingHazardController::SetState(System.String)
extern "C"  void TrainingHazardController_SetState_m102977102 (TrainingHazardController_t987698733 * __this, String_t* ___stateName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<TrainingHazardController>::MoveNext()
#define Enumerator_MoveNext_m370746012(__this, method) ((  bool (*) (Enumerator_t54050056 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<TrainingHazardController>::Dispose()
#define Enumerator_Dispose_m4029193529(__this, method) ((  void (*) (Enumerator_t54050056 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<TrainingCollectionController>()
#define GameObject_GetComponent_TisTrainingCollectionController_t2905092020_m3022184610(__this, method) ((  TrainingCollectionController_t2905092020 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void TrainingCollectionController::removeAllCells()
extern "C"  void TrainingCollectionController_removeAllCells_m2696540309 (TrainingCollectionController_t2905092020 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<TrainingHazardController>()
#define GameObject_GetComponent_TisTrainingHazardController_t987698733_m4062657134(__this, method) ((  TrainingHazardController_t987698733 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TrainingHazardController>::Add(!0)
#define List_1_Add_m1366643004(__this, p0, method) ((  void (*) (List_1_t2459773475 *, TrainingHazardController_t987698733 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void TrainingHazardController::setDelegate(TrainingController)
extern "C"  void TrainingHazardController_setDelegate_m3060760941 (TrainingHazardController_t987698733 * __this, TrainingController_t3952779903 * ___tc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// TrainingCollectionCell TrainingCollectionController::addCell(TrainingHazardController)
extern "C"  TrainingCollectionCell_t2778354195 * TrainingCollectionController_addCell_m3008532179 (TrainingCollectionController_t2905092020 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingController::beginRound()
extern "C"  void TrainingController_beginRound_m1547517853 (TrainingController_t3952779903 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<TrainingHazard>::.ctor()
#define List_1__ctor_m2660807848(__this, method) ((  void (*) (List_1_t2270999925 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<TrainingHazard>::Add(!0)
#define List_1_Add_m4193797784(__this, p0, method) ((  void (*) (List_1_t2270999925 *, TrainingHazard_t798925183 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<TrainingHazardController>::Clear()
#define List_1_Clear_m76980947(__this, method) ((  void (*) (List_1_t2459773475 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method)
// System.Void TrainingDataManager::save()
extern "C"  void TrainingDataManager_save_m2989509151 (TrainingDataManager_t3084013207 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingDataManager::addTimesToJson()
extern "C"  void TrainingDataManager_addTimesToJson_m3839368256 (TrainingDataManager_t3084013207 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingDataManager::addRoundsToJson()
extern "C"  void TrainingDataManager_addRoundsToJson_m480598126 (TrainingDataManager_t3084013207 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PARSDataManager::storeToFirebase(System.String)
extern "C"  void PARSDataManager_storeToFirebase_m3012332562 (PARSDataManager_t1176312113 * __this, String_t* ___keyLocation0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C"  void File_WriteAllText_m167356635 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_cyan()
extern "C"  Color_t2555686324  Color_get_cyan_m765383084 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingHazard::.ctor(System.String,System.String)
extern "C"  void TrainingHazard__ctor_m3371616206 (TrainingHazard_t798925183 * __this, String_t* ___category0, String_t* ___name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<HazardIconController>()
#define Component_GetComponentInChildren_TisHazardIconController_t3601592792_m4269302997(__this, method) ((  HazardIconController_t3601592792 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void HazardIconController::setColor(UnityEngine.Color)
extern "C"  void HazardIconController_setColor_m948557051 (HazardIconController_t3601592792 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<HazardContentView>()
#define Component_GetComponentInChildren_TisHazardContentView_t2572541359_m2937662336(__this, method) ((  HazardContentView_t2572541359 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void HazardOffState::.ctor(TrainingHazardController)
extern "C"  void HazardOffState__ctor_m3204079399 (HazardOffState_t4154887258 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingHazardController::SetState(State)
extern "C"  void TrainingHazardController_SetState_m3812308502 (TrainingHazardController_t987698733 * __this, State_t3329758327 * ___state0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingHazard::incrementDuration()
extern "C"  void TrainingHazard_incrementDuration_m1006319826 (TrainingHazard_t798925183 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HazardOnState::.ctor(TrainingHazardController)
extern "C"  void HazardOnState__ctor_m599141368 (HazardOnState_t4192084759 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingController::setOtherStatesToOff(TrainingHazardController)
extern "C"  void TrainingController_setOtherStatesToOff_m1651245967 (TrainingController_t3952779903 * __this, TrainingHazardController_t987698733 * ___selectedHazardController0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C"  void Application_OpenURL_m738341736 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AnswerKey::.ctor(Question[])
extern "C"  void AnswerKey__ctor_m2683242041 (AnswerKey_t1212413198 * __this, QuestionU5BU5D_t3050773464* ___questions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnswerKey__ctor_m2683242041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Question_t1471288757 * V_0 = NULL;
	QuestionU5BU5D_t3050773464* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Dictionary_2_t1067045639 * L_0 = (Dictionary_2_t1067045639 *)il2cpp_codegen_object_new(Dictionary_2_t1067045639_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3412077385(L_0, /*hidden argument*/Dictionary_2__ctor_m3412077385_RuntimeMethod_var);
		__this->set_dictionary_0(L_0);
		QuestionU5BU5D_t3050773464* L_1 = ___questions0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0039;
	}

IL_001a:
	{
		QuestionU5BU5D_t3050773464* L_2 = V_1;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		Question_t1471288757 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		Dictionary_2_t1067045639 * L_6 = __this->get_dictionary_0();
		Question_t1471288757 * L_7 = V_0;
		String_t* L_8 = L_7->get_key_0();
		Question_t1471288757 * L_9 = V_0;
		StringU5BU5D_t1281789340* L_10 = L_9->get_answers_1();
		Dictionary_2_Add_m2025336897(L_6, L_8, L_10, /*hidden argument*/Dictionary_2_Add_m2025336897_RuntimeMethod_var);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		QuestionU5BU5D_t3050773464* L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Single AnswerKey::gradeForRound(Round)
extern "C"  float AnswerKey_gradeForRound_m1433895029 (AnswerKey_t1212413198 * __this, Round_t3007421971 * ___round0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AnswerKey_gradeForRound_m1433895029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Hazard_t335190578 * V_3 = NULL;
	Enumerator_t3696509197  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t1067045639 * L_0 = __this->get_dictionary_0();
		Round_t3007421971 * L_1 = ___round0;
		String_t* L_2 = Round_getSceneID_m1296914292(L_1, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_3 = Dictionary_2_get_Item_m2750682826(L_0, L_2, /*hidden argument*/Dictionary_2_get_Item_m2750682826_RuntimeMethod_var);
		V_0 = L_3;
		StringU5BU5D_t1281789340* L_4 = V_0;
		V_1 = (((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))));
		V_2 = (0.0f);
		Round_t3007421971 * L_5 = ___round0;
		List_1_t1807265320 * L_6 = L_5->get_hazardResponses_3();
		Enumerator_t3696509197  L_7 = List_1_GetEnumerator_m3382736461(L_6, /*hidden argument*/List_1_GetEnumerator_m3382736461_RuntimeMethod_var);
		V_4 = L_7;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_002f:
		{
			Hazard_t335190578 * L_8 = Enumerator_get_Current_m2602721882((&V_4), /*hidden argument*/Enumerator_get_Current_m2602721882_RuntimeMethod_var);
			V_3 = L_8;
			StringU5BU5D_t1281789340* L_9 = V_0;
			Hazard_t335190578 * L_10 = V_3;
			String_t* L_11 = L_10->get_name_1();
			bool L_12 = Enumerable_Contains_TisString_t_m1131914166(NULL /*static, unused*/, (RuntimeObject*)(RuntimeObject*)L_9, L_11, /*hidden argument*/Enumerable_Contains_TisString_t_m1131914166_RuntimeMethod_var);
			if (!L_12)
			{
				goto IL_0055;
			}
		}

IL_0048:
		{
			float L_13 = V_2;
			V_2 = ((float)il2cpp_codegen_add((float)L_13, (float)(1.0f)));
			goto IL_0055;
		}

IL_0055:
		{
			bool L_14 = Enumerator_MoveNext_m1639399454((&V_4), /*hidden argument*/Enumerator_MoveNext_m1639399454_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_002f;
			}
		}

IL_0061:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4248804872((&V_4), /*hidden argument*/Enumerator_Dispose_m4248804872_RuntimeMethod_var);
		IL2CPP_END_FINALLY(102)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		float L_15 = V_2;
		float L_16 = V_1;
		return ((float)il2cpp_codegen_multiply((float)((float)((float)L_15/(float)L_16)), (float)(100.0f)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AssessmentController::.ctor()
extern "C"  void AssessmentController__ctor_m1662058779 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method)
{
	{
		PARSController__ctor_m3918493173(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AssessmentController::Start()
extern "C"  void AssessmentController_Start_m2250056151 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentController_Start_m2250056151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PARSSettings_t2801629121 * L_0 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		bool L_1 = L_0->get_A_forcedTimeNavigationEnabled_9();
		((PARSController_t1025491303 *)__this)->set_isTimedTraining_4(L_1);
		PARSSettings_t2801629121 * L_2 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		bool L_3 = L_2->get_A_selfNavigationEnabled_10();
		((PARSController_t1025491303 *)__this)->set_isAllowedToSelfNavigate_5(L_3);
		PARSSettings_t2801629121 * L_4 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		int32_t L_5 = L_4->get_A_roundForcedTimeLimit_11();
		((PARSController_t1025491303 *)__this)->set_allowedTimePerRound_3(L_5);
		PARSSettings_t2801629121 * L_6 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		int32_t L_7 = L_6->get_A_roundsTotalCount_12();
		((PARSController_t1025491303 *)__this)->set_totalRoundCount_6(L_7);
		((PARSController_t1025491303 *)__this)->set_type_14(((int32_t)65));
		PARSDataManager_t1176312113 * L_8 = (PARSDataManager_t1176312113 *)il2cpp_codegen_object_new(PARSDataManager_t1176312113_il2cpp_TypeInfo_var);
		PARSDataManager__ctor_m867678872(L_8, _stringLiteral487232572, /*hidden argument*/NULL);
		((PARSController_t1025491303 *)__this)->set_dataManager_10(L_8);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_9 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PARSController_t1025491303 *)__this)->set_startTime_12(L_9);
		Nullable_1_t378540539  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Nullable_1__ctor_m3940678751((&L_10), 1, /*hidden argument*/Nullable_1__ctor_m3940678751_RuntimeMethod_var);
		((PARSController_t1025491303 *)__this)->set_currentRoundIndex_7(L_10);
		VirtActionInvoker0::Invoke(6 /* System.Void PARSController::startRound() */, __this);
		String_t* L_11 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		PARSDataManager_t1176312113 * L_12 = ((PARSController_t1025491303 *)__this)->get_dataManager_10();
		intptr_t L_13 = (intptr_t)AssessmentController_populateAnswerKey_m711856798_RuntimeMethod_var;
		Action_1_t3223241059 * L_14 = (Action_1_t3223241059 *)il2cpp_codegen_object_new(Action_1_t3223241059_il2cpp_TypeInfo_var);
		Action_1__ctor_m2606183498(L_14, __this, L_13, /*hidden argument*/Action_1__ctor_m2606183498_RuntimeMethod_var);
		PARSDataManager_retrieveAnswers_m2899432400(L_12, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AssessmentController::startRound()
extern "C"  void AssessmentController_startRound_m1473572809 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentController_startRound_m1473572809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = PARSController_getCurrentSceneID_m563327644(__this, /*hidden argument*/NULL);
		AssessmentRound_t4264710411 * L_1 = (AssessmentRound_t4264710411 *)il2cpp_codegen_object_new(AssessmentRound_t4264710411_il2cpp_TypeInfo_var);
		AssessmentRound__ctor_m3975787227(L_1, L_0, /*hidden argument*/NULL);
		((PARSController_t1025491303 *)__this)->set_currentRound_8(L_1);
		return;
	}
}
// System.Void AssessmentController::completeCurrentRound()
extern "C"  void AssessmentController_completeCurrentRound_m3696108491 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentController_completeCurrentRound_m3696108491_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1807265320 * V_0 = NULL;
	{
		List_1_t1807265320 * L_0 = AssessmentController_getActiveToggleHazards_m3363953234(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Round_t3007421971 * L_1 = ((PARSController_t1025491303 *)__this)->get_currentRound_8();
		List_1_t1807265320 * L_2 = V_0;
		VirtActionInvoker1< List_1_t1807265320 * >::Invoke(5 /* System.Void Round::setResponses(System.Collections.Generic.List`1<Hazard>) */, L_1, L_2);
		AnswerKey_t1212413198 * L_3 = __this->get_answerKey_15();
		Round_t3007421971 * L_4 = ((PARSController_t1025491303 *)__this)->get_currentRound_8();
		float L_5 = AnswerKey_gradeForRound_m1433895029(L_3, L_4, /*hidden argument*/NULL);
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_6);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		PARSController_completeCurrentRound_m3102217683(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AssessmentController::complete()
extern "C"  void AssessmentController_complete_m1461984597 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentController_complete_m1461984597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PARSController_complete_m2748135589(__this, /*hidden argument*/NULL);
		AssessmentController_gradeAssessment_m1358060621(__this, /*hidden argument*/NULL);
		PARSDataManager_t1176312113 * L_0 = ((PARSController_t1025491303 *)__this)->get_dataManager_10();
		DateTime_t3738529785  L_1 = ((PARSController_t1025491303 *)__this)->get_startTime_12();
		DateTime_t3738529785  L_2 = ((PARSController_t1025491303 *)__this)->get_endTime_13();
		PARSDataManager_saveAssessmentTime_m1692115370(L_0, L_1, L_2, /*hidden argument*/NULL);
		PARSDataManager_t1176312113 * L_3 = ((PARSController_t1025491303 *)__this)->get_dataManager_10();
		List_1_t184529417 * L_4 = ((PARSController_t1025491303 *)__this)->get_finishedRounds_9();
		PARSDataManager_saveRounds_m1321154175(L_3, L_4, /*hidden argument*/NULL);
		PARSDataManager_t1176312113 * L_5 = ((PARSController_t1025491303 *)__this)->get_dataManager_10();
		PARSDataManager_saveToFile_m3976889622(L_5, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1675990857, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<Hazard> AssessmentController::getActiveToggleHazards()
extern "C"  List_1_t1807265320 * AssessmentController_getActiveToggleHazards_m3363953234 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentController_getActiveToggleHazards_m3363953234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t1807265320 * V_0 = NULL;
	GameObjectU5BU5D_t3328599146* V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	GameObjectU5BU5D_t3328599146* V_3 = NULL;
	int32_t V_4 = 0;
	Toggle_t2735377061 * V_5 = NULL;
	ToggleController_t3012097607 * V_6 = NULL;
	{
		List_1_t1807265320 * L_0 = (List_1_t1807265320 *)il2cpp_codegen_object_new(List_1_t1807265320_il2cpp_TypeInfo_var);
		List_1__ctor_m2274875901(L_0, /*hidden argument*/List_1__ctor_m2274875901_RuntimeMethod_var);
		V_0 = L_0;
		GameObjectU5BU5D_t3328599146* L_1 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral3085175763, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObjectU5BU5D_t3328599146* L_2 = V_1;
		V_3 = L_2;
		V_4 = 0;
		goto IL_005b;
	}

IL_001b:
	{
		GameObjectU5BU5D_t3328599146* L_3 = V_3;
		int32_t L_4 = V_4;
		int32_t L_5 = L_4;
		GameObject_t1113636619 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		GameObject_t1113636619 * L_7 = V_2;
		Toggle_t2735377061 * L_8 = GameObject_GetComponent_TisToggle_t2735377061_m3911858412(L_7, /*hidden argument*/GameObject_GetComponent_TisToggle_t2735377061_m3911858412_RuntimeMethod_var);
		V_5 = L_8;
		Toggle_t2735377061 * L_9 = V_5;
		bool L_10 = Toggle_get_isOn_m1428293607(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		GameObject_t1113636619 * L_11 = V_2;
		ToggleController_t3012097607 * L_12 = GameObject_GetComponent_TisToggleController_t3012097607_m1888744386(L_11, /*hidden argument*/GameObject_GetComponent_TisToggleController_t3012097607_m1888744386_RuntimeMethod_var);
		V_6 = L_12;
		List_1_t1807265320 * L_13 = V_0;
		ToggleController_t3012097607 * L_14 = V_6;
		String_t* L_15 = L_14->get_category_2();
		ToggleController_t3012097607 * L_16 = V_6;
		String_t* L_17 = L_16->get_value_3();
		Hazard_t335190578 * L_18 = (Hazard_t335190578 *)il2cpp_codegen_object_new(Hazard_t335190578_il2cpp_TypeInfo_var);
		Hazard__ctor_m2612460934(L_18, L_15, L_17, /*hidden argument*/NULL);
		List_1_Add_m470618553(L_13, L_18, /*hidden argument*/List_1_Add_m470618553_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_20 = V_4;
		GameObjectU5BU5D_t3328599146* L_21 = V_3;
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		List_1_t1807265320 * L_22 = V_0;
		return L_22;
	}
}
// System.Void AssessmentController::populateAnswerKey(Question[])
extern "C"  void AssessmentController_populateAnswerKey_m711856798 (AssessmentController_t2586697688 * __this, QuestionU5BU5D_t3050773464* ___questions0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentController_populateAnswerKey_m711856798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		QuestionU5BU5D_t3050773464* L_0 = ___questions0;
		AnswerKey_t1212413198 * L_1 = (AnswerKey_t1212413198 *)il2cpp_codegen_object_new(AnswerKey_t1212413198_il2cpp_TypeInfo_var);
		AnswerKey__ctor_m2683242041(L_1, L_0, /*hidden argument*/NULL);
		__this->set_answerKey_15(L_1);
		return;
	}
}
// System.Void AssessmentController::gradeAssessment()
extern "C"  void AssessmentController_gradeAssessment_m1358060621 (AssessmentController_t2586697688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentController_gradeAssessment_m1358060621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AssessmentRound_t4264710411 * V_0 = NULL;
	Enumerator_t2073773294  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t184529417 * L_0 = ((PARSController_t1025491303 *)__this)->get_finishedRounds_9();
		Enumerator_t2073773294  L_1 = List_1_GetEnumerator_m2597448471(L_0, /*hidden argument*/List_1_GetEnumerator_m2597448471_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			Round_t3007421971 * L_2 = Enumerator_get_Current_m4052406410((&V_1), /*hidden argument*/Enumerator_get_Current_m4052406410_RuntimeMethod_var);
			V_0 = ((AssessmentRound_t4264710411 *)CastclassClass((RuntimeObject*)L_2, AssessmentRound_t4264710411_il2cpp_TypeInfo_var));
			AssessmentRound_t4264710411 * L_3 = V_0;
			AnswerKey_t1212413198 * L_4 = __this->get_answerKey_15();
			AssessmentRound_t4264710411 * L_5 = V_0;
			float L_6 = AnswerKey_gradeForRound_m1433895029(L_4, L_5, /*hidden argument*/NULL);
			L_3->set_HIIScore_6(L_6);
		}

IL_0030:
		{
			bool L_7 = Enumerator_MoveNext_m3792823848((&V_1), /*hidden argument*/Enumerator_MoveNext_m3792823848_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3439656034((&V_1), /*hidden argument*/Enumerator_Dispose_m3439656034_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AssessmentPanelController::.ctor()
extern "C"  void AssessmentPanelController__ctor_m3258221882 (AssessmentPanelController_t2974685767 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AssessmentPanelController::Start()
extern "C"  void AssessmentPanelController_Start_m3537048510 (AssessmentPanelController_t2974685767 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssessmentPanelController_Start_m3537048510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral3723677132, /*hidden argument*/NULL);
		__this->set_collectionView_2(L_0);
		Object_t631007953 * L_1 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral1440638807, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_2 = Object_Instantiate_m3403600534(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1113636619 *)CastclassSealed((RuntimeObject*)L_2, GameObject_t1113636619_il2cpp_TypeInfo_var));
		GameObject_t1113636619 * L_3 = V_0;
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_5 = __this->get_collectionView_2();
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_4, L_6, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_7 = V_0;
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_m3053443106(L_8, L_9, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AssessmentRound::.ctor(System.String)
extern "C"  void AssessmentRound__ctor_m3975787227 (AssessmentRound_t4264710411 * __this, String_t* ___sceneID0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sceneID0;
		Round__ctor_m229890800(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraMovement::.ctor()
extern "C"  void CameraMovement__ctor_m13711528 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method)
{
	{
		__this->set_minFOV_2((65.0f));
		__this->set_maxFOV_3((90.0f));
		__this->set_sensitivity_4((10.0f));
		__this->set_FOV_5((90.0f));
		__this->set_minY_6((-90.0f));
		__this->set_maxY_7((90.0f));
		__this->set_sensX_8((100.0f));
		__this->set_sensY_9((100.0f));
		__this->set_rotationX_11((180.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMovement::Awake()
extern "C"  void CameraMovement_Awake_m3666367343 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_Awake_m3666367343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebGLInput_set_captureAllKeyboardInput_m690635056(NULL /*static, unused*/, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral307881322, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraMovement::Start()
extern "C"  void CameraMovement_Start_m306335942 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_Start_m306335942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CameraMovement_reloadRotation_m3445980600(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral3534642813, /*hidden argument*/NULL);
		EventSystem_t1003666588 * L_1 = GameObject_GetComponent_TisEventSystem_t1003666588_m3854587646(L_0, /*hidden argument*/GameObject_GetComponent_TisEventSystem_t1003666588_m3854587646_RuntimeMethod_var);
		__this->set_eventSys_15(L_1);
		return;
	}
}
// System.Void CameraMovement::Update()
extern "C"  void CameraMovement_Update_m1067466054 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_Update_m1067466054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		__this->set_dragging_14((bool)0);
	}

IL_0012:
	{
		EventSystem_t1003666588 * L_1 = __this->get_eventSys_15();
		bool L_2 = EventSystem_IsPointerOverGameObject_m1911785875(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		bool L_3 = __this->get_dragging_14();
		if (!L_3)
		{
			goto IL_012c;
		}
	}

IL_002d:
	{
		float L_4 = __this->get_FOV_5();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_5 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral1891098395, /*hidden argument*/NULL);
		float L_6 = __this->get_sensitivity_4();
		__this->set_FOV_5(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
		float L_7 = __this->get_FOV_5();
		float L_8 = __this->get_minFOV_2();
		float L_9 = __this->get_maxFOV_3();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->set_FOV_5(L_10);
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = __this->get_FOV_5();
		Camera_set_fieldOfView_m1438246590(L_11, L_12, /*hidden argument*/NULL);
		bool L_13 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_012c;
		}
	}
	{
		__this->set_dragging_14((bool)1);
		__this->set_lerping_13((bool)0);
		float L_14 = __this->get_rotationX_11();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_15 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral3403559637, /*hidden argument*/NULL);
		float L_16 = __this->get_sensX_8();
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_rotationX_11(((float)il2cpp_codegen_add((float)L_14, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), (float)L_17)))));
		float L_18 = __this->get_rotationY_10();
		float L_19 = Input_GetAxis_m4009438427(NULL /*static, unused*/, _stringLiteral674676282, /*hidden argument*/NULL);
		float L_20 = __this->get_sensY_9();
		float L_21 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_rotationY_10(((float)il2cpp_codegen_add((float)L_18, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), (float)L_21)))));
		float L_22 = __this->get_rotationY_10();
		float L_23 = CameraMovement_eulerTo360_m4112585906(__this, L_22, /*hidden argument*/NULL);
		float L_24 = __this->get_minY_6();
		float L_25 = __this->get_maxY_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_26 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		__this->set_rotationY_10(L_26);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_28 = __this->get_rotationY_10();
		float L_29 = __this->get_rotationX_11();
		Transform_t3600365921 * L_30 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = Transform_get_localEulerAngles_m2136926248(L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		float L_32 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m3353183577((&L_33), ((-L_28)), L_29, L_32, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_m4202601546(L_27, L_33, /*hidden argument*/NULL);
	}

IL_012c:
	{
		bool L_34 = __this->get_lerping_13();
		if (!L_34)
		{
			goto IL_013d;
		}
	}
	{
		CameraMovement_smoothLookTowards_m3218301120(__this, /*hidden argument*/NULL);
	}

IL_013d:
	{
		return;
	}
}
// System.Void CameraMovement::LookTowards(UnityEngine.Transform)
extern "C"  void CameraMovement_LookTowards_m4136775812 (CameraMovement_t4037080991 * __this, Transform_t3600365921 * ___target0, const RuntimeMethod* method)
{
	{
		__this->set_lerping_13((bool)1);
		Transform_t3600365921 * L_0 = ___target0;
		__this->set_lookAtTarget_12(L_0);
		return;
	}
}
// System.Void CameraMovement::smoothLookTowards()
extern "C"  void CameraMovement_smoothLookTowards_m3218301120 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_smoothLookTowards_m3218301120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3600365921 * L_0 = __this->get_lookAtTarget_12();
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Vector3_t3722313464  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_9 = Transform_get_rotation_m3502953881(L_8, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_10 = V_1;
		float L_11 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_12 = Quaternion_Lerp_m1238806789(NULL /*static, unused*/, L_9, L_10, ((float)il2cpp_codegen_multiply((float)L_11, (float)(4.0f))), /*hidden argument*/NULL);
		Transform_set_rotation_m3524318132(L_7, L_12, /*hidden argument*/NULL);
		CameraMovement_reloadRotation_m3445980600(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_14 = Transform_get_rotation_m3502953881(L_13, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_15 = V_1;
		float L_16 = Quaternion_Angle_m1586774072(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		if ((!(((float)L_16) < ((float)(1.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		__this->set_lerping_13((bool)0);
	}

IL_0072:
	{
		return;
	}
}
// System.Void CameraMovement::reloadRotation()
extern "C"  void CameraMovement_reloadRotation_m3445980600 (CameraMovement_t4037080991 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_1 = Transform_get_localRotation_m3487911431(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3722313464  L_2 = Quaternion_get_eulerAngles_m3425202016((&V_0), /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		__this->set_rotationX_11(L_3);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_5 = Transform_get_localRotation_m3487911431(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Vector3_t3722313464  L_6 = Quaternion_get_eulerAngles_m3425202016((&V_2), /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = (&V_3)->get_x_1();
		__this->set_rotationY_10(((-L_7)));
		return;
	}
}
// System.Single CameraMovement::eulerTo360(System.Single)
extern "C"  float CameraMovement_eulerTo360_m4112585906 (CameraMovement_t4037080991 * __this, float ___eulerValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraMovement_eulerTo360_m4112585906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0032;
	}

IL_0005:
	{
		float L_0 = ___eulerValue0;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		float L_1 = ___eulerValue0;
		___eulerValue0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)(360.0f)));
		goto IL_0032;
	}

IL_001e:
	{
		float L_2 = ___eulerValue0;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		float L_3 = ___eulerValue0;
		___eulerValue0 = ((float)il2cpp_codegen_add((float)L_3, (float)(360.0f)));
	}

IL_0032:
	{
		float L_4 = ___eulerValue0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_5 = fabsf(L_4);
		if ((((float)L_5) > ((float)(180.0f))))
		{
			goto IL_0005;
		}
	}
	{
		float L_6 = ___eulerValue0;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_CellPressedCallBack_t865333736 (CellPressedCallBack_t865333736 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CellPressedCallBack::.ctor(System.Object,System.IntPtr)
extern "C"  void CellPressedCallBack__ctor_m1649801488 (CellPressedCallBack_t865333736 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void CellPressedCallBack::Invoke()
extern "C"  void CellPressedCallBack_Invoke_m807315293 (CellPressedCallBack_t865333736 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		CellPressedCallBack_Invoke_m807315293((CellPressedCallBack_t865333736 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
		}
	}
	else
	{
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult CellPressedCallBack::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* CellPressedCallBack_BeginInvoke_m3208111304 (CellPressedCallBack_t865333736 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void CellPressedCallBack::EndInvoke(System.IAsyncResult)
extern "C"  void CellPressedCallBack_EndInvoke_m3337006829 (CellPressedCallBack_t865333736 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DemographicViewController::.ctor()
extern "C"  void DemographicViewController__ctor_m454383629 (DemographicViewController_t3688029416 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DemographicViewController::Start()
extern "C"  void DemographicViewController_Start_m1356958573 (DemographicViewController_t3688029416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemographicViewController_Start_m1356958573_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputField_t3762917431 * L_0 = Component_GetComponentInChildren_TisInputField_t3762917431_m1498207142(__this, /*hidden argument*/Component_GetComponentInChildren_TisInputField_t3762917431_m1498207142_RuntimeMethod_var);
		__this->set_studyTextField_2(L_0);
		ToggleGroup_t123837990 * L_1 = Component_GetComponentInChildren_TisToggleGroup_t123837990_m4013193853(__this, /*hidden argument*/Component_GetComponentInChildren_TisToggleGroup_t123837990_m4013193853_RuntimeMethod_var);
		__this->set_demographicToggles_3(L_1);
		return;
	}
}
// System.Void DemographicViewController::Update()
extern "C"  void DemographicViewController_Update_m684293714 (DemographicViewController_t3688029416 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void DemographicViewController::buttonPressed()
extern "C"  void DemographicViewController_buttonPressed_m2533673270 (DemographicViewController_t3688029416 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DemographicViewController_buttonPressed_m2533673270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_t2735377061 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		ToggleGroup_t123837990 * L_0 = __this->get_demographicToggles_3();
		RuntimeObject* L_1 = ToggleGroup_ActiveToggles_m3179342002(L_0, /*hidden argument*/NULL);
		Toggle_t2735377061 * L_2 = Enumerable_First_TisToggle_t2735377061_m1709940420(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_First_TisToggle_t2735377061_m1709940420_RuntimeMethod_var);
		V_0 = L_2;
		Toggle_t2735377061 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_3, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0039;
	}

IL_0022:
	{
		Toggle_t2735377061 * L_5 = V_0;
		Text_t1901882714 * L_6 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(L_5, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(71 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		V_1 = L_7;
		String_t* L_8 = V_1;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral1898394020, L_8, /*hidden argument*/NULL);
	}

IL_0039:
	{
		InputField_t3762917431 * L_9 = __this->get_studyTextField_2();
		String_t* L_10 = InputField_get_text_m3534748202(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		String_t* L_11 = V_2;
		if (L_11)
		{
			goto IL_0050;
		}
	}
	{
		goto IL_005b;
	}

IL_0050:
	{
		String_t* L_12 = V_2;
		PlayerPrefs_SetString_m2101271233(NULL /*static, unused*/, _stringLiteral3727360559, L_12, /*hidden argument*/NULL);
	}

IL_005b:
	{
		PlayerPrefs_Save_m2701929462(NULL /*static, unused*/, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2142637263, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Done_Button::.ctor()
extern "C"  void Done_Button__ctor_m3815491349 (Done_Button_t3558270190 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Done_Button::MoveFile()
extern "C"  void Done_Button_MoveFile_m683613391 (Done_Button_t3558270190 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Done_Button_MoveFile_m683613391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	List_1_t3319525431 * V_4 = NULL;
	DateTime_t3738529785  V_5;
	memset(&V_5, 0, sizeof(V_5));
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	StringU5BU5D_t1281789340* V_8 = NULL;
	int32_t V_9 = 0;
	DirectoryInfo_t35957480 * V_10 = NULL;
	DateTime_t3738529785  V_11;
	memset(&V_11, 0, sizeof(V_11));
	String_t* V_12 = NULL;
	Il2CppChar V_13 = 0x0;
	int32_t V_14 = 0;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m3439870207(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_GetTempPath_m323864048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2163913788(NULL /*static, unused*/, L_1, _stringLiteral3737918690, L_2, _stringLiteral1651855327, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = Path_GetTempPath_m323864048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_4, _stringLiteral3737918690, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = Path_GetTempPath_m323864048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = V_0;
		String_t* L_9 = String_Concat_m2163913788(NULL /*static, unused*/, L_7, _stringLiteral3737918690, L_8, _stringLiteral1743080903, /*hidden argument*/NULL);
		V_3 = L_9;
		String_t* L_10 = V_3;
		bool L_11 = Directory_Exists_m1484791558(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_12 = V_3;
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		String_t* L_13 = V_1;
		String_t* L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, L_14, _stringLiteral1651855327, /*hidden argument*/NULL);
		File_Move_m1898656234(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		goto IL_0149;
	}

IL_006b:
	{
		List_1_t3319525431 * L_16 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_16, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_4 = L_16;
		DateTime__ctor_m12900168((&V_5), ((int32_t)1900), 1, 1, /*hidden argument*/NULL);
		String_t* L_17 = V_2;
		StringU5BU5D_t1281789340* L_18 = Directory_GetDirectories_m1966820948(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_8 = L_18;
		V_9 = 0;
		goto IL_00ce;
	}

IL_0090:
	{
		StringU5BU5D_t1281789340* L_19 = V_8;
		int32_t L_20 = V_9;
		int32_t L_21 = L_20;
		String_t* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_7 = L_22;
		String_t* L_23 = V_7;
		DirectoryInfo_t35957480 * L_24 = (DirectoryInfo_t35957480 *)il2cpp_codegen_object_new(DirectoryInfo_t35957480_il2cpp_TypeInfo_var);
		DirectoryInfo__ctor_m1000259829(L_24, L_23, /*hidden argument*/NULL);
		V_10 = L_24;
		DirectoryInfo_t35957480 * L_25 = V_10;
		DateTime_t3738529785  L_26 = FileSystemInfo_get_LastWriteTime_m1574089390(L_25, /*hidden argument*/NULL);
		V_11 = L_26;
		DateTime_t3738529785  L_27 = V_11;
		DateTime_t3738529785  L_28 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_29 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00c8;
		}
	}
	{
		String_t* L_30 = V_7;
		V_6 = L_30;
		DateTime_t3738529785  L_31 = V_11;
		V_5 = L_31;
		List_1_t3319525431 * L_32 = V_4;
		String_t* L_33 = V_6;
		List_1_Add_m1685793073(L_32, L_33, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
	}

IL_00c8:
	{
		int32_t L_34 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00ce:
	{
		int32_t L_35 = V_9;
		StringU5BU5D_t1281789340* L_36 = V_8;
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))))
		{
			goto IL_0090;
		}
	}
	{
		List_1_t3319525431 * L_37 = V_4;
		List_1_t3319525431 * L_38 = V_4;
		int32_t L_39 = List_1_get_Count_m2276455407(L_38, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		String_t* L_40 = List_1_get_Item_m3346958548(L_37, ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1)), /*hidden argument*/List_1_get_Item_m3346958548_RuntimeMethod_var);
		V_12 = L_40;
		String_t* L_41 = V_12;
		String_t* L_42 = V_12;
		int32_t L_43 = String_get_Length_m3847582255(L_42, /*hidden argument*/NULL);
		Il2CppChar L_44 = String_get_Chars_m2986988803(L_41, ((int32_t)il2cpp_codegen_subtract((int32_t)L_43, (int32_t)1)), /*hidden argument*/NULL);
		V_13 = L_44;
		Il2CppChar L_45 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_45, (int32_t)((int32_t)48))), (int32_t)1));
		String_t* L_46 = Int32_ToString_m141394615((&V_14), /*hidden argument*/NULL);
		V_15 = L_46;
		String_t* L_47 = V_12;
		String_t* L_48 = V_12;
		int32_t L_49 = String_get_Length_m3847582255(L_48, /*hidden argument*/NULL);
		String_t* L_50 = String_Remove_m562998446(L_47, ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)), 1, /*hidden argument*/NULL);
		String_t* L_51 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m3937257545(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		V_16 = L_52;
		String_t* L_53 = V_16;
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		String_t* L_54 = V_1;
		String_t* L_55 = V_16;
		String_t* L_56 = String_Concat_m3937257545(NULL /*static, unused*/, L_55, _stringLiteral1651855327, /*hidden argument*/NULL);
		File_Move_m1898656234(NULL /*static, unused*/, L_54, L_56, /*hidden argument*/NULL);
	}

IL_0149:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Email_Data::.ctor()
extern "C"  void Email_Data__ctor_m229661124 (Email_Data_t2527726807 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Email_Data::sendAutoMail()
extern "C"  void Email_Data_sendAutoMail_m4110006632 (Email_Data_t2527726807 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Email_Data_sendAutoMail_m4110006632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MailMessage_t154277952 * V_0 = NULL;
	String_t* V_1 = NULL;
	SmtpClient_t1048709847 * V_2 = NULL;
	{
		MailMessage_t154277952 * L_0 = (MailMessage_t154277952 *)il2cpp_codegen_object_new(MailMessage_t154277952_il2cpp_TypeInfo_var);
		MailMessage__ctor_m1825471261(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MailMessage_t154277952 * L_1 = V_0;
		MailAddress_t3229635559 * L_2 = (MailAddress_t3229635559 *)il2cpp_codegen_object_new(MailAddress_t3229635559_il2cpp_TypeInfo_var);
		MailAddress__ctor_m53933319(L_2, _stringLiteral15098105, /*hidden argument*/NULL);
		MailMessage_set_From_m3034870219(L_1, L_2, /*hidden argument*/NULL);
		MailMessage_t154277952 * L_3 = V_0;
		MailAddressCollection_t2881748872 * L_4 = MailMessage_get_To_m4195779436(L_3, /*hidden argument*/NULL);
		MailAddressCollection_Add_m3813002948(L_4, _stringLiteral1654290143, /*hidden argument*/NULL);
		MailMessage_t154277952 * L_5 = V_0;
		MailMessage_set_Subject_m4057037050(L_5, _stringLiteral2029288972, /*hidden argument*/NULL);
		MailMessage_t154277952 * L_6 = V_0;
		MailMessage_set_Body_m1999412655(L_6, _stringLiteral2440652511, /*hidden argument*/NULL);
		String_t* L_7 = SystemInfo_get_deviceUniqueIdentifier_m3439870207(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_7;
		MailMessage_t154277952 * L_8 = V_0;
		AttachmentCollection_t1412086921 * L_9 = MailMessage_get_Attachments_m811896912(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_10 = Path_GetTempPath_m323864048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m2163913788(NULL /*static, unused*/, L_10, _stringLiteral3737918690, L_11, _stringLiteral3900656079, /*hidden argument*/NULL);
		Attachment_t2783998197 * L_13 = (Attachment_t2783998197 *)il2cpp_codegen_object_new(Attachment_t2783998197_il2cpp_TypeInfo_var);
		Attachment__ctor_m4191839283(L_13, L_12, /*hidden argument*/NULL);
		Collection_1_Add_m2768975781(L_9, L_13, /*hidden argument*/Collection_1_Add_m2768975781_RuntimeMethod_var);
		SmtpClient_t1048709847 * L_14 = (SmtpClient_t1048709847 *)il2cpp_codegen_object_new(SmtpClient_t1048709847_il2cpp_TypeInfo_var);
		SmtpClient__ctor_m4128203854(L_14, _stringLiteral4170948408, /*hidden argument*/NULL);
		V_2 = L_14;
		SmtpClient_t1048709847 * L_15 = V_2;
		SmtpClient_set_Port_m2583583088(L_15, ((int32_t)587), /*hidden argument*/NULL);
		SmtpClient_t1048709847 * L_16 = V_2;
		NetworkCredential_t3282608323 * L_17 = (NetworkCredential_t3282608323 *)il2cpp_codegen_object_new(NetworkCredential_t3282608323_il2cpp_TypeInfo_var);
		NetworkCredential__ctor_m2171369688(L_17, _stringLiteral3507221820, _stringLiteral2647798630, /*hidden argument*/NULL);
		SmtpClient_set_Credentials_m145499156(L_16, L_17, /*hidden argument*/NULL);
		SmtpClient_t1048709847 * L_18 = V_2;
		SmtpClient_set_EnableSsl_m4135527317(L_18, (bool)1, /*hidden argument*/NULL);
		RemoteCertificateValidationCallback_t3014364904 * L_19 = ((Email_Data_t2527726807_StaticFields*)il2cpp_codegen_static_fields_for(Email_Data_t2527726807_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		if (L_19)
		{
			goto IL_00b1;
		}
	}
	{
		intptr_t L_20 = (intptr_t)Email_Data_U3CsendAutoMailU3Em__0_m2024622076_RuntimeMethod_var;
		RemoteCertificateValidationCallback_t3014364904 * L_21 = (RemoteCertificateValidationCallback_t3014364904 *)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t3014364904_il2cpp_TypeInfo_var);
		RemoteCertificateValidationCallback__ctor_m1251969663(L_21, NULL, L_20, /*hidden argument*/NULL);
		((Email_Data_t2527726807_StaticFields*)il2cpp_codegen_static_fields_for(Email_Data_t2527726807_il2cpp_TypeInfo_var))->set_U3CU3Ef__amU24cache0_2(L_21);
	}

IL_00b1:
	{
		RemoteCertificateValidationCallback_t3014364904 * L_22 = ((Email_Data_t2527726807_StaticFields*)il2cpp_codegen_static_fields_for(Email_Data_t2527726807_il2cpp_TypeInfo_var))->get_U3CU3Ef__amU24cache0_2();
		IL2CPP_RUNTIME_CLASS_INIT(ServicePointManager_t170559685_il2cpp_TypeInfo_var);
		ServicePointManager_set_ServerCertificateValidationCallback_m1752789210(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		SmtpClient_t1048709847 * L_23 = V_2;
		MailMessage_t154277952 * L_24 = V_0;
		SmtpClient_Send_m1008998301(L_23, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Email_Data::<sendAutoMail>m__0(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool Email_Data_U3CsendAutoMailU3Em__0_m2024622076 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___s0, X509Certificate_t713131622 * ___certificate1, X509Chain_t194917408 * ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Finish_Button::.ctor()
extern "C"  void Finish_Button__ctor_m3912121908 (Finish_Button_t3878445350 * __this, const RuntimeMethod* method)
{
	{
		__this->set_time_3((2.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Finish_Button::Start()
extern "C"  void Finish_Button_Start_m539663992 (Finish_Button_t3878445350 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_ks_2();
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Finish_Button::timer()
extern "C"  RuntimeObject* Finish_Button_timer_m3339991693 (Finish_Button_t3878445350 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Finish_Button_timer_m3339991693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CtimerU3Ec__Iterator0_t2808194927 * V_0 = NULL;
	{
		U3CtimerU3Ec__Iterator0_t2808194927 * L_0 = (U3CtimerU3Ec__Iterator0_t2808194927 *)il2cpp_codegen_object_new(U3CtimerU3Ec__Iterator0_t2808194927_il2cpp_TypeInfo_var);
		U3CtimerU3Ec__Iterator0__ctor_m2614439895(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CtimerU3Ec__Iterator0_t2808194927 * L_1 = V_0;
		L_1->set_U24this_0(__this);
		U3CtimerU3Ec__Iterator0_t2808194927 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Finish_Button::TaskOnClick(System.String)
extern "C"  void Finish_Button_TaskOnClick_m3222859292 (Finish_Button_t3878445350 * __this, String_t* ___sceneToChangeTo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Finish_Button_TaskOnClick_m3222859292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m3439870207(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_GetTempPath_m323864048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m2163913788(NULL /*static, unused*/, L_1, _stringLiteral3737918690, L_2, _stringLiteral1651855327, /*hidden argument*/NULL);
		bool L_4 = File_Exists_m3943585060(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_5 = Finish_Button_timer_m3339991693(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_6 = Path_GetTempPath_m323864048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m2163913788(NULL /*static, unused*/, L_6, _stringLiteral3737918690, L_7, _stringLiteral1651855327, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_9 = File_ReadAllLines_m2281910820(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		StringU5BU5D_t1281789340* L_10 = V_1;
		String_t* L_11 = String_Join_m2050845953(NULL /*static, unused*/, _stringLiteral3452614528, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		String_t* L_12 = V_2;
		bool L_13 = String_Contains_m1147431944(L_12, _stringLiteral1672095855, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_14 = V_2;
		bool L_15 = String_Contains_m1147431944(L_14, _stringLiteral1672030319, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_16 = V_2;
		bool L_17 = String_Contains_m1147431944(L_16, _stringLiteral1671964783, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_18 = V_2;
		bool L_19 = String_Contains_m1147431944(L_18, _stringLiteral1671899247, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_00b0;
		}
	}

IL_009e:
	{
		RuntimeObject* L_20 = Finish_Button_timer_m3339991693(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_20, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_00b0:
	{
		String_t* L_21 = ___sceneToChangeTo0;
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Finish_Button/<timer>c__Iterator0::.ctor()
extern "C"  void U3CtimerU3Ec__Iterator0__ctor_m2614439895 (U3CtimerU3Ec__Iterator0_t2808194927 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Finish_Button/<timer>c__Iterator0::MoveNext()
extern "C"  bool U3CtimerU3Ec__Iterator0_MoveNext_m1214629907 (U3CtimerU3Ec__Iterator0_t2808194927 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtimerU3Ec__Iterator0_MoveNext_m1214629907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0061;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_0021:
	{
		Finish_Button_t3878445350 * L_2 = __this->get_U24this_0();
		GameObject_t1113636619 * L_3 = L_2->get_ks_2();
		GameObject_t1113636619 * L_4 = GameObject_get_gameObject_m3693461266(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		Finish_Button_t3878445350 * L_5 = __this->get_U24this_0();
		float L_6 = L_5->get_time_3();
		WaitForSeconds_t1699091251 * L_7 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U24current_1(L_7);
		bool L_8 = __this->get_U24disposing_2();
		if (L_8)
		{
			goto IL_005c;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_005c:
	{
		goto IL_0080;
	}

IL_0061:
	{
		Finish_Button_t3878445350 * L_9 = __this->get_U24this_0();
		GameObject_t1113636619 * L_10 = L_9->get_ks_2();
		GameObject_t1113636619 * L_11 = GameObject_get_gameObject_m3693461266(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_11, (bool)0, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_007e:
	{
		return (bool)0;
	}

IL_0080:
	{
		return (bool)1;
	}
}
// System.Object Finish_Button/<timer>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CtimerU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m920192881 (U3CtimerU3Ec__Iterator0_t2808194927 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object Finish_Button/<timer>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CtimerU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3823744407 (U3CtimerU3Ec__Iterator0_t2808194927 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void Finish_Button/<timer>c__Iterator0::Dispose()
extern "C"  void U3CtimerU3Ec__Iterator0_Dispose_m491560066 (U3CtimerU3Ec__Iterator0_t2808194927 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void Finish_Button/<timer>c__Iterator0::Reset()
extern "C"  void U3CtimerU3Ec__Iterator0_Reset_m1551868511 (U3CtimerU3Ec__Iterator0_t2808194927 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CtimerU3Ec__Iterator0_Reset_m1551868511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FlipNormals::.ctor()
extern "C"  void FlipNormals__ctor_m3082907512 (FlipNormals_t293739268 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FlipNormals::Start()
extern "C"  void FlipNormals_Start_m996546300 (FlipNormals_t293739268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FlipNormals_Start_m996546300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t3648964284 * V_0 = NULL;
	Vector3U5BU5D_t1718750761* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t385246372* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		MeshFilter_t3523625662 * L_0 = Component_GetComponent_TisMeshFilter_t3523625662_m1718783796(__this, /*hidden argument*/Component_GetComponent_TisMeshFilter_t3523625662_m1718783796_RuntimeMethod_var);
		Mesh_t3648964284 * L_1 = MeshFilter_get_mesh_m3346355278(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Mesh_t3648964284 * L_2 = V_0;
		Vector3U5BU5D_t1718750761* L_3 = Mesh_get_normals_m4099615978(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0040;
	}

IL_001a:
	{
		Vector3U5BU5D_t1718750761* L_4 = V_1;
		int32_t L_5 = V_2;
		Vector3U5BU5D_t1718750761* L_6 = V_1;
		int32_t L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_op_Multiply_m2104357790(NULL /*static, unused*/, (-1.0f), (*(Vector3_t3722313464 *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))), /*hidden argument*/NULL);
		*(Vector3_t3722313464 *)((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5))) = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_10 = V_2;
		Vector3U5BU5D_t1718750761* L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		Mesh_t3648964284 * L_12 = V_0;
		Vector3U5BU5D_t1718750761* L_13 = V_1;
		Mesh_set_normals_m332514528(L_12, L_13, /*hidden argument*/NULL);
		V_3 = 0;
		goto IL_00a2;
	}

IL_0057:
	{
		Mesh_t3648964284 * L_14 = V_0;
		int32_t L_15 = V_3;
		Int32U5BU5D_t385246372* L_16 = Mesh_GetTriangles_m973693202(L_14, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		V_5 = 0;
		goto IL_008a;
	}

IL_0068:
	{
		Int32U5BU5D_t385246372* L_17 = V_4;
		int32_t L_18 = V_5;
		int32_t L_19 = L_18;
		int32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		Int32U5BU5D_t385246372* L_21 = V_4;
		int32_t L_22 = V_5;
		Int32U5BU5D_t385246372* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (int32_t)L_26);
		Int32U5BU5D_t385246372* L_27 = V_4;
		int32_t L_28 = V_5;
		int32_t L_29 = V_6;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1))), (int32_t)L_29);
		int32_t L_30 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)3));
	}

IL_008a:
	{
		int32_t L_31 = V_5;
		Int32U5BU5D_t385246372* L_32 = V_4;
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0068;
		}
	}
	{
		Mesh_t3648964284 * L_33 = V_0;
		Int32U5BU5D_t385246372* L_34 = V_4;
		int32_t L_35 = V_3;
		Mesh_SetTriangles_m3871477336(L_33, L_34, L_35, /*hidden argument*/NULL);
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_37 = V_3;
		Mesh_t3648964284 * L_38 = V_0;
		int32_t L_39 = Mesh_get_subMeshCount_m3992802841(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_37) < ((int32_t)L_39)))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hazard::.ctor(System.String,System.String)
extern "C"  void Hazard__ctor_m2612460934 (Hazard_t335190578 * __this, String_t* ___category0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___category0;
		__this->set_category_0(L_0);
		String_t* L_1 = ___name1;
		__this->set_name_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HazardContentView::.ctor()
extern "C"  void HazardContentView__ctor_m1866296442 (HazardContentView_t2572541359 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardContentView::Start()
extern "C"  void HazardContentView_Start_m342415974 (HazardContentView_t2572541359 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HazardContentView_Start_m342415974_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRendererU5BU5D_t911335936* L_0 = Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354(__this, /*hidden argument*/Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354_RuntimeMethod_var);
		__this->set_sprites_2(L_0);
		return;
	}
}
// System.Void HazardContentView::setContentVisibilty(System.Boolean)
extern "C"  void HazardContentView_setContentVisibilty_m329572791 (HazardContentView_t2572541359 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		bool L_1 = ___enabled0;
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HazardIconController::.ctor()
extern "C"  void HazardIconController__ctor_m1114790111 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardIconController::Start()
extern "C"  void HazardIconController_Start_m690616789 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HazardIconController_Start_m690616789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Transform_get_parent_m835071599(L_0, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_2 = Component_GetComponent_TisTrainingHazardController_t987698733_m259221932(L_1, /*hidden argument*/Component_GetComponent_TisTrainingHazardController_t987698733_m259221932_RuntimeMethod_var);
		__this->set_parentController_2(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_4 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		Transform_LookAt_m3968184312(L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardIconController::Update()
extern "C"  void HazardIconController_Update_m848640067 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HazardIconController_Update_m848640067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	HazardIconController_t3601592792 * G_B5_0 = NULL;
	HazardIconController_t3601592792 * G_B1_0 = NULL;
	HazardIconController_t3601592792 * G_B2_0 = NULL;
	HazardIconController_t3601592792 * G_B3_0 = NULL;
	HazardIconController_t3601592792 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	HazardIconController_t3601592792 * G_B6_1 = NULL;
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3 = Camera_WorldToViewportPoint_m1538355680(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_z_3();
		G_B1_0 = __this;
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			G_B5_0 = __this;
			goto IL_007f;
		}
	}
	{
		float L_5 = (&V_0)->get_x_1();
		G_B2_0 = G_B1_0;
		if ((!(((double)(((double)((double)L_5)))) > ((double)(0.1)))))
		{
			G_B5_0 = G_B1_0;
			goto IL_007f;
		}
	}
	{
		float L_6 = (&V_0)->get_x_1();
		G_B3_0 = G_B2_0;
		if ((!(((double)(((double)((double)L_6)))) < ((double)(0.9)))))
		{
			G_B5_0 = G_B2_0;
			goto IL_007f;
		}
	}
	{
		float L_7 = (&V_0)->get_y_2();
		G_B4_0 = G_B3_0;
		if ((!(((double)(((double)((double)L_7)))) > ((double)(0.1)))))
		{
			G_B5_0 = G_B3_0;
			goto IL_007f;
		}
	}
	{
		float L_8 = (&V_0)->get_y_2();
		G_B6_0 = ((((double)(((double)((double)L_8)))) < ((double)(0.9)))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0080;
	}

IL_007f:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0080:
	{
		G_B6_1->set_isInView_6((bool)G_B6_0);
		bool L_9 = __this->get_isInView_6();
		if (L_9)
		{
			goto IL_00af;
		}
	}
	{
		Camera_t4157153871 * L_10 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraMovement_t4037080991 * L_11 = Component_GetComponent_TisCameraMovement_t4037080991_m4258948832(L_10, /*hidden argument*/Component_GetComponent_TisCameraMovement_t4037080991_m4258948832_RuntimeMethod_var);
		bool L_12 = L_11->get_lerping_13();
		if (L_12)
		{
			goto IL_00af;
		}
	}
	{
		TrainingHazardController_t987698733 * L_13 = __this->get_parentController_2();
		TrainingHazardController_SetStateOff_m2749530923(L_13, /*hidden argument*/NULL);
	}

IL_00af:
	{
		return;
	}
}
// System.Void HazardIconController::setColor(UnityEngine.Color)
extern "C"  void HazardIconController_setColor_m948557051 (HazardIconController_t3601592792 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		Color_t2555686324  L_0 = ___color0;
		__this->set_color_3(L_0);
		return;
	}
}
// System.Void HazardIconController::OnMouseDown()
extern "C"  void HazardIconController_OnMouseDown_m491487332 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method)
{
	{
		TrainingHazardController_t987698733 * L_0 = __this->get_parentController_2();
		TrainingHazardController_ToggleState_m3766278890(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardIconController::renderToggleOn()
extern "C"  void HazardIconController_renderToggleOn_m3505321621 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method)
{
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get_fill_4();
		Color_t2555686324  L_1 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_0, L_1, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_2 = __this->get_outline_5();
		Color_t2555686324  L_3 = __this->get_color_3();
		SpriteRenderer_set_color_m3056777566(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardIconController::renderToggleOff()
extern "C"  void HazardIconController_renderToggleOff_m3813990765 (HazardIconController_t3601592792 * __this, const RuntimeMethod* method)
{
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get_fill_4();
		Color_t2555686324  L_1 = __this->get_color_3();
		SpriteRenderer_set_color_m3056777566(L_0, L_1, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_2 = __this->get_outline_5();
		Color_t2555686324  L_3 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		SpriteRenderer_set_color_m3056777566(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HazardOffState::.ctor(TrainingHazardController)
extern "C"  void HazardOffState__ctor_m3204079399 (HazardOffState_t4154887258 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method)
{
	{
		TrainingHazardController_t987698733 * L_0 = ___hazardController0;
		State__ctor_m2371227322(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardOffState::OnStateEnter()
extern "C"  void HazardOffState_OnStateEnter_m4259900665 (HazardOffState_t4154887258 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Color_t2555686324  L_1 = Color_get_gray_m1471337008(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		TrainingHazardController_t987698733 * L_2 = ((State_t3329758327 *)__this)->get_hazardController_0();
		HazardIconController_t3601592792 * L_3 = L_2->get_icon_3();
		HazardIconController_renderToggleOff_m3813990765(L_3, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_4 = ((State_t3329758327 *)__this)->get_hazardController_0();
		HazardContentView_t2572541359 * L_5 = L_4->get_content_4();
		HazardContentView_setContentVisibilty_m329572791(L_5, (bool)0, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_6 = ((State_t3329758327 *)__this)->get_hazardController_0();
		TrainingCollectionCell_t2778354195 * L_7 = L_6->get_cell_5();
		Color_t2555686324  L_8 = V_0;
		Color_t2555686324  L_9 = V_1;
		TrainingCollectionCell_setViewColors_m607410905(L_7, L_8, L_9, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_10 = ((State_t3329758327 *)__this)->get_hazardController_0();
		TrainingCollectionCell_t2778354195 * L_11 = L_10->get_cell_5();
		TrainingCollectionCell_setSummaryTextBox_m3467887963(L_11, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HazardOnState::.ctor(TrainingHazardController)
extern "C"  void HazardOnState__ctor_m599141368 (HazardOnState_t4192084759 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method)
{
	{
		TrainingHazardController_t987698733 * L_0 = ___hazardController0;
		State__ctor_m2371227322(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardOnState::OnStateEnter()
extern "C"  void HazardOnState_OnStateEnter_m3452361788 (HazardOnState_t4192084759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HazardOnState_OnStateEnter_m3452361788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t2555686324  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Color__ctor_m2943235014((&V_0), (0.0f), (0.322f), (0.608f), (1.0f), /*hidden argument*/NULL);
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		TrainingHazardController_t987698733 * L_1 = ((State_t3329758327 *)__this)->get_hazardController_0();
		HazardIconController_t3601592792 * L_2 = L_1->get_icon_3();
		HazardIconController_renderToggleOn_m3505321621(L_2, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_3 = ((State_t3329758327 *)__this)->get_hazardController_0();
		HazardContentView_t2572541359 * L_4 = L_3->get_content_4();
		HazardContentView_setContentVisibilty_m329572791(L_4, (bool)1, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_5 = ((State_t3329758327 *)__this)->get_hazardController_0();
		TrainingCollectionCell_t2778354195 * L_6 = L_5->get_cell_5();
		Color_t2555686324  L_7 = V_0;
		Color_t2555686324  L_8 = V_1;
		TrainingCollectionCell_setViewColors_m607410905(L_6, L_7, L_8, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_9 = ((State_t3329758327 *)__this)->get_hazardController_0();
		TrainingCollectionCell_t2778354195 * L_10 = L_9->get_cell_5();
		TrainingCollectionCell_setSummaryTextBox_m3467887963(L_10, (bool)1, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_11 = ((State_t3329758327 *)__this)->get_hazardController_0();
		HazardIconController_t3601592792 * L_12 = L_11->get_icon_3();
		bool L_13 = L_12->get_isInView_6();
		if (L_13)
		{
			goto IL_0099;
		}
	}
	{
		Camera_t4157153871 * L_14 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		CameraMovement_t4037080991 * L_15 = Component_GetComponent_TisCameraMovement_t4037080991_m4258948832(L_14, /*hidden argument*/Component_GetComponent_TisCameraMovement_t4037080991_m4258948832_RuntimeMethod_var);
		TrainingHazardController_t987698733 * L_16 = ((State_t3329758327 *)__this)->get_hazardController_0();
		HazardIconController_t3601592792 * L_17 = L_16->get_icon_3();
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		CameraMovement_LookTowards_m4136775812(L_15, L_18, /*hidden argument*/NULL);
	}

IL_0099:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HazardSummary::.ctor()
extern "C"  void HazardSummary__ctor_m2714321874 (HazardSummary_t168547793 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardSummary::Start()
extern "C"  void HazardSummary_Start_m544711420 (HazardSummary_t168547793 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HazardSummary_Start_m544711420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		Transform_LookAt_m3968184312(L_0, L_2, /*hidden argument*/NULL);
		Text_t1901882714 * L_3 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		__this->set_summaryText_2(L_3);
		Text_t1901882714 * L_4 = __this->get_summaryText_2();
		String_t* L_5 = __this->get_content_3();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		return;
	}
}
// System.Void HazardSummary::Update()
extern "C"  void HazardSummary_Update_m598902552 (HazardSummary_t168547793 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(L_1, /*hidden argument*/NULL);
		Transform_LookAt_m3968184312(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HazardSummary::populateText(System.String)
extern "C"  void HazardSummary_populateText_m3929172051 (HazardSummary_t168547793 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_summaryText_2();
		String_t* L_1 = ___text0;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JsonHelper::.ctor()
extern "C"  void JsonHelper__ctor_m3614217350 (JsonHelper_t323687296 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NavigationController::.ctor()
extern "C"  void NavigationController__ctor_m3149304240 (NavigationController_t182472134 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NavigationController::Start()
extern "C"  void NavigationController_Start_m1011659292 (NavigationController_t182472134 * __this, const RuntimeMethod* method)
{
	{
		NavigationController_fetchController_m2817432675(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NavigationController::Update()
extern "C"  void NavigationController_Update_m3299951066 (NavigationController_t182472134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationController_Update_m3299951066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PARSController_t1025491303 * L_0 = __this->get_controller_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		NavigationController_fetchController_m2817432675(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void NavigationController::fetchController()
extern "C"  void NavigationController_fetchController_m2817432675 (NavigationController_t182472134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationController_fetchController_m2817432675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Nullable_1_t378540539  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral1989743823, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_t1113636619 * L_1 = V_0;
		PARSController_t1025491303 * L_2 = GameObject_GetComponent_TisPARSController_t1025491303_m3747387168(L_1, /*hidden argument*/GameObject_GetComponent_TisPARSController_t1025491303_m3747387168_RuntimeMethod_var);
		Nullable_1_t378540539  L_3 = L_2->get_currentRoundIndex_7();
		V_1 = L_3;
		bool L_4 = Nullable_1_get_HasValue_m589371754((&V_1), /*hidden argument*/Nullable_1_get_HasValue_m589371754_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		GameObject_t1113636619 * L_5 = V_0;
		PARSController_t1025491303 * L_6 = GameObject_GetComponent_TisPARSController_t1025491303_m3747387168(L_5, /*hidden argument*/GameObject_GetComponent_TisPARSController_t1025491303_m3747387168_RuntimeMethod_var);
		__this->set_controller_2(L_6);
		PARSController_t1025491303 * L_7 = __this->get_controller_2();
		VirtActionInvoker1< NavigationController_t182472134 * >::Invoke(4 /* System.Void PARSController::set(NavigationController) */, L_7, __this);
		NavigationController_setupUI_m3312411452(__this, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void NavigationController::setupUI()
extern "C"  void NavigationController_setupUI_m3312411452 (NavigationController_t182472134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationController_setupUI_m3312411452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextU5BU5D_t422084607* V_0 = NULL;
	Text_t1901882714 * V_1 = NULL;
	TextU5BU5D_t422084607* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	Il2CppChar V_5 = 0x0;
	{
		TextU5BU5D_t422084607* L_0 = Component_GetComponentsInChildren_TisText_t1901882714_m4076551387(__this, /*hidden argument*/Component_GetComponentsInChildren_TisText_t1901882714_m4076551387_RuntimeMethod_var);
		V_0 = L_0;
		TextU5BU5D_t422084607* L_1 = V_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0105;
	}

IL_0010:
	{
		TextU5BU5D_t422084607* L_2 = V_2;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		Text_t1901882714 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Text_t1901882714 * L_6 = V_1;
		String_t* L_7 = Object_get_name_m4211327027(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		String_t* L_8 = V_4;
		if (!L_8)
		{
			goto IL_0101;
		}
	}
	{
		String_t* L_9 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_9, _stringLiteral2574883718, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_005b;
		}
	}
	{
		String_t* L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral2762656541, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_13 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m920492651(NULL /*static, unused*/, L_13, _stringLiteral3720627605, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00e5;
		}
	}
	{
		goto IL_0101;
	}

IL_005b:
	{
		PARSController_t1025491303 * L_15 = __this->get_controller_2();
		Il2CppChar L_16 = PARSController_getControllerType_m474572304(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		Il2CppChar L_17 = V_5;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)84))))
		{
			goto IL_007f;
		}
	}
	{
		Il2CppChar L_18 = V_5;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)65))))
		{
			goto IL_008f;
		}
	}
	{
		goto IL_009f;
	}

IL_007f:
	{
		Text_t1901882714 * L_19 = V_1;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral2593825373);
		goto IL_00a4;
	}

IL_008f:
	{
		Text_t1901882714 * L_20 = V_1;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral388431000);
		goto IL_00a4;
	}

IL_009f:
	{
		goto IL_00a4;
	}

IL_00a4:
	{
		goto IL_0101;
	}

IL_00a9:
	{
		Text_t1901882714 * L_21 = V_1;
		PARSController_t1025491303 * L_22 = __this->get_controller_2();
		List_1_t184529417 * L_23 = L_22->get_finishedRounds_9();
		int32_t L_24 = List_1_get_Count_m807984802(L_23, /*hidden argument*/List_1_get_Count_m807984802_RuntimeMethod_var);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		RuntimeObject * L_26 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_25);
		PARSController_t1025491303 * L_27 = __this->get_controller_2();
		int32_t L_28 = L_27->get_totalRoundCount_6();
		int32_t L_29 = L_28;
		RuntimeObject * L_30 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_31 = String_Concat_m1715369213(NULL /*static, unused*/, L_26, _stringLiteral3452614529, L_30, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_31);
		goto IL_0101;
	}

IL_00e5:
	{
		Text_t1901882714 * L_32 = V_1;
		__this->set_timerText_3(L_32);
		Text_t1901882714 * L_33 = __this->get_timerText_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		goto IL_0101;
	}

IL_0101:
	{
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_0105:
	{
		int32_t L_36 = V_3;
		TextU5BU5D_t422084607* L_37 = V_2;
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Void NavigationController::setTimerText(System.String)
extern "C"  void NavigationController_setTimerText_m3304993782 (NavigationController_t182472134 * __this, String_t* ___time0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_timerText_3();
		String_t* L_1 = ___time0;
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void NavigationController::setTimerColor(UnityEngine.Color)
extern "C"  void NavigationController_setTimerColor_m1218955970 (NavigationController_t182472134 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_timerText_3();
		Color_t2555686324  L_1 = ___color0;
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		return;
	}
}
// System.Void NavigationController::pressedNext()
extern "C"  void NavigationController_pressedNext_m307536078 (NavigationController_t182472134 * __this, const RuntimeMethod* method)
{
	{
		PARSController_t1025491303 * L_0 = __this->get_controller_2();
		VirtActionInvoker0::Invoke(7 /* System.Void PARSController::completeCurrentRound() */, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PARSController::.ctor()
extern "C"  void PARSController__ctor_m3918493173 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PARSController::Awake()
extern "C"  void PARSController_Awake_m792106636 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_Awake_m792106636_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PARSController_t1025491303 * L_0 = ((PARSController_t1025491303_StaticFields*)il2cpp_codegen_static_fields_for(PARSController_t1025491303_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		((PARSController_t1025491303_StaticFields*)il2cpp_codegen_static_fields_for(PARSController_t1025491303_il2cpp_TypeInfo_var))->set_instance_2(__this);
		goto IL_0036;
	}

IL_001b:
	{
		PARSController_t1025491303 * L_2 = ((PARSController_t1025491303_StaticFields*)il2cpp_codegen_static_fields_for(PARSController_t1025491303_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PARSController::Update()
extern "C"  void PARSController_Update_m1460431685 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_Update_m1460431685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	TimeSpan_t881159249  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_isTimedTraining_4();
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_1 = __this->get_allowedTimePerRound_3();
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_2;
		Round_t3007421971 * L_3 = __this->get_currentRound_8();
		String_t* L_4 = L_3->get_startTime_1();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_5 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		DateTime_t3738529785  L_6 = DateTime_ParseExact_m3543736043(NULL /*static, unused*/, L_4, _stringLiteral1858654798, L_5, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_7 = DateTime_Subtract_m77007479((&V_0), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		double L_8 = TimeSpan_get_TotalSeconds_m4083325051((&V_1), /*hidden argument*/NULL);
		VirtActionInvoker1< int32_t >::Invoke(5 /* System.Void PARSController::set(System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)(((int32_t)((int32_t)L_8))))));
	}

IL_0048:
	{
		return;
	}
}
// System.Void PARSController::set(NavigationController)
extern "C"  void PARSController_set_m3728066873 (PARSController_t1025491303 * __this, NavigationController_t182472134 * ___navigationController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_set_m3728066873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		NavigationController_t182472134 * L_0 = ___navigationController0;
		__this->set_navigationController_11(L_0);
		NavigationController_t182472134 * L_1 = __this->get_navigationController_11();
		Button_t4055032469 * L_2 = Component_GetComponentInChildren_TisButton_t4055032469_m1032908271(L_1, /*hidden argument*/Component_GetComponentInChildren_TisButton_t4055032469_m1032908271_RuntimeMethod_var);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1113636619 * L_4 = V_0;
		bool L_5 = __this->get_isAllowedToSelfNavigate_5();
		GameObject_SetActive_m796801857(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PARSController::set(System.Int32)
extern "C"  void PARSController_set_m1213541725 (PARSController_t1025491303 * __this, int32_t ___secondsLeft0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_set_m1213541725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		NavigationController_t182472134 * L_0 = __this->get_navigationController_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_2 = ___secondsLeft0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		VirtActionInvoker0::Invoke(7 /* System.Void PARSController::completeCurrentRound() */, __this);
		goto IL_0066;
	}

IL_0023:
	{
		int32_t L_3 = ___secondsLeft0;
		String_t* L_4 = PARSController_formatTime_m487284323(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		NavigationController_t182472134 * L_5 = __this->get_navigationController_11();
		String_t* L_6 = V_0;
		NavigationController_setTimerText_m3304993782(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = ___secondsLeft0;
		PARSSettings_t2801629121 * L_8 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		int32_t L_9 = L_8->get_dangerZoneTime_3();
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0066;
		}
	}
	{
		NavigationController_t182472134 * L_10 = __this->get_navigationController_11();
		Color_t2555686324  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Color__ctor_m286683560((&L_11), (1.0f), (0.26f), (0.26f), /*hidden argument*/NULL);
		NavigationController_setTimerColor_m1218955970(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.String PARSController::formatTime(System.Int32)
extern "C"  String_t* PARSController_formatTime_m487284323 (PARSController_t1025491303 * __this, int32_t ___totalSeconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_formatTime_m487284323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___totalSeconds0;
		V_0 = ((int32_t)((int32_t)L_0/(int32_t)((int32_t)60)));
		int32_t L_1 = ___totalSeconds0;
		V_1 = ((int32_t)((int32_t)L_1%(int32_t)((int32_t)60)));
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_6);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral547424145, L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.String PARSController::getCurrentSceneID()
extern "C"  String_t* PARSController_getCurrentSceneID_m563327644 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_getCurrentSceneID_m563327644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_0, _stringLiteral3452614544);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614544);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		Nullable_1_t378540539  L_2 = __this->get_currentRoundIndex_7();
		Nullable_1_t378540539  L_3 = L_2;
		RuntimeObject * L_4 = Box(Nullable_1_t378540539_il2cpp_TypeInfo_var, &L_3);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_4);
		ObjectU5BU5D_t2843939325* L_5 = L_1;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614641);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3452614641);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		Il2CppChar L_7 = __this->get_type_14();
		Il2CppChar L_8 = L_7;
		RuntimeObject * L_9 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Char PARSController::getControllerType()
extern "C"  Il2CppChar PARSController_getControllerType_m474572304 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	{
		Il2CppChar L_0 = __this->get_type_14();
		return L_0;
	}
}
// System.Void PARSController::startRound()
extern "C"  void PARSController_startRound_m3876318191 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_startRound_m3876318191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = PARSController_getCurrentSceneID_m563327644(__this, /*hidden argument*/NULL);
		Round_t3007421971 * L_1 = (Round_t3007421971 *)il2cpp_codegen_object_new(Round_t3007421971_il2cpp_TypeInfo_var);
		Round__ctor_m229890800(L_1, L_0, /*hidden argument*/NULL);
		__this->set_currentRound_8(L_1);
		return;
	}
}
// System.Void PARSController::completeCurrentRound()
extern "C"  void PARSController_completeCurrentRound_m3102217683 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_completeCurrentRound_m3102217683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Round_t3007421971 * L_0 = __this->get_currentRound_8();
		String_t* L_1 = Round_getSceneID_m1296914292(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral969047483, L_1, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Round_t3007421971 * L_3 = __this->get_currentRound_8();
		Round_completeRound_m1302899356(L_3, /*hidden argument*/NULL);
		List_1_t184529417 * L_4 = __this->get_finishedRounds_9();
		Round_t3007421971 * L_5 = __this->get_currentRound_8();
		List_1_Add_m1265277236(L_4, L_5, /*hidden argument*/List_1_Add_m1265277236_RuntimeMethod_var);
		VirtActionInvoker0::Invoke(8 /* System.Void PARSController::changeToNextRound() */, __this);
		return;
	}
}
// System.Void PARSController::changeToNextRound()
extern "C"  void PARSController_changeToNextRound_m1838612674 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_changeToNextRound_m1838612674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t378540539  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Nullable_1_t378540539  V_1;
	memset(&V_1, 0, sizeof(V_1));
	PARSController_t1025491303 * G_B2_0 = NULL;
	PARSController_t1025491303 * G_B1_0 = NULL;
	Nullable_1_t378540539  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	PARSController_t1025491303 * G_B3_1 = NULL;
	int32_t G_B6_0 = 0;
	{
		Nullable_1_t378540539  L_0 = __this->get_currentRoundIndex_7();
		V_0 = L_0;
		bool L_1 = Nullable_1_get_HasValue_m589371754((&V_0), /*hidden argument*/Nullable_1_get_HasValue_m589371754_RuntimeMethod_var);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = Nullable_1_GetValueOrDefault_m3412711055((&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_m3412711055_RuntimeMethod_var);
		Nullable_1_t378540539  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Nullable_1__ctor_m3940678751((&L_3), ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), /*hidden argument*/Nullable_1__ctor_m3940678751_RuntimeMethod_var);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002d;
	}

IL_0024:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_4 = V_1;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_002d:
	{
		G_B3_1->set_currentRoundIndex_7(G_B3_0);
		Round_t3007421971 * L_5 = __this->get_currentRound_8();
		String_t* L_6 = Round_getSceneID_m1296914292(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3958758786, L_6, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Nullable_1_t378540539  L_8 = __this->get_currentRoundIndex_7();
		V_1 = L_8;
		bool L_9 = Nullable_1_get_HasValue_m589371754((&V_1), /*hidden argument*/Nullable_1_get_HasValue_m589371754_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_10 = Nullable_1_GetValueOrDefault_m3412711055((&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m3412711055_RuntimeMethod_var);
		int32_t L_11 = __this->get_totalRoundCount_6();
		G_B6_0 = ((((int32_t)((((int32_t)L_10) > ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B6_0 = 0;
	}

IL_0074:
	{
		if (!G_B6_0)
		{
			goto IL_0094;
		}
	}
	{
		VirtActionInvoker0::Invoke(6 /* System.Void PARSController::startRound() */, __this);
		Round_t3007421971 * L_12 = __this->get_currentRound_8();
		String_t* L_13 = Round_getSceneID_m1296914292(L_12, /*hidden argument*/NULL);
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0094:
	{
		VirtActionInvoker0::Invoke(9 /* System.Void PARSController::complete() */, __this);
	}

IL_009a:
	{
		return;
	}
}
// System.Void PARSController::complete()
extern "C"  void PARSController_complete_m2748135589 (PARSController_t1025491303 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSController_complete_m2748135589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1544303647, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_endTime_13(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PARSDataManager::.ctor(System.String)
extern "C"  void PARSDataManager__ctor_m867678872 (PARSDataManager_t1176312113 * __this, String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSDataManager__ctor_m867678872_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		((PARSDataManager_t1176312113_StaticFields*)il2cpp_codegen_static_fields_for(PARSDataManager_t1176312113_il2cpp_TypeInfo_var))->set_instance_1(__this);
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_1 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral3727360559, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_1);
		ObjectU5BU5D_t2843939325* L_2 = L_0;
		ArrayElementTypeCheck (L_2, _stringLiteral3452614531);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3452614531);
		ObjectU5BU5D_t2843939325* L_3 = L_2;
		String_t* L_4 = PlayerPrefs_GetString_m389913383(NULL /*static, unused*/, _stringLiteral1898394020, /*hidden argument*/NULL);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_4, 0, /*hidden argument*/NULL);
		Il2CppChar L_6 = L_5;
		RuntimeObject * L_7 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_3, L_7);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_3;
		ArrayElementTypeCheck (L_8, _stringLiteral3452614641);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3452614641);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		String_t* L_10 = SystemInfo_get_deviceUniqueIdentifier_m3439870207(NULL /*static, unused*/, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m2971454694(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->set_sessionID_0(L_11);
		String_t* L_12 = __this->get_sessionID_0();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_13 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14 = DateTime_ToString_m3718521780((&V_0), _stringLiteral1858654798, /*hidden argument*/NULL);
		__this->set_sessionStart_4(L_14);
		String_t* L_15 = ___fileName0;
		__this->set_gameDataFileName_2(L_15);
		__this->set_jsonOutput_3(_stringLiteral3452614613);
		return;
	}
}
// System.Void PARSDataManager::saveRounds(System.Collections.Generic.List`1<Round>)
extern "C"  void PARSDataManager_saveRounds_m1321154175 (PARSDataManager_t1176312113 * __this, List_1_t184529417 * ___rounds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSDataManager_saveRounds_m1321154175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_jsonOutput_3();
		List_1_t184529417 * L_1 = ___rounds0;
		String_t* L_2 = PARSDataManager_roundsToJson_m1935425996(__this, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_jsonOutput_3(L_3);
		return;
	}
}
// System.Void PARSDataManager::saveAssessmentTime(System.DateTime,System.DateTime)
extern "C"  void PARSDataManager_saveAssessmentTime_m1692115370 (PARSDataManager_t1176312113 * __this, DateTime_t3738529785  ___startTime0, DateTime_t3738529785  ___endTime1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSDataManager_saveAssessmentTime_m1692115370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_jsonOutput_3();
		String_t* L_1 = DateTime_ToString_m3718521780((&___startTime0), _stringLiteral1858654798, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2163913788(NULL /*static, unused*/, L_0, _stringLiteral3283914384, L_1, _stringLiteral3450779518, /*hidden argument*/NULL);
		__this->set_jsonOutput_3(L_2);
		String_t* L_3 = __this->get_jsonOutput_3();
		String_t* L_4 = DateTime_ToString_m3718521780((&___endTime1), _stringLiteral1858654798, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m2163913788(NULL /*static, unused*/, L_3, _stringLiteral1681551641, L_4, _stringLiteral3450779518, /*hidden argument*/NULL);
		__this->set_jsonOutput_3(L_5);
		return;
	}
}
// System.Void PARSDataManager::saveToFile()
extern "C"  void PARSDataManager_saveToFile_m3976889622 (PARSDataManager_t1176312113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSDataManager_saveToFile_m3976889622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_jsonOutput_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral3455956902, /*hidden argument*/NULL);
		__this->set_jsonOutput_3(L_1);
		String_t* L_2 = __this->get_jsonOutput_3();
		PARSDataManager_saveToFile_m2008296848(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String PARSDataManager::roundsToJson(System.Collections.Generic.List`1<Round>)
extern "C"  String_t* PARSDataManager_roundsToJson_m1935425996 (PARSDataManager_t1176312113 * __this, List_1_t184529417 * ___rounds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSDataManager_roundsToJson_m1935425996_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	AssessmentRound_t4264710411 * V_1 = NULL;
	Enumerator_t2073773294  V_2;
	memset(&V_2, 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral984706734;
		List_1_t184529417 * L_0 = ___rounds0;
		Enumerator_t2073773294  L_1 = List_1_GetEnumerator_m2597448471(L_0, /*hidden argument*/List_1_GetEnumerator_m2597448471_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0012:
		{
			Round_t3007421971 * L_2 = Enumerator_get_Current_m4052406410((&V_2), /*hidden argument*/Enumerator_get_Current_m4052406410_RuntimeMethod_var);
			V_1 = ((AssessmentRound_t4264710411 *)CastclassClass((RuntimeObject*)L_2, AssessmentRound_t4264710411_il2cpp_TypeInfo_var));
			String_t* L_3 = V_0;
			V_3 = L_3;
			StringU5BU5D_t1281789340* L_4 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
			String_t* L_5 = V_3;
			ArrayElementTypeCheck (L_4, L_5);
			(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_5);
			StringU5BU5D_t1281789340* L_6 = L_4;
			ArrayElementTypeCheck (L_6, _stringLiteral2685047561);
			(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral2685047561);
			StringU5BU5D_t1281789340* L_7 = L_6;
			AssessmentRound_t4264710411 * L_8 = V_1;
			String_t* L_9 = Round_getSceneID_m1296914292(L_8, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_7, L_9);
			(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_9);
			StringU5BU5D_t1281789340* L_10 = L_7;
			ArrayElementTypeCheck (L_10, _stringLiteral3451959166);
			(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451959166);
			StringU5BU5D_t1281789340* L_11 = L_10;
			AssessmentRound_t4264710411 * L_12 = V_1;
			String_t* L_13 = JsonUtility_ToJson_m3644929270(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_11, L_13);
			(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_13);
			StringU5BU5D_t1281789340* L_14 = L_11;
			ArrayElementTypeCheck (L_14, _stringLiteral3452614532);
			(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614532);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_15 = String_Concat_m1809518182(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			V_0 = L_15;
		}

IL_005b:
		{
			bool L_16 = Enumerator_MoveNext_m3792823848((&V_2), /*hidden argument*/Enumerator_MoveNext_m3792823848_RuntimeMethod_var);
			if (L_16)
			{
				goto IL_0012;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3439656034((&V_2), /*hidden argument*/Enumerator_Dispose_m3439656034_RuntimeMethod_var);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		String_t* L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3937257545(NULL /*static, unused*/, L_17, _stringLiteral3748519251, /*hidden argument*/NULL);
		V_0 = L_18;
		String_t* L_19 = V_0;
		return L_19;
	}
}
// System.Void PARSDataManager::saveToFile(System.String)
extern "C"  void PARSDataManager_saveToFile_m2008296848 (PARSDataManager_t1176312113 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSDataManager_saveToFile_m2008296848_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	FileStream_t4292183065 * V_2 = NULL;
	StringU5BU5D_t1281789340* V_3 = NULL;
	List_1_t3319525431 * V_4 = NULL;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B3_0 = NULL;
	{
		String_t* L_0 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_gameDataFileName_2();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral921030788, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___input0;
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2169409668, L_5, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		String_t* L_7 = V_0;
		bool L_8 = File_Exists_m3943585060(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral142814509, L_10, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		String_t* L_12 = V_0;
		bool L_13 = File_Exists_m3943585060(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		G_B3_0 = _stringLiteral3453007748;
		goto IL_0065;
	}

IL_0060:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_14;
	}

IL_0065:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, G_B3_0, /*hidden argument*/NULL);
		String_t* L_15 = V_0;
		bool L_16 = File_Exists_m3943585060(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00cd;
		}
	}
	{
		String_t* L_17 = V_0;
		FileStream_t4292183065 * L_18 = File_Create_m2207667142(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
	}

IL_007c:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x8E, FINALLY_0081);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		{
			FileStream_t4292183065 * L_19 = V_2;
			if (!L_19)
			{
				goto IL_008d;
			}
		}

IL_0087:
		{
			FileStream_t4292183065 * L_20 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_20);
		}

IL_008d:
		{
			IL2CPP_END_FINALLY(129)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008e:
	{
		StringU5BU5D_t1281789340* L_21 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)1));
		StringU5BU5D_t1281789340* L_22 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_22, _stringLiteral1556933064);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1556933064);
		StringU5BU5D_t1281789340* L_23 = L_22;
		String_t* L_24 = __this->get_sessionID_0();
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_24);
		StringU5BU5D_t1281789340* L_25 = L_23;
		ArrayElementTypeCheck (L_25, _stringLiteral2359841222);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2359841222);
		StringU5BU5D_t1281789340* L_26 = L_25;
		String_t* L_27 = ___input0;
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_27);
		StringU5BU5D_t1281789340* L_28 = L_26;
		ArrayElementTypeCheck (L_28, _stringLiteral3499573116);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3499573116);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_29 = String_Concat_m1809518182(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_21, L_29);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		V_1 = L_21;
		goto IL_0135;
	}

IL_00cd:
	{
		String_t* L_30 = V_0;
		StringU5BU5D_t1281789340* L_31 = File_ReadAllLines_m2281910820(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		StringU5BU5D_t1281789340* L_32 = V_3;
		List_1_t3319525431 * L_33 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m864250344(L_33, (RuntimeObject*)(RuntimeObject*)L_32, /*hidden argument*/List_1__ctor_m864250344_RuntimeMethod_var);
		V_4 = L_33;
		List_1_t3319525431 * L_34 = V_4;
		List_1_t3319525431 * L_35 = V_4;
		int32_t L_36 = List_1_get_Count_m2276455407(L_35, /*hidden argument*/List_1_get_Count_m2276455407_RuntimeMethod_var);
		List_1_RemoveAt_m815285786(L_34, ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m815285786_RuntimeMethod_var);
		StringU5BU5D_t1281789340* L_37 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_37, _stringLiteral1556932951);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1556932951);
		StringU5BU5D_t1281789340* L_38 = L_37;
		String_t* L_39 = __this->get_sessionID_0();
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_39);
		StringU5BU5D_t1281789340* L_40 = L_38;
		ArrayElementTypeCheck (L_40, _stringLiteral2359841222);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2359841222);
		StringU5BU5D_t1281789340* L_41 = L_40;
		String_t* L_42 = ___input0;
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_42);
		StringU5BU5D_t1281789340* L_43 = L_41;
		ArrayElementTypeCheck (L_43, _stringLiteral3499573116);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3499573116);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_44 = String_Concat_m1809518182(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		V_5 = L_44;
		List_1_t3319525431 * L_45 = V_4;
		String_t* L_46 = V_5;
		List_1_Add_m1685793073(L_45, L_46, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		List_1_t3319525431 * L_47 = V_4;
		StringU5BU5D_t1281789340* L_48 = List_1_ToArray_m3983937259(L_47, /*hidden argument*/List_1_ToArray_m3983937259_RuntimeMethod_var);
		V_1 = L_48;
		StringU5BU5D_t1281789340* L_49 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, (RuntimeObject *)(RuntimeObject *)L_49, /*hidden argument*/NULL);
	}

IL_0135:
	{
		String_t* L_50 = V_0;
		StringU5BU5D_t1281789340* L_51 = V_1;
		File_WriteAllLines_m3166020039(NULL /*static, unused*/, L_50, L_51, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PARSDataManager::storeToFirebase(System.String)
extern "C"  void PARSDataManager_storeToFirebase_m3012332562 (PARSDataManager_t1176312113 * __this, String_t* ___keyLocation0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// AnswerKey PARSDataManager::retrieveAnswers(System.Action`1<Question[]>)
extern "C"  AnswerKey_t1212413198 * PARSDataManager_retrieveAnswers_m2899432400 (PARSDataManager_t1176312113 * __this, Action_1_t3223241059 * ___populationMethod0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PARSDataManager_retrieveAnswers_m2899432400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t3022178571 * V_0 = NULL;
	String_t* V_1 = NULL;
	QuestionU5BU5D_t3050773464* V_2 = NULL;
	{
		Object_t631007953 * L_0 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral1456421895, /*hidden argument*/NULL);
		V_0 = ((TextAsset_t3022178571 *)CastclassClass((RuntimeObject*)L_0, TextAsset_t3022178571_il2cpp_TypeInfo_var));
		TextAsset_t3022178571 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		TextAsset_t3022178571 * L_2 = V_0;
		String_t* L_3 = TextAsset_get_text_m2027878391(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		QuestionU5BU5D_t3050773464* L_5 = JsonHelper_getJsonArray_TisQuestion_t1471288757_m378419108(NULL /*static, unused*/, L_4, /*hidden argument*/JsonHelper_getJsonArray_TisQuestion_t1471288757_m378419108_RuntimeMethod_var);
		V_2 = L_5;
		Action_1_t3223241059 * L_6 = ___populationMethod0;
		QuestionU5BU5D_t3050773464* L_7 = V_2;
		Action_1_Invoke_m2515147361(L_6, L_7, /*hidden argument*/Action_1_Invoke_m2515147361_RuntimeMethod_var);
		return (AnswerKey_t1212413198 *)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PARSSettings::.ctor()
extern "C"  void PARSSettings__ctor_m2951523779 (PARSSettings_t2801629121 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Question::.ctor()
extern "C"  void Question__ctor_m832677931 (Question_t1471288757 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Render_Button::.ctor()
extern "C"  void Render_Button__ctor_m2957770436 (Render_Button_t438558594 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Render_Button::Start()
extern "C"  void Render_Button_Start_m1173047212 (Render_Button_t438558594 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_button_2();
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Render_Button::showButton()
extern "C"  void Render_Button_showButton_m1111590837 (Render_Button_t438558594 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_button_2();
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Render_Menu::.ctor()
extern "C"  void Render_Menu__ctor_m2301673580 (Render_Menu_t1727724032 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Render_Menu::Render_object()
extern "C"  void Render_Menu_Render_object_m4272189301 (Render_Menu_t1727724032 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_panel_1_2();
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t1113636619 * L_4 = __this->get_panel_2_3();
		bool L_5 = GameObject_get_activeSelf_m1767405923(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t1113636619 * L_6 = __this->get_panel_3_4();
		bool L_7 = GameObject_get_activeSelf_m1767405923(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0051;
		}
	}
	{
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_8, (bool)1, /*hidden argument*/NULL);
		goto IL_005d;
	}

IL_0051:
	{
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResultAnswersList::.ctor()
extern "C"  void ResultAnswersList__ctor_m89929542 (ResultAnswersList_t719099062 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResultAnswersList::Start()
extern "C"  void ResultAnswersList_Start_m3838980634 (ResultAnswersList_t719099062 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ResultAnswersList::Update()
extern "C"  void ResultAnswersList_Update_m2584883504 (ResultAnswersList_t719099062 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ResultAnswersList::populateList(System.String[])
extern "C"  void ResultAnswersList_populateList_m150961407 (ResultAnswersList_t719099062 * __this, StringU5BU5D_t1281789340* ___stringItems0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultAnswersList_populateList_m150961407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t1113636619 * V_3 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = ___stringItems0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_004a;
	}

IL_0009:
	{
		StringU5BU5D_t1281789340* L_1 = V_1;
		int32_t L_2 = V_2;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = __this->get_listItem_2();
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		V_3 = L_7;
		GameObject_t1113636619 * L_8 = V_3;
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_9, L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_11 = V_3;
		Text_t1901882714 * L_12 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_11, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		String_t* L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3450517379, L_13, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_16 = V_2;
		StringU5BU5D_t1281789340* L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0009;
		}
	}
	{
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_18 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_18, (bool)0, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_19 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_19, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResultAnswersList::populateCorrectList(System.String[],System.String[])
extern "C"  void ResultAnswersList_populateCorrectList_m2868273776 (ResultAnswersList_t719099062 * __this, StringU5BU5D_t1281789340* ___stringItems0, StringU5BU5D_t1281789340* ___key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultAnswersList_populateCorrectList_m2868273776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t1281789340* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t1113636619 * V_4 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = ___key1;
		List_1_t3319525431 * L_1 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m864250344(L_1, (RuntimeObject*)(RuntimeObject*)L_0, /*hidden argument*/List_1__ctor_m864250344_RuntimeMethod_var);
		V_0 = L_1;
		StringU5BU5D_t1281789340* L_2 = ___stringItems0;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0096;
	}

IL_0010:
	{
		StringU5BU5D_t1281789340* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		GameObject_t1113636619 * L_7 = __this->get_listItem_2();
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_9 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		V_4 = L_9;
		GameObject_t1113636619 * L_10 = V_4;
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_set_parent_m786917804(L_11, L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = V_4;
		Text_t1901882714 * L_14 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_13, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		String_t* L_15 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3450517379, L_15, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		List_1_t3319525431 * L_17 = V_0;
		String_t* L_18 = V_1;
		bool L_19 = List_1_Contains_m3852460914(L_17, L_18, /*hidden argument*/List_1_Contains_m3852460914_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0081;
		}
	}
	{
		GameObject_t1113636619 * L_20 = V_4;
		Text_t1901882714 * L_21 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_20, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		Color_t2555686324  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Color__ctor_m286683560((&L_22), (0.08f), (0.6f), (0.0f), /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		goto IL_0092;
	}

IL_0081:
	{
		GameObject_t1113636619 * L_23 = V_4;
		Text_t1901882714 * L_24 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_23, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		Color_t2555686324  L_25 = Color_get_red_m3227813939(NULL /*static, unused*/, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
	}

IL_0092:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0096:
	{
		int32_t L_27 = V_3;
		StringU5BU5D_t1281789340* L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_0010;
		}
	}
	{
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_29 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_29, (bool)0, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_30 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_30, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResultCardCell::.ctor()
extern "C"  void ResultCardCell__ctor_m1112202625 (ResultCardCell_t3938479119 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResultCardCell::Start()
extern "C"  void ResultCardCell_Start_m1380269057 (ResultCardCell_t3938479119 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ResultCardCell::Update()
extern "C"  void ResultCardCell_Update_m3993090385 (ResultCardCell_t3938479119 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ResultCardCell::populateAssessmentResults(AssessmentRound,AnswerKey)
extern "C"  void ResultCardCell_populateAssessmentResults_m3462029152 (ResultCardCell_t3938479119 * __this, AssessmentRound_t4264710411 * ___roundResult0, AnswerKey_t1212413198 * ___answers1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultCardCell_populateAssessmentResults_m3462029152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		AssessmentRound_t4264710411 * L_0 = ___roundResult0;
		String_t* L_1 = Round_getSceneID_m1296914292(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Text_t1901882714 * L_2 = __this->get_sceneLabel_2();
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1608650950, L_3, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		ResultAnswersList_t719099062 * L_5 = __this->get_correctList_3();
		AnswerKey_t1212413198 * L_6 = ___answers1;
		Dictionary_2_t1067045639 * L_7 = L_6->get_dictionary_0();
		String_t* L_8 = V_0;
		StringU5BU5D_t1281789340* L_9 = Dictionary_2_get_Item_m2750682826(L_7, L_8, /*hidden argument*/Dictionary_2_get_Item_m2750682826_RuntimeMethod_var);
		ResultAnswersList_populateList_m150961407(L_5, L_9, /*hidden argument*/NULL);
		ResultAnswersList_t719099062 * L_10 = __this->get_yourList_4();
		AssessmentRound_t4264710411 * L_11 = ___roundResult0;
		List_1_t3319525431 * L_12 = Round_getResponseHazardNames_m3355812307(L_11, /*hidden argument*/NULL);
		StringU5BU5D_t1281789340* L_13 = List_1_ToArray_m3983937259(L_12, /*hidden argument*/List_1_ToArray_m3983937259_RuntimeMethod_var);
		AnswerKey_t1212413198 * L_14 = ___answers1;
		Dictionary_2_t1067045639 * L_15 = L_14->get_dictionary_0();
		String_t* L_16 = V_0;
		StringU5BU5D_t1281789340* L_17 = Dictionary_2_get_Item_m2750682826(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_m2750682826_RuntimeMethod_var);
		ResultAnswersList_populateCorrectList_m2868273776(L_10, L_13, L_17, /*hidden argument*/NULL);
		Text_t1901882714 * L_18 = __this->get_hiiScoreLabel_5();
		AssessmentRound_t4264710411 * L_19 = ___roundResult0;
		float L_20 = L_19->get_HIIScore_6();
		float L_21 = L_20;
		RuntimeObject * L_22 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3323403006, L_22, _stringLiteral3452614523, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_23);
		Text_t1901882714 * L_24 = __this->get_notesLabel_6();
		String_t* L_25 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_25);
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_26 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_26, (bool)0, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_27 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_27, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResultCardView::.ctor()
extern "C"  void ResultCardView__ctor_m1003987763 (ResultCardView_t2246120343 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResultCardView::Start()
extern "C"  void ResultCardView_Start_m3698509525 (ResultCardView_t2246120343 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ResultCardView::Update()
extern "C"  void ResultCardView_Update_m3054604329 (ResultCardView_t2246120343 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ResultsController::.ctor()
extern "C"  void ResultsController__ctor_m3381692468 (ResultsController_t712609476 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ResultsController::Start()
extern "C"  void ResultsController_Start_m2207440578 (ResultsController_t712609476 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultsController_Start_m2207440578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AssessmentRound_t4264710411 * V_0 = NULL;
	Enumerator_t2073773294  V_1;
	memset(&V_1, 0, sizeof(V_1));
	ResultCardCell_t3938479119 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (AssessmentController_t2586697688_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_2 = Object_FindObjectOfType_m67275058(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		__this->set_controller_3(((AssessmentController_t2586697688 *)IsInstClass((RuntimeObject*)L_2, AssessmentController_t2586697688_il2cpp_TypeInfo_var)));
		AssessmentController_t2586697688 * L_3 = __this->get_controller_3();
		List_1_t184529417 * L_4 = ((PARSController_t1025491303 *)L_3)->get_finishedRounds_9();
		Enumerator_t2073773294  L_5 = List_1_GetEnumerator_m2597448471(L_4, /*hidden argument*/List_1_GetEnumerator_m2597448471_RuntimeMethod_var);
		V_1 = L_5;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0072;
		}

IL_0030:
		{
			Round_t3007421971 * L_6 = Enumerator_get_Current_m4052406410((&V_1), /*hidden argument*/Enumerator_get_Current_m4052406410_RuntimeMethod_var);
			V_0 = ((AssessmentRound_t4264710411 *)CastclassClass((RuntimeObject*)L_6, AssessmentRound_t4264710411_il2cpp_TypeInfo_var));
			ResultCardCell_t3938479119 * L_7 = __this->get_ResultCardCell_2();
			Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			ResultCardCell_t3938479119 * L_9 = Object_Instantiate_TisResultCardCell_t3938479119_m1896471127(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/Object_Instantiate_TisResultCardCell_t3938479119_m1896471127_RuntimeMethod_var);
			V_2 = L_9;
			ResultCardCell_t3938479119 * L_10 = V_2;
			Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
			Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
			Transform_set_parent_m786917804(L_11, L_12, /*hidden argument*/NULL);
			ResultCardCell_t3938479119 * L_13 = V_2;
			AssessmentRound_t4264710411 * L_14 = V_0;
			AssessmentController_t2586697688 * L_15 = __this->get_controller_3();
			AnswerKey_t1212413198 * L_16 = L_15->get_answerKey_15();
			ResultCardCell_populateAssessmentResults_m3462029152(L_13, L_14, L_16, /*hidden argument*/NULL);
		}

IL_0072:
		{
			bool L_17 = Enumerator_MoveNext_m3792823848((&V_1), /*hidden argument*/Enumerator_MoveNext_m3792823848_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0030;
			}
		}

IL_007e:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0083);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0083;
	}

FINALLY_0083:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3439656034((&V_1), /*hidden argument*/Enumerator_Dispose_m3439656034_RuntimeMethod_var);
		IL2CPP_END_FINALLY(131)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(131)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		return;
	}
}
// System.Void ResultsController::Update()
extern "C"  void ResultsController_Update_m3428472720 (ResultsController_t712609476 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ResultsController::endSession()
extern "C"  void ResultsController_endSession_m2810958949 (ResultsController_t712609476 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultsController_endSession_m2810958949_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AssessmentController_t2586697688 * L_0 = __this->get_controller_3();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m2288369078(NULL /*static, unused*/, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Round::.ctor(System.String)
extern "C"  void Round__ctor_m229890800 (Round_t3007421971 * __this, String_t* ___sceneID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Round__ctor_m229890800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___sceneID0;
		__this->set_sceneID_0(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_1 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = DateTime_ToString_m3718521780((&V_0), _stringLiteral1858654798, /*hidden argument*/NULL);
		__this->set_startTime_1(L_2);
		return;
	}
}
// System.String Round::getSceneID()
extern "C"  String_t* Round_getSceneID_m1296914292 (Round_t3007421971 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_sceneID_0();
		return L_0;
	}
}
// System.Void Round::completeRound()
extern "C"  void Round_completeRound_m1302899356 (Round_t3007421971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Round_completeRound_m1302899356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = DateTime_ToString_m3718521780((&V_0), _stringLiteral1858654798, /*hidden argument*/NULL);
		__this->set_endTime_2(L_1);
		return;
	}
}
// System.Void Round::setResponses(System.Collections.Generic.List`1<TrainingHazard>)
extern "C"  void Round_setResponses_m205372176 (Round_t3007421971 * __this, List_1_t2270999925 * ___responses0, const RuntimeMethod* method)
{
	{
		List_1_t2270999925 * L_0 = ___responses0;
		__this->set_trainingHazardData_4(L_0);
		return;
	}
}
// System.Void Round::setResponses(System.Collections.Generic.List`1<Hazard>)
extern "C"  void Round_setResponses_m4269432331 (Round_t3007421971 * __this, List_1_t1807265320 * ___responses0, const RuntimeMethod* method)
{
	{
		List_1_t1807265320 * L_0 = ___responses0;
		__this->set_hazardResponses_3(L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Round::getResponseHazardNames()
extern "C"  List_1_t3319525431 * Round_getResponseHazardNames_m3355812307 (Round_t3007421971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Round_getResponseHazardNames_m3355812307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3319525431 * V_0 = NULL;
	Hazard_t335190578 * V_1 = NULL;
	Enumerator_t3696509197  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t3319525431 * L_0 = (List_1_t3319525431 *)il2cpp_codegen_object_new(List_1_t3319525431_il2cpp_TypeInfo_var);
		List_1__ctor_m706204246(L_0, /*hidden argument*/List_1__ctor_m706204246_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t1807265320 * L_1 = __this->get_hazardResponses_3();
		Enumerator_t3696509197  L_2 = List_1_GetEnumerator_m3382736461(L_1, /*hidden argument*/List_1_GetEnumerator_m3382736461_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0017:
		{
			Hazard_t335190578 * L_3 = Enumerator_get_Current_m2602721882((&V_2), /*hidden argument*/Enumerator_get_Current_m2602721882_RuntimeMethod_var);
			V_1 = L_3;
			List_1_t3319525431 * L_4 = V_0;
			Hazard_t335190578 * L_5 = V_1;
			String_t* L_6 = L_5->get_name_1();
			List_1_Add_m1685793073(L_4, L_6, /*hidden argument*/List_1_Add_m1685793073_RuntimeMethod_var);
		}

IL_002b:
		{
			bool L_7 = Enumerator_MoveNext_m1639399454((&V_2), /*hidden argument*/Enumerator_MoveNext_m1639399454_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0017;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4248804872((&V_2), /*hidden argument*/Enumerator_Dispose_m4248804872_RuntimeMethod_var);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		List_1_t3319525431 * L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneLink::.ctor()
extern "C"  void SceneLink__ctor_m756394441 (SceneLink_t2949730838 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneLink::ChangeToScene(System.String)
extern "C"  void SceneLink_ChangeToScene_m2624128699 (SceneLink_t2949730838 * __this, String_t* ___sceneToChangeTo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneLink_ChangeToScene_m2624128699_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1593182404, /*hidden argument*/NULL);
		String_t* L_0 = ___sceneToChangeTo0;
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Settings::.ctor()
extern "C"  void Settings__ctor_m2539891666 (Settings_t298812435 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Settings::Awake()
extern "C"  void Settings_Awake_m1564446969 (Settings_t298812435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Settings_Awake_m1564446969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Settings_t298812435 * L_0 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->set_instance_4(__this);
		goto IL_0036;
	}

IL_001b:
	{
		Settings_t298812435 * L_2 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		PARSSettings_t2801629121 * L_6 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		PARSSettings_t2801629121 * L_8 = __this->get__settings_2();
		((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->set_s_3(L_8);
	}

IL_005c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Start_Button::.ctor()
extern "C"  void Start_Button__ctor_m3607928258 (Start_Button_t84841713 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Start_Button::MoveFile_Start()
extern "C"  void Start_Button_MoveFile_Start_m3707627426 (Start_Button_t84841713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Start_Button_MoveFile_Start_m3707627426_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = SystemInfo_get_deviceUniqueIdentifier_m3439870207(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_GetTempPath_m323864048(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3737918690, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void State::.ctor(TrainingHazardController)
extern "C"  void State__ctor_m2371227322 (State_t3329758327 * __this, TrainingHazardController_t987698733 * ___hazard0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TrainingHazardController_t987698733 * L_0 = ___hazard0;
		__this->set_hazardController_0(L_0);
		return;
	}
}
// System.Void State::OnStateEnter()
extern "C"  void State_OnStateEnter_m141855877 (State_t3329758327 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void State::OnStateExit()
extern "C"  void State_OnStateExit_m2594150980 (State_t3329758327 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ToggleController::.ctor()
extern "C"  void ToggleController__ctor_m2509552590 (ToggleController_t3012097607 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ToggleController::Start()
extern "C"  void ToggleController_Start_m3255508610 (ToggleController_t3012097607 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleController_Start_m3255508610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t1901882714 * V_0 = NULL;
	{
		Text_t1901882714 * L_0 = Component_GetComponentInChildren_TisText_t1901882714_m396351542(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t1901882714_m396351542_RuntimeMethod_var);
		V_0 = L_0;
		Text_t1901882714 * L_1 = V_0;
		String_t* L_2 = __this->get_value_3();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrainingCollectionCell::.ctor()
extern "C"  void TrainingCollectionCell__ctor_m1028202397 (TrainingCollectionCell_t2778354195 * __this, const RuntimeMethod* method)
{
	{
		__this->set_expandingSummaryTextBoxEnabled_2((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingCollectionCell::Initialize(TrainingHazardController)
extern "C"  void TrainingCollectionCell_Initialize_m800006240 (TrainingCollectionCell_t2778354195 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method)
{
	TrainingHazard_t798925183 * V_0 = NULL;
	{
		TrainingHazardController_t987698733 * L_0 = ___hazardController0;
		__this->set_hazardController_7(L_0);
		TrainingHazardController_t987698733 * L_1 = ___hazardController0;
		TrainingHazard_t798925183 * L_2 = L_1->get_hazard_2();
		V_0 = L_2;
		TrainingHazard_t798925183 * L_3 = V_0;
		String_t* L_4 = ((Hazard_t335190578 *)L_3)->get_category_0();
		__this->set_category_3(L_4);
		TrainingHazard_t798925183 * L_5 = V_0;
		String_t* L_6 = ((Hazard_t335190578 *)L_5)->get_name_1();
		__this->set_name_4(L_6);
		TrainingHazard_t798925183 * L_7 = V_0;
		String_t* L_8 = L_7->get_summaryText_2();
		__this->set_summaryText_5(L_8);
		TrainingHazard_t798925183 * L_9 = V_0;
		Color_t2555686324  L_10 = L_9->get_color_3();
		__this->set_color_6(L_10);
		TrainingCollectionCell_reloadUI_m827093517(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingCollectionCell::reloadUI()
extern "C"  void TrainingCollectionCell_reloadUI_m827093517 (TrainingCollectionCell_t2778354195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingCollectionCell_reloadUI_m827093517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Text_t1901882714 * V_0 = NULL;
	TextU5BU5D_t422084607* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		Image_t2670269651 * L_0 = Component_GetComponent_TisImage_t2670269651_m980647750(__this, /*hidden argument*/Component_GetComponent_TisImage_t2670269651_m980647750_RuntimeMethod_var);
		__this->set_cellBackground_8(L_0);
		TextU5BU5D_t422084607* L_1 = Component_GetComponentsInChildren_TisText_t1901882714_m4076551387(__this, /*hidden argument*/Component_GetComponentsInChildren_TisText_t1901882714_m4076551387_RuntimeMethod_var);
		__this->set_cellLabels_9(L_1);
		TextU5BU5D_t422084607* L_2 = __this->get_cellLabels_9();
		V_1 = L_2;
		V_2 = 0;
		goto IL_00c5;
	}

IL_0026:
	{
		TextU5BU5D_t422084607* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Text_t1901882714 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Text_t1901882714 * L_7 = V_0;
		String_t* L_8 = Object_get_name_m4211327027(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		String_t* L_9 = V_3;
		if (!L_9)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m920492651(NULL /*static, unused*/, L_10, _stringLiteral1484129813, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_12 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral2049384710, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00a9;
		}
	}
	{
		String_t* L_14 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Equality_m920492651(NULL /*static, unused*/, L_14, _stringLiteral4003399582, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00c1;
	}

IL_006c:
	{
		Text_t1901882714 * L_16 = V_0;
		__this->set_categoryLabel_10(L_16);
		Text_t1901882714 * L_17 = V_0;
		Image_t2670269651 * L_18 = Component_GetComponentInChildren_TisImage_t2670269651_m2604193531(L_17, /*hidden argument*/Component_GetComponentInChildren_TisImage_t2670269651_m2604193531_RuntimeMethod_var);
		__this->set_icon_13(L_18);
		Text_t1901882714 * L_19 = V_0;
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = Transform_Find_m1729760951(L_20, _stringLiteral1649205087, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		Image_t2670269651 * L_23 = GameObject_GetComponent_TisImage_t2670269651_m2486712510(L_22, /*hidden argument*/GameObject_GetComponent_TisImage_t2670269651_m2486712510_RuntimeMethod_var);
		Color_t2555686324  L_24 = __this->get_color_6();
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
		goto IL_00c1;
	}

IL_00a9:
	{
		Text_t1901882714 * L_25 = V_0;
		__this->set_nameLabel_11(L_25);
		goto IL_00c1;
	}

IL_00b5:
	{
		Text_t1901882714 * L_26 = V_0;
		__this->set_summaryTextBox_12(L_26);
		goto IL_00c1;
	}

IL_00c1:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00c5:
	{
		int32_t L_28 = V_2;
		TextU5BU5D_t422084607* L_29 = V_1;
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		Text_t1901882714 * L_30 = __this->get_categoryLabel_10();
		String_t* L_31 = __this->get_category_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4232524195, L_31, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_32);
		Text_t1901882714 * L_33 = __this->get_nameLabel_11();
		String_t* L_34 = __this->get_name_4();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		Text_t1901882714 * L_35 = __this->get_summaryTextBox_12();
		String_t* L_36 = __this->get_summaryText_5();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_36);
		Text_t1901882714 * L_37 = __this->get_summaryTextBox_12();
		GameObject_t1113636619 * L_38 = Component_get_gameObject_m442555142(L_37, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_38, (bool)0, /*hidden argument*/NULL);
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_39 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_39, (bool)0, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_40 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_40, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingCollectionCell::setViewColors(UnityEngine.Color,UnityEngine.Color)
extern "C"  void TrainingCollectionCell_setViewColors_m607410905 (TrainingCollectionCell_t2778354195 * __this, Color_t2555686324  ___backgroundColor0, Color_t2555686324  ___textColor1, const RuntimeMethod* method)
{
	Text_t1901882714 * V_0 = NULL;
	TextU5BU5D_t422084607* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Image_t2670269651 * L_0 = __this->get_cellBackground_8();
		Color_t2555686324  L_1 = ___backgroundColor0;
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		TextU5BU5D_t422084607* L_2 = __this->get_cellLabels_9();
		V_1 = L_2;
		V_2 = 0;
		goto IL_0029;
	}

IL_001a:
	{
		TextU5BU5D_t422084607* L_3 = V_1;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		Text_t1901882714 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Text_t1901882714 * L_7 = V_0;
		Color_t2555686324  L_8 = ___textColor1;
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_10 = V_2;
		TextU5BU5D_t422084607* L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Void TrainingCollectionCell::setSummaryTextBox(System.Boolean)
extern "C"  void TrainingCollectionCell_setSummaryTextBox_m3467887963 (TrainingCollectionCell_t2778354195 * __this, bool ___isActive0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingCollectionCell_setSummaryTextBox_m3467887963_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_expandingSummaryTextBoxEnabled_2();
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = __this->get_summaryText_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_3 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		Text_t1901882714 * L_4 = __this->get_summaryTextBox_12();
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(L_4, /*hidden argument*/NULL);
		bool L_6 = ___isActive0;
		GameObject_SetActive_m796801857(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0031:
	{
		CellPressedCallBack_t865333736 * L_7 = __this->get_collectionCallBack_15();
		CellPressedCallBack_Invoke_m807315293(L_7, /*hidden argument*/NULL);
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_8 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_8, (bool)0, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_9 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_9, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingCollectionCell::pressed()
extern "C"  void TrainingCollectionCell_pressed_m2498995256 (TrainingCollectionCell_t2778354195 * __this, const RuntimeMethod* method)
{
	State_t3329758327 * V_0 = NULL;
	{
		TrainingHazardController_t987698733 * L_0 = __this->get_hazardController_7();
		State_t3329758327 * L_1 = TrainingHazardController_ToggleState_m3766278890(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		return;
	}
}
// System.Void TrainingCollectionCell::setCollectionCallback(CellPressedCallBack)
extern "C"  void TrainingCollectionCell_setCollectionCallback_m44971302 (TrainingCollectionCell_t2778354195 * __this, CellPressedCallBack_t865333736 * ___callback0, const RuntimeMethod* method)
{
	{
		CellPressedCallBack_t865333736 * L_0 = ___callback0;
		__this->set_collectionCallBack_15(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrainingCollectionController::.ctor()
extern "C"  void TrainingCollectionController__ctor_m3266599025 (TrainingCollectionController_t2905092020 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// TrainingCollectionCell TrainingCollectionController::addCell(TrainingHazardController)
extern "C"  TrainingCollectionCell_t2778354195 * TrainingCollectionController_addCell_m3008532179 (TrainingCollectionController_t2905092020 * __this, TrainingHazardController_t987698733 * ___hazardController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingCollectionController_addCell_m3008532179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	TrainingCollectionCell_t2778354195 * V_1 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_HazardCell_2();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_2 = Object_Instantiate_TisGameObject_t1113636619_m3215236302(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3215236302_RuntimeMethod_var);
		V_0 = L_2;
		GameObject_t1113636619 * L_3 = V_0;
		Transform_t3600365921 * L_4 = GameObject_get_transform_m1369836730(L_3, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_SetParent_m273471670(L_4, L_5, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = V_0;
		TrainingCollectionCell_t2778354195 * L_7 = GameObject_GetComponent_TisTrainingCollectionCell_t2778354195_m1210859829(L_6, /*hidden argument*/GameObject_GetComponent_TisTrainingCollectionCell_t2778354195_m1210859829_RuntimeMethod_var);
		V_1 = L_7;
		TrainingCollectionCell_t2778354195 * L_8 = V_1;
		intptr_t L_9 = (intptr_t)TrainingCollectionController_cellPressed_m3149019868_RuntimeMethod_var;
		CellPressedCallBack_t865333736 * L_10 = (CellPressedCallBack_t865333736 *)il2cpp_codegen_object_new(CellPressedCallBack_t865333736_il2cpp_TypeInfo_var);
		CellPressedCallBack__ctor_m1649801488(L_10, __this, L_9, /*hidden argument*/NULL);
		TrainingCollectionCell_setCollectionCallback_m44971302(L_8, L_10, /*hidden argument*/NULL);
		TrainingCollectionCell_t2778354195 * L_11 = V_1;
		TrainingHazardController_t987698733 * L_12 = ___hazardController0;
		TrainingCollectionCell_Initialize_m800006240(L_11, L_12, /*hidden argument*/NULL);
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_13 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_13, (bool)0, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_14 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_14, (bool)1, /*hidden argument*/NULL);
		TrainingCollectionCell_t2778354195 * L_15 = V_1;
		return L_15;
	}
}
// System.Void TrainingCollectionController::cellPressed()
extern "C"  void TrainingCollectionController_cellPressed_m3149019868 (TrainingCollectionController_t2905092020 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingCollectionController_cellPressed_m3149019868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral1758576363, /*hidden argument*/NULL);
		Canvas_ForceUpdateCanvases_m3151644478(NULL /*static, unused*/, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_0 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_0, (bool)0, /*hidden argument*/NULL);
		VerticalLayoutGroup_t923838031 * L_1 = Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795(__this, /*hidden argument*/Component_GetComponent_TisVerticalLayoutGroup_t923838031_m636096795_RuntimeMethod_var);
		Behaviour_set_enabled_m20417929(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingCollectionController::removeAllCells()
extern "C"  void TrainingCollectionController_removeAllCells_m2696540309 (TrainingCollectionController_t2905092020 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingCollectionController_removeAllCells_m2696540309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002b;
	}

IL_0007:
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3173330993, /*hidden argument*/NULL);
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_0;
		Transform_t3600365921 * L_2 = Transform_GetChild_m1092972975(L_0, L_1, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = Component_get_gameObject_m442555142(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002b:
	{
		int32_t L_5 = V_0;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		int32_t L_7 = Transform_get_childCount_m3145433196(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrainingController::.ctor()
extern "C"  void TrainingController__ctor_m791902999 (TrainingController_t3952779903 * __this, const RuntimeMethod* method)
{
	{
		PARSController__ctor_m3918493173(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingController::OnEnable()
extern "C"  void TrainingController_OnEnable_m3846267760 (TrainingController_t3952779903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingController_OnEnable_m3846267760_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)TrainingController_OnSceneLoaded_m353045012_RuntimeMethod_var;
		UnityAction_2_t2165061829 * L_1 = (UnityAction_2_t2165061829 *)il2cpp_codegen_object_new(UnityAction_2_t2165061829_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m2949990045(L_1, __this, L_0, /*hidden argument*/UnityAction_2__ctor_m2949990045_RuntimeMethod_var);
		SceneManager_add_sceneLoaded_m3678832055(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingController::Start()
extern "C"  void TrainingController_Start_m2827282609 (TrainingController_t3952779903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingController_Start_m2827282609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PARSSettings_t2801629121 * L_0 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		bool L_1 = L_0->get_T_forcedTimeNavigationEnabled_4();
		((PARSController_t1025491303 *)__this)->set_isTimedTraining_4(L_1);
		PARSSettings_t2801629121 * L_2 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		bool L_3 = L_2->get_T_selfNavigationEnabled_5();
		((PARSController_t1025491303 *)__this)->set_isAllowedToSelfNavigate_5(L_3);
		PARSSettings_t2801629121 * L_4 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		int32_t L_5 = L_4->get_T_roundForcedTimeLimit_6();
		((PARSController_t1025491303 *)__this)->set_allowedTimePerRound_3(L_5);
		PARSSettings_t2801629121 * L_6 = ((Settings_t298812435_StaticFields*)il2cpp_codegen_static_fields_for(Settings_t298812435_il2cpp_TypeInfo_var))->get_s_3();
		int32_t L_7 = L_6->get_T_roundsTotalCount_7();
		((PARSController_t1025491303 *)__this)->set_totalRoundCount_6(L_7);
		Nullable_1_t378540539  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Nullable_1__ctor_m3940678751((&L_8), 1, /*hidden argument*/Nullable_1__ctor_m3940678751_RuntimeMethod_var);
		((PARSController_t1025491303 *)__this)->set_currentRoundIndex_7(L_8);
		((PARSController_t1025491303 *)__this)->set_type_14(((int32_t)84));
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_9 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		((PARSController_t1025491303 *)__this)->set_startTime_12(L_9);
		TrainingDataManager_t3084013207 * L_10 = (TrainingDataManager_t3084013207 *)il2cpp_codegen_object_new(TrainingDataManager_t3084013207_il2cpp_TypeInfo_var);
		TrainingDataManager__ctor_m1073158598(L_10, _stringLiteral3414554074, __this, /*hidden argument*/NULL);
		__this->set_dataManager_17(L_10);
		VirtActionInvoker0::Invoke(6 /* System.Void PARSController::startRound() */, __this);
		return;
	}
}
// System.Void TrainingController::setOtherStatesToOff(TrainingHazardController)
extern "C"  void TrainingController_setOtherStatesToOff_m1651245967 (TrainingController_t3952779903 * __this, TrainingHazardController_t987698733 * ___selectedHazardController0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingController_setOtherStatesToOff_m1651245967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrainingHazardController_t987698733 * V_0 = NULL;
	Enumerator_t54050056  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t2459773475 * L_0 = __this->get_currentRoundTrainingHazardControllers_16();
		Enumerator_t54050056  L_1 = List_1_GetEnumerator_m2027888975(L_0, /*hidden argument*/List_1_GetEnumerator_m2027888975_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			TrainingHazardController_t987698733 * L_2 = Enumerator_get_Current_m2252741316((&V_1), /*hidden argument*/Enumerator_get_Current_m2252741316_RuntimeMethod_var);
			V_0 = L_2;
			TrainingHazardController_t987698733 * L_3 = V_0;
			TrainingHazardController_t987698733 * L_4 = ___selectedHazardController0;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0030;
			}
		}

IL_0025:
		{
			TrainingHazardController_t987698733 * L_6 = V_0;
			TrainingHazardController_SetState_m102977102(L_6, _stringLiteral3150062864, /*hidden argument*/NULL);
		}

IL_0030:
		{
			bool L_7 = Enumerator_MoveNext_m370746012((&V_1), /*hidden argument*/Enumerator_MoveNext_m370746012_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0041);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0041;
	}

FINALLY_0041:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4029193529((&V_1), /*hidden argument*/Enumerator_Dispose_m4029193529_RuntimeMethod_var);
		IL2CPP_END_FINALLY(65)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(65)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		return;
	}
}
// System.Void TrainingController::startRound()
extern "C"  void TrainingController_startRound_m1701146648 (TrainingController_t3952779903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingController_startRound_m1701146648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = PARSController_getCurrentSceneID_m563327644(__this, /*hidden argument*/NULL);
		Round_t3007421971 * L_1 = (Round_t3007421971 *)il2cpp_codegen_object_new(Round_t3007421971_il2cpp_TypeInfo_var);
		Round__ctor_m229890800(L_1, L_0, /*hidden argument*/NULL);
		((PARSController_t1025491303 *)__this)->set_currentRound_8(L_1);
		return;
	}
}
// System.Void TrainingController::beginRound()
extern "C"  void TrainingController_beginRound_m1547517853 (TrainingController_t3952779903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingController_beginRound_m1547517853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	TrainingCollectionController_t2905092020 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	GameObjectU5BU5D_t3328599146* V_3 = NULL;
	int32_t V_4 = 0;
	TrainingHazardController_t987698733 * V_5 = NULL;
	NullReferenceException_t1023182353 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral3625332488, /*hidden argument*/NULL);
			V_0 = L_0;
			GameObject_t1113636619 * L_1 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral3723644332, /*hidden argument*/NULL);
			TrainingCollectionController_t2905092020 * L_2 = GameObject_GetComponent_TisTrainingCollectionController_t2905092020_m3022184610(L_1, /*hidden argument*/GameObject_GetComponent_TisTrainingCollectionController_t2905092020_m3022184610_RuntimeMethod_var);
			V_1 = L_2;
			TrainingCollectionController_t2905092020 * L_3 = V_1;
			TrainingCollectionController_removeAllCells_m2696540309(L_3, /*hidden argument*/NULL);
			GameObjectU5BU5D_t3328599146* L_4 = V_0;
			V_3 = L_4;
			V_4 = 0;
			goto IL_0062;
		}

IL_002b:
		{
			GameObjectU5BU5D_t3328599146* L_5 = V_3;
			int32_t L_6 = V_4;
			int32_t L_7 = L_6;
			GameObject_t1113636619 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
			V_2 = L_8;
			GameObject_t1113636619 * L_9 = V_2;
			TrainingHazardController_t987698733 * L_10 = GameObject_GetComponent_TisTrainingHazardController_t987698733_m4062657134(L_9, /*hidden argument*/GameObject_GetComponent_TisTrainingHazardController_t987698733_m4062657134_RuntimeMethod_var);
			V_5 = L_10;
			List_1_t2459773475 * L_11 = __this->get_currentRoundTrainingHazardControllers_16();
			TrainingHazardController_t987698733 * L_12 = V_5;
			List_1_Add_m1366643004(L_11, L_12, /*hidden argument*/List_1_Add_m1366643004_RuntimeMethod_var);
			TrainingHazardController_t987698733 * L_13 = V_5;
			TrainingHazardController_setDelegate_m3060760941(L_13, __this, /*hidden argument*/NULL);
			TrainingHazardController_t987698733 * L_14 = V_5;
			TrainingCollectionController_t2905092020 * L_15 = V_1;
			TrainingHazardController_t987698733 * L_16 = V_5;
			TrainingCollectionCell_t2778354195 * L_17 = TrainingCollectionController_addCell_m3008532179(L_15, L_16, /*hidden argument*/NULL);
			L_14->set_cell_5(L_17);
			int32_t L_18 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		}

IL_0062:
		{
			int32_t L_19 = V_4;
			GameObjectU5BU5D_t3328599146* L_20 = V_3;
			if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
			{
				goto IL_002b;
			}
		}

IL_006c:
		{
			goto IL_0082;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0071;
		throw e;
	}

CATCH_0071:
	{ // begin catch(System.NullReferenceException)
		V_6 = ((NullReferenceException_t1023182353 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral828859856, /*hidden argument*/NULL);
		goto IL_0082;
	} // end catch (depth: 1)

IL_0082:
	{
		return;
	}
}
// System.Void TrainingController::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
extern "C"  void TrainingController_OnSceneLoaded_m353045012 (TrainingController_t3952779903 * __this, Scene_t2348375561  ___scene0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		TrainingController_beginRound_m1547517853(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingController::completeCurrentRound()
extern "C"  void TrainingController_completeCurrentRound_m2205976968 (TrainingController_t3952779903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingController_completeCurrentRound_m2205976968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_t3328599146* V_0 = NULL;
	List_1_t2270999925 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	GameObjectU5BU5D_t3328599146* V_3 = NULL;
	int32_t V_4 = 0;
	TrainingHazardController_t987698733 * V_5 = NULL;
	{
		GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral3625332488, /*hidden argument*/NULL);
		V_0 = L_0;
		List_1_t2270999925 * L_1 = (List_1_t2270999925 *)il2cpp_codegen_object_new(List_1_t2270999925_il2cpp_TypeInfo_var);
		List_1__ctor_m2660807848(L_1, /*hidden argument*/List_1__ctor_m2660807848_RuntimeMethod_var);
		V_1 = L_1;
		GameObjectU5BU5D_t3328599146* L_2 = V_0;
		V_3 = L_2;
		V_4 = 0;
		goto IL_003b;
	}

IL_001b:
	{
		GameObjectU5BU5D_t3328599146* L_3 = V_3;
		int32_t L_4 = V_4;
		int32_t L_5 = L_4;
		GameObject_t1113636619 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		GameObject_t1113636619 * L_7 = V_2;
		TrainingHazardController_t987698733 * L_8 = GameObject_GetComponent_TisTrainingHazardController_t987698733_m4062657134(L_7, /*hidden argument*/GameObject_GetComponent_TisTrainingHazardController_t987698733_m4062657134_RuntimeMethod_var);
		V_5 = L_8;
		List_1_t2270999925 * L_9 = V_1;
		TrainingHazardController_t987698733 * L_10 = V_5;
		TrainingHazard_t798925183 * L_11 = L_10->get_hazard_2();
		List_1_Add_m4193797784(L_9, L_11, /*hidden argument*/List_1_Add_m4193797784_RuntimeMethod_var);
		int32_t L_12 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003b:
	{
		int32_t L_13 = V_4;
		GameObjectU5BU5D_t3328599146* L_14 = V_3;
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		Round_t3007421971 * L_15 = ((PARSController_t1025491303 *)__this)->get_currentRound_8();
		List_1_t2270999925 * L_16 = V_1;
		VirtActionInvoker1< List_1_t2270999925 * >::Invoke(4 /* System.Void Round::setResponses(System.Collections.Generic.List`1<TrainingHazard>) */, L_15, L_16);
		List_1_t2459773475 * L_17 = __this->get_currentRoundTrainingHazardControllers_16();
		List_1_Clear_m76980947(L_17, /*hidden argument*/List_1_Clear_m76980947_RuntimeMethod_var);
		PARSController_completeCurrentRound_m3102217683(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingController::complete()
extern "C"  void TrainingController_complete_m806312153 (TrainingController_t3952779903 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingController_complete_m806312153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NullReferenceException_t1023182353 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		PARSController_complete_m2748135589(__this, /*hidden argument*/NULL);
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		TrainingDataManager_t3084013207 * L_0 = __this->get_dataManager_17();
		TrainingDataManager_save_m2989509151(L_0, /*hidden argument*/NULL);
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NullReferenceException_t1023182353_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0016;
		throw e;
	}

CATCH_0016:
	{ // begin catch(System.NullReferenceException)
		V_0 = ((NullReferenceException_t1023182353 *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1965291424, /*hidden argument*/NULL);
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2133593295, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrainingDataManager::.ctor(System.String,TrainingController)
extern "C"  void TrainingDataManager__ctor_m1073158598 (TrainingDataManager_t3084013207 * __this, String_t* ___fileName0, TrainingController_t3952779903 * ___tc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fileName0;
		PARSDataManager__ctor_m867678872(__this, L_0, /*hidden argument*/NULL);
		TrainingController_t3952779903 * L_1 = ___tc1;
		__this->set_tc_5(L_1);
		return;
	}
}
// System.Void TrainingDataManager::save()
extern "C"  void TrainingDataManager_save_m2989509151 (TrainingDataManager_t3084013207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingDataManager_save_m2989509151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrainingDataManager_addTimesToJson_m3839368256(__this, /*hidden argument*/NULL);
		TrainingDataManager_addRoundsToJson_m480598126(__this, /*hidden argument*/NULL);
		PARSDataManager_storeToFirebase_m3012332562(__this, _stringLiteral4008285834, /*hidden argument*/NULL);
		PARSDataManager_saveToFile_m3976889622(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingDataManager::addTimesToJson()
extern "C"  void TrainingDataManager_addTimesToJson_m3839368256 (TrainingDataManager_t3084013207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingDataManager_addTimesToJson_m3839368256_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		TrainingController_t3952779903 * L_1 = __this->get_tc_5();
		DateTime_t3738529785 * L_2 = ((PARSController_t1025491303 *)L_1)->get_address_of_startTime_12();
		String_t* L_3 = DateTime_ToString_m3718521780(L_2, _stringLiteral1858654798, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m2163913788(NULL /*static, unused*/, L_0, _stringLiteral3283914384, L_3, _stringLiteral3450779518, /*hidden argument*/NULL);
		((PARSDataManager_t1176312113 *)__this)->set_jsonOutput_3(L_4);
		String_t* L_5 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		TrainingController_t3952779903 * L_6 = __this->get_tc_5();
		DateTime_t3738529785 * L_7 = ((PARSController_t1025491303 *)L_6)->get_address_of_endTime_13();
		String_t* L_8 = DateTime_ToString_m3718521780(L_7, _stringLiteral1858654798, /*hidden argument*/NULL);
		String_t* L_9 = String_Concat_m2163913788(NULL /*static, unused*/, L_5, _stringLiteral1681551641, L_8, _stringLiteral3450779518, /*hidden argument*/NULL);
		((PARSDataManager_t1176312113 *)__this)->set_jsonOutput_3(L_9);
		String_t* L_10 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingDataManager::addRoundsToJson()
extern "C"  void TrainingDataManager_addRoundsToJson_m480598126 (TrainingDataManager_t3084013207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingDataManager_addRoundsToJson_m480598126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Round_t3007421971 * V_0 = NULL;
	Enumerator_t2073773294  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, _stringLiteral1738631339, /*hidden argument*/NULL);
		((PARSDataManager_t1176312113 *)__this)->set_jsonOutput_3(L_1);
		TrainingController_t3952779903 * L_2 = __this->get_tc_5();
		List_1_t184529417 * L_3 = ((PARSController_t1025491303 *)L_2)->get_finishedRounds_9();
		Enumerator_t2073773294  L_4 = List_1_GetEnumerator_m2597448471(L_3, /*hidden argument*/List_1_GetEnumerator_m2597448471_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0027:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007a;
		}

IL_002c:
		{
			Round_t3007421971 * L_5 = Enumerator_get_Current_m4052406410((&V_1), /*hidden argument*/Enumerator_get_Current_m4052406410_RuntimeMethod_var);
			V_0 = L_5;
			String_t* L_6 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
			V_2 = L_6;
			StringU5BU5D_t1281789340* L_7 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)6));
			String_t* L_8 = V_2;
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
			StringU5BU5D_t1281789340* L_9 = L_7;
			ArrayElementTypeCheck (L_9, _stringLiteral1669698311);
			(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral1669698311);
			StringU5BU5D_t1281789340* L_10 = L_9;
			Round_t3007421971 * L_11 = V_0;
			String_t* L_12 = Round_getSceneID_m1296914292(L_11, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_10, L_12);
			(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_12);
			StringU5BU5D_t1281789340* L_13 = L_10;
			ArrayElementTypeCheck (L_13, _stringLiteral3451959166);
			(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3451959166);
			StringU5BU5D_t1281789340* L_14 = L_13;
			Round_t3007421971 * L_15 = V_0;
			String_t* L_16 = JsonUtility_ToJson_m3644929270(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_14, L_16);
			(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_16);
			StringU5BU5D_t1281789340* L_17 = L_14;
			ArrayElementTypeCheck (L_17, _stringLiteral3452614532);
			(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral3452614532);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_18 = String_Concat_m1809518182(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			((PARSDataManager_t1176312113 *)__this)->set_jsonOutput_3(L_18);
		}

IL_007a:
		{
			bool L_19 = Enumerator_MoveNext_m3792823848((&V_1), /*hidden argument*/Enumerator_MoveNext_m3792823848_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_002c;
			}
		}

IL_0086:
		{
			IL2CPP_LEAVE(0x99, FINALLY_008b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008b;
	}

FINALLY_008b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3439656034((&V_1), /*hidden argument*/Enumerator_Dispose_m3439656034_RuntimeMethod_var);
		IL2CPP_END_FINALLY(139)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(139)
	{
		IL2CPP_JUMP_TBL(0x99, IL_0099)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0099:
	{
		String_t* L_20 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m3937257545(NULL /*static, unused*/, L_20, _stringLiteral629592751, /*hidden argument*/NULL);
		((PARSDataManager_t1176312113 *)__this)->set_jsonOutput_3(L_21);
		String_t* L_22 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingDataManager::storeToFile()
extern "C"  void TrainingDataManager_storeToFile_m3737157907 (TrainingDataManager_t3084013207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingDataManager_storeToFile_m3737157907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3471027431, /*hidden argument*/NULL);
		String_t* L_0 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		Debug_Log_m4051431634(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_1 = Application_get_persistentDataPath_m1428108154(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_2 = ((PARSDataManager_t1176312113 *)__this)->get_gameDataFileName_2();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = V_0;
		bool L_5 = File_Exists_m3943585060(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_6 = V_0;
		String_t* L_7 = ((PARSDataManager_t1176312113 *)__this)->get_jsonOutput_3();
		File_WriteAllText_m167356635(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrainingHazard::.ctor(System.String,System.String)
extern "C"  void TrainingHazard__ctor_m3371616206 (TrainingHazard_t798925183 * __this, String_t* ___category0, String_t* ___name1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___category0;
		String_t* L_1 = ___name1;
		Hazard__ctor_m2612460934(__this, L_0, L_1, /*hidden argument*/NULL);
		__this->set_duration_4((0.0f));
		Color_t2555686324  L_2 = Color_get_cyan_m765383084(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_color_3(L_2);
		return;
	}
}
// System.Void TrainingHazard::incrementDuration()
extern "C"  void TrainingHazard_incrementDuration_m1006319826 (TrainingHazard_t798925183 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_duration_4();
		float L_1 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_duration_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TrainingHazardController::.ctor()
extern "C"  void TrainingHazardController__ctor_m3531675342 (TrainingHazardController_t987698733 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingHazardController::Start()
extern "C"  void TrainingHazardController_Start_m3901289496 (TrainingHazardController_t987698733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingHazardController_Start_m3901289496_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrainingHazard_t798925183 * L_0 = __this->get_hazard_2();
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		TrainingHazard_t798925183 * L_1 = (TrainingHazard_t798925183 *)il2cpp_codegen_object_new(TrainingHazard_t798925183_il2cpp_TypeInfo_var);
		TrainingHazard__ctor_m3371616206(L_1, _stringLiteral3135112755, _stringLiteral4181604528, /*hidden argument*/NULL);
		__this->set_hazard_2(L_1);
	}

IL_0020:
	{
		HazardIconController_t3601592792 * L_2 = Component_GetComponentInChildren_TisHazardIconController_t3601592792_m4269302997(__this, /*hidden argument*/Component_GetComponentInChildren_TisHazardIconController_t3601592792_m4269302997_RuntimeMethod_var);
		__this->set_icon_3(L_2);
		HazardIconController_t3601592792 * L_3 = __this->get_icon_3();
		TrainingHazard_t798925183 * L_4 = __this->get_hazard_2();
		Color_t2555686324  L_5 = L_4->get_color_3();
		HazardIconController_setColor_m948557051(L_3, L_5, /*hidden argument*/NULL);
		HazardContentView_t2572541359 * L_6 = Component_GetComponentInChildren_TisHazardContentView_t2572541359_m2937662336(__this, /*hidden argument*/Component_GetComponentInChildren_TisHazardContentView_t2572541359_m2937662336_RuntimeMethod_var);
		__this->set_content_4(L_6);
		HazardOffState_t4154887258 * L_7 = (HazardOffState_t4154887258 *)il2cpp_codegen_object_new(HazardOffState_t4154887258_il2cpp_TypeInfo_var);
		HazardOffState__ctor_m3204079399(L_7, __this, /*hidden argument*/NULL);
		TrainingHazardController_SetState_m3812308502(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingHazardController::Update()
extern "C"  void TrainingHazardController_Update_m3678155068 (TrainingHazardController_t987698733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingHazardController_Update_m3678155068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t3329758327 * L_0 = __this->get_currentState_7();
		if (!((HazardOnState_t4192084759 *)IsInstClass((RuntimeObject*)L_0, HazardOnState_t4192084759_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		TrainingHazard_t798925183 * L_1 = __this->get_hazard_2();
		TrainingHazard_incrementDuration_m1006319826(L_1, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void TrainingHazardController::setDelegate(TrainingController)
extern "C"  void TrainingHazardController_setDelegate_m3060760941 (TrainingHazardController_t987698733 * __this, TrainingController_t3952779903 * ___tc0, const RuntimeMethod* method)
{
	{
		TrainingController_t3952779903 * L_0 = ___tc0;
		__this->set_tcDelegate_6(L_0);
		return;
	}
}
// System.Void TrainingHazardController::setColor(UnityEngine.Color)
extern "C"  void TrainingHazardController_setColor_m4124926025 (TrainingHazardController_t987698733 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingHazardController_setColor_m4124926025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, _stringLiteral3495164950, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingHazardController::setVisibility(System.Boolean)
extern "C"  void TrainingHazardController_setVisibility_m641301158 (TrainingHazardController_t987698733 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		HazardContentView_t2572541359 * L_0 = __this->get_content_4();
		bool L_1 = ___enabled0;
		HazardContentView_setContentVisibilty_m329572791(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TrainingHazardController::SetState(State)
extern "C"  void TrainingHazardController_SetState_m3812308502 (TrainingHazardController_t987698733 * __this, State_t3329758327 * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingHazardController_SetState_m3812308502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t3329758327 * L_0 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral469513365, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		State_t3329758327 * L_2 = __this->get_currentState_7();
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		State_t3329758327 * L_3 = __this->get_currentState_7();
		VirtActionInvoker0::Invoke(5 /* System.Void State::OnStateExit() */, L_3);
	}

IL_0026:
	{
		State_t3329758327 * L_4 = ___state0;
		__this->set_currentState_7(L_4);
		State_t3329758327 * L_5 = __this->get_currentState_7();
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		State_t3329758327 * L_6 = __this->get_currentState_7();
		VirtActionInvoker0::Invoke(4 /* System.Void State::OnStateEnter() */, L_6);
	}

IL_0043:
	{
		return;
	}
}
// System.Void TrainingHazardController::SetState(System.String)
extern "C"  void TrainingHazardController_SetState_m102977102 (TrainingHazardController_t987698733 * __this, String_t* ___stateName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingHazardController_SetState_m102977102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___stateName0;
		if (!L_0)
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_1 = ___stateName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral3187260365, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_3 = ___stateName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, _stringLiteral3150062864, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004d;
	}

IL_002b:
	{
		HazardOnState_t4192084759 * L_5 = (HazardOnState_t4192084759 *)il2cpp_codegen_object_new(HazardOnState_t4192084759_il2cpp_TypeInfo_var);
		HazardOnState__ctor_m599141368(L_5, __this, /*hidden argument*/NULL);
		TrainingHazardController_SetState_m3812308502(__this, L_5, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_003c:
	{
		HazardOffState_t4154887258 * L_6 = (HazardOffState_t4154887258 *)il2cpp_codegen_object_new(HazardOffState_t4154887258_il2cpp_TypeInfo_var);
		HazardOffState__ctor_m3204079399(L_6, __this, /*hidden argument*/NULL);
		TrainingHazardController_SetState_m3812308502(__this, L_6, /*hidden argument*/NULL);
		goto IL_004d;
	}

IL_004d:
	{
		return;
	}
}
// State TrainingHazardController::ToggleState()
extern "C"  State_t3329758327 * TrainingHazardController_ToggleState_m3766278890 (TrainingHazardController_t987698733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingHazardController_ToggleState_m3766278890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	State_t3329758327 * V_0 = NULL;
	{
		TrainingController_t3952779903 * L_0 = __this->get_tcDelegate_6();
		TrainingController_setOtherStatesToOff_m1651245967(L_0, __this, /*hidden argument*/NULL);
		TrainingController_t3952779903 * L_1 = __this->get_tcDelegate_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral275796330, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = (State_t3329758327 *)NULL;
		State_t3329758327 * L_3 = __this->get_currentState_7();
		if (!((HazardOffState_t4154887258 *)IsInstClass((RuntimeObject*)L_3, HazardOffState_t4154887258_il2cpp_TypeInfo_var)))
		{
			goto IL_003f;
		}
	}
	{
		HazardOnState_t4192084759 * L_4 = (HazardOnState_t4192084759 *)il2cpp_codegen_object_new(HazardOnState_t4192084759_il2cpp_TypeInfo_var);
		HazardOnState__ctor_m599141368(L_4, __this, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0056;
	}

IL_003f:
	{
		State_t3329758327 * L_5 = __this->get_currentState_7();
		if (!((HazardOnState_t4192084759 *)IsInstClass((RuntimeObject*)L_5, HazardOnState_t4192084759_il2cpp_TypeInfo_var)))
		{
			goto IL_0056;
		}
	}
	{
		HazardOffState_t4154887258 * L_6 = (HazardOffState_t4154887258 *)il2cpp_codegen_object_new(HazardOffState_t4154887258_il2cpp_TypeInfo_var);
		HazardOffState__ctor_m3204079399(L_6, __this, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0056:
	{
		State_t3329758327 * L_7 = V_0;
		TrainingHazardController_SetState_m3812308502(__this, L_7, /*hidden argument*/NULL);
		State_t3329758327 * L_8 = V_0;
		return L_8;
	}
}
// System.Void TrainingHazardController::SetStateOff()
extern "C"  void TrainingHazardController_SetStateOff_m2749530923 (TrainingHazardController_t987698733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrainingHazardController_SetStateOff_m2749530923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		State_t3329758327 * L_0 = __this->get_currentState_7();
		if (!((HazardOnState_t4192084759 *)IsInstClass((RuntimeObject*)L_0, HazardOnState_t4192084759_il2cpp_TypeInfo_var)))
		{
			goto IL_0017;
		}
	}
	{
		TrainingHazardController_ToggleState_m3766278890(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void URL_Access::.ctor()
extern "C"  void URL_Access__ctor_m2377615129 (URL_Access_t1474579352 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL_Access::Start()
extern "C"  void URL_Access_Start_m4282310275 (URL_Access_t1474579352 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_kk_2();
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL_Access::TaskOnClick()
extern "C"  void URL_Access_TaskOnClick_m3205665750 (URL_Access_t1474579352 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_Access_TaskOnClick_m3205665750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral2776651368, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = __this->get_kk_2();
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void URL_Access_Conditional::.ctor()
extern "C"  void URL_Access_Conditional__ctor_m3997447496 (URL_Access_Conditional_t372617475 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL_Access_Conditional::Start()
extern "C"  void URL_Access_Conditional_Start_m2579326922 (URL_Access_Conditional_t372617475 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_kk_2();
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void URL_Access_Conditional::TaskOnClick()
extern "C"  void URL_Access_Conditional_TaskOnClick_m566987448 (URL_Access_Conditional_t372617475 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (URL_Access_Conditional_TaskOnClick_m566987448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Application_OpenURL_m738341736(NULL /*static, unused*/, _stringLiteral2776651368, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = __this->get_kk_2();
		GameObject_t1113636619 * L_1 = GameObject_get_gameObject_m3693461266(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
