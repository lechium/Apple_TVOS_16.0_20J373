//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSHLocalCountingAssertionAttributeHandler.h"

@class BLSHWatchdogProvider;

__attribute__((visibility("hidden")))
@interface BLSHDisableBacklightWatchdogsAttributeHandler : BLSHLocalCountingAssertionAttributeHandler
{
    BLSHWatchdogProvider *_provider;	// 8 = 0x8
}

+ (Class)attributeBaseClass;	// IMP=0x006000000003421e
+ (id)attributeClasses;	// IMP=0x00600000000341b2
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;	// IMP=0x00600000000340b4
- (void).cxx_destruct;	// IMP=0x0000000000034270
- (void)deactivateWithFinalEntry:(id)arg1;	// IMP=0x000000000003424e
- (void)activateWithFirstEntry:(id)arg1;	// IMP=0x000000000003422f
- (id)initForService:(id)arg1 provider:(id)arg2;	// IMP=0x000000000003413a

@end
