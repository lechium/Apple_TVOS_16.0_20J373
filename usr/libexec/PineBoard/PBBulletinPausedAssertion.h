//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSSimpleAssertion, NSString;

@interface PBBulletinPausedAssertion : NSObject
{
    BSSimpleAssertion *_assertion;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000054445
@property(readonly, nonatomic) BSSimpleAssertion *assertion; // @synthesize assertion=_assertion;
- (void)invalidate;	// IMP=0x0010000000054424
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *reason;
- (void)dealloc;	// IMP=0x0010000000054322
- (id)initWithReason:(id)arg1;	// IMP=0x0010000000054188

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

