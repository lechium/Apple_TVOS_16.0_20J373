//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AccountEventCoordinator : NSObject
{
    NSMutableDictionary *_accountsForWeekCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    MISSING_TYPE *_lastCacheReset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000243c0
- (id)description;	// IMP=0x0010000000024331
- (void)_handleAppleIDDidChangeNotification:(id)arg1;	// IMP=0x00100000000239ec
- (id)init;	// IMP=0x0010000000022365

@end

