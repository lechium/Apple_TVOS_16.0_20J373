//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CIBurstFaceStat : NSObject
{
    _Bool leftEyeOpen;	// 8 = 0x8
    _Bool rightEyeOpen;	// 9 = 0x9
    _Bool smiling;	// 10 = 0xa
    _Bool foundByFaceCore;	// 11 = 0xb
    _Bool hasLeftEye;	// 12 = 0xc
    _Bool hasRightEye;	// 13 = 0xd
    _Bool hasRollAngle;	// 14 = 0xe
    _Bool hasYawAngle;	// 15 = 0xf
    _Bool smallFace;	// 16 = 0x10
    _Bool _isSyncedWithImage;	// 17 = 0x11
    float normalizedSigma;	// 20 = 0x14
    int faceId;	// 24 = 0x18
    int hwFaceId;	// 28 = 0x1c
    int framesSinceLast;	// 32 = 0x20
    float focusScore;	// 36 = 0x24
    float normalizedFocusScore;	// 40 = 0x28
    float faceScore;	// 44 = 0x2c
    float leftEyeBlinkScore;	// 48 = 0x30
    float rightEyeBlinkScore;	// 52 = 0x34
    float smileScore;	// 56 = 0x38
    int FCRLeftEyeFeaturesOffset;	// 60 = 0x3c
    int FCRRightEyeFeaturesOffset;	// 64 = 0x40
    int FCRSmileFeaturesOffset;	// 68 = 0x44
    int FCRBlinkFeaturesSize;	// 72 = 0x48
    int FCRSmileFeaturesSize;	// 76 = 0x4c
    float rollAngle;	// 80 = 0x50
    float yawAngle;	// 84 = 0x54
    NSMutableArray *FCRSmileAndBlinkFeatures;	// 88 = 0x58
    double timestamp;	// 96 = 0x60
    struct CGRect faceRect;	// 104 = 0x68
    struct CGRect normalizedFaceRect;	// 136 = 0x88
    struct CGRect leftEyeRect;	// 168 = 0xa8
    struct CGRect rightEyeRect;	// 200 = 0xc8
    struct CGRect _hwFaceRect;	// 232 = 0xe8
}

@property _Bool isSyncedWithImage; // @synthesize isSyncedWithImage=_isSyncedWithImage;
@property struct CGRect hwFaceRect; // @synthesize hwFaceRect=_hwFaceRect;
@property _Bool smallFace; // @synthesize smallFace;
@property double timestamp; // @synthesize timestamp;
@property float yawAngle; // @synthesize yawAngle;
@property float rollAngle; // @synthesize rollAngle;
@property _Bool hasYawAngle; // @synthesize hasYawAngle;
@property _Bool hasRollAngle; // @synthesize hasRollAngle;
@property NSMutableArray *FCRSmileAndBlinkFeatures; // @synthesize FCRSmileAndBlinkFeatures;
@property int FCRSmileFeaturesSize; // @synthesize FCRSmileFeaturesSize;
@property int FCRBlinkFeaturesSize; // @synthesize FCRBlinkFeaturesSize;
@property int FCRSmileFeaturesOffset; // @synthesize FCRSmileFeaturesOffset;
@property int FCRRightEyeFeaturesOffset; // @synthesize FCRRightEyeFeaturesOffset;
@property int FCRLeftEyeFeaturesOffset; // @synthesize FCRLeftEyeFeaturesOffset;
@property float smileScore; // @synthesize smileScore;
@property float rightEyeBlinkScore; // @synthesize rightEyeBlinkScore;
@property float leftEyeBlinkScore; // @synthesize leftEyeBlinkScore;
@property struct CGRect rightEyeRect; // @synthesize rightEyeRect;
@property struct CGRect leftEyeRect; // @synthesize leftEyeRect;
@property _Bool hasRightEye; // @synthesize hasRightEye;
@property _Bool hasLeftEye; // @synthesize hasLeftEye;
@property float faceScore; // @synthesize faceScore;
@property float normalizedFocusScore; // @synthesize normalizedFocusScore;
@property float focusScore; // @synthesize focusScore;
@property int framesSinceLast; // @synthesize framesSinceLast;
@property int hwFaceId; // @synthesize hwFaceId;
@property int faceId; // @synthesize faceId;
@property float normalizedSigma; // @synthesize normalizedSigma;
@property struct CGRect normalizedFaceRect; // @synthesize normalizedFaceRect;
@property struct CGRect faceRect; // @synthesize faceRect;
@property _Bool foundByFaceCore; // @synthesize foundByFaceCore;
@property _Bool smiling; // @synthesize smiling;
@property _Bool rightEyeOpen; // @synthesize rightEyeOpen;
@property _Bool leftEyeOpen; // @synthesize leftEyeOpen;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000344ca
- (id)initWithFaceStat:(id)arg1;	// IMP=0x0000000000034225

@end

