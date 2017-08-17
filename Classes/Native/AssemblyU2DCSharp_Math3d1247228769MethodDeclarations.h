#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Math3d
struct Math3d_t1247228769;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void Math3d::.ctor()
extern "C"  void Math3d__ctor_m3629759232 (Math3d_t1247228769 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::Init()
extern "C"  void Math3d_Init_m213535548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::AddVectorLength(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Math3d_AddVectorLength_m2309832248 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___vector0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::SetVectorLength(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Math3d_SetVectorLength_m1039673877 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___vector0, float ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::SubtractRotation(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Math3d_SubtractRotation_m3739088890 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___B0, Quaternion_t4030073918  ___A1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::PlanePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_PlanePlaneIntersection_m1225119941 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___linePoint0, Vector3_t2243707580 * ___lineVec1, Vector3_t2243707580  ___plane1Normal2, Vector3_t2243707580  ___plane1Position3, Vector3_t2243707580  ___plane2Normal4, Vector3_t2243707580  ___plane2Position5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::LinePlaneIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_LinePlaneIntersection_m429602648 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___intersection0, Vector3_t2243707580  ___linePoint1, Vector3_t2243707580  ___lineVec2, Vector3_t2243707580  ___planeNormal3, Vector3_t2243707580  ___planePoint4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::LineLineIntersection(UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_LineLineIntersection_m1142548618 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___intersection0, Vector3_t2243707580  ___linePoint11, Vector3_t2243707580  ___lineVec12, Vector3_t2243707580  ___linePoint23, Vector3_t2243707580  ___lineVec24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::ClosestPointsOnTwoLines(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_ClosestPointsOnTwoLines_m1169851054 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___closestPointLine10, Vector3_t2243707580 * ___closestPointLine21, Vector3_t2243707580  ___linePoint12, Vector3_t2243707580  ___lineVec13, Vector3_t2243707580  ___linePoint24, Vector3_t2243707580  ___lineVec25, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::InverseSignQuaternion(UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  Math3d_InverseSignQuaternion_m4232651838 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::AreQuaternionsClose(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  bool Math3d_AreQuaternionsClose_m452300459 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___q10, Quaternion_t4030073918  ___q21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectPointOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Math3d_ProjectPointOnLine_m4053944953 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___linePoint0, Vector3_t2243707580  ___lineVec1, Vector3_t2243707580  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectPointOnLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Math3d_ProjectPointOnLineSegment_m1877944462 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___linePoint10, Vector3_t2243707580  ___linePoint21, Vector3_t2243707580  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectPointOnPlane(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Math3d_ProjectPointOnPlane_m3741767189 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___planeNormal0, Vector3_t2243707580  ___planePoint1, Vector3_t2243707580  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::ProjectVectorOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Math3d_ProjectVectorOnPlane_m2118501253 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___planeNormal0, Vector3_t2243707580  ___vector1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::SignedDistancePlanePoint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_SignedDistancePlanePoint_m4198285952 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___planeNormal0, Vector3_t2243707580  ___planePoint1, Vector3_t2243707580  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::SignedDotProduct(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_SignedDotProduct_m520985597 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___vectorA0, Vector3_t2243707580  ___vectorB1, Vector3_t2243707580  ___normal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::AngleVectorPlane(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_AngleVectorPlane_m1436821452 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___vector0, Vector3_t2243707580  ___normal1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::DotProductAngle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_DotProductAngle_m2509864139 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___vec10, Vector3_t2243707580  ___vec21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::PlaneFrom3Points(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_PlaneFrom3Points_m941724797 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___planeNormal0, Vector3_t2243707580 * ___planePoint1, Vector3_t2243707580  ___pointA2, Vector3_t2243707580  ___pointB3, Vector3_t2243707580  ___pointC4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::GetForwardVector(UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  Math3d_GetForwardVector_m156159625 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::GetUpVector(UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  Math3d_GetUpVector_m3609240635 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::GetRightVector(UnityEngine.Quaternion)
extern "C"  Vector3_t2243707580  Math3d_GetRightVector_m1381037332 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::QuaternionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Quaternion_t4030073918  Math3d_QuaternionFromMatrix_m2334531893 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Math3d::PositionFromMatrix(UnityEngine.Matrix4x4)
extern "C"  Vector3_t2243707580  Math3d_PositionFromMatrix_m1170400462 (Il2CppObject * __this /* static, unused */, Matrix4x4_t2933234003  ___m0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::LookRotationExtended(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_LookRotationExtended_m2147822728 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 ** ___gameObjectInOut0, Vector3_t2243707580  ___alignWithVector1, Vector3_t2243707580  ___alignWithNormal2, Vector3_t2243707580  ___customForward3, Vector3_t2243707580  ___customUp4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::TransformWithParent(UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C"  void Math3d_TransformWithParent_m3230166336 (Il2CppObject * __this /* static, unused */, Quaternion_t4030073918 * ___childRotation0, Vector3_t2243707580 * ___childPosition1, Quaternion_t4030073918  ___parentRotation2, Vector3_t2243707580  ___parentPosition3, Quaternion_t4030073918  ___startParentRotation4, Vector3_t2243707580  ___startParentPosition5, Quaternion_t4030073918  ___startChildRotation6, Vector3_t2243707580  ___startChildPosition7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::PreciseAlign(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_PreciseAlign_m557137566 (Il2CppObject * __this /* static, unused */, GameObject_t1756533147 ** ___gameObjectInOut0, Vector3_t2243707580  ___alignWithVector1, Vector3_t2243707580  ___alignWithNormal2, Vector3_t2243707580  ___alignWithPosition3, Vector3_t2243707580  ___triangleForward4, Vector3_t2243707580  ___triangleNormal5, Vector3_t2243707580  ___trianglePosition6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::VectorsToTransform(UnityEngine.GameObject&,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Math3d_VectorsToTransform_m2047872026 (Math3d_t1247228769 * __this, GameObject_t1756533147 ** ___gameObjectInOut0, Vector3_t2243707580  ___positionVector1, Vector3_t2243707580  ___directionVector2, Vector3_t2243707580  ___normalVector3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Math3d::PointOnWhichSideOfLineSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  int32_t Math3d_PointOnWhichSideOfLineSegment_m2640836452 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___linePoint10, Vector3_t2243707580  ___linePoint21, Vector3_t2243707580  ___point2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::MouseDistanceToLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Math3d_MouseDistanceToLine_m1442083585 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___linePoint10, Vector3_t2243707580  ___linePoint21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Math3d::MouseDistanceToCircle(UnityEngine.Vector3,System.Single)
extern "C"  float Math3d_MouseDistanceToCircle_m1173990309 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point0, float ___radius1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::IsLineInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_IsLineInRectangle_m2246826770 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___linePoint10, Vector3_t2243707580  ___linePoint21, Vector3_t2243707580  ___rectA2, Vector3_t2243707580  ___rectB3, Vector3_t2243707580  ___rectC4, Vector3_t2243707580  ___rectD5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::IsPointInRectangle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_IsPointInRectangle_m2086150341 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___point0, Vector3_t2243707580  ___rectA1, Vector3_t2243707580  ___rectC2, Vector3_t2243707580  ___rectB3, Vector3_t2243707580  ___rectD4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Math3d::AreLineSegmentsCrossing(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Math3d_AreLineSegmentsCrossing_m3963854190 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___pointA10, Vector3_t2243707580  ___pointA21, Vector3_t2243707580  ___pointB12, Vector3_t2243707580  ___pointB23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::AverageQuaternion(UnityEngine.Vector4&,UnityEngine.Quaternion,UnityEngine.Quaternion,System.Int32)
extern "C"  void Math3d_AverageQuaternion_m2532381182 (Il2CppObject * __this /* static, unused */, Vector4_t2243707581 * ___cumulative0, Quaternion_t4030073918  ___newRotation1, Quaternion_t4030073918  ___firstRotation2, int32_t ___addAmount3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Math3d::NormalizeQuaternion(System.Single,System.Single,System.Single,System.Single)
extern "C"  Quaternion_t4030073918  Math3d_NormalizeQuaternion_m301013313 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___z2, float ___w3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Math3d::.cctor()
extern "C"  void Math3d__cctor_m3433480691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
