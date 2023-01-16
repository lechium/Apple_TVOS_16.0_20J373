//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface MLLazyUnionFeatureProvider : NSObject
{
    id <MLFeatureProvider> _first;	// 8 = 0x8
    id <MLFeatureProvider> _second;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a94af
@property(retain, nonatomic) id <MLFeatureProvider> second; // @synthesize second=_second;
@property(retain, nonatomic) id <MLFeatureProvider> first; // @synthesize first=_first;
- (id)unionFeatureProvider;	// IMP=0x00000000000a919e
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000a9111
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2;	// IMP=0x00000000000a8fb1

@end
