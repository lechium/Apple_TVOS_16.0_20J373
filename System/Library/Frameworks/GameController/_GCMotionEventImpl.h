//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCMotionEventImpl : NSObject
{
    _Bool _hasGyro;	// 8 = 0x8
    _Bool _hasAccelerometer;	// 9 = 0x9
    _Bool _hasAttitude;	// 10 = 0xa
    unsigned long long _timestamp;	// 16 = 0x10
    double _gyroPitch;	// 24 = 0x18
    double _gyroYaw;	// 32 = 0x20
    double _gyroRoll;	// 40 = 0x28
    double _accelerometerX;	// 48 = 0x30
    double _accelerometerY;	// 56 = 0x38
    double _accelerometerZ;	// 64 = 0x40
    double _attitudeW;	// 72 = 0x48
    double _attitudeX;	// 80 = 0x50
    double _attitudeY;	// 88 = 0x58
    double _attitudeZ;	// 96 = 0x60
}

@property(nonatomic) double attitudeZ; // @synthesize attitudeZ=_attitudeZ;
@property(nonatomic) double attitudeY; // @synthesize attitudeY=_attitudeY;
@property(nonatomic) double attitudeX; // @synthesize attitudeX=_attitudeX;
@property(nonatomic) double attitudeW; // @synthesize attitudeW=_attitudeW;
@property(nonatomic) _Bool hasAttitude; // @synthesize hasAttitude=_hasAttitude;
@property(nonatomic) double accelerometerZ; // @synthesize accelerometerZ=_accelerometerZ;
@property(nonatomic) double accelerometerY; // @synthesize accelerometerY=_accelerometerY;
@property(nonatomic) double accelerometerX; // @synthesize accelerometerX=_accelerometerX;
@property(nonatomic) _Bool hasAccelerometer; // @synthesize hasAccelerometer=_hasAccelerometer;
@property(nonatomic) double gyroRoll; // @synthesize gyroRoll=_gyroRoll;
@property(nonatomic) double gyroYaw; // @synthesize gyroYaw=_gyroYaw;
@property(nonatomic) double gyroPitch; // @synthesize gyroPitch=_gyroPitch;
@property(nonatomic) _Bool hasGyro; // @synthesize hasGyro=_hasGyro;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007de19
- (id)initWithMotionEvent:(id)arg1;	// IMP=0x000000000007dcc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

