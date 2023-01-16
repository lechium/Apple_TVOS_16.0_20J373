//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLSAttribute, BLSHLocalCountingAssertionAttributeHandler, NSString;
@protocol BLSAssertionServiceResponding, BLSHAssertionAttributeHandlerService;

__attribute__((visibility("hidden")))
@interface BLSHCountingAssertionAttributeEntry : NSObject
{
    BLSHLocalCountingAssertionAttributeHandler *_attributeHandler;	// 8 = 0x8
    BLSAttribute *_attribute;	// 16 = 0x10
    id <BLSAssertionServiceResponding> _assertion;	// 24 = 0x18
    id <BLSHAssertionAttributeHandlerService> _service;	// 32 = 0x20
}

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;	// IMP=0x001000000002cea4
- (void).cxx_destruct;	// IMP=0x000000000002d2bd
@property(readonly, nonatomic) __weak id <BLSHAssertionAttributeHandlerService> service; // @synthesize service=_service;
@property(readonly, nonatomic) __weak id <BLSAssertionServiceResponding> assertion; // @synthesize assertion=_assertion;
@property(readonly, nonatomic) __weak BLSAttribute *attribute; // @synthesize attribute=_attribute;
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x000000000002d145
- (_Bool)reactivateIfPossible;	// IMP=0x000000000002d114
- (id)initForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;	// IMP=0x000000000002d037

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

