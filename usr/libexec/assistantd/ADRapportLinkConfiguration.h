//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions;

@interface ADRapportLinkConfiguration : NSObject
{
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 8 = 0x8
    ADRapportLinkTransportOptions *_transportOptions;	// 16 = 0x10
    long long _enablesProximityTracking;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001520ea
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000151cee
- (void).cxx_destruct;	// IMP=0x00100000001522cf
@property(readonly, nonatomic) long long enablesProximityTracking; // @synthesize enablesProximityTracking=_enablesProximityTracking;
@property(readonly, copy, nonatomic) ADRapportLinkTransportOptions *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(readonly, copy, nonatomic) ADRapportLinkDiscoveryOptions *discoveryOptions; // @synthesize discoveryOptions=_discoveryOptions;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000152205
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001520f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001520df
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000151fba
- (unsigned long long)hash;	// IMP=0x0010000000151f34
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000151ea2
- (id)description;	// IMP=0x0010000000151e8e
- (id)initWithDiscoveryOptions:(id)arg1 transportOptions:(id)arg2 enablesProximityTracking:(long long)arg3;	// IMP=0x0010000000151d4f
- (id)init;	// IMP=0x0010000000151d3b
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000151b9c
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0010000000152480

@end

