//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _GCHapticEvent : NSObject
{
    _Bool _stopped;	// 8 = 0x8
    _Bool _transientBeganAsContinuousEvent;	// 9 = 0x9
    unsigned long long _identifier;	// 16 = 0x10
    long long _type;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    double _intensity;	// 40 = 0x28
    double _sharpness;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000244e
@property(nonatomic) _Bool transientBeganAsContinuousEvent; // @synthesize transientBeganAsContinuousEvent=_transientBeganAsContinuousEvent;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(nonatomic) double sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) double intensity; // @synthesize intensity=_intensity;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000002314
- (id)initWithSyntheticCommand:(id)arg1;	// IMP=0x0000000000002125
- (void)evaluateDeviceNoteParams:(id)arg1;	// IMP=0x0000000000002092
- (pair_218a80e9)valueForNoteParam:(unsigned int)arg1 inParameters:(id)arg2;	// IMP=0x0000000000001ea8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002588
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002456

@end

