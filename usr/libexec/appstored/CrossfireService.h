//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CrossfireService : NSObject
{
}

- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x002000000016d34c
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000016d227
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000016d0e7
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000016cfc2
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000016ce9d
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000016cd78
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000016cbc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

