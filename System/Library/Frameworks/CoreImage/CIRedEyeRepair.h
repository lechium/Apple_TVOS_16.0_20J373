//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CIRedEyeRepair : NSObject
{
    _Bool ownLF;	// 8 = 0x8
    CDStruct_79f2618e *lf;	// 16 = 0x10
    int imageSourceType;	// 24 = 0x18
    struct CGImageBlockSet *blockSet;	// 32 = 0x20
    void *releaseMe;	// 40 = 0x28
    struct __CFData *dataRef;	// 48 = 0x30
    NSArray *faces;	// 56 = 0x38
    int nRepairs;	// 64 = 0x40
    int nextRepairTag;	// 68 = 0x44
    CDStruct_8d997f87 repairs[32];	// 72 = 0x48
    int lastRepairTag;	// 12872 = 0x3248
    float lastRepairIOD;	// 12876 = 0x324c
    CDStruct_6ca1d5c6 standardTemplate;	// 12880 = 0x3250
    int iFaceIndex;	// 12896 = 0x3260
    _Bool iLeft;	// 12900 = 0x3264
    _Bool debugRedEye;	// 12901 = 0x3265
    _Bool logRepairs;	// 12902 = 0x3266
    int redEyeThresholdKind;	// 12904 = 0x3268
    _Bool renderAlpha;	// 12908 = 0x326c
    _Bool infillBackground;	// 12909 = 0x326d
    _Bool renderSpecularShine;	// 12910 = 0x326e
    float specularSize;	// 12912 = 0x3270
    float specularSoftness;	// 12916 = 0x3274
    _Bool pupilShadeAlignment;	// 12920 = 0x3278
    _Bool autoPupilTonality;	// 12921 = 0x3279
    _Bool forceLoValue;	// 12922 = 0x327a
    int loValue;	// 12924 = 0x327c
    CDStruct_c3faddef lastClickYBitmap;	// 12928 = 0x3280
    CDStruct_c3faddef lastClickCbCrBitmap;	// 12968 = 0x32a8
    int lastClickBitmapMinX;	// 13008 = 0x32d0
    int lastClickBitmapMaxX;	// 13012 = 0x32d4
    int lastClickBitmapMinY;	// 13016 = 0x32d8
    int lastClickBitmapMaxY;	// 13020 = 0x32dc
    CDStruct_c3faddef lastClickYBitmaps[3];	// 13024 = 0x32e0
    CDStruct_c3faddef lastClickCbCrBitmaps[3];	// 13144 = 0x3358
    CDStruct_5973fb4f lastClickBitmapRects[3];	// 13264 = 0x33d0
    CDStruct_c3faddef lastSearchYBitmap;	// 13312 = 0x3400
    CDStruct_c3faddef lastSearchCbCrBitmap;	// 13352 = 0x3428
    int lastSearchBitmapMinX;	// 13392 = 0x3450
    int lastSearchBitmapMaxX;	// 13396 = 0x3454
    int lastSearchBitmapMinY;	// 13400 = 0x3458
    int lastSearchBitmapMaxY;	// 13404 = 0x345c
    int nPolyPoints;	// 13408 = 0x3460
    _Bool polyClosed;	// 13412 = 0x3464
    struct CGPoint polyPoints[20];	// 13416 = 0x3468
    CDStruct_12b04d25 polyLines[20];	// 13736 = 0x35a8
    _Bool polyPointConcave[20];	// 13976 = 0x3698
    unsigned char CbCrDistanceTable[65536];	// 13996 = 0x36ac
    int nLinears;	// 79532 = 0x136ac
    int linearCoefficients[8][3];	// 79536 = 0x136b0
}

+ (struct CGRect)supportRectangleWithFaceArray:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00600000001e8c15
+ (struct CGRect)supportRectangleWithRepair:(id)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00600000001e8ad4
+ (struct CGRect)supportRectangleWithPoint:(struct CGPoint)arg1 imageSize:(struct CGSize)arg2 IOD:(float)arg3;	// IMP=0x00600000001e89f7
+ (float)upperRepairDistance:(float)arg1;	// IMP=0x00600000001e8937
+ (float)upperRepairDistanceFraction:(float)arg1;	// IMP=0x00600000001e88c9
- (void)setLeft:(_Bool)arg1;	// IMP=0x00000000001f0658
- (void)setFaceIndex:(int)arg1;	// IMP=0x00000000001f064c
- (void)executeRepairArray:(id)arg1;	// IMP=0x00000000001f05d4
- (void)executeRepair:(id)arg1;	// IMP=0x00000000001ef7b9
- (void)orientPointX:(float *)arg1 Y:(float *)arg2;	// IMP=0x00000000001ef78e
- (void)orientRectangleMinX:(float *)arg1 maxX:(float *)arg2 minY:(float *)arg3 maxY:(float *)arg4;	// IMP=0x00000000001ef74c
- (_Bool)getBool:(_Bool *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001ef709
- (_Bool)getInt:(int *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001ef6c6
- (_Bool)getFloat:(float *)arg1 d:(id)arg2 s:(id)arg3;	// IMP=0x00000000001ef680
- (id)repairArray;	// IMP=0x00000000001eec92
- (void)autoRepairWithFaceArray:(id)arg1;	// IMP=0x00000000001ee118
- (int)redEyeRemovalWithData:(CDStruct_1c31e7e7)arg1;	// IMP=0x00000000001ed750
- (void)skinInit;	// IMP=0x00000000001ed6f5
- (void)prepareLineFunctions;	// IMP=0x00000000001ed2b2
- (int)distanceMaskFromPolyToCb:(int)arg1 Cr:(int)arg2;	// IMP=0x00000000001ed233
- (void)autoRepairExtractAndSearchLeft:(CDStruct_a734b2e2)arg1 right:(CDStruct_a734b2e2)arg2 data:(CDStruct_935079c3 *)arg3 repairSize:(float)arg4 autoPupilTonality:(_Bool)arg5 faceIndex:(int)arg6;	// IMP=0x00000000001ecc77
- (int)applyEyeRepairWithEye:(CDStruct_3edab2bb *)arg1 left:(_Bool)arg2 IOD:(float)arg3 autoPupilTonality:(_Bool)arg4 match:(CDStruct_a734b2e2 *)arg5 faceIndex:(int)arg6 whiteHopper:(CDStruct_08ff8b76 *)arg7;	// IMP=0x00000000001eca12
- (CDStruct_3edab2bb)repairDecisionWithFaceRecord:(CDStruct_935079c3 *)arg1 left:(_Bool)arg2 redHopper:(CDStruct_08ff8b76 *)arg3 whiteHopper:(CDStruct_08ff8b76 *)arg4;	// IMP=0x00000000001ec947
- (_Bool)extractAndGatherProminencesWithRect:(CDStruct_a734b2e2)arg1 face:(CDStruct_935079c3 *)arg2 faceIndex:(int)arg3 left:(_Bool)arg4 maxwindowsize:(float)arg5 repairsize:(float)arg6 returningRedHopper:(CDStruct_08ff8b76 *)arg7 whiteHopper:(CDStruct_08ff8b76 *)arg8 redChannel:(CDStruct_c3faddef *)arg9 redChannelMask:(CDStruct_c3faddef *)arg10;	// IMP=0x00000000001ec5d8
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 altC:(CDStruct_c3faddef *)arg3 altMC:(CDStruct_c3faddef *)arg4 maxwindowsize:(int)arg5 repairsize:(int)arg6 IR:(CDStruct_a734b2e2)arg7 fr:(CDStruct_935079c3 *)arg8 intoHopper:(CDStruct_08ff8b76 *)arg9 faceIndex:(int)arg10 left:(_Bool)arg11;	// IMP=0x00000000001ec276
- (_Bool)gatherProminencesWithC:(CDStruct_c3faddef *)arg1 MC:(CDStruct_c3faddef *)arg2 maxwindowsize:(int)arg3 repairsize:(int)arg4 IR:(CDStruct_a734b2e2)arg5 fr:(CDStruct_935079c3 *)arg6 intoHopper:(CDStruct_08ff8b76 *)arg7 faceIndex:(int)arg8 left:(_Bool)arg9 coss:(float [10])arg10 sins:(float [10])arg11 bitmapName:(char *)arg12;	// IMP=0x00000000001ebb1b
- (void)insertIntoProminenceVettingHopper:(CDStruct_08ff8b76 *)arg1 max:(int)arg2 outside:(int)arg3 confidence:(float)arg4 distance:(float)arg5 row:(int)arg6 column:(int)arg7 IOD:(float)arg8;	// IMP=0x00000000001eb999
- (float)confidenceWithIOD:(float)arg1 repair:(int)arg2 andProminenceDifference:(int)arg3;	// IMP=0x00000000001eb810
- (float)extractAverageFaceY:(CDStruct_935079c3 *)arg1 contrast:(float *)arg2 faceIndex:(int)arg3;	// IMP=0x00000000001eb512
- (void)redoLastRepair;	// IMP=0x00000000001eb4e1
- (int)redoRepairWithTag:(int)arg1 IOD:(float)arg2;	// IMP=0x00000000001eb416
- (CDStruct_8d997f87 *)repairWithTag:(int)arg1;	// IMP=0x00000000001eb3e5
- (int)redEyeRemovalWithPoint:(struct CGPoint)arg1 alignPupilShades:(_Bool)arg2 matching:(CDStruct_a734b2e2)arg3 force:(int)arg4 IOD:(float)arg5 tap:(_Bool)arg6;	// IMP=0x00000000001e9db4
- (_Bool)extractReusableAlignedBitmapsAroundPoint:(CDStruct_c3faddef *)arg1 YR:(CDStruct_a734b2e2)arg2 subYBitmap:(CDStruct_c3faddef *)arg3 subCbCrBitmap:(CDStruct_c3faddef *)arg4;	// IMP=0x00000000001e9ace
- (_Bool)computeTrimmedBitmaps:(CDStruct_c3faddef *)arg1 newY:(CDStruct_c3faddef *)arg2 newCbCr:(CDStruct_c3faddef *)arg3 IR:(CDStruct_a734b2e2)arg4 newTrimY:(CDStruct_c3faddef *)arg5 newTrimCbCr:(CDStruct_c3faddef *)arg6 returningYR:(CDStruct_a734b2e2 *)arg7 andCbCrR:(CDStruct_a734b2e2 *)arg8;	// IMP=0x00000000001e966c
- (float)lowerRepairSize:(float)arg1;	// IMP=0x00000000001e89d2
- (float)upperRepairSize:(float)arg1;	// IMP=0x00000000001e89ad
- (float)lowerRepairSizeFraction:(float)arg1;	// IMP=0x00000000001e8885
- (float)upperRepairSizeFraction:(float)arg1;	// IMP=0x00000000001e8841
- (int)averageValueFromY:(CDStruct_c3faddef *)arg1 withinSkinMask:(CDStruct_c3faddef *)arg2 butOutsideAlpha:(CDStruct_c3faddef *)arg3;	// IMP=0x00000000001e8774
- (void)undoRepair:(int)arg1;	// IMP=0x00000000001e86ae
- (int)format;	// IMP=0x00000000001e869e
- (int)lastRepairTag;	// IMP=0x00000000001e8692
- (int)nRepairs;	// IMP=0x00000000001e8689
- (CDStruct_8d997f87 *)repairs;	// IMP=0x00000000001e867f
- (id)faces;	// IMP=0x00000000001e8675
- (CDStruct_a734b2e2)standardTemplate;	// IMP=0x00000000001e8661
- (void)setLoValue:(int)arg1;	// IMP=0x00000000001e8655
- (int)loValue;	// IMP=0x00000000001e8649
- (void)setForceLoValue:(_Bool)arg1;	// IMP=0x00000000001e863d
- (_Bool)forceLoValue;	// IMP=0x00000000001e8631
- (void)setAutoPupilTonality:(_Bool)arg1;	// IMP=0x00000000001e8625
- (_Bool)autoPupilTonality;	// IMP=0x00000000001e8619
- (void)setPupilShadeAlignment:(_Bool)arg1;	// IMP=0x00000000001e860d
- (_Bool)pupilShadeAlignment;	// IMP=0x00000000001e8601
- (void)setSpecularSoftness:(float)arg1;	// IMP=0x00000000001e85f3
- (float)specularSoftness;	// IMP=0x00000000001e85e5
- (void)setSpecularSize:(float)arg1;	// IMP=0x00000000001e85d7
- (float)specularSize;	// IMP=0x00000000001e85c9
- (void)setRenderSpecularShine:(_Bool)arg1;	// IMP=0x00000000001e85bd
- (_Bool)renderSpecularShine;	// IMP=0x00000000001e85b1
- (void)setInfillBackground:(_Bool)arg1;	// IMP=0x00000000001e85a5
- (_Bool)infillBackground;	// IMP=0x00000000001e8599
- (void)setRenderAlpha:(_Bool)arg1;	// IMP=0x00000000001e858d
- (_Bool)renderAlpha;	// IMP=0x00000000001e8581
- (void)setRedEyeThresholdKind:(int)arg1;	// IMP=0x00000000001e8575
- (int)redEyeThresholdKind;	// IMP=0x00000000001e8569
- (void)setLogRepairs:(_Bool)arg1;	// IMP=0x00000000001e855d
- (_Bool)logRepairs;	// IMP=0x00000000001e8551
- (void)setDebug:(_Bool)arg1;	// IMP=0x00000000001e8545
- (_Bool)debug;	// IMP=0x00000000001e8539
- (void)dealloc;	// IMP=0x00000000001e8421
- (id)initWithExternalBuffer:(char *)arg1 subRectangle:(struct CGRect)arg2 fullSize:(struct CGSize)arg3 rowBytes:(unsigned long long)arg4 cameraModel:(id)arg5;	// IMP=0x00000000001e82bc
- (id)initWithExternalBuffer:(char *)arg1 size:(struct CGSize)arg2 rowBytes:(unsigned long long)arg3;	// IMP=0x00000000001e81c5
- (id)initWithFrameExternalBuffer:(CDStruct_79f2618e *)arg1;	// IMP=0x00000000001e8178
- (id)initWithDeskView:(id)arg1 andFrame:(CDStruct_79f2618e *)arg2;	// IMP=0x00000000001e8132
- (void)initializeNonDebugVariables;	// IMP=0x00000000001e80a6
- (void)repairExternalBuffer;	// IMP=0x00000000001e804f
- (struct CGImage *)createRepairedImage;	// IMP=0x00000000001e7ed8
- (id)initWithCGImage:(struct CGImage *)arg1 cameraModel:(id)arg2;	// IMP=0x00000000001e7ca8
- (void)setColorSpace:(struct CGColorSpace *)arg1;	// IMP=0x00000000001e7c73
- (_Bool)getDataProviderCopyWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2;	// IMP=0x00000000001e7bd4
- (_Bool)getDataProviderBytePtrWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001e7b38
- (_Bool)getBlockSetWithImage:(struct CGImage *)arg1 into:(CDStruct_c3faddef *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;	// IMP=0x00000000001e7974

@end
