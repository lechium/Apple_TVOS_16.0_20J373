//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAccountManager;

@interface AKAuthorizationListUpdateService : NSObject
{
    AKAccountManager *_accountManager;	// 8 = 0x8
}

+ (id)sharedService;	// IMP=0x00400000000905d5
- (void).cxx_destruct;	// IMP=0x0020000000090c1b
- (void)performAuthorizationCheckInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000090995
- (void)start;	// IMP=0x0010000000090690
- (id)init;	// IMP=0x001000000009062a

@end

