//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface _TtC9JetEngine8ProxyBag : NSObject
{
    MISSING_TYPE *bag;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000062c80
- (id)init;	// IMP=0x0000000000062c20
- (id)dictionaryForKey:(id)arg1;	// IMP=0x0000000000062bd0
- (id)URLForKey:(id)arg1;	// IMP=0x0000000000062bb0
- (id)stringForKey:(id)arg1;	// IMP=0x0000000000062b90
- (id)integerForKey:(id)arg1;	// IMP=0x0000000000062b70
- (id)doubleForKey:(id)arg1;	// IMP=0x0000000000062b50
- (void)createSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062a50
- (id)boolForKey:(id)arg1;	// IMP=0x0000000000062a30
- (id)arrayForKey:(id)arg1;	// IMP=0x0000000000062a10
@property(nonatomic, readonly) NSString *profileVersion;
@property(nonatomic, readonly) NSString *profile;
@property(nonatomic, readonly) NSDate *expirationDate;
- (_Bool)isExpired;	// IMP=0x00000000000627a0

// Remaining properties
@property(nonatomic, readonly) _Bool expired;

@end

