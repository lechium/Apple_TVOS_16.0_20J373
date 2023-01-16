//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, NSString;

@interface ADRapportProximityObservation : NSObject
{
    int _proximity;	// 8 = 0x8
    NSSet *_deviceIDPair;	// 16 = 0x10
    NSDate *_observationDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002c0448
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c0049
- (void).cxx_destruct;	// IMP=0x00100000002c0ca6
@property(readonly, copy, nonatomic) NSDate *observationDate; // @synthesize observationDate=_observationDate;
@property(readonly, nonatomic) int proximity; // @synthesize proximity=_proximity;
@property(readonly, copy, nonatomic) NSSet *deviceIDPair; // @synthesize deviceIDPair=_deviceIDPair;
- (id)buildDictionaryRepresentation;	// IMP=0x00100000002c0a1e
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000002c0657
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002c05a3
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002c0450
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002c043d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002c0318
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000002c01fd
@property(readonly, copy) NSString *description;
- (id)initWithDeviceIDPair:(id)arg1 proximity:(int)arg2 observationDate:(id)arg3;	// IMP=0x00100000002c00aa
- (id)init;	// IMP=0x00100000002c0096
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bfeff
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000002c0e55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
