//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RBSTerminationAssertion;
@protocol OS_dispatch_semaphore;

@interface IXSTerminationAssertion : NSObject
{
    NSObject<OS_dispatch_semaphore> *_waitForAssertionSemaphore;	// 8 = 0x8
    RBSTerminationAssertion *_termAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002b149
@property(retain, nonatomic) RBSTerminationAssertion *termAssertion; // @synthesize termAssertion=_termAssertion;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *waitForAssertionSemaphore; // @synthesize waitForAssertionSemaphore=_waitForAssertionSemaphore;
- (void)assertionTargetProcessDidExit:(id)arg1;	// IMP=0x001000000002affe
- (void)dealloc;	// IMP=0x001000000002afbe
- (void)invalidate;	// IMP=0x001000000002afaa
- (_Bool)acquireAssertion:(id *)arg1;	// IMP=0x001000000002ad81
- (id)initForBundleIDs:(id)arg1 description:(id)arg2 terminationResistance:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x001000000002aba6
- (id)_terminationAssertionForBundleIDs:(id)arg1 description:(id)arg2 terminationResistance:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x001000000002a9ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

