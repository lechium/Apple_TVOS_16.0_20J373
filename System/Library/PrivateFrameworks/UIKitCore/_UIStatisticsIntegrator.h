//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIStatisticsIntegrator : NSObject
{
    NSObject<OS_dispatch_queue> *_reportingQueue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000101dab6
+ (void)setSharedInstance:(id)arg1;	// IMP=0x006000000101daa2
+ (void)createSharedInstanceIfNecessary;	// IMP=0x006000000101da4d
- (void).cxx_destruct;	// IMP=0x000000000101db0f
- (void)batchRecord:(CDUnknownBlockType)arg1;	// IMP=0x000000000101dafe
- (void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x000000000101daf8
- (void)recordDistributionValue:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000101daf2
- (void)resetDistributionToValue:(double)arg1 forKey:(id)arg2;	// IMP=0x000000000101daec
- (void)resetDistributionForKey:(id)arg1;	// IMP=0x000000000101dae6
- (void)incrementValueBy:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000101dae0
- (void)setValue:(long long)arg1 forKey:(id)arg2;	// IMP=0x000000000101dada
- (void)resetValueForKey:(id)arg1;	// IMP=0x000000000101dad4
- (id)init;	// IMP=0x000000000101d9f5

@end

