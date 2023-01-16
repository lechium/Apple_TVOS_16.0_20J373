//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RBSTerminationAssertion;
@protocol OS_dispatch_semaphore;

@interface MIApplicationTerminationAssertion : NSObject
{
    RBSTerminationAssertion *_termAssertion;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_completionSem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000036d5e
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *completionSem; // @synthesize completionSem=_completionSem;
@property(retain, nonatomic) RBSTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
- (void)assertionTargetProcessDidExit:(id)arg1;	// IMP=0x0010000000036cf3
- (void)dealloc;	// IMP=0x0010000000036ca3
- (void)invalidate;	// IMP=0x0010000000036c49
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000369d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
