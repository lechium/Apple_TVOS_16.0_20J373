//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNFaceObservation;

__attribute__((visibility("hidden")))
@interface VCPFace : NSObject
{
    _Bool _leftEyeClosed;	// 8 = 0x8
    _Bool _rightEyeClosed;	// 9 = 0x9
    _Bool _smile;	// 10 = 0xa
    int _trackID;	// 12 = 0xc
    float _confidence;	// 16 = 0x10
    float _faceQuality;	// 20 = 0x14
    long long _yaw;	// 24 = 0x18
    VNFaceObservation *_observation;	// 32 = 0x20
    struct CGRect _bounds;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000b3983
@property(retain) VNFaceObservation *observation; // @synthesize observation=_observation;
@property float faceQuality; // @synthesize faceQuality=_faceQuality;
@property float confidence; // @synthesize confidence=_confidence;
@property int trackID; // @synthesize trackID=_trackID;
@property long long yaw; // @synthesize yaw=_yaw;
@property _Bool smile; // @synthesize smile=_smile;
@property _Bool rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property _Bool leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
- (struct CGRect)faceBoundsWithTransform:(unsigned long long)arg1 height:(unsigned long long)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x00000000000b3827
- (struct CGRect)faceBounds:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x00000000000b37c8
- (unsigned long long)flagsForOrientation:(_Bool)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;	// IMP=0x00000000000b375e
- (id)init;	// IMP=0x00000000000b3711

@end

