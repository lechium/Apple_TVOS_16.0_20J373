//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ADIntentsUserActivityManager : NSObject
{
    NSMutableDictionary *_userActivitiesStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001c8aa7
- (id)description;	// IMP=0x00100000001c8a0b
- (void)reset;	// IMP=0x00100000001c89f5
- (void)setUserActivity:(id)arg1 forID:(id)arg2;	// IMP=0x00100000001c896b
- (id)userActivityForID:(id)arg1;	// IMP=0x00100000001c891b
- (id)init;	// IMP=0x00100000001c88b0

@end

