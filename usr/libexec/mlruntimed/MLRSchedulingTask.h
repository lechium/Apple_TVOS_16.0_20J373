//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLRSchedulingTask : NSObject
{
    long long _source;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    double _maxTimeLimit;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000019652
@property(readonly, nonatomic) double maxTimeLimit; // @synthesize maxTimeLimit=_maxTimeLimit;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (id)description;	// IMP=0x001000000001956f
- (id)initWithBundleIdentifier:(id)arg1 taskSource:(long long)arg2;	// IMP=0x001000000001955a
- (id)initWithBundleIdentifier:(id)arg1 taskSource:(long long)arg2 maxTimeLimit:(double)arg3;	// IMP=0x00100000000194d5

@end
