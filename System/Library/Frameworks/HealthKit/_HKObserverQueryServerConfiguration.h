//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration
{
    _Bool _observeUnfrozenSeries;	// 8 = 0x8
    NSArray *_queryDescriptors;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000a224d
- (void).cxx_destruct;	// IMP=0x00000000000a24bf
@property(copy, nonatomic) NSArray *queryDescriptors; // @synthesize queryDescriptors=_queryDescriptors;
@property(nonatomic) _Bool observeUnfrozenSeries; // @synthesize observeUnfrozenSeries=_observeUnfrozenSeries;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a2406
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a2365
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a2255

@end

