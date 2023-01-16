//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSMicUsageReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000001ecd
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_reportsDynamicActivityAttribute:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0010000000001eac
- (void)reportsDynamicActivityAttributeSync:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0010000000001df2
- (void)reportsDynamicActivityAttributeAsync:(unsigned long long)arg1 bundleId:(id)arg2;	// IMP=0x0010000000001d3a
- (void)reportMicUsage:(_Bool)arg1;	// IMP=0x0010000000001d34
- (id)init;	// IMP=0x0010000000001cb0

@end

